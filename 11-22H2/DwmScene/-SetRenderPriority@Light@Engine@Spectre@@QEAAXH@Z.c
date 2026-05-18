/*
 * XREFs of ?SetRenderPriority@Light@Engine@Spectre@@QEAAXH@Z @ 0x180043398
 * Callers:
 *     ?RuntimeClassInitialize@SpectreLightNode@@QEAAJW4Dwm3DLightType@@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18001278C (-RuntimeClassInitialize@SpectreLightNode@@QEAAJW4Dwm3DLightType@@AEBV-$shared_ptr@VSceneNode@Eng.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Light::SetRenderPriority(Spectre::Engine::Light *this, int a2)
{
  *((_DWORD *)this + 32) = a2;
}
