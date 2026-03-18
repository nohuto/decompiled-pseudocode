/*
 * XREFs of PopOpenPowerKey @ 0x1403B1A2C
 * Callers:
 *     PopReadSystemAwayModePolicy @ 0x1407FD7F8 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x1407FDC18 (PopDiagTraceHiberStats.c)
 *     PopReadHiberbootPolicy @ 0x140805E9C (PopReadHiberbootPolicy.c)
 *     PopEnableHiberFile @ 0x140818E88 (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x1408193F4 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x1408194D8 (PopApplyPolicy.c)
 *     PoGetLightestSystemStateForEject @ 0x14098943C (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     PopOpenKey @ 0x1403B1A48 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power");
}
