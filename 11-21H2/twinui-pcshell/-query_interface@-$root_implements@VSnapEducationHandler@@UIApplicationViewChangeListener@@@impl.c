/*
 * XREFs of ?query_interface@?$root_implements@VSnapEducationHandler@@UIApplicationViewChangeListener@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F87A4
 * Callers:
 *     ?QueryInterface@?$implements@VSnapEducationHandler@@UIApplicationViewChangeListener@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F7F20 (-QueryInterface@-$implements@VSnapEducationHandler@@UIApplicationViewChangeListener@@@winrt@@UEA.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x180054C40 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<SnapEducationHandler,IApplicationViewChangeListener>::query_interface(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v6; // rcx
  _QWORD *v7; // r8
  volatile signed __int32 *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r11
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax

  if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<IApplicationViewChangeListener>, a3, a4) )
  {
    v8 = a1 - 2;
    v17 = (unsigned __int64)(a1 - 2) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64);
    *v7 = v17;
    if ( v17 )
      goto LABEL_11;
  }
  else
  {
    *v7 = 0LL;
  }
  if ( (unsigned __int8)winrt::operator==(v6, &winrt::impl::guid_v<winrt::impl::IAgileObject>, v7, v8) )
  {
    v18 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 24LL))(a1);
LABEL_10:
    *a3 = v18;
LABEL_11:
    _InterlockedExchangeAdd(a1 + 2, 1u);
    return 0LL;
  }
  if ( !(unsigned __int8)winrt::operator==(v9, &winrt::impl::guid_v<winrt::impl::IMarshal>, v10, v11) )
  {
    if ( !(unsigned __int8)winrt::operator==(
                             v12,
                             &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>,
                             v13,
                             *(_QWORD *)a1) )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))v14)(a1, v15);
    v18 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(v14 + 24))(a1);
    goto LABEL_10;
  }
  v19 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 24LL))(a1);
  return winrt::impl::make_marshaler(v19, a3);
}
