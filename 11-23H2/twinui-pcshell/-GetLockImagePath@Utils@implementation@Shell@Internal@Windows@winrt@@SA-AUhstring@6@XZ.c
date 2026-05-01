/*
 * XREFs of ?GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x18072D9FC
 * Callers:
 *     ?ShowPhysicalDeviceAccessTransitionScreen@BootPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1802813F4 (-ShowPhysicalDeviceAccessTransitionScreen@BootPhysicalDeviceAccessState@implementation@Shell@Int.c)
 *     ?GetBackgroundImagePath@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@EEBA?AUhstring@6@XZ @ 0x18072D670 (-GetBackgroundImagePath@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@EEBA-.c)
 *     ?Execute@BootConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18072F140 (-Execute@BootConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_ptr@.c)
 *     ?GetBackgroundImagePath@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@MEBA?AUhstring@6@XZ @ 0x18072F800 (-GetBackgroundImagePath@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@MEBA-.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@P6A?AUUri@Foundation@Windows@winrt@@AEBUILockScreenStatics@UserProfile@System@34@@Z@?$factory_cache_entry@ULockScreen@UserProfile@System@Windows@winrt@@UILockScreenStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUUri@Foundation@Windows@2@AEBUILockScreenStatics@UserProfile@System@52@@Z@Z @ 0x18072C848 (--$call@P6A-AUUri@Foundation@Windows@winrt@@AEBUILockScreenStatics@UserProfile@System@34@@Z@-$fa.c)
 */

// Hidden C++ exception states: #wind=2
const struct winrt::Windows::System::UserProfile::ILockScreenStatics *(__fastcall **__fastcall winrt::Windows::Internal::Shell::implementation::Utils::GetLockImagePath(
        const struct winrt::Windows::System::UserProfile::ILockScreenStatics *(__fastcall **a1)(const struct winrt::Windows::System::UserProfile::ILockScreenStatics *a1, __int64 a2)))(const struct winrt::Windows::System::UserProfile::ILockScreenStatics *a1, __int64 a2)
{
  signed int v2; // eax
  signed int v3; // eax
  __int64 v5; // [rsp+48h] [rbp+18h] BYREF
  __int64 v6; // [rsp+50h] [rbp+20h] BYREF
  const struct winrt::Windows::System::UserProfile::ILockScreenStatics *(__fastcall *v7)(const struct winrt::Windows::System::UserProfile::ILockScreenStatics *, __int64); // [rsp+58h] [rbp+28h] BYREF

  _InterlockedIncrement64(&qword_180992298);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::UserProfile::LockScreen,winrt::Windows::System::UserProfile::ILockScreenStatics> )
  {
    v6 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::System::UserProfile::LockScreen,winrt::Windows::System::UserProfile::ILockScreenStatics>
                                                       + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::Windows::System::UserProfile::LockScreen,winrt::Windows::System::UserProfile::ILockScreenStatics>,
           &v6);
    if ( v2 < 0 )
      winrt::throw_hresult(v2);
    v5 = v6;
    _InterlockedDecrement64(&qword_180992298);
  }
  else
  {
    _InterlockedDecrement64(&qword_180992298);
    v7 = _lambda_d849226b199bab12e5c80ba03c694f17_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::System::UserProfile::LockScreen,winrt::Windows::System::UserProfile::ILockScreenStatics>::call<winrt::Windows::Foundation::Uri (*)(winrt::Windows::System::UserProfile::ILockScreenStatics const &)>(
      0LL,
      (__int64)&v5,
      (void (__fastcall **)(__int64, __int64 *))&v7);
  }
  v7 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(v5, &v7);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v7;
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  return a1;
}
