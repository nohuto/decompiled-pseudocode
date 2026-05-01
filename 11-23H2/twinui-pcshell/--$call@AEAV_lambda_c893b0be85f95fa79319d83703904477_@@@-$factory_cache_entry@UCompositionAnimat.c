/*
 * XREFs of ??$call@AEAV_lambda_c893b0be85f95fa79319d83703904477_@@@?$factory_cache_entry@UCompositionAnimation@Composition@UI@WindowsUdk@winrt@@UICompositionAnimationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c893b0be85f95fa79319d83703904477_@@@Z @ 0x18077068C
 * Callers:
 *     ??$call_factory@UCompositionAnimation@Composition@UI@WindowsUdk@winrt@@UICompositionAnimationStatics@2345@V_lambda_c893b0be85f95fa79319d83703904477_@@@impl@winrt@@YA?A_P$$QEAV_lambda_c893b0be85f95fa79319d83703904477_@@@Z @ 0x180770830 (--$call_factory@UCompositionAnimation@Composition@UI@WindowsUdk@winrt@@UICompositionAnimationSta.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_activation_factory@UICompositionAnimationStatics@Composition@UI@WindowsUdk@winrt@@@winrt@@YA?AUICompositionAnimationStatics@Composition@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180770F58 (--$get_activation_factory@UICompositionAnimationStatics@Composition@UI@WindowsUdk@winrt@@@winrt@.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>::call<_lambda_c893b0be85f95fa79319d83703904477_ &>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rbx
  __int128 *v4; // r8
  _QWORD *v5; // rdx
  __int64 v6; // rax
  signed int v7; // eax
  char v8; // di
  __int128 *v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rax
  signed int v12; // eax
  __int64 v14[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v15; // [rsp+40h] [rbp-40h] BYREF
  __int128 v16; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v17[32]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+30h] BYREF
  __int64 *v20; // [rsp+B8h] [rbp+38h] BYREF

  v18 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v17,
    L"WindowsUdk.UI.Composition.CompositionAnimation",
    46);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>(&v20, v17);
  v3 = v20;
  if ( v20
    && (v19 = 0LL,
        (*(void (__fastcall **)(__int64 *, __int64 *, __int64 *))*v20)(
          v20,
          &winrt::impl::guid_v<winrt::impl::IAgileObject>,
          &v19),
        (v14[0] = v19) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v14);
    v14[1] = (__int64)&qword_180991918;
    _InterlockedIncrement64(&qword_180991918);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>,
            (signed __int64)v20,
            0LL) )
    {
      v20 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180991920);
    }
    v4 = (__int128 *)a2[1];
    v5 = (_QWORD *)*a2;
    LOBYTE(v18) = 0;
    v6 = *(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>;
    v15 = *v4;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, __int64 *))(v6 + 48))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>,
           *v5,
           &v15,
           &v18);
    if ( v7 < 0 )
      winrt::throw_hresult(v7);
    v8 = v18;
    _InterlockedDecrement64(&qword_180991918);
    v3 = v20;
  }
  else
  {
    v9 = (__int128 *)a2[1];
    v10 = (_QWORD *)*a2;
    LOBYTE(v19) = 0;
    v11 = *v3;
    v16 = *v9;
    v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *, __int64 *))(v11 + 48))(v3, *v10, &v16, &v19);
    if ( v12 < 0 )
      winrt::throw_hresult(v12);
    v8 = v19;
  }
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
  return v8;
}
