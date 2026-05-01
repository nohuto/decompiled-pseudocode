/*
 * XREFs of ?query_interface@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801CFBF0
 * Callers:
 *     ?QueryInterface@?$produce_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVApplicationFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801C9A20 (-QueryInterface@-$produce_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows.c)
 *     ?QueryInterface@?$produce_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801C9A40 (-QueryInterface@-$produce_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Found_ea_1801C9A40.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x180054C40 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?AddRef@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@QEAAIXZ @ 0x18019E608 (-AddRef@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winr.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1801A2E1C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *v5; // rcx
  _QWORD *v6; // r11
  __int64 v7; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  __int64 v15; // r11
  __int64 weak_ref; // rax

  if ( winrt::operator==(a2, winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncAction>) )
  {
    v7 = (unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL);
  }
  else if ( winrt::operator==(v5, winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncInfo>) )
  {
    v7 = (unsigned __int64)(a1 + 3) & -(__int64)(a1 != 0LL);
  }
  else
  {
    v7 = 0LL;
  }
  *a3 = v7;
  if ( v7 )
    goto LABEL_7;
  if ( winrt::operator==(v6, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
    goto LABEL_9;
  if ( winrt::operator==(v9, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
  {
    v12 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
    return winrt::impl::make_marshaler(v12, a3);
  }
  else
  {
    if ( winrt::operator==(v11, &winrt::impl::guid_v<IInspectable>) )
    {
      v10 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
      goto LABEL_10;
    }
    if ( winrt::operator==(v13, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
    {
LABEL_9:
      v10 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
LABEL_10:
      *a3 = v10;
LABEL_7:
      winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::AddRef((__int64)a1);
      return 0LL;
    }
    if ( winrt::operator==(v14, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>) )
    {
      weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(a1);
      *a3 = weak_ref;
      return weak_ref == 0 ? 0x8007000E : 0;
    }
    else
    {
      return (**(__int64 (__fastcall ***)(volatile signed __int64 *, __int64, __int64 *))a1)(a1, v15, a3);
    }
  }
}
