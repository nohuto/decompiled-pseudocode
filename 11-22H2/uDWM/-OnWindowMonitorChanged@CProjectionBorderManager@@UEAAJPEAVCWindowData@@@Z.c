/*
 * XREFs of ?OnWindowMonitorChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180052790
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z @ 0x1800AD314 (-SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z.c)
 *     ?_GetCaptureControllerForCapturedWindow@CProjectionBorderManager@@AEAAPEAVCCaptureControllerProxy@@PEAUHWND__@@@Z @ 0x1800D46FC (-_GetCaptureControllerForCapturedWindow@CProjectionBorderManager@@AEAAPEAVCCaptureControllerProx.c)
 *     ?_GetDefaultSDRBoostForWindow@CProjectionBorderManager@@AEAAJPEAVCWindowData@@PEAM@Z @ 0x1800D4880 (-_GetDefaultSDRBoostForWindow@CProjectionBorderManager@@AEAAJPEAVCWindowData@@PEAM@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::OnWindowMonitorChanged(
        CProjectionBorderManager *this,
        struct CWindowData *a2)
{
  int DefaultSDRBoostForWindow; // eax
  unsigned int v6; // edi
  __int64 v7; // rax
  HWND v8; // rdx
  CCaptureControllerProxy *CaptureControllerForCapturedWindow; // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  float v14; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_DWORD *)a2 + 114) || *((_QWORD *)a2 + 81) )
    return 0LL;
  v14 = 0.0;
  DefaultSDRBoostForWindow = CProjectionBorderManager::_GetDefaultSDRBoostForWindow(this, a2, &v14);
  v6 = DefaultSDRBoostForWindow;
  if ( DefaultSDRBoostForWindow < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)DefaultSDRBoostForWindow,
      v12);
    return v6;
  }
  v7 = *((_QWORD *)a2 + 82);
  v8 = (HWND)*((_QWORD *)a2 + 5);
  if ( v7 )
    v8 = *(HWND *)(v7 + 40);
  CaptureControllerForCapturedWindow = CProjectionBorderManager::_GetCaptureControllerForCapturedWindow(this, v8);
  v10 = CCaptureControllerProxy::SetDefaultSDRBoost(CaptureControllerForCapturedWindow, v14);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3A6,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)v10,
    v12);
  return v11;
}
