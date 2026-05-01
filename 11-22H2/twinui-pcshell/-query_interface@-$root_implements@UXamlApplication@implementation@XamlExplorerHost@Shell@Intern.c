/*
 * XREFs of ?query_interface@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D8558
 * Callers:
 *     ?QueryInterface@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplication@34567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D7DA0 (-QueryInterface@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@W.c)
 *     ?QueryInterface@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides2@Xaml@UI@67@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804F68C0 (-QueryInterface@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@She_ea_1804F68C0.c)
 *     ?QueryInterface@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@67@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804F6930 (-QueryInterface@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@She_ea_1804F6930.c)
 *     ?QueryInterface@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804F69A0 (-QueryInterface@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@She_ea_1804F69A0.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800D7718 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ?make_weak_ref@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800D9AB0 (-make_weak_ref@-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 weak_ref; // rax
  signed __int64 v14; // rdx
  bool v15; // zf
  signed __int64 v16; // rax
  signed __int64 v17; // rax
  __int64 v18; // rax
  signed __int64 v19; // rax
  signed __int64 v20; // rax

  v6 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 48))(a1);
  *a3 = v6;
  if ( v6 )
  {
    v14 = *((_QWORD *)a1 + 2);
    while ( v14 >= 0 )
    {
      v16 = _InterlockedCompareExchange64(a1 + 2, v14 + 1, v14);
      v15 = v14 == v16;
      v14 = v16;
      if ( v15 )
        return 0LL;
    }
  }
  else
  {
    v7 = *a2 - winrt::impl::guid_v<winrt::impl::IAgileObject>;
    if ( *a2 == winrt::impl::guid_v<winrt::impl::IAgileObject> )
      v7 = a2[1] + 0x6FA470359B110040LL;
    if ( v7 )
    {
      v8 = *a2 - winrt::impl::guid_v<winrt::impl::IMarshal>;
      if ( *a2 == winrt::impl::guid_v<winrt::impl::IMarshal> )
        v8 = a2[1] - 0x46000000000000C0LL;
      if ( !v8 )
      {
        v18 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
        return winrt::impl::make_marshaler(v18, a3);
      }
      v9 = *a2 - winrt::impl::guid_v<IInspectable>;
      if ( *a2 == winrt::impl::guid_v<IInspectable> )
        v9 = a2[1] + 0x6FE1EF9A5528A564LL;
      if ( v9 )
      {
        v10 = *a2 - winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>;
        if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown> )
          v10 = a2[1] - 0x46000000000000C0LL;
        if ( v10 )
        {
          v11 = *a2 - winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>;
          if ( *a2 == winrt::impl::guid_v<winrt::impl::IWeakReferenceSource> )
            v11 = a2[1] - 0x46000000000000C0LL;
          if ( v11 )
            return (**(__int64 (__fastcall ***)(volatile signed __int64 *, _QWORD *, __int64 *))a1)(a1, a2, a3);
          weak_ref = winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>::make_weak_ref(a1);
          *a3 = weak_ref;
          return weak_ref == 0 ? 0x8007000E : 0;
        }
        *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
        v14 = *((_QWORD *)a1 + 2);
        while ( v14 >= 0 )
        {
          v20 = _InterlockedCompareExchange64(a1 + 2, v14 + 1, v14);
          v15 = v14 == v20;
          v14 = v20;
          if ( v15 )
            return 0LL;
        }
      }
      else
      {
        *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
        v14 = *((_QWORD *)a1 + 2);
        while ( v14 >= 0 )
        {
          v19 = _InterlockedCompareExchange64(a1 + 2, v14 + 1, v14);
          v15 = v14 == v19;
          v14 = v19;
          if ( v15 )
            return 0LL;
        }
      }
    }
    else
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      v14 = *((_QWORD *)a1 + 2);
      while ( v14 >= 0 )
      {
        v17 = _InterlockedCompareExchange64(a1 + 2, v14 + 1, v14);
        v15 = v14 == v17;
        v14 = v17;
        if ( v15 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v14 + 24), 1u);
  return 0LL;
}
