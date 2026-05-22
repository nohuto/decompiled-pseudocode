/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCompositionGraphicsDevice@Composition@UI@Windows@@UICompositionGraphicsDeviceInternal@Internal@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180127F00
 * Callers:
 *     ?GetIids@?$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Windows@@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AE4D0 (-GetIids@-$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Windows@@UICompositio.c)
 *     ?GetIids@?$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Windows@@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B0AE0 (-GetIids@-$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Windows@_ea_1800B0AE0.c)
 *     ?GetIids@?$NestedWinRtImplements@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@UICompositionVirtualDrawingSurface@234@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B0B00 (-GetIids@-$NestedWinRtImplements@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@UICom.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionGraphicsDevice,Windows::UI::Composition::Internal::ICompositionGraphicsDeviceInternal>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 192),
           a2,
           a3);
}
