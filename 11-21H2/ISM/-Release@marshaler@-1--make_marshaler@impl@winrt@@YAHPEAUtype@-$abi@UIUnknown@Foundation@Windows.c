/*
 * XREFs of ?Release@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAIXZ @ 0x180082530
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x180081AD0 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall `winrt::impl::make_marshaler'::`2'::marshaler::Release(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi

  v5 = winrt::impl::atomic_ref_count::operator--((volatile signed __int32 *)a1 + 6, a2, a3, a4);
  if ( !v5 && a1 )
  {
    if ( *((_QWORD *)a1 + 2) )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)a1 + 2);
    if ( *((_QWORD *)a1 + 1) )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)a1 + 1);
    operator delete(a1);
  }
  return v5;
}
