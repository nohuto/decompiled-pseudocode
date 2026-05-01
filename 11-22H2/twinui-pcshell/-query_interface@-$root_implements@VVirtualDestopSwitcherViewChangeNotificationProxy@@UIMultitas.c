/*
 * XREFs of ?query_interface@?$root_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@UIMultitaskingViewVisibilityNotification@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D9F84
 * Callers:
 *     ?QueryInterface@?$implements@VTaskViewViewChangeNotificationProxy@@UIMultitaskingViewVisibilityNotification@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DB300 (-QueryInterface@-$implements@VTaskViewViewChangeNotificationProxy@@UIMultitaskingViewVisibilityN.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800D7718 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<VirtualDestopSwitcherViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification>::query_interface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  volatile signed __int32 *v3; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // r9
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = (volatile signed __int32 *)a1;
  if ( !a1 )
    a1 = 8LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  *a3 = v6;
  if ( v6 )
    goto LABEL_10;
  if ( winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    v11 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
LABEL_9:
    *a3 = v11;
LABEL_10:
    _InterlockedExchangeAdd(v3 + 2, 1u);
    return 0LL;
  }
  if ( !winrt::operator==(v7, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
  {
    if ( !winrt::operator==(v8, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD *, __int64 *))v9)(v3, a2, a3);
    v11 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(v9 + 24))(v3);
    goto LABEL_9;
  }
  v12 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
  return winrt::impl::make_marshaler(v12, a3);
}
