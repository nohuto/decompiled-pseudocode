/*
 * XREFs of ?SetShaderOptions@SceneLayer@Engine@Spectre@@QEAAX_K@Z @ 0x180042098
 * Callers:
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::SceneLayer::SetShaderOptions(Spectre::Engine::SceneLayer *this, __int64 a2)
{
  *((_QWORD *)this + 12) = a2;
}
