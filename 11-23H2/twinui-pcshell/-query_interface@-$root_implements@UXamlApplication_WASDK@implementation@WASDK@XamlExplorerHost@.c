/*
 * XREFs of ?query_interface@?$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180015598
 * Callers:
 *     ?QueryInterface@?$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplication_WASDK@345678@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180059490 (-QueryInterface@-$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shel.c)
 *     ?QueryInterface@?$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@Microsoft@8@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804FD800 (-QueryInterface@-$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExpl_ea_1804FD800.c)
 *     ?QueryInterface@?$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804FD870 (-QueryInterface@-$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExpl_ea_1804FD870.c)
 * Callees:
 *     ?make_weak_ref@?$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18006ACD4 (-make_weak_ref@-$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Sh.c)
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800D7718 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Microsoft::UI::Xaml::IApplicationOverrides>::query_interface(
        volatile signed __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  signed __int64 v12; // rdx
  bool v13; // zf
  signed __int64 v14; // rax
  __int64 weak_ref; // rax
  signed __int64 v16; // rax
  __int64 v17; // rax
  signed __int64 v18; // rax
  signed __int64 v19; // rax

  v6 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 48))(a1);
  *a3 = v6;
  if ( v6 )
  {
    v12 = *((_QWORD *)a1 + 2);
    while ( v12 >= 0 )
    {
      v14 = _InterlockedCompareExchange64(a1 + 2, v12 + 1, v12);
      v13 = v12 == v14;
      v12 = v14;
      if ( v13 )
        return 0LL;
    }
  }
  else if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
    v12 = *((_QWORD *)a1 + 2);
    while ( v12 >= 0 )
    {
      v16 = _InterlockedCompareExchange64(a1 + 2, v12 + 1, v12);
      v13 = v12 == v16;
      v12 = v16;
      if ( v13 )
        return 0LL;
    }
  }
  else
  {
    if ( (unsigned __int8)winrt::operator==(v7, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
    {
      v17 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      return winrt::impl::make_marshaler(v17, a3);
    }
    if ( (unsigned __int8)winrt::operator==(v8, &winrt::impl::guid_v<IInspectable>) )
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
      v12 = *((_QWORD *)a1 + 2);
      while ( v12 >= 0 )
      {
        v18 = _InterlockedCompareExchange64(a1 + 2, v12 + 1, v12);
        v13 = v12 == v18;
        v12 = v18;
        if ( v13 )
          return 0LL;
      }
    }
    else
    {
      if ( !(unsigned __int8)winrt::operator==(v9, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
      {
        if ( !(unsigned __int8)winrt::operator==(v10, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>) )
          return (**(__int64 (__fastcall ***)(volatile signed __int64 *, __int64, __int64 *))a1)(a1, a2, a3);
        weak_ref = winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Microsoft::UI::Xaml::IApplicationOverrides>::make_weak_ref(a1);
        *a3 = weak_ref;
        return weak_ref == 0 ? 0x8007000E : 0;
      }
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      v12 = *((_QWORD *)a1 + 2);
      while ( v12 >= 0 )
      {
        v19 = _InterlockedCompareExchange64(a1 + 2, v12 + 1, v12);
        v13 = v12 == v19;
        v12 = v19;
        if ( v13 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v12 + 24), 1u);
  return 0LL;
}
