/*
 * XREFs of PnpPowerStateTransitionWatchdogCallback @ 0x1405606B0
 * Callers:
 *     <none>
 * Callees:
 *     PnpBugcheckPowerTimeout @ 0x140561088 (PnpBugcheckPowerTimeout.c)
 */

void __fastcall __noreturn PnpPowerStateTransitionWatchdogCallback(ULONG_PTR a1)
{
  PnpBugcheckPowerTimeout(a1);
}
