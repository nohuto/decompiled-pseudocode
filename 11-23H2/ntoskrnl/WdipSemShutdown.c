/*
 * XREFs of WdipSemShutdown @ 0x1409DDDF0
 * Callers:
 *     WdipSemEnableScenario @ 0x1407E57DC (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x14082FD50 (WdipSemCleanStart.c)
 *     WdipSemDisableScenario @ 0x1408302A8 (WdipSemDisableScenario.c)
 *     WdipSemUpdate @ 0x1409DDB3C (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x140394BDC (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140435E00 (memset.c)
 *     WdipSemFreePool @ 0x1409DE1F0 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x1409DE984 (WdipSemDisableAllProviders.c)
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
  dword_140C32810 = 0;
  qword_140C32818 = 0LL;
  qword_140C32808 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
