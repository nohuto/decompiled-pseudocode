/*
 * XREFs of ??0?$com_ptr_t@UIXamlExplorerHostComponent@XamlExplorerHost@Shell@Internal@Windows@ABI@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIXamlExplorerHostComponent@XamlExplorerHost@Shell@Internal@Windows@ABI@@@Z @ 0x18017F66C
 * Callers:
 *     XamlExplorerHostShellComponent::WaitForInitializationAsyncHelper$_ResumeCoro$1 @ 0x1801A93A0 (XamlExplorerHostShellComponent--WaitForInitializationAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostComponent,wil::err_exception_policy>::com_ptr_t<ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostComponent,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
