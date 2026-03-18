/*
 * XREFs of DifSetPluginRunningWithoutReboot @ 0x1405D5490
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140ADEA7C (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADEBEC (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     <none>
 */

void __fastcall DifSetPluginRunningWithoutReboot(char a1)
{
  DifIsVolatileMode = a1;
}
