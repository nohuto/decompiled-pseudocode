/*
 * XREFs of ??$call@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@?$factory_cache_entry@UFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@UIFlyoutBaseStatics@234567@@impl@winrt@@QEAA?AUFlyoutBase@Primitives@Controls@Xaml@UI@Windows@2@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@Z @ 0x1805B764C
 * Callers:
 *     ?OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1805B9AB0 (-OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805BA8B4 (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIFlyoutBaseStatics@Primitives@Controls@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIFlyoutBaseStatics@Primitives@Controls@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1805B7964 (--$get_activation_factory@UIFlyoutBaseStatics@Primitives@Controls@Xaml@UI@Windows@winrt@@@winrt@.c)
 *     ?GetAttachedFlyout@?$consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics@UIFlyoutBaseStatics@Primitives@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUFlyoutBase@Primitives@Controls@Xaml@UI@Windows@3@AEBUFrameworkElement@7893@@Z @ 0x1805B8D38 (-GetAttachedFlyout@-$consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics@UIFlyoutBase.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase,winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>::call<_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v6; // rax
  char v7; // si
  bool v8; // zf
  __int64 v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v12 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v11,
    L"Windows.UI.Xaml.Controls.Primitives.FlyoutBase",
    46LL);
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>(&v12, v11);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  if ( !v12 )
  {
    v6 = 0LL;
    v10[0] = 0LL;
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  v13 = 0LL;
  (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v13);
  v6 = v13;
  v10[0] = v13;
  if ( !v13 )
    goto LABEL_3;
  v7 = 1;
LABEL_4:
  if ( v6 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v10);
  if ( v7 )
  {
    v10[1] = (__int64)&qword_1807B6D88;
    _InterlockedIncrement64(&qword_1807B6D88);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase,winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B6D90);
    }
    winrt::impl::consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>::GetAttachedFlyout(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase,winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_1807B6D88);
    v8 = v12 == 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>::GetAttachedFlyout(
      &v12,
      a2,
      *a3);
    v8 = v5 == 0LL;
  }
  if ( !v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  return a2;
}
