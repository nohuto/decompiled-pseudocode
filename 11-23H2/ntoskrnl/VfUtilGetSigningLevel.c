/*
 * XREFs of VfUtilGetSigningLevel @ 0x140AC2710
 * Callers:
 *     VfUtilIsSignedDriver @ 0x1405CE338 (VfUtilIsSignedDriver.c)
 *     CarReportRuleViolationForTriage @ 0x1405D43C0 (CarReportRuleViolationForTriage.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140ACB558 (VfTargetDriversGetVerifierData.c)
 */

char __fastcall VfUtilGetSigningLevel(__int64 a1)
{
  __int64 VerifierData; // rax

  VerifierData = VfTargetDriversGetVerifierData(a1);
  if ( VerifierData )
    LOBYTE(VerifierData) = *(_BYTE *)(VerifierData + 48);
  return VerifierData;
}
