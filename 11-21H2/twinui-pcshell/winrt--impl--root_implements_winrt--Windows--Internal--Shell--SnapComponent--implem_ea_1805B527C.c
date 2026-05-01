/*
 * XREFs of winrt::impl::root_implements_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_4820608d764e205befb540f09a70bd1e____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::query_interface @ 0x1805B527C
 * Callers:
 *     winrt::impl::produce_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_4820608d764e205befb540f09a70bd1e____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_void_::QueryInterface @ 0x1805B4520 (winrt--impl--produce_base_winrt--Windows--Internal--Shell--SnapComponent--implement_ea_1805B4520.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x180054C40 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     winrt::impl::root_implements_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_4820608d764e205befb540f09a70bd1e____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::make_weak_ref @ 0x18057D37C (winrt--impl--root_implements_winrt--Windows--Internal--Shell--SnapComponent--implem_ea_18057D37C.c)
 */

__int64 __fastcall winrt::impl::root_implements_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_4820608d764e205befb540f09a70bd1e____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rax
  signed __int64 v7; // rdx
  bool v8; // zf
  signed __int64 v9; // rax
  _QWORD *v10; // rcx
  signed __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  _QWORD *v15; // rcx
  signed __int64 v16; // rax
  _QWORD *v17; // rcx
  signed __int64 v18; // rax
  __int64 weak_ref; // rax

  v6 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 48))(a1);
  *a3 = v6;
  if ( v6 )
  {
    v7 = *((_QWORD *)a1 + 1);
    while ( v7 >= 0 )
    {
      v9 = _InterlockedCompareExchange64(a1 + 1, v7 + 1, v7);
      v8 = v7 == v9;
      v7 = v9;
      if ( v8 )
        return 0LL;
    }
  }
  else if ( winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
    v7 = *((_QWORD *)a1 + 1);
    while ( v7 >= 0 )
    {
      v11 = _InterlockedCompareExchange64(a1 + 1, v7 + 1, v7);
      v8 = v7 == v11;
      v7 = v11;
      if ( v8 )
        return 0LL;
    }
  }
  else
  {
    if ( winrt::operator==(v10, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
    {
      v13 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      return winrt::impl::make_marshaler(v13, a3);
    }
    if ( winrt::operator==(v12, &winrt::impl::guid_v<IInspectable>) )
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
      v7 = *((_QWORD *)a1 + 1);
      while ( v7 >= 0 )
      {
        v16 = _InterlockedCompareExchange64(a1 + 1, v7 + 1, v7);
        v8 = v7 == v16;
        v7 = v16;
        if ( v8 )
          return 0LL;
      }
    }
    else
    {
      if ( !winrt::operator==(v15, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
      {
        if ( !winrt::operator==(v17, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>) )
          return (**(__int64 (__fastcall ***)(volatile signed __int64 *, _QWORD *, __int64 *))a1)(a1, a2, a3);
        weak_ref = winrt::impl::root_implements_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_4820608d764e205befb540f09a70bd1e____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::make_weak_ref(a1);
        *a3 = weak_ref;
        return weak_ref == 0 ? 0x8007000E : 0;
      }
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      v7 = *((_QWORD *)a1 + 1);
      while ( v7 >= 0 )
      {
        v18 = _InterlockedCompareExchange64(a1 + 1, v7 + 1, v7);
        v8 = v7 == v18;
        v7 = v18;
        if ( v8 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v7 + 24), 1u);
  return 0LL;
}
