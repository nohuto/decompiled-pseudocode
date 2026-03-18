/*
 * XREFs of WdipSemShutdown @ 0x1409DDBF0
 * Callers:
 *     WdipSemEnableScenario @ 0x1407E550C (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x14082FA50 (WdipSemCleanStart.c)
 *     WdipSemDisableScenario @ 0x14082FFA8 (WdipSemDisableScenario.c)
 *     WdipSemUpdate @ 0x1409DD93C (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x1403949FC (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140435A00 (memset.c)
 *     WdipSemFreePool @ 0x1409DDFF0 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x1409DE784 (WdipSemDisableAllProviders.c)
 */

__int64 WdipSemShutdown()
{
  WdipSemDisabledScenarioTable = 0LL;
  WdipSemEnabled = 0;
  WdipSemTimeoutEnabled = 0;
  WdipSemTimeoutValue = 600;
  WdipSemDisableAllProviders();
  WdipDiagLoggerId = 0;
  WdipContextLoggerId = 0;
  memset(WdipSemScenarioTable, 0, 0x208uLL);
  memset(WdipSemProviderTable, 0, 0x2008uLL);
  qword_140C34AA8 = 0LL;
  dword_140C34AD0 = 0;
  qword_140C34AD8 = 0LL;
  qword_140C34AC8 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
