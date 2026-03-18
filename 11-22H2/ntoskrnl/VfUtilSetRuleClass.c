/*
 * XREFs of VfUtilSetRuleClass @ 0x1405CE3EC
 * Callers:
 *     ViSetDifPluginMode @ 0x140ABE578 (ViSetDifPluginMode.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADEBEC (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     <none>
 */

void VfUtilSetRuleClass()
{
  HIDWORD(VfRuleClasses) |= 8u;
}
