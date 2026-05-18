/*
 * XREFs of ?UpdateFrameConstants@ViewerEngine@Engine@Spectre@@AEAAXXZ @ 0x18006A5CC
 * Callers:
 *     ?PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067590 (-PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?GetGlobalProperties@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x18004FA88 (-GetGlobalProperties@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyBlock@Engi.c)
 *     ?SetScalar@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x180085588 (-SetScalar@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ViewerEngine::UpdateFrameConstants(Spectre::Engine::ViewerEngine *this)
{
  struct Spectre::Engine::ShaderManager *ShaderManager; // rax
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v3; // [rsp+28h] [rbp-10h]

  ShaderManager = Spectre::Engine::Engine::GetShaderManager(this);
  Spectre::Engine::ShaderManager::GetGlobalProperties((__int64)ShaderManager, &v2);
  Spectre::Engine::ShaderPropertyBlock::SetScalar(v2);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
