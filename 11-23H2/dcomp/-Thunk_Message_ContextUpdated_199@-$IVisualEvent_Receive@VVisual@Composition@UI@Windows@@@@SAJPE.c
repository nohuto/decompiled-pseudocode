/*
 * XREFs of ?Thunk_Message_ContextUpdated_199@?$IVisualEvent_Receive@VVisual@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x1800872D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Message_ContextUpdated@Visual@Composition@UI@Windows@@QEAAJMPEAUVector2@Numerics@Foundation@4@PEAUVector3@674@1@Z @ 0x180087300 (-Message_ContextUpdated@Visual@Composition@UI@Windows@@QEAAJMPEAUVector2@Numerics@Foundation@4@P.c)
 */

__int64 __fastcall IVisualEvent_Receive<Windows::UI::Composition::Visual>::Thunk_Message_ContextUpdated_199(
        Windows::UI::Composition::Visual *a1,
        __int64 a2)
{
  return Windows::UI::Composition::Visual::Message_ContextUpdated(
           a1,
           **(float **)a2,
           *(struct Windows::Foundation::Numerics::Vector2 **)(a2 + 8),
           *(struct Windows::Foundation::Numerics::Vector3 **)(a2 + 16),
           *(struct Windows::Foundation::Numerics::Vector3 **)(a2 + 24));
}
