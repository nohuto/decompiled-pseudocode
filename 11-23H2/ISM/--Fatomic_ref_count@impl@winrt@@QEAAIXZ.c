/*
 * XREFs of ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x180098D74
 * Callers:
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_66ed2df52651243ff863a12d97446406_@@@impl@winrt@@UEAAIXZ @ 0x180019890 (-Release@-$implements_delegate@U-$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationM.c)
 *     ?Release@error_info_fallback@impl@winrt@@UEAAIXZ @ 0x180099670 (-Release@error_info_fallback@impl@winrt@@UEAAIXZ.c)
 *     ?Release@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAIXZ @ 0x1800996D0 (-Release@marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009A054 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_be02bfc96701eec5f3a0245d87020f54_@@@impl@winrt@@UEAAIXZ @ 0x18009D420 (-Release@-$implements_delegate@U-$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@.c)
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::Release @ 0x1800E42C0 (winrt--impl--implements_delegate_winrt--Windows--System--Threading--WorkItemHandler_ea_1800E42C0.c)
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_f7189cc794088eeaf33bed95e453010f_@@@impl@winrt@@UEAAIXZ @ 0x18010DC60 (-Release@-$implements_delegate@U-$TypedEventHandler@UIUniversalAppModelWatcher@Wind_ea_18010DC60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::atomic_ref_count::operator--(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedDecrement(a1);
  if ( (int)result < 0 )
    abort();
  return result;
}
