/*
 * XREFs of ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0@Z @ 0x1806F351C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$1 @ 0x180258B90 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$1 @ 0x180259740 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMetaDataAsync$_R.c)
 * Callees:
 *     ??$call@AEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@?$factory_cache_entry@UExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIExtensionFactoryStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@Z @ 0x1806EFDD8 (--$call@AEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@-$factory_cache_entry@UExtensionFactory@.c)
 *     ?GetFactory@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x1806F34B4 (-GetFactory@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactorySt_ea_1806F34B4.c)
 */

const struct winrt::param::hstring *__fastcall winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory::GetFactory(
        const struct winrt::param::hstring *a1,
        const struct winrt::param::hstring *a2,
        _QWORD *a3)
{
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  _InterlockedIncrement64(&qword_18098E288);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics> )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::GetFactory(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>,
      a1,
      a2,
      a3);
    _InterlockedDecrement64(&qword_18098E288);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E288);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::call<_lambda_7b7c9298bfeaa6f21443744179c3c395_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      v5);
  }
  return a1;
}
