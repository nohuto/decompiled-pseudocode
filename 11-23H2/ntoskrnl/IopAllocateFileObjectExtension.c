/*
 * XREFs of IopAllocateFileObjectExtension @ 0x140250E10
 * Callers:
 *     NtSetInformationFile @ 0x1402A6E80 (NtSetInformationFile.c)
 *     IoGetFileObjectFilterContext @ 0x1402FD850 (IoGetFileObjectFilterContext.c)
 *     IopGetSetSpecificExtension @ 0x1403017F8 (IopGetSetSpecificExtension.c)
 *     IoSetOplockPrivateFoExt @ 0x140302758 (IoSetOplockPrivateFoExt.c)
 *     IopSetFileObjectExtensionFlag @ 0x140302D9C (IopSetFileObjectExtensionFlag.c)
 *     IoSetOplockKeyContext @ 0x1403CF318 (IoSetOplockKeyContext.c)
 *     IoSetIoPriorityHintIntoFileObject @ 0x1405577F0 (IoSetIoPriorityHintIntoFileObject.c)
 *     IoSetShadowFileInformation @ 0x140557830 (IoSetShadowFileInformation.c)
 *     IopSymlinkSetFoExtension @ 0x140881590 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x140946138 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140947CCC (IopSetFileMemoryPartitionInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateFileObjectExtension(__int64 a1, __int64 *a2)
{
  void *v2; // rax
  void *v3; // r14
  volatile signed __int64 *v6; // r15
  KIRQL v7; // al
  __int64 Pool2; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r10
  _DWORD *v13; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v19; // eax

  v2 = *(void **)(a1 + 208);
  v3 = 0LL;
  if ( v2 )
  {
    if ( v2 != IopRevocationExtension )
    {
      if ( a2 )
        *a2 = (__int64)v2;
      return 0LL;
    }
  }
  else
  {
    v6 = (volatile signed __int64 *)(a1 + 184);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
    Pool2 = *(_QWORD *)(a1 + 208);
    v9 = v7;
    if ( Pool2 )
    {
LABEL_7:
      if ( a2 )
        *a2 = Pool2;
      KxReleaseSpinLock(v6);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v9 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v15 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8((unsigned __int8)v9);
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      return 0LL;
    }
    KxReleaseSpinLock(v6);
    if ( (_DWORD)KiIrqlFlags )
    {
      v11 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v11 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = v12->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    __writecr8(v9);
    Pool2 = ExAllocatePool2(64LL, 96LL, 1162243913LL);
    if ( Pool2 )
    {
      LOBYTE(v9) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
      if ( *(_QWORD *)(a1 + 208) )
      {
        v3 = (void *)Pool2;
        Pool2 = *(_QWORD *)(a1 + 208);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 208), Pool2);
      }
      goto LABEL_7;
    }
  }
  return 3221225626LL;
}
