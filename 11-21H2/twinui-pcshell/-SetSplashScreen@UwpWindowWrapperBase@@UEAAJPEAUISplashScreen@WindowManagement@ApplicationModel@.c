/*
 * XREFs of ?SetSplashScreen@UwpWindowWrapperBase@@UEAAJPEAUISplashScreen@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180417E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UISplashScreen@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUISplashScreen@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804092C8 (--4-$com_ptr_t@UISplashScreen@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception.c)
 */

__int64 __fastcall UwpWindowWrapperBase::SetSplashScreen(
        UwpWindowWrapperBase *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::ISplashScreen *a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 224LL))(*((_QWORD *)this + 32));
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::ISplashScreen,wil::err_exception_policy>::operator=(
    (__int64 *)this + 33,
    (__int64)a2);
  return 0LL;
}
