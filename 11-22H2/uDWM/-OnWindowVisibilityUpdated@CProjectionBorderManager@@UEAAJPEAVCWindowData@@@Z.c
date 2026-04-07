/*
 * XREFs of ?OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180063E90
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility@@@details@wil@@QEAA_NXZ @ 0x180065124 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibili.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800D4A28 (-_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@.c)
 *     ?_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D5414 (-_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::OnWindowVisibilityUpdated(
        CProjectionBorderManager *this,
        struct CWindowData *a2)
{
  CProjectionBorderManager *v4; // rcx
  HWND HostWindowHandleForProxyWindow; // rax
  bool v6; // r8
  int updated; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility>::GetImpl'::`2'::impl) )
    return 0LL;
  if ( !*((_DWORD *)a2 + 114) )
    return 0LL;
  if ( *((_QWORD *)a2 + 81) )
    return 0LL;
  HostWindowHandleForProxyWindow = CProjectionBorderManager::_GetHostWindowHandleForProxyWindow(v4, a2);
  updated = CProjectionBorderManager::_UpdateCaptureControllerCaptureState(this, HostWindowHandleForProxyWindow, v6);
  v8 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3E6,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)updated,
    v10);
  return v8;
}
