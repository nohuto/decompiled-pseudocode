/*
 * XREFs of DxgkDestroyCsrssProcess @ 0x1C01E9CA4
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C001DEFC (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C01C06C0 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C01E210C (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 */

void DxgkDestroyCsrssProcess()
{
  __int64 v0; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rdi
  SESSION_ADAPTER *v8; // rbp
  _QWORD *v9; // r14
  __int64 v10; // rcx
  _QWORD *v11; // rax

  SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !SessionDataForSpecifiedSession
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v0),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                            SessionDataForSpecifiedSession,
                                            CurrentProcessSessionId)) == 0LL) )
  {
    WdLogSingleEntry1(1LL, 621LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSessionData != NULL", 621LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)SessionDataForSpecifiedSession + 2331) != PsGetCurrentProcess(v4, v3, v5, v6) )
  {
    WdLogSingleEntry1(1LL, 622LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pSessionData->GetEProcessCSRSS() == PsGetCurrentProcess()",
      622LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGSESSIONDATA::RemoveAllSourceViewFromSession(SessionDataForSpecifiedSession);
  v7 = (_QWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 2322);
  while ( v7 != (_QWORD *)((char *)SessionDataForSpecifiedSession + 18576) )
  {
    v8 = (SESSION_ADAPTER *)(v7 - 4);
    v9 = v7;
    v7 = (_QWORD *)*v7;
    SESSION_ADAPTER::Cleanup(v8);
    v10 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    if ( v8 )
      SESSION_ADAPTER::`scalar deleting destructor'(v8);
  }
  *((_QWORD *)SessionDataForSpecifiedSession + 2332) = 0LL;
}
