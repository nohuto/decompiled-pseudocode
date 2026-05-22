/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositionCapabilities@Composition@UI@Windows@@UICompositionCapabilities@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180160FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionCapabilities,Windows::UI::Composition::ICompositionCapabilities>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 72),
           a2,
           a3);
}
