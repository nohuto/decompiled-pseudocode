/*
 * XREFs of _lambda_66881fa05591413bac4099d171e5aec0_::_lambda_66881fa05591413bac4099d171e5aec0_ @ 0x1801D7390
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1801D8C10 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@AEBU012@@Z @ 0x18034C634 (--0resume_apartment_context@impl@winrt@@QEAA@AEBU012@@Z.c)
 *     ??0?$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1805D81C0 (--0-$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall lambda_66881fa05591413bac4099d171e5aec0_::_lambda_66881fa05591413bac4099d171e5aec0_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct winrt::impl::resume_apartment_context *a5)
{
  _QWORD *v6; // r10

  *a1 = a2;
  wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(
    a1 + 1,
    a3);
  a1[2] = *v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 2);
  winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)(a1 + 3), a5);
  return a1;
}
