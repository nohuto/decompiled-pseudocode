/*
 * XREFs of ??$AddRefCountWrappers@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU2@@@YAJV?$tuple@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU2@@std@@PEAV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@V423@@1@@Z @ 0x18053DE38
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU3@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z011@Z @ 0x18053E4B8 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArr_ea_18053E4B8.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800375A8 (--4-$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18030D564 (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$?RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@AEAPEAU1@@_lambda_9399efa3dcb6c98f5ff250874809262d_@@QEBA?AV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@V423@@std@@AEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@1@Z @ 0x18053DAC4 (--$-RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@AEAPEAU1@@_lambda_9399efa3dcb6c98f5ff250874809.c)
 */

__int64 __fastcall AddRefCountWrappers<IObjectArray *,IVirtualDesktop *,IVirtualDesktop *>(_QWORD *a1, __int64 *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp-20h] BYREF
  __int64 v6; // [rsp+38h] [rbp-18h] BYREF
  __int64 v7[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char *v9; // [rsp+70h] [rbp+20h] BYREF
  char **v10; // [rsp+80h] [rbp+30h] BYREF
  char ***v11; // [rsp+88h] [rbp+38h] BYREF

  LODWORD(v9) = 0;
  v10 = &v9;
  v11 = &v10;
  _lambda_9399efa3dcb6c98f5ff250874809262d_::operator()<IObjectArray * &,IVirtualDesktop * &,IVirtualDesktop * &>(
    (int ***)&v11,
    &v5,
    a1 + 2,
    a1 + 1,
    a1);
  v3 = (unsigned int)v9;
  if ( (int)v9 >= 0 )
  {
    Microsoft::WRL::ComPtr<IObjectArray>::operator=(a2 + 2, v7);
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice>::operator=(
      a2 + 1,
      &v6);
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice>::operator=(a2, &v5);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE9,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v7);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v5);
  return v3;
}
