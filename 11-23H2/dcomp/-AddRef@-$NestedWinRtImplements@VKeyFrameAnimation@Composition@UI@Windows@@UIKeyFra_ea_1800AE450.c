/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFrameAnimation@234@UIKeyFrameAnimation2@234@UIKeyFrameAnimation3@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AE450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::KeyFrameAnimation,Windows::UI::Composition::IKeyFrameAnimation,Windows::UI::Composition::IKeyFrameAnimation2,Windows::UI::Composition::IKeyFrameAnimation3>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestedComImplements<Windows::UI::Composition::InjectionAnimation,Windows::UI::Composition::IInjectionAnimationTest>::AddRef(a1 - 16);
}
