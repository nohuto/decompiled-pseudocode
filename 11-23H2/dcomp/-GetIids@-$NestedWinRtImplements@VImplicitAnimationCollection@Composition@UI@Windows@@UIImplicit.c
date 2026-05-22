/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VImplicitAnimationCollection@Composition@UI@Windows@@UIImplicitAnimationCollection@234@U?$IMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@Windows@@@784@@WRL2@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800ADF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::ImplicitAnimationCollection,Windows::UI::Composition::IImplicitAnimationCollection,Windows::Foundation::Collections::IMap<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *> *>>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>::GetIids(
           a1 - 16,
           a2,
           a3);
}
