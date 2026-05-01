/*
 * XREFs of ??$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@AEAV?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_returncode_policy@wil@@@wil@@@winrt@@YA?AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@0@AEAIAEBURect@Foundation@50@AEAV?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18002FD14
 * Callers:
 *     ?CreateInBand@XamlExplorerHostShellComponent@@UEAAJIURect@Foundation@Windows@ABI@@PEAPEAUIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@45@@Z @ 0x18002FC30 (-CreateInBand@XamlExplorerHostShellComponent@@UEAAJIURect@Foundation@Windows@ABI@@PEAPEAUIXamlEx.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@KAEBURect@Foundation@56@@Z @ 0x18002FDCC (--0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@KAE.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,unsigned int &,winrt::Windows::Foundation::Rect const &,wil::com_ptr_t<IPrivilegedArrangementOperations,wil::err_returncode_policy> &>(
        _QWORD *a1,
        unsigned int *a2,
        const struct winrt::Windows::Foundation::Rect *a3,
        __int64 *a4)
{
  __int64 *v8; // r14
  _QWORD *v9; // rdi
  __int64 v10; // rbx

  v8 = (__int64 *)operator new(0x60uLL);
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::XamlExplorerHostWindow(
    (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *)v8,
    *a2,
    a3);
  *v8 = (__int64)&winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::`vftable';
  v9 = v8 + 11;
  v10 = *a4;
  if ( v8[11] != *a4 )
  {
    if ( *v9 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v8 + 11);
    *v9 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  *v8 = (__int64)&winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow>::`vftable';
  *a1 = v8 + 2;
  return a1;
}
