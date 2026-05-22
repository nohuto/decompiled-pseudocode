/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VVisualTarget@Composition@UI@Windows@@UIVisualTargetPartner@234@UICompositionTargetPartner@Private@234@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ACF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualTarget,Windows::UI::Composition::IVisualTargetPartner,Windows::UI::Composition::Private::ICompositionTargetPartner>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionGraphicsDevice,Windows::UI::Composition::ICompositionGraphicsDevice,Windows::UI::Composition::ICompositionGraphicsDevice2,Windows::UI::Composition::ICompositionGraphicsDevice3,Windows::UI::Composition::ICompositionGraphicsDevice4>::QueryInterface(
           a1 - 8,
           a2,
           a3);
}
