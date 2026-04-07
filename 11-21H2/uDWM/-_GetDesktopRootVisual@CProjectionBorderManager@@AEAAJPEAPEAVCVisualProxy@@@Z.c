/*
 * XREFs of ?_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAPEAVCVisualProxy@@@Z @ 0x1800CF738
 * Callers:
 *     ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CC9B0 (-StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@.c)
 *     ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CCBD0 (-StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_T.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_GetDesktopRootVisual(
        CProjectionBorderManager *this,
        struct CVisualProxy **a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  struct CVisualProxy *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = (unsigned __int64)this;
  *a2 = 0LL;
  if ( !(unsigned int)GetDesktopID(1LL, &v9) )
  {
    v3 = -2147467259;
    v4 = 1206LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)v3);
    return v3;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                           v9);
  if ( !RootVisualForDesktop )
  {
    v3 = -2147467261;
    v4 = 1208LL;
    goto LABEL_3;
  }
  v7 = (struct CVisualProxy *)*((_QWORD *)RootVisualForDesktop + 2);
  *a2 = v7;
  if ( !v7 )
  {
    v3 = -2147467261;
    v4 = 1210LL;
    goto LABEL_3;
  }
  return 0LL;
}
