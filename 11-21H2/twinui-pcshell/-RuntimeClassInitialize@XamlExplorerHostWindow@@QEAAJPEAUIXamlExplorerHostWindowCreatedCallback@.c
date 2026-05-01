/*
 * XREFs of ?RuntimeClassInitialize@XamlExplorerHostWindow@@QEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@@Z @ 0x1804294A0
 * Callers:
 *     ??$MakeAndInitialize@VXamlExplorerHostWindow@@V1@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@Z @ 0x18041F6D4 (--$MakeAndInitialize@VXamlExplorerHostWindow@@V1@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIPrivilegedPresentationOperations@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1800B36A0 (--4-$ComPtr@UIPrivilegedPresentationOperations@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrivilegedPrese.c)
 *     ??4?$ComPtr@UIXamlExplorerHost@@@WRL@Microsoft@@QEAAAEAV012@PEAUIXamlExplorerHost@@@Z @ 0x180116A6C (--4-$ComPtr@UIXamlExplorerHost@@@WRL@Microsoft@@QEAAAEAV012@PEAUIXamlExplorerHost@@@Z.c)
 */

__int64 __fastcall XamlExplorerHostWindow::RuntimeClassInitialize(
        XamlExplorerHostWindow *this,
        struct IXamlExplorerHostWindowCreatedCallback *a2,
        int a3,
        struct IPrivilegedPresentationOperations *a4,
        struct IXamlExplorerHost *a5)
{
  struct IXamlExplorerHost *v9; // rdx
  struct IXamlExplorerHostWindowCreatedCallback *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct IXamlExplorerHostWindowCreatedCallback **)this + 6) != a2 )
  {
    v11 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v11 = (struct IXamlExplorerHostWindowCreatedCallback *)*((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  }
  Microsoft::WRL::ComPtr<IPrivilegedPresentationOperations>::operator=((__int64 *)this + 7, (__int64)a4);
  v9 = a5;
  *((_DWORD *)this + 20) = a3;
  Microsoft::WRL::ComPtr<IXamlExplorerHost>::operator=((__int64 *)this + 8, (__int64)v9);
  return 0LL;
}
