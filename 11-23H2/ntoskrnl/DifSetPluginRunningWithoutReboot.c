/*
 * XREFs of DifSetPluginRunningWithoutReboot @ 0x1405D5400
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140ADDAAC (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADDC1C (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     <none>
 */

void __fastcall DifSetPluginRunningWithoutReboot(char a1)
{
  DifIsVolatileMode = a1;
}
