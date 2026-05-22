/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCompositionCapabilities@Composition@UI@Windows@@UICompositionCapabilities@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180160D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionCapabilities,Windows::UI::Composition::ICompositionCapabilities>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 72),
           a2,
           a3);
}
