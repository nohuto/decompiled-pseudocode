/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x1402A0A70
 * Callers:
 *     CcUnmapVacbArray @ 0x14029EDC0 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x14029F110 (CcGetVacbMiss.c)
 *     KeAcquireQueuedSpinLock @ 0x1402A0760 (KeAcquireQueuedSpinLock.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402A07F0 (ExIsResourceAcquiredSharedLite.c)
 *     IoBoostThreadIoPriority @ 0x14031B320 (IoBoostThreadIoPriority.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140571210 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x1405712A0 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140260F20 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14046018E (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxAcquireQueuedSpinLock(__int64 a1, volatile __int64 *a2)
{
  signed __int64 *v2; // rdx
  __int64 result; // rax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiAcquireQueuedSpinLockInstrumented(a1, a2);
  v2 = (signed __int64 *)_InterlockedExchange64(a2, a1);
  if ( v2 )
    return KxWaitForLockOwnerShip(a1, v2);
  return result;
}
