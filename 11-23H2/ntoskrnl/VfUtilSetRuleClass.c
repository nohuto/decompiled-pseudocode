/*
 * XREFs of VfUtilSetRuleClass @ 0x1405CE8CC
 * Callers:
 *     ViSetDifPluginMode @ 0x140ABD598 (ViSetDifPluginMode.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADDC0C (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     <none>
 */

void VfUtilSetRuleClass()
{
  HIDWORD(VfRuleClasses) |= 8u;
}
