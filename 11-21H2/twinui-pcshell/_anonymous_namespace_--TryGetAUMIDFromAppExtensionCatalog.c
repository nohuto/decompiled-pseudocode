/*
 * XREFs of _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog @ 0x1800664B8
 * Callers:
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x180066360 (_anonymous_namespace_--GetScreenClippingAUMID.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ??$get_runtime_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180068504 (--$get_runtime_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA-.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?ApplicationUserModelId@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800F718C (-ApplicationUserModelId@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppE.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ?Find@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@3@AEBUhstring@param@3@@Z @ 0x1800FBBE8 (-Find@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAp_ea_1800FBBE8.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     WINRT_IMPL_HeapFree @ 0x1801892CC (WINRT_IMPL_HeapFree.c)
 *     WINRT_IMPL_GetProcessHeap @ 0x180189398 (WINRT_IMPL_GetProcessHeap.c)
 *     ?close@?$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18022A1B6 (-close@-$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x18032B9C8 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 *     ??$call@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@2@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@Z @ 0x180380FE0 (--$call@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 */

// Hidden C++ exception states: #wind=4
char **__fastcall anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog(char **a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  bool v6; // si
  _DWORD *v7; // rcx
  __int64 v8; // rbx
  char **v9; // rax
  char *v10; // r14
  char *v11; // rsi
  HANDLE ProcessHeap; // rax
  __int64 v14; // [rsp+38h] [rbp-91h] BYREF
  __int64 v15; // [rsp+40h] [rbp-89h] BYREF
  __int64 v16; // [rsp+48h] [rbp-81h] BYREF
  __int64 v17; // [rsp+50h] [rbp-79h] BYREF
  _QWORD *v18; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v19[16]; // [rsp+60h] [rbp-69h] BYREF
  _QWORD v20[4]; // [rsp+70h] [rbp-59h] BYREF
  _QWORD v21[4]; // [rsp+90h] [rbp-39h] BYREF
  _BYTE v22[32]; // [rsp+B0h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+D0h] [rbp+7h] BYREF

  v20[1] = a1;
  v20[2] = a2;
  *a1 = 0LL;
  v15 = 0LL;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v22,
    L"WindowsUdk.ApplicationModel.AppExtensions.AppExtension",
    0x36uLL);
  v16 = 0LL;
  winrt::impl::get_runtime_activation_factory<winrt::Windows::Foundation::IActivationFactory>(&v14, v22, &v16);
  if ( (int)v14 < 0 )
  {
    winrt::hresult_error::hresult_error(v19);
    if ( v20[0] )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v20);
    winrt::handle_type<winrt::impl::bstr_traits>::close(v19);
  }
  v4 = v16;
  v17 = v16;
  v6 = (unsigned __int8)winrt::Windows::Foundation::operator==(&v17, &v15) == 0;
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
  if ( v6 )
  {
    v7 = *(_DWORD **)(wil::details::static_lazy<SingleViewExperienceLogging>::get(
                        v5,
                        _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *v7 > 5u )
      tlgWriteTransfer_EventWriteTransfer((int)v7, (int)&dword_1806AA09F, 0, 0, 2u, &v23);
    v21[0] = *a2;
    v18 = v21;
    v20[3] = &qword_1807B40F8;
    _InterlockedIncrement64(&qword_1807B40F8);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics> )
    {
      winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::Find(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
        &v14,
        v21);
      _InterlockedDecrement64(&qword_1807B40F8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1807B40F8);
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_e84bcefeb7ed3703767eef0b25e91c21_ &>(
        v7,
        &v14,
        &v18);
    }
    v8 = v14;
    if ( v14 )
    {
      v9 = (char **)winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtension>::ApplicationUserModelId(
                      &v14,
                      &v15);
      if ( a1 != v9 )
      {
        v10 = *v9;
        *v9 = 0LL;
        v11 = *a1;
        if ( *a1 )
        {
          if ( !(unsigned int)winrt::impl::atomic_ref_count::operator--(v11 + 24) )
          {
            ProcessHeap = WINRT_IMPL_GetProcessHeap();
            WINRT_IMPL_HeapFree(ProcessHeap, 0, v11);
          }
          *a1 = 0LL;
        }
        *a1 = v10;
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
    }
    if ( v8 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(a2);
  return a1;
}
