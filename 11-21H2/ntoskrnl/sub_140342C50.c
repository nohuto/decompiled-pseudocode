/*
 * XREFs of sub_140342C50 @ 0x140342C50
 * Callers:
 *     sub_1402792AC @ 0x1402792AC (sub_1402792AC.c)
 *     sub_14027AEA0 @ 0x14027AEA0 (sub_14027AEA0.c)
 *     IoPageRead @ 0x140388EE0 (IoPageRead.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_140594898 @ 0x140594898 (sub_140594898.c)
 * Callees:
 *     sub_14020C178 @ 0x14020C178 (sub_14020C178.c)
 *     sub_14020C21C @ 0x14020C21C (sub_14020C21C.c)
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140343770 @ 0x140343770 (sub_140343770.c)
 *     sub_1403437A0 @ 0x1403437A0 (sub_1403437A0.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140374EA8 @ 0x140374EA8 (sub_140374EA8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140556050 @ 0x140556050 (sub_140556050.c)
 *     sub_1405562E8 @ 0x1405562E8 (sub_1405562E8.c)
 */

NTSTATUS __fastcall sub_140342C50(
        PFILE_OBJECT FileObject,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  __int64 v9; // r14
  unsigned __int8 v10; // r13
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  int v12; // ebp
  __int64 v13; // rsi
  __int64 v14; // rbx
  int v15; // r12d
  KIRQL v16; // al
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  int v20; // r8d
  __int64 v21; // r9
  _QWORD *v22; // rdi
  __int64 v23; // rbp
  __int64 *v24; // rsi
  unsigned __int8 v25; // r14
  __int64 v26; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v29; // r9
  struct _KTHREAD *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v35; // r9
  int v36; // eax
  bool v37; // zf
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  __int64 v40; // r8
  int v41; // eax
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+28h] [rbp-40h]

  v9 = (unsigned __int64)(a6 & 1) << 32;
  v10 = ((a6 & 1) != 0 ? 4 : 0) | 1;
  if ( (a6 & 2) != 0 )
    v10 = (a6 & 1) != 0 ? 4 : 0;
  if ( (a6 & 8) != 0 )
    v10 |= 2u;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  v12 = 1027;
  v13 = (__int64)RelatedDeviceObject;
  if ( (a6 & 4) == 0 )
    v12 = 67;
  if ( v10 >= 4u )
    v13 = -1LL;
  v14 = sub_1402AACA0(v13, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
  if ( !v14 )
  {
    if ( (unsigned int)sub_140374EA8(FileObject) )
    {
      _InterlockedIncrement(&dword_140C474E8);
      v14 = sub_1405562E8(v31, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
      if ( v14 )
        goto LABEL_10;
    }
    else
    {
      _InterlockedIncrement(&dword_140C474EC);
      if ( (*(_WORD *)(a2 + 10) & 0x40) != 0 && (v12 & 0x40) != 0 )
      {
        LOBYTE(v32) = 1;
        v14 = sub_140556050(v13, (unsigned __int8)RelatedDeviceObject->StackSize, v32);
        if ( v14 )
          goto LABEL_10;
      }
    }
    return -1073741670;
  }
LABEL_10:
  v15 = 0;
  v16 = ExAcquireSpinLockShared(&dword_140C531C8);
  v17 = (_QWORD *)qword_140C531C0;
  v18 = v16;
  if ( !qword_140C531C0 )
    goto LABEL_18;
  while ( (unsigned __int64)FileObject < *(v17 - 25) )
  {
    v17 = (_QWORD *)*v17;
LABEL_13:
    if ( !v17 )
      goto LABEL_18;
  }
  if ( (unsigned __int64)FileObject > *(v17 - 25) )
  {
    v17 = (_QWORD *)v17[1];
    goto LABEL_13;
  }
  if ( v17 )
    v15 = 1;
LABEL_18:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C531C8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v35 = *((_QWORD *)CurrentPrcb + 4375);
        v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        v37 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
        *(_DWORD *)(v35 + 20) &= v36;
        if ( v37 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v18);
  if ( v15 || (*(_WORD *)(a2 + 10) & 0x40) != 0 && (v12 & 0x40) != 0 )
    *(_BYTE *)(v14 + 71) |= 0x20u;
  *(_DWORD *)(v14 + 16) = v12;
  v20 = sub_140343770(KeGetCurrentThread());
  if ( v20 < 2 )
  {
    if ( (struct _KTHREAD *)v21 == KeGetCurrentThread() && *(_DWORD *)(v21 + 1440) )
    {
      v20 = 2;
    }
    else if ( (v10 & 1) == 0 || (a6 & 1) == 1 || (*((_BYTE *)KeGetCurrentThread() + 1384) & 0x40) != 0 )
    {
      ++dword_140C46D08;
    }
    else
    {
      ++dword_140C46D04;
      v20 = 2;
    }
  }
  if ( (v10 & 2) != 0 && v20 == 2 )
    v20 = 3;
  *(_QWORD *)(v14 + 8) = a2;
  *(_DWORD *)(v14 + 16) = v12 | ((v20 + 1) << 17);
  *(_QWORD *)(v14 + 80) = a4;
  *(_BYTE *)(v14 + 64) = 0;
  *(_QWORD *)(v14 + 72) = a5;
  *(_QWORD *)(v14 + 112) = *(_QWORD *)(a2 + 32) + *(unsigned int *)(a2 + 44);
  *(_QWORD *)(v14 + 192) = FileObject;
  *(_QWORD *)(v14 + 152) = KeGetCurrentThread();
  *(_BYTE *)(v19 - 72) = 3;
  *(_QWORD *)(v19 - 24) = FileObject;
  *(_DWORD *)(v19 - 64) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(v19 - 48) = *a3;
  if ( a7 )
    sub_14020C178(v14, *(_QWORD *)(a7 + 24), *(_QWORD *)(v14 + 152), 0);
  else
    sub_1403437A0(v14, *(_QWORD *)(v14 + 152));
  if ( v9 )
    sub_14020C21C(v14, v9);
  *(_QWORD *)(a5 + 8) = v14;
  v22 = (_QWORD *)(v14 + 32);
  v23 = *(_QWORD *)(v14 + 152);
  v24 = (__int64 *)(v23 + 1280);
  v25 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v25 <= 0xFu )
  {
    v29 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v29 + 20) |= (-1 << (v25 + 1)) & 4;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v23 + 1496));
  v26 = *v24;
  if ( *(__int64 **)(*v24 + 8) != v24 )
    __fastfail(3u);
  *v22 = v26;
  *(_QWORD *)(v14 + 40) = v24;
  *(_QWORD *)(v26 + 8) = v22;
  *v24 = (__int64)v22;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v23 + 1496));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v38 = KeGetCurrentIrql();
      if ( v38 <= 0xFu && v25 <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = *((_QWORD *)v39 + 4375);
        v41 = ~(unsigned __int16)(-1LL << (v25 + 1));
        v37 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
        *(_DWORD *)(v40 + 20) &= v41;
        if ( v37 )
          sub_140418E4C(v39);
      }
    }
  }
  __writecr8(v25);
  CurrentThread = KeGetCurrentThread();
  if ( *((_BYTE *)CurrentThread + 1389) || *((_BYTE *)CurrentThread + 1388) == 1 )
  {
    v30 = KeGetCurrentThread();
    *((_DWORD *)v30 + 359) += (unsigned int)(*(_DWORD *)(a2 + 40) + 4095) >> 12;
  }
  return IofCallDriver(DeviceObject, (PIRP)v14);
}
