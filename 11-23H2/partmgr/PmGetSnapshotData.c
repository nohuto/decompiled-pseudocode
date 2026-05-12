/*
 * XREFs of PmGetSnapshotData @ 0x1C0003EE0
 * Callers:
 *     PmUpdateAttributes @ 0x1C001CAC8 (PmUpdateAttributes.c)
 *     PmGetSnapshotInfo @ 0x1C00233F4 (PmGetSnapshotInfo.c)
 *     PmUpdateIds @ 0x1C002745C (PmUpdateIds.c)
 *     PmSetSnapshotInfo @ 0x1C0027BA4 (PmSetSnapshotInfo.c)
 * Callees:
 *     memmove @ 0x1C000B740 (memmove.c)
 *     ?PmReadSnapshotData@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAPEAU_DISK_SNAPSHOT_DATA@@PEAK@Z @ 0x1C001FF7C (-PmReadSnapshotData@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAPEAU_DISK_SN.c)
 *     PmSetDeviceParameterBinary @ 0x1C00220DC (PmSetDeviceParameterBinary.c)
 *     ?PmInitializeSnapshotData@@YAXPEAU_DISK_SNAPSHOT_DATA@@K@Z @ 0x1C0022E30 (-PmInitializeSnapshotData@@YAXPEAU_DISK_SNAPSHOT_DATA@@K@Z.c)
 *     ?PmVerifySnapshotData@@YAEPEAU_DISK_SNAPSHOT_DATA@@KE@Z @ 0x1C0027830 (-PmVerifySnapshotData@@YAEPEAU_DISK_SNAPSHOT_DATA@@KE@Z.c)
 *     PmLookupId @ 0x1C0027B0C (PmLookupId.c)
 */

__int64 __fastcall PmGetSnapshotData(
        KSPIN_LOCK *a1,
        struct _DRIVE_LAYOUT_INFORMATION_EX *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  KSPIN_LOCK *v4; // r12
  unsigned int v6; // ebx
  _QWORD *v8; // r15
  KIRQL v10; // al
  unsigned int *v11; // rdi
  unsigned int v12; // esi
  void *Pool2; // rax
  void *v14; // rbp
  KIRQL v15; // al
  int v17; // eax
  unsigned int v18; // esi
  size_t v19; // rbp
  KSPIN_LOCK v20; // rcx
  unsigned int *v21; // rax
  unsigned int *v22; // r15
  PVOID P; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v25; // [rsp+80h] [rbp+18h]

  v25 = a3;
  v24 = 0;
  v4 = a1 + 14;
  v6 = 0;
  *a3 = 0LL;
  *a4 = 0;
  v8 = a3;
  v10 = KeAcquireSpinLockRaiseToDpc(a1 + 14);
  v11 = (unsigned int *)a1[142];
  a1[142] = 0LL;
  P = v11;
  KeReleaseSpinLock(v4, v10);
  if ( v11 )
  {
LABEL_2:
    v12 = v11[3];
    Pool2 = (void *)ExAllocatePool2(66LL, v12, 1146318160LL);
    v14 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v11, v12);
      *v8 = v14;
      *a4 = v12;
      v15 = KeAcquireSpinLockRaiseToDpc(v4);
      a1[142] = (KSPIN_LOCK)v11;
      KeReleaseSpinLock(v4, v15);
      return v6;
    }
    goto LABEL_21;
  }
  v17 = PmReadSnapshotData((struct _DEVICE_EXTENSION *)a1, a2, (struct _DISK_SNAPSHOT_DATA **)&P, &v24);
  v6 = v17;
  if ( v17 == -1073741275 )
  {
    v18 = 112;
    v11 = (unsigned int *)ExAllocatePool2(66LL, 112LL, 1146318160LL);
    if ( !v11 )
      goto LABEL_21;
    v6 = 0;
  }
  else
  {
    v11 = (unsigned int *)P;
    if ( v17 < 0 )
      goto LABEL_22;
    v18 = v24;
    if ( PmVerifySnapshotData((PUCHAR)P, v24, 1u) )
      goto LABEL_9;
  }
  PmInitializeSnapshotData((PUCHAR)v11, v18);
LABEL_9:
  if ( v11[5] == 1 )
  {
    v20 = a1[31];
    if ( !v20 )
    {
      v6 = -1073741275;
      goto LABEL_22;
    }
    if ( (unsigned __int8)PmLookupId(v20, (char *)v11 + v11[24], *((unsigned __int16 *)v11 + 50)) )
      v11[5] = 0;
  }
  v19 = v11[3];
  if ( v18 <= (unsigned int)v19 )
    goto LABEL_11;
  v18 = v11[3];
  v21 = (unsigned int *)ExAllocatePool2(66LL, v18, 1146318160LL);
  v22 = v21;
  if ( v21 )
  {
    memmove(v21, v11, v19);
    ExFreePoolWithTag(v11, 0);
    v11 = v22;
    v8 = v25;
LABEL_11:
    PmSetDeviceParameterBinary(a1, L"SnapshotDataCache", v11, v18);
    goto LABEL_2;
  }
LABEL_21:
  v6 = -1073741670;
LABEL_22:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return v6;
}
