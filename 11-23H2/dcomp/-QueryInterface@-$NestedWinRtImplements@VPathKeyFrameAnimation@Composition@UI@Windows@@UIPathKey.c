/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VPathKeyFrameAnimation@Composition@UI@Windows@@UIPathKeyFrameAnimation@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180129090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::PathKeyFrameAnimation,Windows::UI::Composition::IPathKeyFrameAnimation>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 496),
           a2,
           a3);
}
