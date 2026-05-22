/*
 * XREFs of ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositionCapabilities@Composition@UI@Windows@@UICompositionCapabilities@234@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180160D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionCapabilities,Windows::UI::Composition::ICompositionCapabilities>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetRuntimeClassName(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 72),
           a2);
}
