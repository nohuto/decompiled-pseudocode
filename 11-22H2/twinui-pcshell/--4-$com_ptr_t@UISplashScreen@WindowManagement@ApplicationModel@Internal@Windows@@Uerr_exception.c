/*
 * XREFs of ??4?$com_ptr_t@UISplashScreen@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUISplashScreen@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801A0064
 * Callers:
 *     ?SetSplashScreen@UwpWindowWrapperBase@@UEAAJPEAUISplashScreen@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18019FFF0 (-SetSplashScreen@UwpWindowWrapperBase@@UEAAJPEAUISplashScreen@WindowManagement@ApplicationModel@.c)
 *     ?SetSplashScreen@WindowWrapperBase@@UEAAJPEAUISplashScreen@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804ECF80 (-SetSplashScreen@WindowWrapperBase@@UEAAJPEAUISplashScreen@WindowManagement@ApplicationModel@Int.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::ISplashScreen,wil::err_exception_policy>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return a1;
}
