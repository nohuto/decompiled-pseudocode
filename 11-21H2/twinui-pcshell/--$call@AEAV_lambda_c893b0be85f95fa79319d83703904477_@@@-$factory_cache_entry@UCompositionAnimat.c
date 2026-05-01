/*
 * XREFs of ??$call@AEAV_lambda_c893b0be85f95fa79319d83703904477_@@@?$factory_cache_entry@UCompositionAnimation@Composition@UI@WindowsUdk@winrt@@UICompositionAnimationStatics@2345@@impl@winrt@@QEAA_NAEAV_lambda_c893b0be85f95fa79319d83703904477_@@@Z @ 0x1806060BC
 * Callers:
 *     ??$call_factory@UCompositionAnimation@Composition@UI@WindowsUdk@winrt@@UICompositionAnimationStatics@2345@V_lambda_c893b0be85f95fa79319d83703904477_@@@impl@winrt@@YA_N$$QEAV_lambda_c893b0be85f95fa79319d83703904477_@@@Z @ 0x18060628C (--$call_factory@UCompositionAnimation@Composition@UI@WindowsUdk@winrt@@UICompositionAnimationSta.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_activation_factory@UICompositionAnimationStatics@Composition@UI@WindowsUdk@winrt@@@winrt@@YA?AUICompositionAnimationStatics@Composition@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18060659C (--$get_activation_factory@UICompositionAnimationStatics@Composition@UI@WindowsUdk@winrt@@@winrt@.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>::call<_lambda_c893b0be85f95fa79319d83703904477_ &>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rax
  char v5; // di
  __int128 *v6; // r8
  _QWORD *v7; // rcx
  __int64 v8; // rax
  signed int v9; // eax
  char v10; // di
  __int128 *v11; // r8
  _QWORD *v12; // rdx
  __int64 v13; // rax
  signed int v14; // eax
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v17; // [rsp+40h] [rbp-40h]
  __int128 v18; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v19[32]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+20h] BYREF
  char v21; // [rsp+B0h] [rbp+30h] BYREF
  __int64 *v22; // [rsp+B8h] [rbp+38h] BYREF

  v20 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v19,
    L"WindowsUdk.UI.Composition.CompositionAnimation",
    46LL);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>(&v22, v19);
  v3 = v22;
  if ( !v22 )
  {
    v4 = 0LL;
    *(_QWORD *)&v16 = 0LL;
LABEL_3:
    v5 = 0;
    goto LABEL_4;
  }
  v20 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64 *, __int64 *))*v22)(
    v22,
    &winrt::impl::guid_v<winrt::impl::IAgileObject>,
    &v20);
  v4 = v20;
  *(_QWORD *)&v16 = v20;
  if ( !v20 )
    goto LABEL_3;
  v5 = 1;
LABEL_4:
  if ( v4 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&v16);
  if ( v5 )
  {
    v17 = &qword_1807B6708;
    _InterlockedIncrement64(&qword_1807B6708);
    v3 = v22;
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>,
            (signed __int64)v22,
            0LL) )
    {
      v22 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B6710);
      v3 = 0LL;
    }
    v11 = (__int128 *)a2[1];
    v12 = (_QWORD *)*a2;
    v21 = 0;
    v13 = *(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>;
    v18 = *v11;
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, char *))(v13 + 48))(
            winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>,
            *v12,
            &v18,
            &v21);
    if ( v14 < 0 )
      winrt::throw_hresult(v14);
    v10 = v21;
    _InterlockedDecrement64(&qword_1807B6708);
  }
  else
  {
    v6 = (__int128 *)a2[1];
    v7 = (_QWORD *)*a2;
    LOBYTE(v20) = 0;
    v8 = *v3;
    v16 = *v6;
    v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *, __int64 *))(v8 + 48))(v3, *v7, &v16, &v20);
    if ( v9 < 0 )
      winrt::throw_hresult(v9);
    v10 = v20;
  }
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
  return v10;
}
