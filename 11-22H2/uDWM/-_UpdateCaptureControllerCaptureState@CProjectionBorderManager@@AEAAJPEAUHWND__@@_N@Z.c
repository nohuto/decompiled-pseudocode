/*
 * XREFs of ?_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D5414
 * Callers:
 *     ?OnWindowMinimized@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180016690 (-OnWindowMinimized@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowRestored@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180016790 (-OnWindowRestored@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180063E00 (-OnWindowStyleChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180063E90 (-OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x1800CF9A0 (--$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAP.c)
 *     ?_GetCaptureControllerForCapturedWindow@CProjectionBorderManager@@AEAAPEAVCCaptureControllerProxy@@PEAUHWND__@@@Z @ 0x1800D46FC (-_GetCaptureControllerForCapturedWindow@CProjectionBorderManager@@AEAAPEAVCCaptureControllerProx.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerCaptureState(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        char a3)
{
  struct CCaptureControllerProxy *CaptureControllerForCapturedWindow; // rax
  struct _RTL_CRITICAL_SECTION *v7; // rcx
  HWND v9; // [rsp+38h] [rbp+10h] BYREF
  char v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  WindowFrameLoggingTelemetry::UpdateCaptureControllerCaptureState<HWND__ * &,bool &>((__int64 *)&v9, &v10);
  CaptureControllerForCapturedWindow = CProjectionBorderManager::_GetCaptureControllerForCapturedWindow(this, a2);
  return CProjectionBorderManager::_PauseOrResumeWindowCapture(v7, CaptureControllerForCapturedWindow, a3);
}
