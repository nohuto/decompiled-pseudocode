/*
 * XREFs of DifSetPluginRunningWithoutReboot @ 0x1405D5970
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140ADDA9C (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADDC0C (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     <none>
 */

void __fastcall DifSetPluginRunningWithoutReboot(char a1)
{
  DifIsVolatileMode = a1;
}
