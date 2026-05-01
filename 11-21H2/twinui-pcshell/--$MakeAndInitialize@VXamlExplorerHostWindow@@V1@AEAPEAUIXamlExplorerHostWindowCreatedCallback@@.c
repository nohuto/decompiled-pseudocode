/*
 * XREFs of ??$MakeAndInitialize@VXamlExplorerHostWindow@@V1@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@Z @ 0x18041F6D4
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@wil@@YA?AV?$ComPtr@VXamlExplorerHostWindow@@@WRL@Microsoft@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@Z @ 0x18041F780 (--$MakeAndInitializeOrThrow@VXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallba.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0XamlExplorerHostWindow@@QEAA@XZ @ 0x18041FC40 (--0XamlExplorerHostWindow@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@XamlExplorerHostWindow@@QEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@@Z @ 0x1804294A0 (-RuntimeClassInitialize@XamlExplorerHostWindow@@QEAAJPEAUIXamlExplorerHostWindowCreatedCallback@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlExplorerHostWindow,XamlExplorerHostWindow,IXamlExplorerHostWindowCreatedCallback * &,unsigned long &,IPrivilegedPresentationOperations * &,IXamlExplorerHost * &>(
        XamlExplorerHostWindow **a1,
        struct IXamlExplorerHostWindowCreatedCallback **a2,
        unsigned int *a3,
        struct IPrivilegedPresentationOperations **a4,
        struct IXamlExplorerHost **a5)
{
  XamlExplorerHostWindow *v9; // rax
  int v10; // ebx
  XamlExplorerHostWindow *v11; // rsi
  XamlExplorerHostWindow *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (XamlExplorerHostWindow *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = XamlExplorerHostWindow::XamlExplorerHostWindow(v9);
    v13 = v11;
    v10 = XamlExplorerHostWindow::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5);
    if ( v10 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
      *a1 = v11;
      v10 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
