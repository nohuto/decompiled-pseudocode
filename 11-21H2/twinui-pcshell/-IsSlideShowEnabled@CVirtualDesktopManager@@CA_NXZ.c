/*
 * XREFs of ?IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ @ 0x1801B5B60
 * Callers:
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180548360 (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@P.c)
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18054ACB0 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180152350 (--$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 */

bool __fastcall CVirtualDesktopManager::IsSlideShowEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  v4 = wil::wnf_query_nothrow<int>((__int64)&WNF_SHEL_DESKTOP_BACKGROUND_SET_TO_SLIDESHOW, &v7, (__int64)&v8, a4);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB0,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v4);
  return v8 != 0;
}
