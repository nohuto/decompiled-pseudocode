/*
 * XREFs of ?SetSplashScreen@WindowWrapperBase@@UEAAJPEAUISplashScreen@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804ECF80
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@UISplashScreen@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUISplashScreen@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801A0064 (--4-$com_ptr_t@UISplashScreen@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::SetSplashScreen(
        WindowWrapperBase *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::ISplashScreen *a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 216LL))(*((_QWORD *)this + 33));
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::ISplashScreen,wil::err_exception_policy>::operator=(
    (__int64 *)this + 34,
    (__int64)a2);
  return 0LL;
}
