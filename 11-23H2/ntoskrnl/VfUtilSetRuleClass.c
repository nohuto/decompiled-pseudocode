/*
 * XREFs of VfUtilSetRuleClass @ 0x1405CE35C
 * Callers:
 *     ViSetDifPluginMode @ 0x140ABD5A8 (ViSetDifPluginMode.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADDC1C (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     <none>
 */

void VfUtilSetRuleClass()
{
  HIDWORD(VfRuleClasses) |= 8u;
}
