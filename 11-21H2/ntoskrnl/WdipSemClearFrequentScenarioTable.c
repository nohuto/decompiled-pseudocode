/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x1403CB238
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x140840FF8 (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1409DA868 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x408uLL);
  qword_140C16C28 = 0LL;
  return result;
}
