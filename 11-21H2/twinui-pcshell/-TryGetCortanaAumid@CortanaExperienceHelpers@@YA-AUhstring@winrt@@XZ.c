/*
 * XREFs of ?TryGetCortanaAumid@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x18038862C
 * Callers:
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x180387584 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 * Callees:
 *     ??$call@AEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@2@AEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@Z @ 0x180066EF4 (--$call@AEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?Find@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@3@AEBUhstring@param@3@AEBW4AppExtensionOptions@5673@@Z @ 0x1800F5304 (-Find@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionSta.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?ApplicationUserModelId@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800F718C (-ApplicationUserModelId@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppE.c)
 *     ?CortanaStoreApp_AppNotFoundWithExpectedExtension@CortanaProactiveTelemetry@@SAXXZ @ 0x180386DDC (-CortanaStoreApp_AppNotFoundWithExpectedExtension@CortanaProactiveTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CortanaExperienceHelpers::TryGetCortanaAumid(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v3; // rcx
  _QWORD v5[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v6[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v7; // [rsp+68h] [rbp+18h] BYREF
  __int64 v8; // [rsp+70h] [rbp+20h] BYREF
  __int64 *v9; // [rsp+78h] [rbp+28h]

  v7 = 1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v6,
    L"com.microsoft.windows.app.cortana",
    33LL);
  v5[0] = v6;
  v5[1] = &v7;
  v9 = &qword_1807B40F8;
  _InterlockedIncrement64(&qword_1807B40F8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics> )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::Find(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
      &v8,
      v6,
      &v7);
    _InterlockedDecrement64(&qword_1807B40F8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B40F8);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_6d00043e8e6068abd62a830dd09eee93_ &>(
      v2,
      (__int64)&v8,
      v5);
  }
  if ( v8 )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtension>::ApplicationUserModelId(
      &v8,
      a1);
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  }
  else
  {
    CortanaProactiveTelemetry::CortanaStoreApp_AppNotFoundWithExpectedExtension(v3);
    *a1 = 0LL;
    *a1 = 0LL;
  }
  return a1;
}
