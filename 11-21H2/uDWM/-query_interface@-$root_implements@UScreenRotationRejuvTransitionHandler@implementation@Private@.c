/*
 * XREFs of ?query_interface@?$root_implements@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIScreenRotationRejuvTransitionHandler@3456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F6488
 * Callers:
 *     ??$as@UScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@U1implementation@2345@$0A@@impl@winrt@@YA?AUScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@1@PEAU2implementation@3451@@Z @ 0x1800F26D4 (--$as@UScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@U1implementation@234.c)
 *     ?QueryInterface@?$produce_base@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UIScreenRotationRejuvTransitionHandler@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F49F0 (-QueryInterface@-$produce_base@UScreenRotationRejuvTransitionHandler@implementation@Private@Tran.c)
 *     ?QueryInterface@?$produce_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F4A10 (-QueryInterface@-$produce_base@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhst.c)
 *     ?QueryInterface@?$produce_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800FAD80 (-QueryInterface@-$produce_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vecto.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800F16B8 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ?make_weak_ref@?$root_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800F1720 (-make_weak_ref@-$root_implements@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@N@Collection.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,winrt::Udwm::Transitions::Private::ScreenRotationRejuvTransitionHandler,winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rax
  signed __int64 v7; // rdx
  bool v8; // zf
  signed __int64 v9; // rax
  __int64 v10; // rax
  signed __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
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
    v10 = *a2 - winrt::impl::guid_v<winrt::impl::IAgileObject>;
    if ( *a2 == winrt::impl::guid_v<winrt::impl::IAgileObject> )
      v10 = a2[1] + 0x6FA470359B110040LL;
    if ( v10 )
    {
      v12 = *a2 - winrt::impl::guid_v<winrt::impl::IMarshal>;
      if ( *a2 == winrt::impl::guid_v<winrt::impl::IMarshal> )
        v12 = a2[1] - 0x46000000000000C0LL;
      if ( !v12 )
      {
        v13 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
        return winrt::impl::make_marshaler(v13, a3);
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
          weak_ref = winrt::impl::root_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>::make_weak_ref(a1);
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
        v11 = _InterlockedCompareExchange64(a1 + 1, v7 + 1, v7);
        v8 = v7 == v11;
        v7 = v11;
        if ( v8 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v7 + 24), 1u);
  return 0LL;
}
