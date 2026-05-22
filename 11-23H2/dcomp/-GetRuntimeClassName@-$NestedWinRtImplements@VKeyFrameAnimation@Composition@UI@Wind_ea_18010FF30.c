/*
 * XREFs of ?GetRuntimeClassName@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFrameAnimation@234@UIKeyFrameAnimation2@234@UIKeyFrameAnimation3@234@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18010FF30
 * Callers:
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFrameAnimation@234@UIKeyFrameAnimation2@234@UIKeyFrameAnimation3@234@@WRL2@Microsoft@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AE770 (-GetRuntimeClassName@-$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFra.c)
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFrameAnimation@234@UIKeyFrameAnimation2@234@UIKeyFrameAnimation3@234@@WRL2@Microsoft@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AE790 (-GetRuntimeClassName@-$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Wind_ea_1800AE790.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::KeyFrameAnimation,Windows::UI::Composition::IKeyFrameAnimation,Windows::UI::Composition::IKeyFrameAnimation2,Windows::UI::Composition::IKeyFrameAnimation3>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetRuntimeClassName(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 344),
           a2);
}
