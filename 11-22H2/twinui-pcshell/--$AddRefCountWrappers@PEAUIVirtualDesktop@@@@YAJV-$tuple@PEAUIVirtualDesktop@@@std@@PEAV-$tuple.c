/*
 * XREFs of ??$AddRefCountWrappers@PEAUIVirtualDesktop@@@@YAJV?$tuple@PEAUIVirtualDesktop@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@1@@Z @ 0x1805F8938
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@@Z0@Z @ 0x1805F8F78 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@@CVirt.c)
 * Callees:
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180024560 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z @ 0x18013959C (--4-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z.c)
 */

__int64 __fastcall AddRefCountWrappers<IVirtualDesktop *>(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v2 = *a1;
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
  Microsoft::WRL::ComPtr<IVirtualDesktop>::operator=(&v6, v2);
  v4 = v6;
  v6 = 0LL;
  v7 = v4;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
  Microsoft::WRL::ComPtr<IClassicWindow>::operator=(a2, &v7);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
  return 0LL;
}
