/*
 * XREFs of ?StashWindowingEnvironmentSettings@UwpWindowWrapperBase@@UEAAXPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180418440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UwpWindowWrapperBase::StashWindowingEnvironmentSettings(
        UwpWindowWrapperBase *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 224LL))(*((_QWORD *)this + 32));
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>::operator=(
    (__int64 *)this + 15,
    (__int64)a2);
}
