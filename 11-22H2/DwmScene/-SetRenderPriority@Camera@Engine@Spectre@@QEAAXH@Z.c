/*
 * XREFs of ?SetRenderPriority@Camera@Engine@Spectre@@QEAAXH@Z @ 0x18005D3C4
 * Callers:
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ?CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180065C40 (-CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Camera::SetRenderPriority(Spectre::Engine::Camera *this, int a2)
{
  *((_DWORD *)this + 73) = a2;
}
