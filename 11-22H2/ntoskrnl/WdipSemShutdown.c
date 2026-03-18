/*
 * XREFs of WdipSemShutdown @ 0x1409DDCA0
 * Callers:
 *     WdipSemEnableScenario @ 0x1407E5A8C (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x1408315A0 (WdipSemCleanStart.c)
 *     WdipSemDisableScenario @ 0x140831AF8 (WdipSemDisableScenario.c)
 *     WdipSemUpdate @ 0x1409DD9EC (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x140392E7C (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140435400 (memset.c)
 *     WdipSemFreePool @ 0x1409DE0A0 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x1409DE834 (WdipSemDisableAllProviders.c)
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
  qword_140C34E68 = 0LL;
  dword_140C34E90 = 0;
  qword_140C34E98 = 0LL;
  qword_140C34E88 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
