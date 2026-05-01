/*
 * XREFs of ??1?$com_ptr@VInteractionTracker@SnapInteraction@@@winrt@@QEAA@XZ @ 0x1805A0604
 * Callers:
 *     _winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_ee45b6845675de9c207e4cdce24e0e3d___::Invoke_::_1_::dtor$0 @ 0x1805A0831 (_winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_ee45b68456.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VInteractionTracker@SnapInteraction@@@winrt@@AEAAXXZ @ 0x1805A0E90 (-unconditional_release_ref@-$com_ptr@VInteractionTracker@SnapInteraction@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<SnapInteraction::InteractionTracker>::~com_ptr<SnapInteraction::InteractionTracker>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<SnapInteraction::InteractionTracker>::unconditional_release_ref();
  return result;
}
