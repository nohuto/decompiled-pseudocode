/*
 * XREFs of ??4?$ComPtr@UIPrivilegedPresentationOperations@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1800B36A0
 * Callers:
 *     ?RuntimeClassInitialize@FrameFactory@@QEAAJPEAUIPrivilegedPresentationOperations@@@Z @ 0x1800B3384 (-RuntimeClassInitialize@FrameFactory@@QEAAJPEAUIPrivilegedPresentationOperations@@@Z.c)
 *     ?InitializePrivilegedOperations@XamlExplorerHostShellComponent@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1800B33F0 (-InitializePrivilegedOperations@XamlExplorerHostShellComponent@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?RuntimeClassInitialize@FrameWrapper@@QEAAJPEAUIApplicationFrame@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x18030AB5C (-RuntimeClassInitialize@FrameWrapper@@QEAAJPEAUIApplicationFrame@@PEAUIPrivilegedPresentationOpe.c)
 *     ?RuntimeClassInitialize@XamlExplorerHostWindow@@QEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@@Z @ 0x1804294A0 (-RuntimeClassInitialize@XamlExplorerHostWindow@@QEAAJPEAUIXamlExplorerHostWindowCreatedCallback@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IPrivilegedPresentationOperations>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v5);
  }
  return a1;
}
