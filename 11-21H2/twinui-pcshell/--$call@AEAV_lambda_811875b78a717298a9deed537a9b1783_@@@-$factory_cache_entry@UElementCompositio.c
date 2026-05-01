/*
 * XREFs of ??$call@AEAV_lambda_811875b78a717298a9deed537a9b1783_@@@?$factory_cache_entry@UElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@UIElementCompositionPreviewStatics2@23456@@impl@winrt@@QEAAXAEAV_lambda_811875b78a717298a9deed537a9b1783_@@@Z @ 0x180605F2C
 * Callers:
 *     ?CreateAnimation@VirtualDesktopSwitcherHost@@AEAA?AV?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@AEBM0AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@AEBU_GUID@@AEBUfloat2@Numerics@Foundation@Windows@winrt@@3@Z @ 0x180608BE4 (-CreateAnimation@VirtualDesktopSwitcherHost@@AEAA-AV-$tuple@UScalarKeyFrameAnimation@Composition.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_activation_factory@UIElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1806065E0 (--$get_activation_factory@UIElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@@wi.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>::call<_lambda_811875b78a717298a9deed537a9b1783_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        _QWORD **a2)
{
  __int64 v3; // r8
  void (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v5; // rax
  char v6; // di
  signed int v7; // eax
  signed int v8; // eax
  _BYTE v9[40]; // [rsp+28h] [rbp-28h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF
  __int64 v12; // [rsp+88h] [rbp+38h] BYREF

  v10 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v9,
    L"Windows.UI.Xaml.Hosting.ElementCompositionPreview",
    49LL);
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>(&v10, v9);
  v4 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( !v10 )
  {
    v5 = 0LL;
    v12 = 0LL;
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  v11 = 0LL;
  (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11);
  v5 = v11;
  v12 = v11;
  if ( !v11 )
    goto LABEL_3;
  v6 = 1;
LABEL_4:
  if ( v5 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v12);
  if ( v6 )
  {
    _InterlockedIncrement64(&qword_1807B6648);
    v4 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B6650);
      v4 = 0LL;
    }
    LOBYTE(v3) = *(_BYTE *)a2[1];
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>
                                                             + 64LL))(
           winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>,
           **a2,
           v3);
    if ( v8 < 0 )
      winrt::throw_hresult(v8);
    _InterlockedDecrement64(&qword_1807B6648);
  }
  else
  {
    LOBYTE(v3) = *(_BYTE *)a2[1];
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))(*v4)[8])(v4, **a2, v3);
    if ( v7 < 0 )
      winrt::throw_hresult(v7);
  }
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
}
