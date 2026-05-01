/*
 * XREFs of _lambda_ead74eb18ddaf5d60afd1f95853bb976_::_lambda_ead74eb18ddaf5d60afd1f95853bb976_ @ 0x1801D73D8
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1801D8C10 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@AEBU012@@Z @ 0x18034C634 (--0resume_apartment_context@impl@winrt@@QEAA@AEBU012@@Z.c)
 *     ??0?$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1805D81C0 (--0-$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall lambda_ead74eb18ddaf5d60afd1f95853bb976_::_lambda_ead74eb18ddaf5d60afd1f95853bb976_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        struct winrt::impl::resume_apartment_context *a6)
{
  _QWORD *v7; // r10

  *(_QWORD *)a1 = a2;
  wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(
    a1 + 8,
    a3);
  *(_QWORD *)(a1 + 16) = *v7;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  *(_OWORD *)(a1 + 24) = *a5;
  winrt::impl::resume_apartment_context::resume_apartment_context(
    (winrt::impl::resume_apartment_context *)(a1 + 40),
    a6);
  return a1;
}
