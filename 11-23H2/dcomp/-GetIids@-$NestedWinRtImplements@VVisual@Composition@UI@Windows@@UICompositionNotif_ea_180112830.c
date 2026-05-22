/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotifyPropertyChangedPartner@234@UIVisualPartner@234@UIVisualInternal@Internal@234@UIVisualPrivate@Private@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180112830
 * Callers:
 *     ?GetIids@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotifyPropertyChangedPartner@234@UIVisualPartner@234@UIVisualInternal@Internal@234@UIVisualPrivate@Private@234@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800ACCF0 (-GetIids@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotifyPropertyChan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Visual,Windows::UI::Composition::ICompositionNotifyPropertyChangedPartner,Windows::UI::Composition::IVisualPartner,Windows::UI::Composition::Internal::IVisualInternal,Windows::UI::Composition::Private::IVisualPrivate>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 224),
           a2,
           a3);
}
