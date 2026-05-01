/*
 * XREFs of ?query_interface@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F7F74
 * Callers:
 *     ?QueryInterface@?$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18017B440 (-QueryInterface@-$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shel.c)
 *     ?QueryInterface@?$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180423010 (-QueryInterface@-$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExpl_ea_180423010.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?make_weak_ref@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800FAFF4 (-make_weak_ref@-$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Sh.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable,winrt::non_agile>::query_interface(
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
  __int64 weak_ref; // rax
  signed __int64 v17; // rdx
  bool v18; // zf
  signed __int64 v19; // rax
  signed __int64 v20; // rax
  signed __int64 v21; // rax

  v6 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 48))(a1);
  *a3 = v6;
  if ( v6 )
  {
    v17 = *((_QWORD *)a1 + 1);
    while ( v17 >= 0 )
    {
      v19 = _InterlockedCompareExchange64(a1 + 1, v17 + 1, v17);
      v18 = v17 == v19;
      v17 = v19;
      if ( v18 )
        return 0LL;
    }
  }
  else if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<IInspectable>, v7, v8) )
  {
    *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
    v17 = *((_QWORD *)a1 + 1);
    while ( v17 >= 0 )
    {
      v20 = _InterlockedCompareExchange64(a1 + 1, v17 + 1, v17);
      v18 = v17 == v20;
      v17 = v20;
      if ( v18 )
        return 0LL;
    }
  }
  else
  {
    if ( !(unsigned __int8)winrt::operator==(v9, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>, v10, v11) )
    {
      if ( !(unsigned __int8)winrt::operator==(v12, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>, v13, v14) )
        return (**(__int64 (__fastcall ***)(volatile signed __int64 *, __int64, __int64 *))a1)(a1, a2, a3);
      weak_ref = winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable,winrt::non_agile>::make_weak_ref(a1);
      *a3 = weak_ref;
      return weak_ref == 0 ? 0x8007000E : 0;
    }
    *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
    v17 = *((_QWORD *)a1 + 1);
    while ( v17 >= 0 )
    {
      v21 = _InterlockedCompareExchange64(a1 + 1, v17 + 1, v17);
      v18 = v17 == v21;
      v17 = v21;
      if ( v18 )
        return 0LL;
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v17 + 24), 1u);
  return 0LL;
}
