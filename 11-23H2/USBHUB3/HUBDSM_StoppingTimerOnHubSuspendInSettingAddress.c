/*
 * XREFs of HUBDSM_StoppingTimerOnHubSuspendInSettingAddress @ 0x1C00208D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_StopTimer @ 0x1C002E964 (HUBMISC_StopTimer.c)
 */

__int64 __fastcall HUBDSM_StoppingTimerOnHubSuspendInSettingAddress(__int64 a1)
{
  return HUBMISC_StopTimer(*(_QWORD *)(a1 + 960));
}
