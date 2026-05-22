/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCompositionPath@Composition@UI@Windows@@UIGeometrySource2DInterop@Graphics@4@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18012FCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionPath,Windows::Graphics::IGeometrySource2DInterop>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 48),
           a2,
           a3);
}
