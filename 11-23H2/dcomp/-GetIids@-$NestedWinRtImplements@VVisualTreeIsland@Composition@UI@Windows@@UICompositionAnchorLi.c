/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VVisualTreeIsland@Composition@UI@Windows@@UICompositionAnchorListenerPrivate@Private@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18010FDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualTreeIsland,Windows::UI::Composition::Private::ICompositionAnchorListenerPrivate>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 528),
           a2,
           a3);
}
