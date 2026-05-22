/*
 * XREFs of ?Thunk_Message_InertiaBegin_Callback_86@?$IInteractionTrackerEvent_Receive@VInteractionTracker@Interactions@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18013B4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Message_InertiaBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEBUVector3@Numerics@Foundation@5@M0M0_NM11H1@Z @ 0x180139EB8 (-Message_InertiaBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEBU.c)
 */

__int64 __fastcall IInteractionTrackerEvent_Receive<Windows::UI::Composition::Interactions::InteractionTracker>::Thunk_Message_InertiaBegin_Callback_86(
        Windows::UI::Composition::Interactions::InteractionTracker *a1,
        __int64 a2)
{
  char v3; // [rsp+58h] [rbp-10h]

  v3 = **(_BYTE **)(a2 + 80);
  return Windows::UI::Composition::Interactions::InteractionTracker::Message_InertiaBegin_Callback(
           a1,
           *(const struct Windows::Foundation::Numerics::Vector3 **)a2,
           **(float **)(a2 + 8),
           *(const struct Windows::Foundation::Numerics::Vector3 **)(a2 + 16),
           **(float **)(a2 + 24),
           *(const struct Windows::Foundation::Numerics::Vector3 **)(a2 + 32),
           **(_BYTE **)(a2 + 40),
           **(float **)(a2 + 48),
           **(_BYTE **)(a2 + 56),
           **(_BYTE **)(a2 + 64),
           **(_DWORD **)(a2 + 72),
           v3);
}
