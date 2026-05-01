/*
 * XREFs of ?query_interface@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180195A58
 * Callers:
 *     ?QueryInterface@?$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180195A40 (-QueryInterface@-$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shel.c)
 *     ?QueryInterface@?$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804F7B30 (-QueryInterface@-$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExpl_ea_1804F7B30.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?make_weak_ref@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x180195B08 (-make_weak_ref@-$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Sh.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable,winrt::non_agile>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 weak_ref; // rax
  signed __int64 v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  signed __int64 v14; // rax
  signed __int64 v15; // rax

  v6 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 48))(a1);
  *a3 = v6;
  if ( v6 )
  {
    v11 = *((_QWORD *)a1 + 1);
    while ( v11 >= 0 )
    {
      v13 = _InterlockedCompareExchange64(a1 + 1, v11 + 1, v11);
      v12 = v11 == v13;
      v11 = v13;
      if ( v12 )
        return 0LL;
    }
  }
  else if ( winrt::operator==(a2, &winrt::impl::guid_v<IInspectable>) )
  {
    *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
    v11 = *((_QWORD *)a1 + 1);
    while ( v11 >= 0 )
    {
      v14 = _InterlockedCompareExchange64(a1 + 1, v11 + 1, v11);
      v12 = v11 == v14;
      v11 = v14;
      if ( v12 )
        return 0LL;
    }
  }
  else
  {
    if ( !winrt::operator==(v7, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
    {
      if ( !winrt::operator==(v8, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>) )
        return (**(__int64 (__fastcall ***)(volatile signed __int64 *, _QWORD *, __int64 *))a1)(a1, a2, a3);
      weak_ref = winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable,winrt::non_agile>::make_weak_ref(a1);
      *a3 = weak_ref;
      return weak_ref == 0 ? 0x8007000E : 0;
    }
    *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
    v11 = *((_QWORD *)a1 + 1);
    while ( v11 >= 0 )
    {
      v15 = _InterlockedCompareExchange64(a1 + 1, v11 + 1, v11);
      v12 = v11 == v15;
      v11 = v15;
      if ( v12 )
        return 0LL;
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v11 + 24), 1u);
  return 0LL;
}
