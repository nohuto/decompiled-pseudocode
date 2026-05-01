/*
 * XREFs of ?query_interface@?$root_implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801A9890
 * Callers:
 *     ?QueryInterface@?$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A9880 (-QueryInterface@-$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800D7718 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::query_interface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  volatile signed __int32 *v3; // rbx
  __int64 v6; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = (volatile signed __int32 *)a1;
  if ( !a1 )
    a1 = 16LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  *a3 = v6;
  if ( v6 )
    goto LABEL_4;
  if ( winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    v11 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
    goto LABEL_11;
  }
  if ( !winrt::operator==(v8, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
  {
    if ( !winrt::operator==(v9, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD *, __int64 *))v10)(v3, a2, a3);
    v11 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(v10 + 24))(v3);
LABEL_11:
    *a3 = v11;
LABEL_4:
    _InterlockedExchangeAdd(v3 + 2, 1u);
    return 0LL;
  }
  v12 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
  return winrt::impl::make_marshaler(v12, a3);
}
