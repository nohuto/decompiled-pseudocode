/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140AD51B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x140ACBC0C (ViTargetIncrementCounter.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel(__int64 a1, __int64 a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_140C13928;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 164LL);
  return ((__int64 (__fastcall *)(__int64, __int64))pXdvKeAcquireInStackQueuedSpinLockAtDpcLevel)(a1, a2);
}
