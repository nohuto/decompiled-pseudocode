/*
 * XREFs of VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140AD5910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x140ACBC0C (ViTargetIncrementCounter.c)
 */

__int64 __fastcall VerifierKeTryToAcquireSpinLockAtDpcLevel(__int64 a1)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_140C13928;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 164LL);
  return ((__int64 (__fastcall *)(__int64))pXdvKeTryToAcquireSpinLockAtDpcLevel)(a1);
}
