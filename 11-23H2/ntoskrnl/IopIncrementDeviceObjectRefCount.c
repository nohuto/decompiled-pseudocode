/*
 * XREFs of IopIncrementDeviceObjectRefCount @ 0x1402B03B0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140305590 (IopCompleteUnloadOrDelete.c)
 *     PnpMarkDeviceForRemove @ 0x1403D4F88 (PnpMarkDeviceForRemove.c)
 *     IopMountVolume @ 0x1407016F8 (IopMountVolume.c)
 *     IopDeleteFile @ 0x140730680 (IopDeleteFile.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140767ED0 (IoCreateStreamFileObjectEx2.c)
 *     IoRegisterFileSystem @ 0x140871AF0 (IoRegisterFileSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140A99D54 (IopShutdownBaseFileSystems.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402611B0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14031A960 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x14038849C (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14046058E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140571A88 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14058045C (KiHaltOnAddressWakeEntireList.c)
 */

__int64 __fastcall IopIncrementDeviceObjectRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 CurrentIrql; // r14
  char *v4; // rcx
  signed __int64 *v5; // rdx
  int v6; // esi
  volatile signed __int64 **v7; // rdi
  __int64 v8; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned __int8 v13; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rcx
  signed __int32 v19[8]; // [rsp+0h] [rbp-48h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a2 )
  {
    v6 = ++*(_DWORD *)(BugCheckParameter2 + 4);
    goto LABEL_11;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v11) = 4;
    else
      v11 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v11;
  }
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v4, *((_QWORD *)v4 + 1));
  }
  else
  {
    v5 = (signed __int64 *)_InterlockedExchange64(*((volatile __int64 **)v4 + 1), (__int64)v4);
    if ( v5 )
      KxWaitForLockOwnerShip((signed __int64)v4, v5);
  }
  v6 = ++*(_DWORD *)(BugCheckParameter2 + 4);
  v7 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(v7);
    v8 = (__int64)*v7;
    if ( !*v7 )
    {
      if ( v7 == (volatile signed __int64 **)_InterlockedCompareExchange64(v7[1], 0LL, (signed __int64)v7) )
        goto LABEL_9;
      v8 = KxWaitForLockChainValid(v7);
    }
    *v7 = 0LL;
    v12 = (__int64)v7[1];
    if ( (((unsigned __int8)v12 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v8 + 8), v12)) & 4) != 0 )
    {
      _InterlockedOr(v19, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v8 + 8) >> 5) & 0x7F], 0LL));
    }
    goto LABEL_9;
  }
  KiReleaseQueuedSpinLockInstrumented(v7, retaddr);
LABEL_9:
  if ( (_DWORD)KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v17 = (v16 & v15[5]) == 0;
      v15[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
LABEL_11:
  if ( v6 <= 0 )
  {
    v18 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v18 )
    {
      IoAddTriageDumpDataBlock(v18, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  return (unsigned int)v6;
}
