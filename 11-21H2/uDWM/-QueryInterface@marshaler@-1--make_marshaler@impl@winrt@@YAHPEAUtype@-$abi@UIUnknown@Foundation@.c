/*
 * XREFs of ?QueryInterface@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAHAEBUguid@4@1@Z @ 0x1800F1290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall `winrt::impl::make_marshaler'::`2'::marshaler::QueryInterface(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rax

  v3 = *a2 - winrt::impl::guid_v<winrt::impl::IMarshal>;
  if ( *a2 == winrt::impl::guid_v<winrt::impl::IMarshal> )
    v3 = a2[1] - 0x46000000000000C0LL;
  if ( v3 )
    return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 8))(*(_QWORD *)(a1 + 8));
  *a3 = a1;
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 1u);
  return 0LL;
}
