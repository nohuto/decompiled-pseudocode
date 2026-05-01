/*
 * XREFs of ??0?$com_ptr_t@UIPrivilegedPresentationOperations@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1800634E4
 * Callers:
 *     ??0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x180064220 (--0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvid.c)
 *     ?GetPresentationOperations@UwpWindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIPrivilegedPresentationOperations@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1803EE1B0 (-GetPresentationOperations@UwpWindowEventDispatcher@@UEAA-AV-$com_ptr_t@UIPrivilegedPresentation.c)
 *     ??0ApplicationFlyoutView@@QEAA@PEAUIPrivilegedPresentationOperations@@PEAUIInputHostLayout@@$$QEAV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@PEBG@Z @ 0x1805D21D4 (--0ApplicationFlyoutView@@QEAA@PEAUIPrivilegedPresentationOperations@@PEAUIInputHostLayout@@$$QE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IPrivilegedPresentationOperations,wil::err_exception_policy>::com_ptr_t<IPrivilegedPresentationOperations,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
