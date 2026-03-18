/*
 * XREFs of IopSetLockOperationProcess @ 0x1402A36D0
 * Callers:
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     IopCloseFile @ 0x14072E9E0 (IopCloseFile.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     IopGetSetSpecificExtension @ 0x1402A38B4 (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x1402A3A14 (IopGetFileObjectExtension.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopSetLockOperationProcess(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // rbx
  char v4; // r15
  __int64 result; // rax
  unsigned int v9; // edi
  __int64 Pool2; // rax
  __int64 v11; // rbp
  KIRQL v12; // al
  __int64 v13; // rdx
  unsigned __int64 v14; // r13
  _QWORD *v15; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  char v21; // [rsp+78h] [rbp+10h]
  __int64 FileObjectExtension; // [rsp+88h] [rbp+20h] BYREF

  FileObjectExtension = 0LL;
  v3 = 0LL;
  v4 = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( a3 )
  {
    v9 = 0;
    FileObjectExtension = IopGetFileObjectExtension(a1, 1LL);
    v11 = FileObjectExtension;
    if ( !FileObjectExtension )
      return 3221225473LL;
  }
  else
  {
    result = IopGetSetSpecificExtension(a1, 1, 32, 1, (__int64)&FileObjectExtension, 0LL);
    v9 = result;
    if ( (int)result < 0 )
      return result;
    Pool2 = ExAllocatePool2(64LL, 16LL, 538996553LL);
    v11 = FileObjectExtension;
    v3 = (_QWORD *)Pool2;
  }
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v13 = *(_QWORD *)(v11 + 16);
  v14 = v12;
  v21 = *(_BYTE *)(a1 + 72);
  if ( v13 )
  {
    v15 = *(_QWORD **)(v11 + 16);
    while ( v15[1] != a2 )
    {
      v15 = (_QWORD *)*v15;
      if ( !v15 )
        goto LABEL_18;
    }
    v4 = 1;
  }
  else
  {
LABEL_18:
    if ( !a3 )
    {
      if ( v3 )
      {
        *v3 = v13;
        *(_QWORD *)(v11 + 16) = v3;
        v3[1] = a2;
      }
      else
      {
        v9 = -1073741670;
      }
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 184));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v20 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v14);
  if ( v4 && v3 )
    ExFreePoolWithTag(v3, 0);
  if ( a3 )
  {
    if ( v21 && v4 )
      return 0LL;
    return 3221225473LL;
  }
  return v9;
}
