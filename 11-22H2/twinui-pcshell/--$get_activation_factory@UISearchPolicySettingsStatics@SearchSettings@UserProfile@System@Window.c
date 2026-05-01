/*
 * XREFs of ??$get_activation_factory@UISearchPolicySettingsStatics@SearchSettings@UserProfile@System@WindowsUdk@winrt@@@winrt@@YA?AUISearchPolicySettingsStatics@SearchSettings@UserProfile@System@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180462F6C
 * Callers:
 *     ??$call@P6A?AUSearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@AEBUISearchPolicySettingsStatics@23456@@Z@?$factory_cache_entry@USearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@UISearchPolicySettingsStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUSearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@2@AEBUISearchPolicySettingsStatics@45672@@Z@Z @ 0x180462DF0 (--$call@P6A-AUSearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@AEBUISear.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics>(
        _QWORD *a1,
        _QWORD *a2)
{
  signed int v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v4,
    a2,
    (__int64)&winrt::impl::guid_v<winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics>,
    (__int64)&v5);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a1 = v5;
  return a1;
}
