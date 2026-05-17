/*
 * XREFs of TpTimerOutstandingCallbackCount @ 0x180070B20
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x18006F8B0 (RtlDeleteTimerQueueEx.c)
 *     RtlDeleteTimer @ 0x18006FC50 (RtlDeleteTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppTimerpValidateTimer @ 0x18001B710 (TppTimerpValidateTimer.c)
 */

__int64 __fastcall TpTimerOutstandingCallbackCount(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  volatile signed __int64 *v5; // rdi
  unsigned int v6; // ebx

  if ( !(unsigned int)TppTimerpValidateTimer((_PEB_LDR_DATA *)a1, 0LL, 0LL) )
    return 0LL;
  v5 = (volatile signed __int64 *)(a1 + 240);
  RtlAcquireSRWLockExclusive(a1 + 240, v2, v3, v4);
  v6 = *(_DWORD *)(a1 + 56);
  RtlReleaseSRWLockExclusive(v5);
  return v6;
}
