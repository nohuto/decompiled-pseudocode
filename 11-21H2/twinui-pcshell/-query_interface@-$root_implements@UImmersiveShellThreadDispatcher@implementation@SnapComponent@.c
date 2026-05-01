/*
 * XREFs of ?query_interface@?$root_implements@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F7CD0
 * Callers:
 *     ?QueryInterface@?$produce_base@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcher@34567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18017F560 (-QueryInterface@-$produce_base@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shel.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x180054C40 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1801A2E1C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>::query_interface(
        volatile signed __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  signed __int64 v22; // rdx
  bool v23; // zf
  signed __int64 v24; // rax
  signed __int64 v25; // rax
  __int64 v26; // rax
  signed __int64 v27; // rax
  signed __int64 v28; // rax
  __int64 weak_ref; // rax

  v6 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 48))(a1);
  *a3 = v6;
  if ( v6 )
  {
    v22 = *((_QWORD *)a1 + 1);
    while ( v22 >= 0 )
    {
      v24 = _InterlockedCompareExchange64(a1 + 1, v22 + 1, v22);
      v23 = v22 == v24;
      v22 = v24;
      if ( v23 )
        return 0LL;
    }
  }
  else if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IAgileObject>, v7, v8) )
  {
    *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
    v22 = *((_QWORD *)a1 + 1);
    while ( v22 >= 0 )
    {
      v25 = _InterlockedCompareExchange64(a1 + 1, v22 + 1, v22);
      v23 = v22 == v25;
      v22 = v25;
      if ( v23 )
        return 0LL;
    }
  }
  else
  {
    if ( (unsigned __int8)winrt::operator==(v9, &winrt::impl::guid_v<winrt::impl::IMarshal>, v10, v11) )
    {
      v26 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      return winrt::impl::make_marshaler(v26, a3);
    }
    if ( (unsigned __int8)winrt::operator==(v12, &winrt::impl::guid_v<IInspectable>, v13, v14) )
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
      v22 = *((_QWORD *)a1 + 1);
      while ( v22 >= 0 )
      {
        v27 = _InterlockedCompareExchange64(a1 + 1, v22 + 1, v22);
        v23 = v22 == v27;
        v22 = v27;
        if ( v23 )
          return 0LL;
      }
    }
    else
    {
      if ( !(unsigned __int8)winrt::operator==(
                               v15,
                               &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>,
                               v16,
                               v17) )
      {
        if ( !(unsigned __int8)winrt::operator==(v18, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>, v19, v20) )
          return (**(__int64 (__fastcall ***)(volatile signed __int64 *, __int64, __int64 *))a1)(a1, a2, a3);
        weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(a1);
        *a3 = weak_ref;
        return weak_ref == 0 ? 0x8007000E : 0;
      }
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      v22 = *((_QWORD *)a1 + 1);
      while ( v22 >= 0 )
      {
        v28 = _InterlockedCompareExchange64(a1 + 1, v22 + 1, v22);
        v23 = v22 == v28;
        v22 = v28;
        if ( v23 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v22 + 24), 1u);
  return 0LL;
}
