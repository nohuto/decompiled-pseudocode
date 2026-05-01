/*
 * XREFs of ?query_interface@?$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18001EF58
 * Callers:
 *     ?QueryInterface@?$produce_base@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18001EF40 (-QueryInterface@-$produce_base@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Int.c)
 *     ?QueryInterface@?$produce_base@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180421FD0 (-QueryInterface@-$produce_base@UXamlExplorerHostWindow@implementation@XamlExplorerH_ea_180421FD0.c)
 * Callees:
 *     ?make_weak_ref@?$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18001F62C (-make_weak_ref@-$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@I.c)
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x180054C40 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable>::query_interface(
        volatile signed __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  signed __int64 v9; // rdx
  bool v10; // zf
  signed __int64 v11; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 weak_ref; // rax
  signed __int64 v26; // rax
  __int64 v27; // rax
  signed __int64 v28; // rax
  signed __int64 v29; // rax

  v6 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 48))(a1);
  *a3 = v6;
  if ( v6 )
  {
    v9 = *((_QWORD *)a1 + 1);
    while ( v9 >= 0 )
    {
      v11 = _InterlockedCompareExchange64(a1 + 1, v9 + 1, v9);
      v10 = v9 == v11;
      v9 = v11;
      if ( v10 )
        return 0LL;
    }
  }
  else if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IAgileObject>, v7, v8) )
  {
    *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
    v9 = *((_QWORD *)a1 + 1);
    while ( v9 >= 0 )
    {
      v26 = _InterlockedCompareExchange64(a1 + 1, v9 + 1, v9);
      v10 = v9 == v26;
      v9 = v26;
      if ( v10 )
        return 0LL;
    }
  }
  else
  {
    if ( (unsigned __int8)winrt::operator==(v13, &winrt::impl::guid_v<winrt::impl::IMarshal>, v14, v15) )
    {
      v27 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      return winrt::impl::make_marshaler(v27, a3);
    }
    if ( (unsigned __int8)winrt::operator==(v16, &winrt::impl::guid_v<IInspectable>, v17, v18) )
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
      v9 = *((_QWORD *)a1 + 1);
      while ( v9 >= 0 )
      {
        v28 = _InterlockedCompareExchange64(a1 + 1, v9 + 1, v9);
        v10 = v9 == v28;
        v9 = v28;
        if ( v10 )
          return 0LL;
      }
    }
    else
    {
      if ( !(unsigned __int8)winrt::operator==(
                               v19,
                               &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>,
                               v20,
                               v21) )
      {
        if ( !(unsigned __int8)winrt::operator==(v22, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>, v23, v24) )
          return (**(__int64 (__fastcall ***)(volatile signed __int64 *, __int64, __int64 *))a1)(a1, a2, a3);
        weak_ref = winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable>::make_weak_ref(a1);
        *a3 = weak_ref;
        return weak_ref == 0 ? 0x8007000E : 0;
      }
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      v9 = *((_QWORD *)a1 + 1);
      while ( v9 >= 0 )
      {
        v29 = _InterlockedCompareExchange64(a1 + 1, v9 + 1, v9);
        v10 = v9 == v29;
        v9 = v29;
        if ( v10 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v9 + 24), 1u);
  return 0LL;
}
