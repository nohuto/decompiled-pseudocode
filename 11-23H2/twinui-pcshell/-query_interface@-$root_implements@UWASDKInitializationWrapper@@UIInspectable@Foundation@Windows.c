/*
 * XREFs of ?query_interface@?$root_implements@UWASDKInitializationWrapper@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801FA464
 * Callers:
 *     ?Initialize_WASDK@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@XZ @ 0x1801F9FC4 (-Initialize_WASDK@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@.c)
 *     ?QueryInterface@?$produce_base@UWASDKInitializationWrapper@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801FA270 (-QueryInterface@-$produce_base@UWASDKInitializationWrapper@@UIInspectable@Foundation@Windows@win.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800D7718 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?AddRef@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@QEAAIXZ @ 0x1801F9E08 (-AddRef@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winr.c)
 *     ?make_weak_ref@?$root_implements@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1801FA33C (-make_weak_ref@-$root_implements@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@S.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<WASDKInitializationWrapper,winrt::Windows::Foundation::IInspectable>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  void *weak_ref; // rax

  v6 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 48))(a1);
  *a3 = v6;
  if ( v6 )
    goto LABEL_2;
  if ( winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
    goto LABEL_4;
  if ( winrt::operator==(v8, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
  {
    v11 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
    return winrt::impl::make_marshaler(v11, a3);
  }
  else
  {
    if ( winrt::operator==(v10, &winrt::impl::guid_v<IInspectable>) )
    {
      v9 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
      goto LABEL_5;
    }
    if ( winrt::operator==(v12, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
    {
LABEL_4:
      v9 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
LABEL_5:
      *a3 = v9;
LABEL_2:
      winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::AddRef((__int64)a1);
      return 0LL;
    }
    if ( winrt::operator==(v13, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>) )
    {
      weak_ref = winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::make_weak_ref(a1);
      *a3 = (__int64)weak_ref;
      return weak_ref == 0LL ? 0x8007000E : 0;
    }
    else
    {
      return (**(__int64 (__fastcall ***)(volatile signed __int64 *, _QWORD *, __int64 *))a1)(a1, a2, a3);
    }
  }
}
