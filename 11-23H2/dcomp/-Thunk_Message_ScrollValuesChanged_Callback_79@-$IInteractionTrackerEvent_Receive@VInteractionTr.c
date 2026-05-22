/*
 * XREFs of ?Thunk_Message_ScrollValuesChanged_Callback_79@?$IInteractionTrackerEvent_Receive@VInteractionTracker@Interactions@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x1800B6E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IInteractionTrackerEvent_Receive<Windows::UI::Composition::Interactions::InteractionTracker>::Thunk_Message_ScrollValuesChanged_Callback_79(
        Windows::UI::Composition::Interactions::InteractionTracker *a1,
        __int64 a2)
{
  return Windows::UI::Composition::Interactions::InteractionTracker::Message_ScrollValuesChanged_Callback(
           a1,
           *(const struct Windows::Foundation::Numerics::Vector3 **)a2,
           **(float **)(a2 + 8),
           **(_DWORD **)(a2 + 16));
}
