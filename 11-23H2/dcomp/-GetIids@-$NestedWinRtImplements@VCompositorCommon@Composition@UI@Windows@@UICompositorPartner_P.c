/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositorPartner_ProjectedShadow@Internal@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18010FD10
 * Callers:
 *     ?GetIids@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFrameAnimation@234@UIKeyFrameAnimation2@234@UIKeyFrameAnimation3@234@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AE5D0 (-GetIids@-$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFrameAnimation@.c)
 *     ?GetIids@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFrameAnimation@234@UIKeyFrameAnimation2@234@UIKeyFrameAnimation3@234@@WRL2@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AE5F0 (-GetIids@-$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFr_ea_1800AE5F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositorCommon,Windows::UI::Composition::Internal::ICompositorPartner_ProjectedShadow>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 344),
           a2,
           a3);
}
