/*
 * XREFs of ??0?$com_ptr_t@UIPrivilegedPresentationOperations@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1804BBB90
 * Callers:
 *     ?GetPresentationOperations@WindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIPrivilegedPresentationOperations@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804C58B0 (-GetPresentationOperations@WindowEventDispatcher@@UEAA-AV-$com_ptr_t@UIPrivilegedPresentationOpe.c)
 *     ??0SnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@QEAA@_KAEBURect@Foundation@56@PEAUIPrivilegedPresentationOperations@@@Z @ 0x180688684 (--0SnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@QEAA@_KAEBURect@.c)
 *     ??0ApplicationFlyoutView@@QEAA@PEAUIPrivilegedPresentationOperations@@PEAUIInputHostLayout@@$$QEAV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@PEBG@Z @ 0x1806C4B04 (--0ApplicationFlyoutView@@QEAA@PEAUIPrivilegedPresentationOperations@@PEAUIInputHostLayout@@$$QE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
