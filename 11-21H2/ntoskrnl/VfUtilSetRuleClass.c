/*
 * XREFs of VfUtilSetRuleClass @ 0x1405FE024
 * Callers:
 *     ViSetDifPluginMode @ 0x140A7C548 (ViSetDifPluginMode.c)
 *     VfVolatileSetDifRuleClass @ 0x140A9CBF8 (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     <none>
 */

void VfUtilSetRuleClass()
{
  HIDWORD(VfRuleClasses) |= 8u;
}
