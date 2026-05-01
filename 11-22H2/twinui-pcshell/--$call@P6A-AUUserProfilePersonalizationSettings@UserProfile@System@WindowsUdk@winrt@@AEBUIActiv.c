/*
 * XREFs of ??$call@P6A?AUUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@AEBUIActivationFactory@Foundation@Windows@5@@Z@?$factory_cache_entry@UUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@QEAA?A_P$$QEAP6A?AUUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x180215098
 * Callers:
 *     ??0UserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@QEAA@XZ @ 0x1802151FC (--0UserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180087AA4 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1800B3F4C (--$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIActivation.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1802CECBA (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings,winrt::Windows::Foundation::IActivationFactory>::call<winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
        signed __int64 a1,
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v5; // rsi
  _QWORD v7[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v8[32]; // [rsp+40h] [rbp-20h] BYREF
  signed __int64 v9; // [rsp+80h] [rbp+20h] BYREF
  __int64 v10; // [rsp+98h] [rbp+38h] BYREF

  v9 = a1;
  v7[0] = L"WindowsUdk.System.UserProfile.UserProfilePersonalizationSettings";
  v7[1] = 64LL;
  winrt::param::hstring::hstring((winrt::param::hstring *)v8, (__int64)v7);
  winrt::get_activation_factory<winrt::Windows::Foundation::IActivationFactory>(&v9, (__int64)v8);
  v5 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v9, &v10);
  if ( v10 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v10);
  if ( v5 )
  {
    _InterlockedIncrement64(&qword_18098E468);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings,winrt::Windows::Foundation::IActivationFactory>,
            v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098E470);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings,winrt::Windows::Foundation::IActivationFactory>);
    _InterlockedDecrement64(&qword_18098E468);
  }
  else
  {
    (*a3)(a2, &v9);
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v9);
  return a2;
}
