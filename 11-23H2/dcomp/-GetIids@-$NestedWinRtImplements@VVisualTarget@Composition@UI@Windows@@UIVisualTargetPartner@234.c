/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VVisualTarget@Composition@UI@Windows@@UIVisualTargetPartner@234@UICompositionTargetPartner@Private@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18010FC50
 * Callers:
 *     ?GetIids@?$NestedWinRtImplements@VCompositionLight@Composition@UI@Windows@@UICompositionLight@234@UICompositionLight2@234@UICompositionLight3@234@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AE550 (-GetIids@-$NestedWinRtImplements@VCompositionLight@Composition@UI@Windows@@UICompositionLight@23.c)
 *     ?GetIids@?$NestedWinRtImplements@VCompositionLight@Composition@UI@Windows@@UICompositionLight@234@UICompositionLight2@234@UICompositionLight3@234@@WRL2@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AE570 (-GetIids@-$NestedWinRtImplements@VCompositionLight@Composition@UI@Windows@@UICompos_ea_1800AE570.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualTarget,Windows::UI::Composition::IVisualTargetPartner,Windows::UI::Composition::Private::ICompositionTargetPartner>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 144),
           a2,
           a3);
}
