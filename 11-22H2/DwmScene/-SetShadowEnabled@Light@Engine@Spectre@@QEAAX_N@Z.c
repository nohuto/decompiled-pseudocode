/*
 * XREFs of ?SetShadowEnabled@Light@Engine@Spectre@@QEAAX_N@Z @ 0x1800433A8
 * Callers:
 *     ?RuntimeClassInitialize@SpectreLightNode@@QEAAJW4Dwm3DLightType@@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18001278C (-RuntimeClassInitialize@SpectreLightNode@@QEAAJW4Dwm3DLightType@@AEBV-$shared_ptr@VSceneNode@Eng.c)
 *     ?CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180065C40 (-CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 *     ?UpdateLightingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006B21C (-UpdateLightingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engin.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Light::SetShadowEnabled(Spectre::Engine::Light *this, char a2)
{
  *((_BYTE *)this + 124) = a2;
}
