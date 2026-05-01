/*
 * XREFs of ?CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z @ 0x1804926BC
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x18048E1F0 (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??_GDDAScreenCapture@@QEAAPEAXI@Z @ 0x18048DD98 (--_GDDAScreenCapture@@QEAAPEAXI@Z.c)
 *     ?Initialize@DDAScreenCapture@@AEAAJXZ @ 0x180492CEC (-Initialize@DDAScreenCapture@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DDAScreenCapture::CreateInstance(struct DDAScreenCapture **a1, HMONITOR a2)
{
  _QWORD *v4; // rdi
  DDAScreenCapture *v5; // rbx
  int v6; // eax
  unsigned int v7; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = operator new(0x88uLL);
  *v4 = 0LL;
  v4[13] = 0LL;
  v4[14] = 0LL;
  v4[15] = 0LL;
  v4[16] = a2;
  memset_0(v4 + 1, 0, 0x60uLL);
  v5 = (DDAScreenCapture *)v4;
  v6 = DDAScreenCapture::Initialize((DDAScreenCapture *)v4);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v5 = 0LL;
    *a1 = (struct DDAScreenCapture *)v4;
    v7 = 0;
    v4 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v6);
  }
  if ( v4 )
    DDAScreenCapture::`scalar deleting destructor'(v5);
  return v7;
}
