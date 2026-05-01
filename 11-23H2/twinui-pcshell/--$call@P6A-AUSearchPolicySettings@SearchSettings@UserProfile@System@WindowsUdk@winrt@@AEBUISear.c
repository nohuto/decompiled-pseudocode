/*
 * XREFs of ??$call@P6A?AUSearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@AEBUISearchPolicySettingsStatics@23456@@Z@?$factory_cache_entry@USearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@UISearchPolicySettingsStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUSearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@2@AEBUISearchPolicySettingsStatics@45672@@Z@Z @ 0x180462DF0
 * Callers:
 *     ?ShouldInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x18046A628 (-ShouldInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAA_NXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UISearchPolicySettingsStatics@SearchSettings@UserProfile@System@WindowsUdk@winrt@@@winrt@@YA?AUISearchPolicySettingsStatics@SearchSettings@UserProfile@System@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180462F6C (--$get_activation_factory@UISearchPolicySettingsStatics@SearchSettings@UserProfile@System@Window.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::UserProfile::SearchSettings::SearchPolicySettings,winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics>::call<winrt::WindowsUdk::System::UserProfile::SearchSettings::SearchPolicySettings (*)(winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v6[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+10h] BYREF
  __int64 v9; // [rsp+88h] [rbp+28h] BYREF

  v8 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v7,
    L"WindowsUdk.System.UserProfile.SearchSettings.SearchPolicySettings",
    65);
  winrt::get_activation_factory<winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics>(
    &v8,
    v7);
  if ( v8 && (v9 = 0LL, (**v8)(v8, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v9), (v6[0] = v9) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_180991218;
    _InterlockedIncrement64(&qword_180991218);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::UserProfile::SearchSettings::SearchPolicySettings,winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics>,
            (signed __int64)v8,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180991220);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::UserProfile::SearchSettings::SearchPolicySettings,winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics>);
    _InterlockedDecrement64(&qword_180991218);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v8);
  }
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a2;
}
