/*
 * XREFs of ??0AppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x180694F30
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x180245160 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$ActivateInstance@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@23@XZ @ 0x180693760 (--$ActivateInstance@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 *     ??$call@P6A?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@AEBUIActivationFactory@Foundation@67@@Z@?$factory_cache_entry@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@QEAA?A_P$$QEAP6A?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@2@AEBUIActivationFactory@Foundation@82@@Z@Z @ 0x1806941B4 (--$call@P6A-AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@AEB.c)
 */

winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager *__fastcall winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager::AppInstallManager(
        winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager *this)
{
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_180991F88);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_180991F88);
  }
  else
  {
    _InterlockedDecrement64(&qword_180991F88);
    v3 = _lambda_145d7b08a85782a985a0b0a38cc4c355_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)this,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return this;
}
