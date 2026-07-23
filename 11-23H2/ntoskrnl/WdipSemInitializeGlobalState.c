/*
 * XREFs of WdipSemInitializeGlobalState @ 0x140832C4C
 * Callers:
 *     WdipSemInitialize @ 0x14082FCF8 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1409DDB3C (WdipSemUpdate.c)
 * Callees:
 *     InitializeSListHead @ 0x140221420 (InitializeSListHead.c)
 *     WdipSemClearFrequentScenarioTable @ 0x140394BDC (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *WdipSemInitializeGlobalState()
{
  __int64 v0; // rdi
  _SLIST_HEADER *v1; // rbx
  void *result; // rax

  WdipSemPushLock = 0LL;
  WdipSemRegHandle = 0LL;
  WdipSemEnabled = 0;
  WdipSemTimeoutEnabled = 0;
  WdipSemTimeoutValue = 0;
  WdipSemDisabledScenarioTable = 0LL;
  WdipDiagLoggerId = 0;
  WdipContextLoggerId = 0;
  memset(&WdipSemPool, 0, 0x90uLL);
  qword_140C6B358 = (__int64)&WdipSemPool;
  v0 = 6LL;
  WdipSemPool = &WdipSemPool;
  v1 = &SListHead;
  qword_140C6B370 = 0LL;
  do
  {
    InitializeSListHead(v1++);
    --v0;
  }
  while ( v0 );
  memset(WdipSemScenarioTable, 0, 0x208uLL);
  memset(WdipSemProviderTable, 0, 0x2008uLL);
  qword_140C34E68 = 0LL;
  qword_140C32808 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  dword_140C32810 = 0;
  qword_140C32818 = 0LL;
  result = WdipSemClearFrequentScenarioTable();
  WdipSemInitialized = 1;
  return result;
}
