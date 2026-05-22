/*
 * XREFs of ?QueryInterface@?$NestedComImplements@VKeyFrameAnimation@Composition@UI@Windows@@UICompositionKeyFrameAnimationPartner@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180110A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedComImplements<Windows::UI::Composition::KeyFrameAnimation,Windows::UI::Composition::ICompositionKeyFrameAnimationPartner>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 376),
           a2,
           a3);
}
