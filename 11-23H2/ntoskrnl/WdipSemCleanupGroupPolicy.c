/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x140832BF8
 * Callers:
 *     WdipSemCleanStart @ 0x14082FD50 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x14082FDBC (WdipSemLoadGroupPolicy.c)
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
