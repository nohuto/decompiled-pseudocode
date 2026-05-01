/*
 * XREFs of ??$call@P6A?AUUri@Foundation@Windows@winrt@@AEBUILockScreenStatics@UserProfile@System@34@@Z@?$factory_cache_entry@ULockScreen@UserProfile@System@Windows@winrt@@UILockScreenStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUUri@Foundation@Windows@2@AEBUILockScreenStatics@UserProfile@System@52@@Z@Z @ 0x18072C848
 * Callers:
 *     ?GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x18072D9FC (-GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UILockScreenStatics@UserProfile@System@Windows@winrt@@@winrt@@YA?AUILockScreenStatics@UserProfile@System@Windows@0@AEBUhstring@param@0@@Z @ 0x18072CA50 (--$get_activation_factory@UILockScreenStatics@UserProfile@System@Windows@winrt@@@winrt@@YA-AUILo.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::System::UserProfile::LockScreen,winrt::Windows::System::UserProfile::ILockScreenStatics>::call<winrt::Windows::Foundation::Uri (*)(winrt::Windows::System::UserProfile::ILockScreenStatics const &)>(
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
    L"Windows.System.UserProfile.LockScreen",
    37);
  winrt::get_activation_factory<winrt::Windows::System::UserProfile::ILockScreenStatics>(&v8, v7);
  if ( v8 && (v9 = 0LL, (**v8)(v8, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v9), (v6[0] = v9) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_180992298;
    _InterlockedIncrement64(&qword_180992298);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::System::UserProfile::LockScreen,winrt::Windows::System::UserProfile::ILockScreenStatics>,
            (signed __int64)v8,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1809922A0);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::UserProfile::LockScreen,winrt::Windows::System::UserProfile::ILockScreenStatics>);
    _InterlockedDecrement64(&qword_180992298);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v8);
  }
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a2;
}
