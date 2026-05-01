/*
 * XREFs of ?StartAppInstallAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0_N1@Z @ 0x180243C14
 * Callers:
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x180245160 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::StartAppInstallAsync(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v4; // rcx
  int v6; // eax
  char v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a1;
  v9 = 0LL;
  v8 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char, __int64 *))(*(_QWORD *)v4 + 152LL))(
         v4,
         *a3,
         *a4,
         0LL,
         v8,
         &v9);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  *a2 = v9;
  return a2;
}
