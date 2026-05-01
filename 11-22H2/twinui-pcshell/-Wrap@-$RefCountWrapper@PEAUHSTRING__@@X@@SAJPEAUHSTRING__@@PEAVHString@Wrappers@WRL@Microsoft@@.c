/*
 * XREFs of ?Wrap@?$RefCountWrapper@PEAUHSTRING__@@X@@SAJPEAUHSTRING__@@PEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1805FA2AC
 * Callers:
 *     ??$?RAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@_lambda_18d3c2c80d2d5ec53b93450baefc9fd9_@@QEBA?A_PAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@Z @ 0x1805F876C (--$-RAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@_lambda_18d3c2c80d2d5ec53b93450baefc9fd9_@@QEBA-.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18009742C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall RefCountWrapper<HSTRING__ *,void>::Wrap(HSTRING a1, HSTRING *a2)
{
  HSTRING v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v8; // [rsp+30h] [rbp+8h] BYREF
  HSTRING string; // [rsp+40h] [rbp+18h] BYREF

  v8 = a1;
  v3 = 0LL;
  string = 0LL;
  v4 = Microsoft::WRL::Wrappers::HString::Set(&string, &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    WindowsDeleteString(*a2);
    v5 = 0;
    *a2 = string;
    string = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v4);
    v3 = string;
  }
  WindowsDeleteString(v3);
  return v5;
}
