/*
 * XREFs of ?Release@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAIXZ @ 0x1800F12E0
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x18004518C (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??_Gmarshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@PEAPEAX@Z@QEAAPEAXI@Z @ 0x1800F0AB0 (--_Gmarshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winr.c)
 */

__int64 __fastcall `winrt::impl::make_marshaler'::`2'::marshaler::Release(__int64 a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--((volatile signed __int32 *)(a1 + 24));
  if ( !v2 && a1 )
    `winrt::impl::make_marshaler'::`2'::marshaler::`scalar deleting destructor'(a1);
  return v2;
}
