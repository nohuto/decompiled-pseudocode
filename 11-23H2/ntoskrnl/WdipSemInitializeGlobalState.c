/*
 * XREFs of WdipSemInitializeGlobalState @ 0x14083294C
 * Callers:
 *     WdipSemInitialize @ 0x14082F9F8 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1409DD93C (WdipSemUpdate.c)
 * Callees:
 *     InitializeSListHead @ 0x140221420 (InitializeSListHead.c)
 *     WdipSemClearFrequentScenarioTable @ 0x1403949FC (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140435A00 (memset.c)
 */

void *WdipSemInitializeGlobalState()
{
  __int64 v0; // rdi
  union _SLIST_HEADER *v1; // rbx
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
  qword_140C34AA8 = 0LL;
  qword_140C34AC8 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  dword_140C34AD0 = 0;
  qword_140C34AD8 = 0LL;
  result = WdipSemClearFrequentScenarioTable();
  WdipSemInitialized = 1;
  return result;
}
