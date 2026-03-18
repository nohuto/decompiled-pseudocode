/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x1408328F8
 * Callers:
 *     WdipSemCleanStart @ 0x14082FA50 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x14082FABC (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
