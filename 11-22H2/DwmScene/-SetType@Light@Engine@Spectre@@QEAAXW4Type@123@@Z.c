/*
 * XREFs of ?SetType@Light@Engine@Spectre@@QEAAXW4Type@123@@Z @ 0x1800433B4
 * Callers:
 *     ?RuntimeClassInitialize@SpectreLightNode@@QEAAJW4Dwm3DLightType@@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18001278C (-RuntimeClassInitialize@SpectreLightNode@@QEAAJW4Dwm3DLightType@@AEBV-$shared_ptr@VSceneNode@Eng.c)
 *     ?UpdateLightingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006B21C (-UpdateLightingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engin.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Light::SetType(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 120) = a2;
}
