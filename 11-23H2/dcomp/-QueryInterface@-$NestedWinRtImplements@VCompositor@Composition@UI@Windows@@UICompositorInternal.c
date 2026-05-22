/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInternal@Internal@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180110AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Compositor,Windows::UI::Composition::Internal::ICompositorInternal>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 1112),
           a2,
           a3);
}
