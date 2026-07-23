/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x1402AFD80
 * Callers:
 *     IopCheckVpbMounted @ 0x1402AF410 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1403D6B4C (IopDecrementDeviceObjectHandleCount.c)
 *     IopMountVolume @ 0x140701598 (IopMountVolume.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140730450 (IopDeleteFile.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1407681F0 (IoCreateStreamFileObjectEx2.c)
 *     IopLoadFileSystemDriver @ 0x140875D00 (IopLoadFileSystemDriver.c)
 *     IopShutdownBaseFileSystems @ 0x140A99FA4 (IopShutdownBaseFileSystems.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x1403AC964 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 v4; // r14
  unsigned __int8 CurrentIrql; // bp
  char *v6; // rcx
  signed __int64 *v7; // rdx
  int v8; // eax
  volatile signed __int64 **v9; // rdi
  __int64 v10; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int8 v16; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  signed __int32 v21[8]; // [rsp+0h] [rbp-48h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v13) = 4;
    else
      v13 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v13;
  }
  v6 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v6, *((_QWORD *)v6 + 1));
  }
  else
  {
    v7 = (signed __int64 *)_InterlockedExchange64(*((volatile __int64 **)v6 + 1), (__int64)v6);
    if ( v7 )
      KxWaitForLockOwnerShip((signed __int64)v6, v7);
  }
  v8 = *(_DWORD *)(BugCheckParameter2 + 4) - 1;
  *(_DWORD *)(BugCheckParameter2 + 4) = v8;
  if ( v8 < 0 )
  {
    v15 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v15 )
    {
      IoAddTriageDumpDataBlock(v15, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  if ( !v8 && (a2 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
    return (unsigned __int8)IopCompleteUnloadOrDelete(BugCheckParameter2);
  v9 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(v9);
    v10 = (__int64)*v9;
    if ( !*v9 )
    {
      if ( v9 == (volatile signed __int64 **)_InterlockedCompareExchange64(v9[1], 0LL, (signed __int64)v9) )
        goto LABEL_10;
      v10 = KxWaitForLockChainValid(v9);
    }
    *v9 = 0LL;
    v14 = (__int64)v9[1];
    if ( (((unsigned __int8)v14 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v10 + 8), v14)) & 4) != 0 )
    {
      _InterlockedOr(v21, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v10 + 8) >> 5) & 0x7F], 0LL));
    }
    goto LABEL_10;
  }
  KiReleaseQueuedSpinLockInstrumented(v9, retaddr);
LABEL_10:
  if ( (_DWORD)KiIrqlFlags )
  {
    v16 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v18 = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v20 = (v19 & v18[5]) == 0;
      v18[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v4;
}
