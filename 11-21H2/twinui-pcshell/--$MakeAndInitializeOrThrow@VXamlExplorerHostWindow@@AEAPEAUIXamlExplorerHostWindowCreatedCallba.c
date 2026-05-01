/*
 * XREFs of ??$MakeAndInitializeOrThrow@VXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@wil@@YA?AV?$ComPtr@VXamlExplorerHostWindow@@@WRL@Microsoft@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@Z @ 0x18041F780
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1804204C4 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VXamlExplorerHostWindow@@V1@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@Z @ 0x18041F6D4 (--$MakeAndInitialize@VXamlExplorerHostWindow@@V1@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAndInitializeOrThrow<XamlExplorerHostWindow,IXamlExplorerHostWindowCreatedCallback * &,unsigned long &,IPrivilegedPresentationOperations * &,IXamlExplorerHost * &>(
        __int64 *a1,
        struct IXamlExplorerHostWindowCreatedCallback **a2,
        unsigned int *a3,
        struct IPrivilegedPresentationOperations **a4,
        struct IXamlExplorerHost **a5)
{
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<XamlExplorerHostWindow,XamlExplorerHostWindow,IXamlExplorerHostWindowCreatedCallback * &,unsigned long &,IPrivilegedPresentationOperations * &,IXamlExplorerHost * &>(
         (XamlExplorerHostWindow **)a1,
         a2,
         a3,
         a4,
         a5);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x24,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v9,
      v11);
  return a1;
}
