/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositorPrivate_VisualReference@Private@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B6010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositorCommon,Windows::UI::Composition::Private::ICompositorPrivate_VisualReference>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 232),
           a2,
           a3);
}
