/*
 * XREFs of ??$call@AEAV_lambda_628681d27142a38a5eac87ccb28ad64e_@@@?$factory_cache_entry@URectHelper@Xaml@UI@Windows@winrt@@UIRectHelperStatics@2345@@impl@winrt@@QEAA?AURect@Foundation@Windows@2@AEAV_lambda_628681d27142a38a5eac87ccb28ad64e_@@@Z @ 0x1805B2E44
 * Callers:
 *     ??$call_factory@URectHelper@Xaml@UI@Windows@winrt@@UIRectHelperStatics@2345@V_lambda_628681d27142a38a5eac87ccb28ad64e_@@@impl@winrt@@YA?AURect@Foundation@Windows@1@$$QEAV_lambda_628681d27142a38a5eac87ccb28ad64e_@@@Z @ 0x1805B3034 (--$call_factory@URectHelper@Xaml@UI@Windows@winrt@@UIRectHelperStatics@2345@V_lambda_628681d2714.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_activation_factory@UIRectHelperStatics@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIRectHelperStatics@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1805B3210 (--$get_activation_factory@UIRectHelperStatics@Xaml@UI@Windows@winrt@@@winrt@@YA-AUIRectHelperSta.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::RectHelper,winrt::Windows::UI::Xaml::IRectHelperStatics>::call<_lambda_628681d27142a38a5eac87ccb28ad64e_ &>(
        __int64 *a1,
        _OWORD *a2,
        __int128 **a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  char v7; // si
  __int128 *v8; // rcx
  __int128 *v9; // rdx
  __int64 v10; // rax
  signed int v11; // eax
  __int64 *v12; // rbx
  __int128 *v13; // rdx
  __int128 *v14; // r8
  __int64 v15; // rax
  signed int v16; // eax
  __int128 v18; // [rsp+38h] [rbp-29h] BYREF
  __int64 *v19; // [rsp+48h] [rbp-19h]
  __int128 v20; // [rsp+58h] [rbp-9h] BYREF
  __int128 v21; // [rsp+68h] [rbp+7h] BYREF
  __int128 v22; // [rsp+78h] [rbp+17h] BYREF
  _BYTE v23[32]; // [rsp+88h] [rbp+27h] BYREF
  __int64 *v24; // [rsp+C8h] [rbp+67h] BYREF
  __int64 v25; // [rsp+E0h] [rbp+7Fh] BYREF

  v24 = a1;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v23, L"Windows.UI.Xaml.RectHelper", 26LL);
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::IRectHelperStatics>(&v24, v23);
  v5 = v24;
  if ( !v24 )
  {
    v6 = 0LL;
    *(_QWORD *)&v18 = 0LL;
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  v25 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64 *, __int64 *))*v24)(
    v24,
    &winrt::impl::guid_v<winrt::impl::IAgileObject>,
    &v25);
  v6 = v25;
  *(_QWORD *)&v18 = v25;
  if ( !v25 )
    goto LABEL_3;
  v7 = 1;
LABEL_4:
  if ( v6 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&v18);
  if ( !v7 )
  {
    v8 = a3[1];
    v9 = *a3;
    *a2 = 0LL;
    v10 = *v5;
    v18 = *v8;
    v20 = *v9;
    v11 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int128 *, _OWORD *))(v10 + 152))(v5, &v20, &v18, a2);
    if ( v11 < 0 )
      winrt::throw_hresult(v11);
LABEL_17:
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
    return a2;
  }
  v19 = &qword_1807B6628;
  _InterlockedIncrement64(&qword_1807B6628);
  v12 = v24;
  if ( !_InterlockedCompareExchange64(
          &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::RectHelper,winrt::Windows::UI::Xaml::IRectHelperStatics>,
          (signed __int64)v24,
          0LL) )
  {
    v24 = 0LL;
    WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B6630);
    v12 = 0LL;
  }
  v13 = a3[1];
  v14 = *a3;
  *a2 = 0LL;
  v15 = *(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::RectHelper,winrt::Windows::UI::Xaml::IRectHelperStatics>;
  v21 = *v13;
  v22 = *v14;
  v16 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *, _OWORD *))(v15 + 152))(
          winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::RectHelper,winrt::Windows::UI::Xaml::IRectHelperStatics>,
          &v22,
          &v21,
          a2);
  if ( v16 < 0 )
    winrt::throw_hresult(v16);
  _InterlockedDecrement64(&qword_1807B6628);
  if ( v12 )
    goto LABEL_17;
  return a2;
}
