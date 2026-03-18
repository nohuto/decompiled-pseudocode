/*
 * XREFs of DxgkRemoveAllSessionViewForCurrentSession @ 0x1C01E590C
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017DC5C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C01E5978 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 DxgkRemoveAllSessionViewForCurrentSession()
{
  __int64 v0; // rcx
  DXGSESSIONMGR *v1; // rbx
  unsigned int v2; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v4; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax

  v1 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v1
    && (v2 = PsGetCurrentProcessSessionId(v0),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v1, v2),
        (v4 = SessionDataForSpecifiedSession) != 0LL) )
  {
    if ( *((struct _KTHREAD **)SessionDataForSpecifiedSession + 2319) != KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 893LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSessionData->IsSessionModeChangeLockExclusiveOwner()",
        893LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGSESSIONDATA::RemoveAllSourceViewFromSession(v4);
    return 0LL;
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v0);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v8 = PsGetCurrentProcessSessionId(v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v8,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
