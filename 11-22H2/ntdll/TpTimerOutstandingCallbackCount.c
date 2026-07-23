/*
 * XREFs of TpTimerOutstandingCallbackCount @ 0x18004D4C0
 * Callers:
 *     RtlDeleteTimer @ 0x18004D370 (RtlDeleteTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x180051E20 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     TppTimerpValidateTimer @ 0x180034B18 (TppTimerpValidateTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall TpTimerOutstandingCallbackCount(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rdi
  unsigned int v3; // ebx

  if ( !(unsigned int)TppTimerpValidateTimer((_PEB_LDR_DATA *)a1, 0LL, 0LL) )
    return 0LL;
  v2 = (_RTL_SRWLOCK *)(a1 + 240);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  v3 = *(_DWORD *)(a1 + 56);
  RtlReleaseSRWLockExclusive(v2);
  return v3;
}
