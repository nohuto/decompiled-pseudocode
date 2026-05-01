/*
 * XREFs of ?query_interface@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1806AE6AC
 * Callers:
 *     ?QueryInterface@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1806AE1E0 (-QueryInterface@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference.c)
 *     ?QueryInterface@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1806AE200 (-QueryInterface@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_ea_1806AE200.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800D7718 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?make_weak_ref@?$root_implements@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1801FA33C (-make_weak_ref@-$root_implements@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@S.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,winrt::Windows::Foundation::IAsyncInfo>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *v5; // rcx
  _QWORD *v6; // r11
  __int64 v7; // r8
  signed __int64 v8; // rdx
  bool v9; // zf
  signed __int64 v10; // rax
  _QWORD *v11; // rcx
  signed __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rax
  _QWORD *v16; // rcx
  signed __int64 v17; // rax
  _QWORD *v18; // rcx
  signed __int64 v19; // rax
  __int64 v20; // r11
  void *weak_ref; // rax

  if ( winrt::operator==(
         a2,
         winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>) )
  {
    v7 = (unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL);
  }
  else if ( winrt::operator==(v5, L"6") )
  {
    v7 = (unsigned __int64)(a1 + 3) & -(__int64)(a1 != 0LL);
  }
  else
  {
    v7 = 0LL;
  }
  *a3 = v7;
  if ( v7 )
  {
    v8 = *((_QWORD *)a1 + 1);
    while ( v8 >= 0 )
    {
      v10 = _InterlockedCompareExchange64(a1 + 1, v8 + 1, v8);
      v9 = v8 == v10;
      v8 = v10;
      if ( v9 )
        return 0LL;
    }
  }
  else if ( winrt::operator==(v6, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
    v8 = *((_QWORD *)a1 + 1);
    while ( v8 >= 0 )
    {
      v12 = _InterlockedCompareExchange64(a1 + 1, v8 + 1, v8);
      v9 = v8 == v12;
      v8 = v12;
      if ( v9 )
        return 0LL;
    }
  }
  else
  {
    if ( winrt::operator==(v11, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
    {
      v14 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      return winrt::impl::make_marshaler(v14, a3);
    }
    if ( winrt::operator==(v13, &winrt::impl::guid_v<IInspectable>) )
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
      v8 = *((_QWORD *)a1 + 1);
      while ( v8 >= 0 )
      {
        v17 = _InterlockedCompareExchange64(a1 + 1, v8 + 1, v8);
        v9 = v8 == v17;
        v8 = v17;
        if ( v9 )
          return 0LL;
      }
    }
    else
    {
      if ( !winrt::operator==(v16, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
      {
        if ( !winrt::operator==(v18, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>) )
          return (**(__int64 (__fastcall ***)(volatile signed __int64 *, __int64, __int64 *))a1)(a1, v20, a3);
        weak_ref = winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::make_weak_ref(a1);
        *a3 = (__int64)weak_ref;
        return weak_ref == 0LL ? 0x8007000E : 0;
      }
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      v8 = *((_QWORD *)a1 + 1);
      while ( v8 >= 0 )
      {
        v19 = _InterlockedCompareExchange64(a1 + 1, v8 + 1, v8);
        v9 = v8 == v19;
        v8 = v19;
        if ( v9 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v8 + 24), 1u);
  return 0LL;
}
