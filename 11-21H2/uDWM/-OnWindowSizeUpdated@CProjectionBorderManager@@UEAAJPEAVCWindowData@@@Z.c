/*
 * XREFs of ?OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x18000E7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z @ 0x1800CB34C (--$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z.c)
 *     ?_UpdateCaptureControllerProperty@CProjectionBorderManager@@AEAAJP81@EAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z0@Z @ 0x1800D022C (-_UpdateCaptureControllerProperty@CProjectionBorderManager@@AEAAJP81@EAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800D0860 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::OnWindowSizeUpdated(
        CProjectionBorderManager *this,
        struct CWindowData *a2)
{
  CProjectionBorderVisual *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  int updated; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_DWORD *)a2 + 114) )
    return 0LL;
  v5 = (CProjectionBorderVisual *)*((_QWORD *)a2 + 58);
  if ( v5 )
    CProjectionBorderVisual::UpdateRectFromWindow(v5, a2);
  if ( *((_QWORD *)a2 + 81) )
    return 0LL;
  v6 = *((_QWORD *)a2 + 82);
  v7 = *((_QWORD *)a2 + 5);
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 40);
  v11 = v7;
  WindowFrameLoggingTelemetry::UpdateCaptureControllerSize<HWND__ * &>(&v11);
  updated = CProjectionBorderManager::_UpdateCaptureControllerProperty(
              this,
              CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow,
              v7);
  v9 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x31C,
    (int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)updated);
  return v9;
}
