/*
 * XREFs of ?query_interface@?$root_implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D72A0
 * Callers:
 *     ?QueryInterface@?$produce_base@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D9640 (-QueryInterface@-$produce_base@URemoteSessionWindowManager@implementation@Shell@Internal@Windows.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800D7718 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?make_weak_ref@?$root_implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800DA618 (-make_weak_ref@-$root_implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteSessionWindowManager>::query_interface(
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
  signed __int64 v15; // rax
  __int64 v16; // rax
  signed __int64 v17; // rax
  signed __int64 v18; // rax
  __int64 weak_ref; // rax

  v6 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 48))(a1);
  *a3 = v6;
  if ( v6 )
  {
    v12 = *((_QWORD *)a1 + 1);
    while ( v12 >= 0 )
    {
      v14 = _InterlockedCompareExchange64(a1 + 1, v12 + 1, v12);
      v13 = v12 == v14;
      v12 = v14;
      if ( v13 )
        return 0LL;
    }
  }
  else if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
    v12 = *((_QWORD *)a1 + 1);
    while ( v12 >= 0 )
    {
      v15 = _InterlockedCompareExchange64(a1 + 1, v12 + 1, v12);
      v13 = v12 == v15;
      v12 = v15;
      if ( v13 )
        return 0LL;
    }
  }
  else
  {
    if ( (unsigned __int8)winrt::operator==(v7, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
    {
      v16 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      return winrt::impl::make_marshaler(v16, a3);
    }
    if ( (unsigned __int8)winrt::operator==(v8, &winrt::impl::guid_v<IInspectable>) )
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
      v12 = *((_QWORD *)a1 + 1);
      while ( v12 >= 0 )
      {
        v17 = _InterlockedCompareExchange64(a1 + 1, v12 + 1, v12);
        v13 = v12 == v17;
        v12 = v17;
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
        weak_ref = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteSessionWindowManager>::make_weak_ref(a1);
        *a3 = weak_ref;
        return weak_ref == 0 ? 0x8007000E : 0;
      }
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      v12 = *((_QWORD *)a1 + 1);
      while ( v12 >= 0 )
      {
        v18 = _InterlockedCompareExchange64(a1 + 1, v12 + 1, v12);
        v13 = v12 == v18;
        v12 = v18;
        if ( v13 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v12 + 24), 1u);
  return 0LL;
}
