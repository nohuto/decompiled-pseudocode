/*
 * XREFs of ?query_interface@?$root_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@UIMultitaskingViewVisibilityNotification@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F83F0
 * Callers:
 *     ?QueryInterface@?$implements@VTaskViewViewChangeNotificationProxy@@UIMultitaskingViewVisibilityNotification@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F7B70 (-QueryInterface@-$implements@VTaskViewViewChangeNotificationProxy@@UIMultitaskingViewVisibilityN.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x180054C40 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<VirtualDestopSwitcherViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification>::query_interface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  volatile signed __int32 *v3; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rax
  __int64 v17; // rax

  v3 = (volatile signed __int32 *)a1;
  if ( !a1 )
    a1 = 8LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  *a3 = v6;
  if ( v6 )
    goto LABEL_10;
  if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IAgileObject>, v7, v8) )
  {
    v16 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
LABEL_9:
    *a3 = v16;
LABEL_10:
    _InterlockedExchangeAdd(v3 + 2, 1u);
    return 0LL;
  }
  if ( !(unsigned __int8)winrt::operator==(v9, &winrt::impl::guid_v<winrt::impl::IMarshal>, v10, v11) )
  {
    if ( !(unsigned __int8)winrt::operator==(
                             v12,
                             &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>,
                             v13,
                             *(_QWORD *)v3) )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64, __int64 *))v14)(v3, a2, a3);
    v16 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(v14 + 24))(v3);
    goto LABEL_9;
  }
  v17 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
  return winrt::impl::make_marshaler(v17, a3);
}
