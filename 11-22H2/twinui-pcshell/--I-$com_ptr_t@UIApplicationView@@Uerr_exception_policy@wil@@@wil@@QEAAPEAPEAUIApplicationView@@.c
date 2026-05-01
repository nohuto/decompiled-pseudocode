/*
 * XREFs of ??I?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAAPEAPEAUIApplicationView@@XZ @ 0x18038BE08
 * Callers:
 *     ?GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@_K@Z @ 0x18006C120 (-GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@_.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IApplicationView,wil::err_exception_policy>::operator&(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
