/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x140394BDC
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x140832C4C (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1409DDDF0 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x408uLL);
  qword_140C32C28 = 0LL;
  return result;
}
