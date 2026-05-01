/*
 * XREFs of ?query_interface@?$root_implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1803B16B8
 * Callers:
 *     ?QueryInterface@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803B0C70 (-QueryInterface@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabP.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x180054C40 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::query_interface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  volatile signed __int32 *v3; // rbx
  __int64 v6; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9

  v3 = (volatile signed __int32 *)a1;
  if ( !a1 )
    a1 = 8LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  *a3 = v6;
  if ( v6 )
    goto LABEL_4;
  if ( winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    v9 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
LABEL_7:
    *a3 = v9;
LABEL_4:
    _InterlockedExchangeAdd(v3 + 2, 1u);
    return 0LL;
  }
  if ( winrt::operator==(v8, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
  {
    v11 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
    return winrt::impl::make_marshaler(v11, a3);
  }
  else
  {
    if ( winrt::operator==(v10, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
    {
      v9 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(v12 + 24))(v3);
      goto LABEL_7;
    }
    return (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD *, __int64 *))v12)(v3, a2, a3);
  }
}
