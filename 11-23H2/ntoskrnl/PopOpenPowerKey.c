/*
 * XREFs of PopOpenPowerKey @ 0x140389F90
 * Callers:
 *     PopEnableHiberFile @ 0x1408016DC (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x1408240F8 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x1408241DC (PopApplyPolicy.c)
 *     PoGetLightestSystemStateForEject @ 0x140980470 (PoGetLightestSystemStateForEject.c)
 *     PopReadHiberbootPolicy @ 0x140980FFC (PopReadHiberbootPolicy.c)
 *     PopReadSystemAwayModePolicy @ 0x1409810D8 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x14098F828 (PopDiagTraceHiberStats.c)
 * Callees:
 *     PopOpenKey @ 0x140389FAC (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power");
}
