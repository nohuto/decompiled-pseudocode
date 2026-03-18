/*
 * XREFs of PopPowerRequestStatsCleanup @ 0x1407F015C
 * Callers:
 *     PopPowerRequestStatsCreate @ 0x1407F0070 (PopPowerRequestStatsCreate.c)
 *     PopPowerRequestStatsOnSleepstudySessionChange @ 0x140811940 (PopPowerRequestStatsOnSleepstudySessionChange.c)
 * Callees:
 *     SleepstudyHelperDestroyBlocker @ 0x14025B380 (SleepstudyHelperDestroyBlocker.c)
 *     PopPowerRequestStatsFreeId @ 0x1407F10C4 (PopPowerRequestStatsFreeId.c)
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
