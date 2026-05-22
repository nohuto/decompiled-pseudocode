/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VDelegatedInkTrailVisual@Composition@UI@Windows@@UIDelegatedInkTrailVisual@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180110A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::DelegatedInkTrailVisual,Windows::UI::Composition::IDelegatedInkTrailVisual>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 296),
           a2,
           a3);
}
