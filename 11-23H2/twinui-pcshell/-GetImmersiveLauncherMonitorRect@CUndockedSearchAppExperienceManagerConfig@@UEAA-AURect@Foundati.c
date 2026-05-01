/*
 * XREFs of ?GetImmersiveLauncherMonitorRect@CUndockedSearchAppExperienceManagerConfig@@UEAA?AURect@Foundation@Windows@@PEAUIImmersiveLauncher@@@Z @ 0x180056DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall CUndockedSearchAppExperienceManagerConfig::GetImmersiveLauncherMonitorRect(
        __int64 a1,
        _OWORD *a2,
        __int64 a3)
{
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  const char *v9; // r9
  __int64 v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-50h] BYREF
  HMONITOR hMonitor; // [rsp+28h] [rbp-48h] BYREF
  __int128 v14; // [rsp+30h] [rbp-40h]
  struct tagMONITORINFO mi; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  *a2 = 0LL;
  hMonitor = 0LL;
  v12 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 88LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v12);
  v7 = v5(a3, AddressOf);
  v8 = retaddr;
  if ( v7 < 0 )
  {
    v11 = 574LL;
LABEL_9:
    wil::details::in1diag3::_Log_Hr(
      v8,
      (void *)v11,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v7,
      v12);
    goto LABEL_6;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v12 + 40LL))(v12, &hMonitor);
  v8 = retaddr;
  if ( v7 < 0 )
  {
    v11 = 576LL;
    goto LABEL_9;
  }
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( GetMonitorInfoW(hMonitor, &mi) )
  {
    *(float *)&v14 = (float)mi.rcMonitor.left;
    *((float *)&v14 + 1) = (float)mi.rcMonitor.top;
    *((float *)&v14 + 2) = (float)(mi.rcMonitor.right - mi.rcMonitor.left);
    *((float *)&v14 + 3) = (float)(mi.rcMonitor.bottom - mi.rcMonitor.top);
    *a2 = v14;
  }
  else
  {
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x244,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v9);
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  return a2;
}
