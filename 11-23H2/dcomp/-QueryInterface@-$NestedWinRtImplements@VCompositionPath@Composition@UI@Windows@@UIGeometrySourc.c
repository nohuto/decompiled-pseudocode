/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositionPath@Composition@UI@Windows@@UIGeometrySource2DInterop@Graphics@4@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18012FCF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionPath,Windows::Graphics::IGeometrySource2DInterop>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 48),
           a2,
           a3);
}
