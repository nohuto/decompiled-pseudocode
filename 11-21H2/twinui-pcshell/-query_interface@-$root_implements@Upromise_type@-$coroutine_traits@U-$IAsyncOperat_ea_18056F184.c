/*
 * XREFs of ?query_interface@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18056F184
 * Callers:
 *     ?QueryInterface@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18056E2F0 (-QueryInterface@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_ea_18056E2F0.c)
 *     ?QueryInterface@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18056E310 (-QueryInterface@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_ea_18056E310.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x180054C40 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1801A2E1C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Foundation::IAsyncInfo>::query_interface(
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
  __int64 weak_ref; // rax

  if ( winrt::operator==(a2, winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncOperation<bool>>) )
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
        weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(a1);
        *a3 = weak_ref;
        return weak_ref == 0 ? 0x8007000E : 0;
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
