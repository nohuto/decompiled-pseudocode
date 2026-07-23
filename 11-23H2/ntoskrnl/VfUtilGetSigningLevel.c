/*
 * XREFs of VfUtilGetSigningLevel @ 0x140AC2700
 * Callers:
 *     VfUtilIsSignedDriver @ 0x1405CE8A8 (VfUtilIsSignedDriver.c)
 *     CarReportRuleViolationForTriage @ 0x1405D4930 (CarReportRuleViolationForTriage.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140ACB548 (VfTargetDriversGetVerifierData.c)
 */

char __fastcall VfUtilGetSigningLevel(__int64 a1)
{
  __int64 VerifierData; // rax

  VerifierData = VfTargetDriversGetVerifierData(a1);
  if ( VerifierData )
    LOBYTE(VerifierData) = *(_BYTE *)(VerifierData + 48);
  return VerifierData;
}
