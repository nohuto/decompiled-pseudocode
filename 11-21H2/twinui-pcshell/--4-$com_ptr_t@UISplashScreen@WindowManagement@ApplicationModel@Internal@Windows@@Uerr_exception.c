/*
 * XREFs of ??4?$com_ptr_t@UISplashScreen@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUISplashScreen@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804092C8
 * Callers:
 *     ?SetSplashScreen@UwpWindowWrapperBase@@UEAAJPEAUISplashScreen@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180417E30 (-SetSplashScreen@UwpWindowWrapperBase@@UEAAJPEAUISplashScreen@WindowManagement@ApplicationModel@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
