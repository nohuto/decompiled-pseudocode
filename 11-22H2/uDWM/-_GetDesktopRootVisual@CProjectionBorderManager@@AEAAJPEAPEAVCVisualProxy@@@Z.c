/*
 * XREFs of ?_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAPEAVCVisualProxy@@@Z @ 0x1800D48CC
 * Callers:
 *     ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D1760 (-StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@.c)
 *     ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D1980 (-StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_T.c)
 * Callees:
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800360BC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_GetDesktopRootVisual(
        CProjectionBorderManager *this,
        struct CVisualProxy **a2,
        __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  struct CVisualProxy *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = (unsigned __int64)this;
  *a2 = 0LL;
  if ( !(unsigned int)GetDesktopID(1LL, &v10, a3) )
  {
    v4 = -2147467259;
    v5 = 1413LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)v4);
    return v4;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           v10);
  if ( !RootVisualForDesktop )
  {
    v4 = -2147467261;
    v5 = 1415LL;
    goto LABEL_3;
  }
  v8 = (struct CVisualProxy *)*((_QWORD *)RootVisualForDesktop + 2);
  *a2 = v8;
  if ( !v8 )
  {
    v4 = -2147467261;
    v5 = 1417LL;
    goto LABEL_3;
  }
  return 0LL;
}
