/*
 * XREFs of WdipSemInitializeGlobalState @ 0x14083449C
 * Callers:
 *     WdipSemInitialize @ 0x140831548 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1409DD9EC (WdipSemUpdate.c)
 * Callees:
 *     InitializeSListHead @ 0x140221440 (InitializeSListHead.c)
 *     WdipSemClearFrequentScenarioTable @ 0x140392E7C (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140435400 (memset.c)
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
  qword_140C6B418 = (__int64)&WdipSemPool;
  v0 = 6LL;
  WdipSemPool = &WdipSemPool;
  v1 = &SListHead;
  qword_140C6B430 = 0LL;
  do
  {
    InitializeSListHead(v1++);
    --v0;
  }
  while ( v0 );
  memset(WdipSemScenarioTable, 0, 0x208uLL);
  memset(WdipSemProviderTable, 0, 0x2008uLL);
  qword_140C34E68 = 0LL;
  qword_140C34E88 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  dword_140C34E90 = 0;
  qword_140C34E98 = 0LL;
  result = WdipSemClearFrequentScenarioTable();
  WdipSemInitialized = 1;
  return result;
}
