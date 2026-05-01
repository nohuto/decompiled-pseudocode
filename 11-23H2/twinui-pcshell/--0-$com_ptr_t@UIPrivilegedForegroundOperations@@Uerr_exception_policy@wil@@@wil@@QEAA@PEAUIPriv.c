/*
 * XREFs of ??0?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180065F48
 * Callers:
 *     ?GetForegroundOperations@UwpWindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180065F20 (-GetForegroundOperations@UwpWindowEventDispatcher@@UEAA-AV-$com_ptr_t@UIPrivilegedForegroundOper.c)
 *     ?GetForegroundOperations@WindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1802D7650 (-GetForegroundOperations@WindowEventDispatcher@@UEAA-AV-$com_ptr_t@UIPrivilegedForegroundOperati.c)
 *     ??$make_self@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@45@AEAV?$ComPtr@UIApplicationFrameFactory@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@@winrt@@YA?AU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@0@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAV?$ComPtr@UIApplicationFrameFactory@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@89@@Z @ 0x1803F7CD0 (--$make_self@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAP.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
