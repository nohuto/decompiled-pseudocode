/*
 * XREFs of ??$call@AEAV_lambda_854d82a1e74abb924a7f571a93c2e7c9_@@@?$factory_cache_entry@USecurityDescriptorManager@Authorization@Security@WindowsUdk@winrt@@UISecurityDescriptorManagerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_854d82a1e74abb924a7f571a93c2e7c9_@@@Z @ 0x18022FACC
 * Callers:
 *     ??$call_factory@USecurityDescriptorManager@Authorization@Security@WindowsUdk@winrt@@UISecurityDescriptorManagerStatics@2345@V_lambda_854d82a1e74abb924a7f571a93c2e7c9_@@@impl@winrt@@YA?A_P$$QEAV_lambda_854d82a1e74abb924a7f571a93c2e7c9_@@@Z @ 0x18022FD94 (--$call_factory@USecurityDescriptorManager@Authorization@Security@WindowsUdk@winrt@@UISecurityDe.c)
 * Callees:
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180087AA4 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1802CECBA (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>::call<_lambda_854d82a1e74abb924a7f571a93c2e7c9_ &>(
        __int64 a1,
        unsigned int **a2)
{
  signed __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  int v6; // eax
  __int64 v7[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v9[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v10; // [rsp+90h] [rbp+20h] BYREF
  signed __int64 v11; // [rsp+A0h] [rbp+30h] BYREF
  signed __int64 v12; // [rsp+A8h] [rbp+38h] BYREF

  v10 = a1;
  v8[0] = L"WindowsUdk.Security.Authorization.SecurityDescriptorManager";
  v8[1] = 59LL;
  winrt::param::hstring::hstring((winrt::param::hstring *)v9, (__int64)v8);
  v11 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v10,
    v9,
    (__int64)&winrt::impl::guid_v<winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>,
    (__int64)&v11);
  if ( (int)v10 < 0 )
    winrt::throw_hresult((unsigned int)v10);
  v3 = v11;
  v12 = v11;
  v4 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v12, v7);
  if ( v7[0] )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v7);
  if ( v4 )
  {
    v7[1] = (__int64)&qword_18098EC68;
    _InterlockedIncrement64(&qword_18098EC68);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>,
            v11,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098EC70);
    }
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>
                                                                    + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>,
           **a2,
           *(_QWORD *)a2[1],
           *a2[2]);
    if ( v6 < 0 )
      winrt::throw_hresult((unsigned int)v6);
    _InterlockedDecrement64(&qword_18098EC68);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(signed __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v3 + 48LL))(
           v3,
           **a2,
           *(_QWORD *)a2[1],
           *a2[2]);
    if ( v5 < 0 )
      winrt::throw_hresult((unsigned int)v5);
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v12);
}
