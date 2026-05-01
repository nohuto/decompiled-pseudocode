/*
 * XREFs of ?query_interface@?$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180049A10
 * Callers:
 *     ?QueryInterface@?$implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049A00 (-QueryInterface@-$implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Inter.c)
 * Callees:
 *     ?make_weak_ref@?$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x180049B20 (-make_weak_ref@-$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@I.c)
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800D7718 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::query_interface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  volatile signed __int64 *v3; // rbx
  __int64 v6; // rax
  signed __int64 v7; // rdx
  bool v8; // zf
  signed __int64 v9; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 weak_ref; // rax
  signed __int64 v16; // rax
  __int64 v17; // rax
  signed __int64 v18; // rax
  signed __int64 v19; // rax

  v3 = (volatile signed __int64 *)a1;
  if ( !a1 )
    a1 = 24LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  *a3 = v6;
  if ( v6 )
  {
    v7 = *((_QWORD *)v3 + 1);
    while ( v7 >= 0 )
    {
      v9 = _InterlockedCompareExchange64(v3 + 1, v7 + 1, v7);
      v8 = v7 == v9;
      v7 = v9;
      if ( v8 )
        return 0LL;
    }
  }
  else if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 24))(v3);
    v7 = *((_QWORD *)v3 + 1);
    while ( v7 >= 0 )
    {
      v16 = _InterlockedCompareExchange64(v3 + 1, v7 + 1, v7);
      v8 = v7 == v16;
      v7 = v16;
      if ( v8 )
        return 0LL;
    }
  }
  else
  {
    if ( (unsigned __int8)winrt::operator==(v11, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
    {
      v17 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 24))(v3);
      return winrt::impl::make_marshaler(v17, a3);
    }
    if ( (unsigned __int8)winrt::operator==(v12, &winrt::impl::guid_v<IInspectable>) )
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 56))(v3);
      v7 = *((_QWORD *)v3 + 1);
      while ( v7 >= 0 )
      {
        v18 = _InterlockedCompareExchange64(v3 + 1, v7 + 1, v7);
        v8 = v7 == v18;
        v7 = v18;
        if ( v8 )
          return 0LL;
      }
    }
    else
    {
      if ( !(unsigned __int8)winrt::operator==(v13, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
      {
        if ( !(unsigned __int8)winrt::operator==(v14, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>) )
          return (**(__int64 (__fastcall ***)(volatile signed __int64 *, __int64, __int64 *))v3)(v3, a2, a3);
        weak_ref = winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::make_weak_ref(v3);
        *a3 = weak_ref;
        return weak_ref == 0 ? 0x8007000E : 0;
      }
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 24))(v3);
      v7 = *((_QWORD *)v3 + 1);
      while ( v7 >= 0 )
      {
        v19 = _InterlockedCompareExchange64(v3 + 1, v7 + 1, v7);
        v8 = v7 == v19;
        v7 = v19;
        if ( v8 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v7 + 24), 1u);
  return 0LL;
}
