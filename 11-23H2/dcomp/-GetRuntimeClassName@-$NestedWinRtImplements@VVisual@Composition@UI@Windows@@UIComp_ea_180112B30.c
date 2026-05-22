/*
 * XREFs of ?GetRuntimeClassName@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotifyPropertyChangedPartner@234@UIVisualPartner@234@UIVisualInternal@Internal@234@UIVisualPrivate@Private@234@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180112B30
 * Callers:
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotifyPropertyChangedPartner@234@UIVisualPartner@234@UIVisualInternal@Internal@234@UIVisualPrivate@Private@234@@WRL2@Microsoft@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1800ACD90 (-GetRuntimeClassName@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotify.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Visual,Windows::UI::Composition::ICompositionNotifyPropertyChangedPartner,Windows::UI::Composition::IVisualPartner,Windows::UI::Composition::Internal::IVisualInternal,Windows::UI::Composition::Private::IVisualPrivate>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetRuntimeClassName(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 224),
           a2);
}
