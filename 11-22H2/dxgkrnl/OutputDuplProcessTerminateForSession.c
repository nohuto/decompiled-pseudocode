/*
 * XREFs of OutputDuplProcessTerminateForSession @ 0x1C01A93A4
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8AD0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B020 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGSYNCOBJECTMUTEX@@QEAA@XZ @ 0x1C0015690 (--1DXGSYNCOBJECTMUTEX@@QEAA@XZ.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C01A946C (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 */

void OutputDuplProcessTerminateForSession()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 CurrentProcessSessionId; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  OUTPUTDUPL_SESSION_MGR *v5; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v7; // rbx
  const wchar_t *v8; // r9
  DXGFASTMUTEX *v9; // [rsp+50h] [rbp-18h] BYREF
  char v10; // [rsp+58h] [rbp-10h]

  v1 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v1 )
    goto LABEL_11;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v0);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v9, (struct DXGFASTMUTEX *const)(v1 + 88), 0);
  if ( v10 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v9, 0LL, 0LL);
  DXGFASTMUTEX::Acquire(v9);
  v10 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v1 + 80) )
  {
    DXGSYNCOBJECTMUTEX::~DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v9);
    v3 = 0LL;
  }
  else
  {
    _mm_lfence();
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 48) + 8 * CurrentProcessSessionId);
    v10 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v9);
  }
  if ( v3 )
  {
    v5 = *(OUTPUTDUPL_SESSION_MGR **)(v3 + 8);
    if ( v5 )
    {
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v4);
      OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v5, CurrentProcess);
      return;
    }
    v7 = 3079LL;
    WdLogSingleEntry1(2LL, 3079LL);
    v8 = L"OUTPUTDUPL_SESSION_MGR is NULL";
  }
  else
  {
LABEL_11:
    v7 = 3072LL;
    WdLogSingleEntry1(2LL, 3072LL);
    v8 = L"DXGSESSIONDATA is NULL";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, v7, 0LL, 0LL, 0LL, 0LL);
}
