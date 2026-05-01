/*
 * XREFs of ??$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAUHSTRING__@@@@YAJV?$tuple@PEAUIVirtualDesktop@@PEAUHSTRING__@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@1@@Z @ 0x1805F8B58
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z01@Z @ 0x1805F9184 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHS.c)
 * Callees:
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180024560 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?RAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@_lambda_18d3c2c80d2d5ec53b93450baefc9fd9_@@QEBA?A_PAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@Z @ 0x1805F876C (--$-RAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@_lambda_18d3c2c80d2d5ec53b93450baefc9fd9_@@QEBA-.c)
 */

__int64 __fastcall AddRefCountWrappers<IVirtualDesktop *,HSTRING__ *>(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  HSTRING v4; // rax
  HSTRING string; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char *v9; // [rsp+50h] [rbp+20h] BYREF
  char **v10; // [rsp+60h] [rbp+30h] BYREF
  char ***v11; // [rsp+68h] [rbp+38h] BYREF

  LODWORD(v9) = 0;
  v10 = &v9;
  v11 = &v10;
  _lambda_18d3c2c80d2d5ec53b93450baefc9fd9_::operator()<IVirtualDesktop * &,HSTRING__ * &>(
    (int ***)&v11,
    &string,
    a1 + 1,
    a1);
  v3 = (unsigned int)v9;
  if ( (int)v9 >= 0 )
  {
    Microsoft::WRL::ComPtr<IClassicWindow>::operator=((__int64 *)(a2 + 8), &v7);
    WindowsDeleteString(*(HSTRING *)a2);
    v4 = string;
    string = 0LL;
    v3 = 0;
    *(_QWORD *)a2 = v4;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
  WindowsDeleteString(string);
  return v3;
}
