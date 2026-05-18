/*
 * XREFs of ?ApplyCameraEffects_ResolveOutput@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x1800724B0
 * Callers:
 *     ?ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@_N@Z @ 0x1800735A4 (-ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VIRenderOutput@Engine.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Display@ImageProcessingManager@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180072F50 (-Display@ImageProcessingManager@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VIRenderOutput@Engine@Spec.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ImageProcessingManager::ApplyCameraEffects_ResolveOutput(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  std::_Ref_count_base *v4; // rcx

  Spectre::Engine::ImageProcessingManager::Display();
  v4 = *(std::_Ref_count_base **)(a3 + 8);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
}
