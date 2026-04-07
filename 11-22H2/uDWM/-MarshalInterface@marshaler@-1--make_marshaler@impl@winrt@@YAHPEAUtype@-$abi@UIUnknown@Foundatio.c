/*
 * XREFs of ?MarshalInterface@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAHPEAXAEBUguid@4@2I2I@Z @ 0x1800EDB50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall `winrt::impl::make_marshaler'::`2'::marshaler::MarshalInterface(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 40LL))(v3, a2, a3);
  else
    return 2147942414LL;
}
