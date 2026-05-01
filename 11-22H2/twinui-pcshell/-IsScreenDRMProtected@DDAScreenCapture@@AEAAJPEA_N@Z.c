/*
 * XREFs of ?IsScreenDRMProtected@DDAScreenCapture@@AEAAJPEA_N@Z @ 0x1804932B4
 * Callers:
 *     ?TryAcquireFrame@DDAScreenCapture@@AEAAJPEAUDXGI_OUTDUPL_FRAME_INFO@@PEAPEAUIDXGIResource@@@Z @ 0x180493394 (-TryAcquireFrame@DDAScreenCapture@@AEAAJPEAUDXGI_OUTDUPL_FRAME_INFO@@PEAPEAUIDXGIResource@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsDesktopVisibleOnMonitor@DDAScreenCapture@@AEAAJPEA_N@Z @ 0x180493094 (-IsDesktopVisibleOnMonitor@DDAScreenCapture@@AEAAJPEA_N@Z.c)
 */

__int64 __fastcall DDAScreenCapture::IsScreenDRMProtected(DDAScreenCapture *this, bool *a2)
{
  HWND DesktopWindow; // rax
  HRESULT v5; // eax
  unsigned int v6; // edi
  int IsDesktopVisibleOnMonitor; // eax
  _DWORD pvParam[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v11; // [rsp+50h] [rbp+18h] BYREF
  BOOL pfProtected; // [rsp+58h] [rbp+20h] BYREF

  SystemParametersInfoW(0xAAu, 0, pvParam, 0);
  if ( pvParam[0] )
    goto LABEL_8;
  DesktopWindow = GetDesktopWindow();
  pfProtected = 0;
  v5 = DRMIsWindowProtected(DesktopWindow, &pfProtected);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF4,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  if ( !pfProtected )
  {
LABEL_8:
    *a2 = 0;
  }
  else
  {
    *a2 = 1;
    v11 = 0;
    IsDesktopVisibleOnMonitor = DDAScreenCapture::IsDesktopVisibleOnMonitor(this, &v11);
    if ( IsDesktopVisibleOnMonitor < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFB,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)IsDesktopVisibleOnMonitor);
    *a2 = v11;
  }
  return 0LL;
}
