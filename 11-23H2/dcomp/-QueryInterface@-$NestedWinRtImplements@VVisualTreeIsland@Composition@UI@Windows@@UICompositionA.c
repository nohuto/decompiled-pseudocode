/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VVisualTreeIsland@Composition@UI@Windows@@UICompositionAnchorListenerPrivate@Private@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180110B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualTreeIsland,Windows::UI::Composition::Private::ICompositionAnchorListenerPrivate>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 528),
           a2,
           a3);
}
