/*
 * XREFs of ??$AddRefCountWrappers@PEAUIObjectArray@@PEAUIVirtualDesktop@@II@@YAJV?$tuple@PEAUIObjectArray@@PEAUIVirtualDesktop@@II@std@@PEAV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@II@1@@Z @ 0x18053DD88
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@II@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@II@Z01II@Z @ 0x18053E3E0 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArr_ea_18053E3E0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800375A8 (--4-$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18030D564 (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$?RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@AEAIAEAI@_lambda_55150664767eca596a859a77bb97c172_@@QEBA?AV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@II@std@@AEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@AEAI2@Z @ 0x18053D994 (--$-RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@AEAIAEAI@_lambda_55150664767eca596a859a77bb97c.c)
 */

__int64 __fastcall AddRefCountWrappers<IObjectArray *,IVirtualDesktop *,unsigned int,unsigned int>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  _DWORD v5[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v6; // [rsp+38h] [rbp-18h] BYREF
  __int64 v7[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char *v9; // [rsp+70h] [rbp+20h] BYREF
  char **v10; // [rsp+80h] [rbp+30h] BYREF
  char ***v11; // [rsp+88h] [rbp+38h] BYREF

  LODWORD(v9) = 0;
  v10 = &v9;
  v11 = &v10;
  _lambda_55150664767eca596a859a77bb97c172_::operator()<IObjectArray * &,IVirtualDesktop * &,unsigned int &,unsigned int &>(
    (int ***)&v11,
    (__int64)v5,
    (__int64 *)(a1 + 16),
    (__int64 *)(a1 + 8),
    (int *)(a1 + 4),
    (_DWORD *)a1);
  v3 = (unsigned int)v9;
  if ( (int)v9 >= 0 )
  {
    Microsoft::WRL::ComPtr<IObjectArray>::operator=((__int64 *)(a2 + 16), v7);
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice>::operator=(
      (__int64 *)(a2 + 8),
      &v6);
    v3 = 0;
    *(_DWORD *)(a2 + 4) = v5[1];
    *(_DWORD *)a2 = v5[0];
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
  return v3;
}
