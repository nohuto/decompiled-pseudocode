/*
 * XREFs of PopPowerRequestStatsCleanup @ 0x1407A7AB8
 * Callers:
 *     PopPowerRequestStatsCreate @ 0x1407A79CC (PopPowerRequestStatsCreate.c)
 *     PopPowerRequestStatsOnSleepstudySessionChange @ 0x140875CE0 (PopPowerRequestStatsOnSleepstudySessionChange.c)
 * Callees:
 *     SleepstudyHelperDestroyBlocker @ 0x1403B52F0 (SleepstudyHelperDestroyBlocker.c)
 *     PopPowerRequestStatsFreeId @ 0x1407A86F4 (PopPowerRequestStatsFreeId.c)
 */

__int64 __fastcall PopPowerRequestStatsCleanup(__int64 a1)
{
  void *v2; // rcx
  KSPIN_LOCK *v3; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    result = PopPowerRequestStatsFreeId(v2);
  v3 = *(KSPIN_LOCK **)(a1 + 16);
  if ( v3 )
    return SleepstudyHelperDestroyBlocker(v3);
  return result;
}
