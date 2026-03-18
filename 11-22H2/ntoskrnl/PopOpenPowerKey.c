/*
 * XREFs of PopOpenPowerKey @ 0x140387CEC
 * Callers:
 *     PopEnableHiberFile @ 0x140803C60 (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x140825058 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14082513C (PopApplyPolicy.c)
 *     PoGetLightestSystemStateForEject @ 0x140980520 (PoGetLightestSystemStateForEject.c)
 *     PopReadHiberbootPolicy @ 0x1409810AC (PopReadHiberbootPolicy.c)
 *     PopReadSystemAwayModePolicy @ 0x140981188 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x14098F8D8 (PopDiagTraceHiberStats.c)
 * Callees:
 *     PopOpenKey @ 0x140387D08 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power");
}
