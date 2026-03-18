/*
 * XREFs of DxgkCreateSessionViewForCurrentSession @ 0x1C01E56D0
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017DC5C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1C01E5788 (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW.c)
 */

int __fastcall DxgkCreateSessionViewForCurrentSession(
        struct _LUID *a1,
        unsigned int a2,
        struct tagRECT *a3,
        unsigned __int8 a4,
        struct _LUID *a5)
{
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rbx
  unsigned int v11; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v13; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  struct SESSION_VIEW **v18; // [rsp+30h] [rbp-28h]

  v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v10
    && (v11 = PsGetCurrentProcessSessionId(v9),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, v11),
        (v13 = SessionDataForSpecifiedSession) != 0LL) )
  {
    if ( *((struct _KTHREAD **)SessionDataForSpecifiedSession + 2319) != KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 805LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSessionData->IsSessionModeChangeLockExclusiveOwner()",
        805LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return DXGSESSIONDATA::AddSourceViewToSession(v13, a3, a1, a2, a4, a5, v18);
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v17 = PsGetCurrentProcessSessionId(v16);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v17,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return -1073741811;
  }
}
