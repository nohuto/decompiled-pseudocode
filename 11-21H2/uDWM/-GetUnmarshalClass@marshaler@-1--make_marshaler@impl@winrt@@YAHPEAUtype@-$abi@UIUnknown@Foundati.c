/*
 * XREFs of ?GetUnmarshalClass@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAHAEBUguid@4@PEAXI3IPEAU74@@Z @ 0x1800F0EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall `winrt::impl::make_marshaler'::`2'::marshaler::GetUnmarshalClass(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, a2, a3);
  else
    return 2147942414LL;
}
