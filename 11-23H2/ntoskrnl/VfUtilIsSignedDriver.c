/*
 * XREFs of VfUtilIsSignedDriver @ 0x1405CE8A8
 * Callers:
 *     ViMiscEnforceRule @ 0x140AE1548 (ViMiscEnforceRule.c)
 * Callees:
 *     VfUtilGetSigningLevel @ 0x140AC2700 (VfUtilGetSigningLevel.c)
 */

bool VfUtilIsSignedDriver()
{
  char SigningLevel; // al

  SigningLevel = VfUtilGetSigningLevel();
  return SigningLevel == 12 || SigningLevel == 8;
}
