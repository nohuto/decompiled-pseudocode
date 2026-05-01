/*
 * XREFs of ?QueryInterface@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAHAEBUguid@4@1@Z @ 0x180391F50
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall `winrt::impl::make_marshaler'::`2'::marshaler::QueryInterface(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9
  __int64 v4; // r11

  if ( !winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
    return (***(__int64 (__fastcall ****)(_QWORD, __int64))(v3 + 8))(*(_QWORD *)(v3 + 8), v4);
  *v2 = v3;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 24), 1u);
  return 0LL;
}
