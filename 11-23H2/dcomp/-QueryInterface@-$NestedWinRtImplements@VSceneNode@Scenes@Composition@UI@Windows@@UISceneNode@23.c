/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VSceneNode@Scenes@Composition@UI@Windows@@UISceneNode@2345@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180112EC0
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotifyPropertyChangedPartner@234@UIVisualPartner@234@UIVisualInternal@Internal@234@UIVisualPrivate@Private@234@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ACE90 (-QueryInterface@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotifyPrope.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotifyPropertyChangedPartner@234@UIVisualPartner@234@UIVisualInternal@Internal@234@UIVisualPrivate@Private@234@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ACEB0 (-QueryInterface@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositi_ea_1800ACEB0.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotifyPropertyChangedPartner@234@UIVisualPartner@234@UIVisualInternal@Internal@234@UIVisualPrivate@Private@234@@WRL2@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ACED0 (-QueryInterface@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositi_ea_1800ACED0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneNode,Windows::UI::Composition::Scenes::ISceneNode>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 208),
           a2,
           a3);
}
