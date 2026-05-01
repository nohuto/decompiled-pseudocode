/*
 * XREFs of ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x1806B0850
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::MeetAndChatManager_::_1_::dtor$1 @ 0x1802B46C4 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--MeetAndChatMa_ea_1802B46C4.c)
 *     _winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::CreateWithShellViewCoordinatorMap_::_1_::dtor$0 @ 0x1802C1907 (_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimationRelation_ea_1802C1907.c)
 *     __lambda_00799cc444f9312ab8cc556666836ecb_::operator()_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_const_&_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_const_&__::_1_::dtor$0 @ 0x1807606CF (__lambda_00799cc444f9312ab8cc556666836ecb_--operator()_winrt--Windows--UI--Composition--Internal.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18012944C (-unconditional_release_ref@-$com_ptr@UEdgeAnimationRelationshipManager@implementation@Animations.c)
 */

__int64 __fastcall winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>(volatile __int64 **a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager>::unconditional_release_ref(a1);
  return result;
}
