/*
 * XREFs of IopAllocateFileObjectExtension @ 0x1402A3A60
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x1402A2EF0 (IoSetOplockPrivateFoExt.c)
 *     IopSetFileObjectExtensionFlag @ 0x1402A34C8 (IopSetFileObjectExtensionFlag.c)
 *     IoGetFileObjectFilterContext @ 0x1402A3610 (IoGetFileObjectFilterContext.c)
 *     IopGetSetSpecificExtension @ 0x1402A38B4 (IopGetSetSpecificExtension.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     IoSetOplockKeyContext @ 0x14039E588 (IoSetOplockKeyContext.c)
 *     IoSetIoPriorityHintIntoFileObject @ 0x140557D20 (IoSetIoPriorityHintIntoFileObject.c)
 *     IopSymlinkSetFoExtension @ 0x1406DF940 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x140935790 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140936BF8 (IopSetFileMemoryPartitionInformation.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateFileObjectExtension(__int64 a1, __int64 *a2)
{
  void *v2; // rax
  void *v3; // rbp
  unsigned __int8 CurrentIrql; // r15
  __int64 Pool2; // rsi
  _DWORD *v8; // r9
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v13; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
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
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 184));
    Pool2 = *(_QWORD *)(a1 + 208);
    if ( Pool2 )
      goto LABEL_12;
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 184));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    Pool2 = ExAllocatePool2(64LL, 88LL, 1162243913LL);
    if ( Pool2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v8 = KeGetCurrentPrcb()->SchedulerAssist;
        v8[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 184));
      if ( *(_QWORD *)(a1 + 208) )
      {
        v3 = (void *)Pool2;
        Pool2 = *(_QWORD *)(a1 + 208);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 208), Pool2);
      }
LABEL_12:
      if ( a2 )
        *a2 = Pool2;
      KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 184));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
          {
            v17 = KeGetCurrentPrcb();
            v18 = v17->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v15 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      return 0LL;
    }
  }
  return 3221225626LL;
}
