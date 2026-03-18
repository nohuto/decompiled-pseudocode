/*
 * XREFs of VfUtilGetSigningLevel @ 0x140A81D70
 * Callers:
 *     VfUtilIsSignedDriver @ 0x1405FE008 (VfUtilIsSignedDriver.c)
 *     CarReportRuleViolationForTriage @ 0x140604030 (CarReportRuleViolationForTriage.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140A8ABF8 (VfTargetDriversGetVerifierData.c)
 */

char __fastcall VfUtilGetSigningLevel(__int64 a1)
{
  __int64 VerifierData; // rax

  VerifierData = VfTargetDriversGetVerifierData(a1);
  if ( VerifierData )
    LOBYTE(VerifierData) = *(_BYTE *)(VerifierData + 48);
  return VerifierData;
}
