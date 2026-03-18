/*
 * XREFs of VfUtilIsSignedDriver @ 0x1405CE338
 * Callers:
 *     ViMiscEnforceRule @ 0x140AE1558 (ViMiscEnforceRule.c)
 * Callees:
 *     VfUtilGetSigningLevel @ 0x140AC2710 (VfUtilGetSigningLevel.c)
 */

bool VfUtilIsSignedDriver()
{
  char SigningLevel; // al

  SigningLevel = VfUtilGetSigningLevel();
  return SigningLevel == 12 || SigningLevel == 8;
}
