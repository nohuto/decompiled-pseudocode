/*
 * XREFs of ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x1800D79D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800D8F98 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EBF40 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 */

__int64 __fastcall CTabletModeTransition::OnBeginTransitionRequest(CTabletModeTransition *this)
{
  HMONITOR v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  RECT *p_rcMonitor; // rax
  int v6; // eax
  int v7; // eax
  CBaseObject *v9; // [rsp+30h] [rbp-50h] BYREF
  POINT pt[2]; // [rsp+38h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-38h] BYREF

  pt[0] = 0LL;
  v9 = 0LL;
  v2 = MonitorFromPoint(0LL, 1u);
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  v3 = 0;
  if ( GetMonitorInfoW(v2, &mi) )
  {
    p_rcMonitor = &mi.rcMonitor;
    if ( *((_BYTE *)this + 128) )
      p_rcMonitor = &mi.rcWork;
    *(RECT *)&pt[0].x = *p_rcMonitor;
    v6 = CTransitionVisualController::CreateDesktopSnapshotComponent(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23),
           v4,
           pt,
           this,
           &v9);
    v3 = v6;
    if ( v6 >= 0 )
    {
      v7 = CStoryboard::_AddAnimationComponent(this, v9);
      v3 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v7, 0x1339u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v6, 0x1338u);
    }
    if ( v9 )
      CBaseObject::Release(v9);
  }
  return v3;
}
