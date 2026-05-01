/*
 * XREFs of ??$call@AEAV_lambda_9553f26b39c360ab0f553b854f05e574_@@@?$factory_cache_entry@UApiInformation@Metadata@Foundation@WindowsUdk@winrt@@UIApiInformationStatics@2345@@impl@winrt@@QEAA_NAEAV_lambda_9553f26b39c360ab0f553b854f05e574_@@@Z @ 0x180031550
 * Callers:
 *     ??$call_factory@UApiInformation@Metadata@Foundation@WindowsUdk@winrt@@UIApiInformationStatics@2345@V_lambda_9553f26b39c360ab0f553b854f05e574_@@@impl@winrt@@YA_N$$QEAV_lambda_9553f26b39c360ab0f553b854f05e574_@@@Z @ 0x180031430 (--$call_factory@UApiInformation@Metadata@Foundation@WindowsUdk@winrt@@UIApiInformationStatics@23.c)
 * Callees:
 *     ??$get_activation_factory@UIApiInformationStatics@Metadata@Foundation@WindowsUdk@winrt@@@winrt@@YA?AUIApiInformationStatics@Metadata@Foundation@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18003169C (--$get_activation_factory@UIApiInformationStatics@Metadata@Foundation@WindowsUdk@winrt@@@winrt@@.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::Foundation::Metadata::ApiInformation,winrt::WindowsUdk::Foundation::Metadata::IApiInformationStatics>::call<_lambda_9553f26b39c360ab0f553b854f05e574_ &>(
        __int64 a1,
        __int64 a2)
{
  void (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // r8
  _QWORD *v7; // rdx
  int v8; // eax
  char v9; // di
  __int64 v11; // r8
  _QWORD *v12; // rdx
  int v13; // eax
  _QWORD v14[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+80h] [rbp+20h] BYREF
  char v17; // [rsp+90h] [rbp+30h] BYREF
  void (__fastcall ***v18)(_QWORD, __int64 *, __int64 *); // [rsp+98h] [rbp+38h] BYREF

  v16 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v15,
    L"WindowsUdk.Foundation.Metadata.ApiInformation",
    0x2DuLL);
  winrt::get_activation_factory<winrt::WindowsUdk::Foundation::Metadata::IApiInformationStatics>(&v18, v15);
  v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
  if ( v18 )
  {
    v16 = 0LL;
    (**v18)(v18, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v16);
    v4 = v16;
    v14[0] = v16;
    if ( v16 )
    {
      v5 = 1;
      goto LABEL_4;
    }
  }
  else
  {
    v4 = 0LL;
    v14[0] = 0LL;
  }
  v5 = 0;
LABEL_4:
  if ( v4 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v14);
  if ( v5 )
  {
    v14[1] = &qword_1807B3FB8;
    _InterlockedIncrement64(&qword_1807B3FB8);
    v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Foundation::Metadata::ApiInformation,winrt::WindowsUdk::Foundation::Metadata::IApiInformationStatics>,
            (signed __int64)v18,
            0LL) )
    {
      v18 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B3FC0);
      v3 = 0LL;
    }
    v6 = **(unsigned __int16 **)(a2 + 8);
    v7 = *(_QWORD **)a2;
    v17 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Foundation::Metadata::ApiInformation,winrt::WindowsUdk::Foundation::Metadata::IApiInformationStatics>
                                                                     + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Foundation::Metadata::ApiInformation,winrt::WindowsUdk::Foundation::Metadata::IApiInformationStatics>,
           *v7,
           v6,
           &v17);
    if ( v8 < 0 )
      winrt::throw_hresult((unsigned int)v8);
    v9 = v17;
    _InterlockedDecrement64(&qword_1807B3FB8);
  }
  else
  {
    v11 = **(unsigned __int16 **)(a2 + 8);
    v12 = *(_QWORD **)a2;
    LOBYTE(v16) = 0;
    v13 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD), _QWORD, __int64, __int64 *))(*v3)[6])(
            v3,
            *v12,
            v11,
            &v16);
    if ( v13 < 0 )
      winrt::throw_hresult((unsigned int)v13);
    v9 = v16;
  }
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  return v9;
}
