/*
 * XREFs of ?Thunk_Message_CustomAnimationBegin_Callback_0@?$IInteractionTrackerEvent_Receive@VInteractionTracker@Interactions@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18013B460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IInteractionTrackerEvent_Receive<Windows::UI::Composition::Interactions::InteractionTracker>::Thunk_Message_CustomAnimationBegin_Callback_0(
        Windows::UI::Composition::Interactions::InteractionTracker *a1,
        __int64 a2)
{
  return Windows::UI::Composition::Interactions::InteractionTracker::Message_CustomAnimationBegin_Callback(
           a1,
           **(_DWORD **)a2,
           **(_BYTE **)(a2 + 8));
}
