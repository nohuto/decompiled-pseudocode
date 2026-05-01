/*
 * XREFs of ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18037F470
 * Callers:
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18037E25C (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18037EB80 (-OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180172508 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??$ControllerMoved@AEAJAEAJAEBU_GUID@@@TouchpadControllerExperienceManagerTelemetry@@SAXAEAJ0AEBU_GUID@@@Z @ 0x18037BD44 (--$ControllerMoved@AEAJAEAJAEBU_GUID@@@TouchpadControllerExperienceManagerTelemetry@@SAXAEAJ0AEB.c)
 *     ?GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z @ 0x18037DDD4 (-GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::SaveFramePosition(CVirtualTouchpadExperienceManager *this)
{
  int FramePosition; // ebx
  __int64 v3; // rdx
  HMONITOR v5; // rax
  const char *v6; // r9
  HMONITOR v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  RECT rc; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v13[64]; // [rsp+64h] [rbp-9Ch] BYREF
  int v14; // [rsp+A4h] [rbp-5Ch]
  int v15; // [rsp+A8h] [rbp-58h]
  struct tagMONITORINFO mi; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v17[72]; // [rsp+D8h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  FramePosition = CVirtualTouchpadExperienceManager::GetFramePosition(this, (struct tagPOINT *)&rc);
  if ( FramePosition < 0 )
  {
    v3 = 455LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)FramePosition);
    return (unsigned int)FramePosition;
  }
  v12 = 1;
  memset_0(v13, 0, 0x48uLL);
  v5 = MonitorFromRect(&rc, 0);
  v7 = v5;
  if ( !v5 )
  {
    v8 = 458LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v6);
  }
  mi.cbSize = 104;
  if ( !GetMonitorInfoW(v5, &mi) )
  {
    v8 = 461LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v6);
  }
  _o_wcscpy_s(v13, 32LL, v17);
  FramePosition = GetScaleFactorForMonitor(v7, &v10);
  if ( FramePosition < 0 )
  {
    v3 = 464LL;
    goto LABEL_3;
  }
  v14 = (int)(float)((float)((float)(mi.rcMonitor.right - rc.right) * 100.0) / (float)v10);
  v15 = (int)(float)((float)((float)(mi.rcMonitor.bottom - rc.bottom) * 100.0) / (float)v10);
  v9 = _RegSetKeyValueWithSDDL(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Touchpad\\",
         L"Anchor",
         3u,
         (BYTE *)&v12,
         0x4Cu);
  FramePosition = v9;
  if ( v9 > 0 )
    FramePosition = (unsigned __int16)v9 | 0x80070000;
  if ( FramePosition < 0 )
  {
    v3 = 468LL;
    goto LABEL_3;
  }
  TouchpadControllerExperienceManagerTelemetry::ControllerMoved<long &,long &,_GUID const &>(
    &rc.left,
    &rc.right,
    (__int128 *)(*((_QWORD *)this + 53) + 8LL));
  return 0LL;
}
