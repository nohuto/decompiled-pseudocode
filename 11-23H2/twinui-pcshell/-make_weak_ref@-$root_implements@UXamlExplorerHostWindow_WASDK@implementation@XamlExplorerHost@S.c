/*
 * XREFs of ?make_weak_ref@?$root_implements@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1801FA33C
 * Callers:
 *     ?query_interface@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18005E188 (-query_interface@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Win.c)
 *     ?query_interface@?$root_implements@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@UIXamlExplorerHostChildWindow_WASDKFactory@34567@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180066F18 (-query_interface@-$root_implements@UXamlExplorerHostChildWindow_WASDK@factory_implementation@Xam.c)
 *     ?query_interface@?$root_implements@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@UIXamlApplicationStatics@34567@Ustatic_lifetime@7@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800DB09C (-query_interface@-$root_implements@UXamlApplication@factory_implementation@XamlExplorerHost@Shel.c)
 *     ?query_interface@?$root_implements@UWASDKInitializationWrapper@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801FA464 (-query_interface@-$root_implements@UWASDKInitializationWrapper@@UIInspectable@Foundation@Windows.c)
 *     ?query_interface@?$root_implements@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@UIXamlExplorerHostWindowFactory@34567@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804FA864 (-query_interface@-$root_implements@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHo.c)
 *     ?query_interface@?$root_implements@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804FCA8C (-query_interface@-$root_implements@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost.c)
 *     ?query_interface@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1806A9F10 (-query_interface@-$root_implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperat_ea_1806A9F10.c)
 *     ?query_interface@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1806AE6AC (-query_interface@-$root_implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IRefer.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x180392600 (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

void *__fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::make_weak_ref(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx
  void *result; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_QWORD *)a1 + 1);
  if ( v1 >= 0 )
  {
    result = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v4 = (unsigned __int64)result;
    if ( result )
    {
      v5 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
      v10 = v4;
      *(_QWORD *)(v4 + 8) = &winrt::impl::weak_source<0,1>::`vftable';
      *(_QWORD *)v4 = &winrt::impl::weak_ref<1,1>::`vftable';
      *(_QWORD *)(v4 + 16) = v5;
      *(_DWORD *)(v4 + 24) = v1;
      *(_DWORD *)(v4 + 28) = 1;
      v6 = (v4 >> 1) | 0x8000000000000000uLL;
      while ( 1 )
      {
        v8 = _InterlockedCompareExchange64(a1 + 1, v6, v1);
        v7 = v1 == v8;
        v1 = v8;
        if ( v7 )
          break;
        if ( v8 < 0 )
        {
          v9 = 2 * v8 + 8;
          winrt::com_ptr<winrt::impl::weak_ref<1,1>>::unconditional_release_ref(
            &v10,
            (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(2 * v8 + 24), 1u));
          return (void *)v9;
        }
        _InterlockedExchange((volatile __int32 *)(v10 + 24), v8);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 24), 1u);
      return (void *)(v10 + 8);
    }
  }
  else
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v1 + 24), 1u);
    return (void *)(2 * v1 + 8);
  }
  return result;
}
