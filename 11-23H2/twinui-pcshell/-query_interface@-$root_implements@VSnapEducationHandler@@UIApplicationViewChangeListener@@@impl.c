/*
 * XREFs of ?query_interface@?$root_implements@VSnapEducationHandler@@UIApplicationViewChangeListener@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D96A0
 * Callers:
 *     ?QueryInterface@?$implements@VSnapEducationHandler@@UIApplicationViewChangeListener@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DAEC0 (-QueryInterface@-$implements@VSnapEducationHandler@@UIApplicationViewChangeListener@@@winrt@@UEA.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800D7718 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<SnapEducationHandler,IApplicationViewChangeListener>::query_interface(
        volatile signed __int32 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *v5; // rcx
  _QWORD *v6; // r8
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax

  if ( winrt::operator==(a2, &winrt::impl::guid_v<IApplicationViewChangeListener>) )
  {
    v12 = (unsigned __int64)(a1 - 2) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64);
    *v6 = v12;
    if ( v12 )
      goto LABEL_11;
  }
  else
  {
    *v6 = 0LL;
  }
  if ( winrt::operator==(v5, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    v13 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 24LL))(a1);
LABEL_10:
    *a3 = v13;
LABEL_11:
    _InterlockedExchangeAdd(a1 + 2, 1u);
    return 0LL;
  }
  if ( !winrt::operator==(v7, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
  {
    if ( !winrt::operator==(v8, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))v9)(a1, v10);
    v13 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(v9 + 24))(a1);
    goto LABEL_10;
  }
  v14 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 24LL))(a1);
  return winrt::impl::make_marshaler(v14, a3);
}
