/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x1403949FC
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x14083294C (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1409DDBF0 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x408uLL);
  qword_140C34EE8 = 0LL;
  return result;
}
