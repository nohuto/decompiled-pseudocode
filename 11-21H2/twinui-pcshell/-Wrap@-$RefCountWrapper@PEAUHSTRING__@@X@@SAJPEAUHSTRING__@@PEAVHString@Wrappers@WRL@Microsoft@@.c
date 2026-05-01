/*
 * XREFs of ?Wrap@?$RefCountWrapper@PEAUHSTRING__@@X@@SAJPEAUHSTRING__@@PEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18053F8EC
 * Callers:
 *     ??$?RAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@_lambda_d7371d012a69797edda603f27c068405_@@QEBA?AV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@AEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@Z @ 0x18053DBC8 (--$-RAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@_lambda_d7371d012a69797edda603f27c068405_@@QEBA-.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800A3750 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
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
      (void *)0xA0,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v4);
    v3 = string;
  }
  WindowsDeleteString(v3);
  return v5;
}
