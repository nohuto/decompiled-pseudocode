/*
 * XREFs of ?Release@?$implements_delegate@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@V_lambda_28dbd2337059dd45743c62eabeaa809f_@@@impl@winrt@@UEAAIXZ @ 0x1802840C0
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$implements_delegate@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@V_lambda_28dbd2337059dd45743c62eabeaa809f_@@@impl@winrt@@QEAA@XZ @ 0x180283D50 (--1-$implements_delegate@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler,_lambda_28dbd2337059dd45743c62eabeaa809f_>::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--(a1 + 8);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler,_lambda_28dbd2337059dd45743c62eabeaa809f_>::~implements_delegate<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler,_lambda_28dbd2337059dd45743c62eabeaa809f_>((__int64)a1);
    operator delete((void *)a1);
  }
  return v2;
}
