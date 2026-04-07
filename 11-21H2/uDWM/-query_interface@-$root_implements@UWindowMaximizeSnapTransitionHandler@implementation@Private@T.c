/*
 * XREFs of ?query_interface@?$root_implements@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180008828
 * Callers:
 *     ?QueryInterface@?$produce_base@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180008810 (-QueryInterface@-$produce_base@UWindowMaximizeSnapTransitionHandler@implementation@Private@Trans.c)
 * Callees:
 *     ?make_weak_ref@?$root_implements@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18000624C (-make_weak_ref@-$root_implements@UWindowMaximizeSnapTransitionHandler@implementation@Private@Tra.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800F16B8 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler,winrt::Udwm::Transitions::Private::WindowMaximizeSnapTransitionHandler>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rax
  signed __int64 v7; // rdx
  bool v8; // zf
  signed __int64 v9; // rax
  __int64 v11; // rax
  signed __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  signed __int64 v16; // rax
  __int64 v17; // rax
  signed __int64 v18; // rax
  __int64 v19; // rax
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
  else
  {
    v11 = *a2 - winrt::impl::guid_v<winrt::impl::IAgileObject>;
    if ( *a2 == winrt::impl::guid_v<winrt::impl::IAgileObject> )
      v11 = a2[1] + 0x6FA470359B110040LL;
    if ( v11 )
    {
      v13 = *a2 - winrt::impl::guid_v<winrt::impl::IMarshal>;
      if ( *a2 == winrt::impl::guid_v<winrt::impl::IMarshal> )
        v13 = a2[1] - 0x46000000000000C0LL;
      if ( !v13 )
      {
        v14 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
        return winrt::impl::make_marshaler(v14, a3);
      }
      v15 = *a2 - winrt::impl::guid_v<winrt::Windows::Foundation::IInspectable>;
      if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IInspectable> )
        v15 = a2[1] + 0x6FE1EF9A5528A564LL;
      if ( v15 )
      {
        v17 = *a2 - winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>;
        if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown> )
          v17 = a2[1] - 0x46000000000000C0LL;
        if ( v17 )
        {
          v19 = *a2 - winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>;
          if ( *a2 == winrt::impl::guid_v<winrt::impl::IWeakReferenceSource> )
            v19 = a2[1] - 0x46000000000000C0LL;
          if ( v19 )
            return (**(__int64 (__fastcall ***)(volatile signed __int64 *, _QWORD *, __int64 *))a1)(a1, a2, a3);
          weak_ref = winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler,winrt::Udwm::Transitions::Private::WindowMaximizeSnapTransitionHandler>::make_weak_ref(a1);
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
      else
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
    }
    else
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      v7 = *((_QWORD *)a1 + 1);
      while ( v7 >= 0 )
      {
        v12 = _InterlockedCompareExchange64(a1 + 1, v7 + 1, v7);
        v8 = v7 == v12;
        v7 = v12;
        if ( v8 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v7 + 24), 1u);
  return 0LL;
}
