/*
 * XREFs of ?s_WorkerThreadProc@CConstraintModelResourceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180014B20
 * Callers:
 *     <none>
 * Callees:
 *     ?WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ @ 0x180014BC8 (-WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 */

void __fastcall CConstraintModelResourceManager::s_WorkerThreadProc(
        PTP_CALLBACK_INSTANCE Instance,
        HANDLE *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  BOOL v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v6 = CoInitializeEx(0LL, 0) >= 0;
  CConstraintModelResourceManager::WorkItemThreadProc((CConstraintModelResourceManager *)Context);
  if ( v6 )
    CoUninitialize();
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    &lpCriticalSection,
    Context + 29);
  if ( !*((_DWORD *)Context + 80) )
    SetThreadpoolWait(Wait, Context[28], 0LL);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
