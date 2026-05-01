/*
 * XREFs of ?CreateShowShellViewOptions@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AUShowShellViewOptions@4UI@WindowsUdk@7@W4ShellView@49WindowsUdk@7@_KUPoint@Foundation@67@AEBUGestureAnimationData@Input@9WindowsUdk@7@@Z @ 0x1807601F8
 * Callers:
 *     ?AnimateView@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXAEBW4ShellView@4UI@WindowsUdk@7@AEBUShellViewCoordinator@49WindowsUdk@7@_KAEBUGestureAnimationData@Input@9WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x18075FDF4 (-AnimateView@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@Q.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_35409324@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180189C7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_35409324@@@details@wil@@QEAAX_NW4Reportin.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$ActivateInstance@UShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUShowShellViewOptions@Shell@UI@WindowsUdk@3@XZ @ 0x180693810 (--$ActivateInstance@UShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@IActivationFactory@Foundat.c)
 *     ??$call@P6A?AUShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@AEBUIActivationFactory@Foundation@Windows@5@@Z@?$factory_cache_entry@UShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@QEAA?A_P$$QEAP6A?AUShowShellViewOptions@Shell@UI@WindowsUdk@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x180694454 (--$call@P6A-AUShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@AEBUIActivationFactory@Foundation@.c)
 *     ?Context@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1806FD8A0 (-Context@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions_ea_1806FD8A0.c)
 *     ??$call@AEAV_lambda_048acaf127f395b888e969740535bc64_@@@?$factory_cache_entry@UShellViewAnimationProperties@Shell@UI@WindowsUdk@winrt@@UIShellViewAnimationPropertiesFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_048acaf127f395b888e969740535bc64_@@@Z @ 0x18075FB90 (--$call@AEAV_lambda_048acaf127f395b888e969740535bc64_@@@-$factory_cache_entry@UShellViewAnimatio.c)
 *     ??R_lambda_048acaf127f395b888e969740535bc64_@@QEBA@AEBUIShellViewAnimationPropertiesFactory@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18075FD30 (--R_lambda_048acaf127f395b888e969740535bc64_@@QEBA@AEBUIShellViewAnimationPropertiesFactory@Shel.c)
 *     ?AnimationProperties@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions2@UShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUShellViewAnimationProperties@Shell@UI@WindowsUdk@3@@Z @ 0x18075FF78 (-AnimationProperties@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions2@UShowShel_ea_18075FF78.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator::CreateShowShellViewOptions(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // rcx
  signed int v10; // eax
  signed int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD v15[4]; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v17[7]; // [rsp+60h] [rbp+7h] BYREF
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v18)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+C8h] [rbp+6Fh] BYREF

  v15[2] = &qword_1809912B8;
  _InterlockedIncrement64(&qword_1809912B8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions>(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions,winrt::Windows::Foundation::IActivationFactory>,
      a1);
    _InterlockedDecrement64(&qword_1809912B8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1809912B8);
    v18 = _lambda_4412af45f4a36015e2ea70df7029dae5_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions,winrt::Windows::Foundation::IActivationFactory>::call<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v18);
  }
  v15[0] = a3;
  v16[0] = v15;
  v16[1] = a5;
  v15[3] = &qword_180991278;
  _InterlockedIncrement64(&qword_180991278);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewAnimationProperties,winrt::WindowsUdk::UI::Shell::IShellViewAnimationPropertiesFactory> )
  {
    _lambda_048acaf127f395b888e969740535bc64_::operator()(
      (__int64)v16,
      (__int64)&a5,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewAnimationProperties,winrt::WindowsUdk::UI::Shell::IShellViewAnimationPropertiesFactory>);
    _InterlockedDecrement64(&qword_180991278);
  }
  else
  {
    _InterlockedDecrement64(&qword_180991278);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShellViewAnimationProperties,winrt::WindowsUdk::UI::Shell::IShellViewAnimationPropertiesFactory>::call<_lambda_048acaf127f395b888e969740535bc64_ &>(
      v9,
      (__int64)&a5,
      (__int64)v16);
  }
  winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions2<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions>::AnimationProperties(
    a1,
    &a5);
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 72LL))(*a1, a4);
  if ( v10 < 0 )
    winrt::throw_hresult(v10);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 56LL))(*a1, 0LL);
  if ( v11 < 0 )
    winrt::throw_hresult(v11);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_35409324>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_35409324>::GetImpl'::`2'::impl,
    1u,
    v12,
    v13);
  if ( a2 == 2 )
  {
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v17, L"Drag", 4);
    winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::Context(
      a1,
      v17);
  }
  if ( a5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&a5);
  return a1;
}
