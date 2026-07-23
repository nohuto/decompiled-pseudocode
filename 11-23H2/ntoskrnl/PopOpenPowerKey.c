/*
 * XREFs of PopOpenPowerKey @ 0x14038A170
 * Callers:
 *     PopEnableHiberFile @ 0x1408019AC (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x1408243F8 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x1408244DC (PopApplyPolicy.c)
 *     PoGetLightestSystemStateForEject @ 0x140980670 (PoGetLightestSystemStateForEject.c)
 *     PopReadHiberbootPolicy @ 0x1409811FC (PopReadHiberbootPolicy.c)
 *     PopReadSystemAwayModePolicy @ 0x1409812D8 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x14098FA28 (PopDiagTraceHiberStats.c)
 * Callees:
 *     PopOpenKey @ 0x14038A18C (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power");
}
