/*
 * XREFs of ??1?$implements_delegate@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@V_lambda_28dbd2337059dd45743c62eabeaa809f_@@@impl@winrt@@QEAA@XZ @ 0x180283D50
 * Callers:
 *     ?Release@?$implements_delegate@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@V_lambda_28dbd2337059dd45743c62eabeaa809f_@@@impl@winrt@@UEAAIXZ @ 0x1802840C0 (-Release@-$implements_delegate@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows.c)
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler,_lambda_28dbd2337059dd45743c62eabeaa809f_>::~implements_delegate<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler,_lambda_28dbd2337059dd45743c62eabeaa809f_>(
        __int64 a1)
{
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 8));
}
