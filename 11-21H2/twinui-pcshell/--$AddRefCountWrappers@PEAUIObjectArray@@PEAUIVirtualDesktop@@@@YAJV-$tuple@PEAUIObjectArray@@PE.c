/*
 * XREFs of ??$AddRefCountWrappers@PEAUIObjectArray@@PEAUIVirtualDesktop@@@@YAJV?$tuple@PEAUIObjectArray@@PEAUIVirtualDesktop@@@std@@PEAV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@@1@@Z @ 0x18053DCF0
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@Z01@Z @ 0x18053E310 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800375A8 (--4-$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18030D564 (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$?RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@@_lambda_b9b70e6c986f29daea1bfe6e23588cc6_@@QEBA?AV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@@std@@AEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@@Z @ 0x18053D8B8 (--$-RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@@_lambda_b9b70e6c986f29daea1bfe6e23588cc6_@@QE.c)
 */

__int64 __fastcall AddRefCountWrappers<IObjectArray *,IVirtualDesktop *>(__int64 *a1, __int64 *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+20h] [rbp-10h] BYREF
  __int64 v6; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char *v8; // [rsp+50h] [rbp+20h] BYREF
  char **v9; // [rsp+60h] [rbp+30h] BYREF
  char ***v10; // [rsp+68h] [rbp+38h] BYREF

  LODWORD(v8) = 0;
  v9 = &v8;
  v10 = &v9;
  _lambda_b9b70e6c986f29daea1bfe6e23588cc6_::operator()<IObjectArray * &,IVirtualDesktop * &>(
    (int ***)&v10,
    &v5,
    a1 + 1,
    a1);
  v3 = (unsigned int)v8;
  if ( (int)v8 >= 0 )
  {
    Microsoft::WRL::ComPtr<IObjectArray>::operator=(a2 + 1, &v6);
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice>::operator=(a2, &v5);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE9,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v5);
  return v3;
}
