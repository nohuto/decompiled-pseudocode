/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositionScopedBatch@Composition@UI@Windows@@UICompositionScopedBatch@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B6380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionScopedBatch,Windows::UI::Composition::ICompositionScopedBatch>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 200),
           a2,
           a3);
}
