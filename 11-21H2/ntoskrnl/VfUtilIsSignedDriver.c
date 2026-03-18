/*
 * XREFs of VfUtilIsSignedDriver @ 0x1405FE008
 * Callers:
 *     ViMiscEnforceRule @ 0x140AA5808 (ViMiscEnforceRule.c)
 * Callees:
 *     VfUtilGetSigningLevel @ 0x140A81D70 (VfUtilGetSigningLevel.c)
 */

bool VfUtilIsSignedDriver()
{
  return (((unsigned __int8)VfUtilGetSigningLevel() - 8) & 0xFB) == 0;
}
