/*
 * XREFs of ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x180081AD0
 * Callers:
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_66ed2df52651243ff863a12d97446406_@@@impl@winrt@@UEAAIXZ @ 0x1800111D0 (-Release@-$implements_delegate@U-$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationM.c)
 *     ?Release@error_info_fallback@impl@winrt@@UEAAIXZ @ 0x1800824D0 (-Release@error_info_fallback@impl@winrt@@UEAAIXZ.c)
 *     ?Release@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAIXZ @ 0x180082530 (-Release@marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180082F9C (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_be02bfc96701eec5f3a0245d87020f54_@@@impl@winrt@@UEAAIXZ @ 0x180086360 (-Release@-$implements_delegate@U-$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@.c)
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::Release @ 0x1800CAC30 (winrt--impl--implements_delegate_winrt--Windows--System--Threading--WorkItemHandler_ea_1800CAC30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::atomic_ref_count::operator--(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedDecrement(a1);
  if ( (int)result < 0 )
  {
    _o_terminate(a1, a2, a3, a4);
    __debugbreak();
    JUMPOUT(0x180081AF7LL);
  }
  return result;
}
