/*
 * XREFs of ViSetDifPluginMode @ 0x140A7C548
 * Callers:
 *     ViInitSystemPhase0 @ 0x140B27B30 (ViInitSystemPhase0.c)
 * Callees:
 *     VfUtilSetRuleClass @ 0x1405FE024 (VfUtilSetRuleClass.c)
 */

void ViSetDifPluginMode()
{
  if ( (VfRuleClasses & 0x20000) != 0
    || (VfRuleClasses & 1) != 0
    || (VfRuleClasses & 8) != 0
    || (VfRuleClasses & 0x100) != 0
    || (VfRuleClasses & 0x800) != 0
    || (VfRuleClasses & 0x10) != 0 )
  {
    VfUtilSetRuleClass();
  }
}
