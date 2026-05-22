/*
 * XREFs of ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositionGraphicsDevice@Composition@UI@Windows@@UICompositionGraphicsDeviceInternal@Internal@234@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801281F0
 * Callers:
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Windows@@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AE670 (-GetRuntimeClassName@-$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Windows@@.c)
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Windows@@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800B0B20 (-GetRuntimeClassName@-$NestedWinRtImplements@VCompositionDrawingSurface@Composition_ea_1800B0B20.c)
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@UICompositionVirtualDrawingSurface@234@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800B0B40 (-GetRuntimeClassName@-$NestedWinRtImplements@VCompositionVirtualDrawingSurface@Composition@UI@Wi.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionGraphicsDevice,Windows::UI::Composition::Internal::ICompositionGraphicsDeviceInternal>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetRuntimeClassName(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 192),
           a2);
}
