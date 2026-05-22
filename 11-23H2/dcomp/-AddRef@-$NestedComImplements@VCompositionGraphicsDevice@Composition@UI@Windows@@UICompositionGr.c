/*
 * XREFs of ?AddRef@?$NestedComImplements@VCompositionGraphicsDevice@Composition@UI@Windows@@UICompositionGraphicsDeviceInterop@234@@WRL2@Microsoft@@UEAAKXZ @ 0x180124870
 * Callers:
 *     ?AddRef@?$NestedWinRtImplements@VSceneNodeCollection@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$IIterable@PEAVSceneNode@Scenes@Composition@UI@Windows@@@785@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800B0340 (-AddRef@-$NestedWinRtImplements@VSceneNodeCollection@Scenes@Composition@UI@Windows@@U-$IVector@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedComImplements<Windows::UI::Composition::CompositionGraphicsDevice,Windows::UI::Composition::ICompositionGraphicsDeviceInterop>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)(a1 - 176));
}
