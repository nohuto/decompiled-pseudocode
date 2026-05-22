/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VVisualUnorderedCollection@Composition@UI@Windows@@U?$IIterable@PEAVVisual@Composition@UI@Windows@@@Collections@Foundation@4@UIVisualUnorderedCollection@234@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AC230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualUnorderedCollection,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Visual *>,Windows::UI::Composition::IVisualUnorderedCollection>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>::GetIids(
           a1 - 8,
           a2,
           a3);
}
