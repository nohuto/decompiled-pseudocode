/*
 * XREFs of ?FlushShaderProperties@Camera@Engine@Spectre@@IEBAXH@Z @ 0x18005B90C
 * Callers:
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?SetGlobalVector4@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UVector4@Math@Utils@3@@Z @ 0x1800507D4 (-SetGlobalVector4@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C (-GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ.c)
 */

void __fastcall Spectre::Engine::Camera::FlushShaderProperties(__int64 **this, int a2)
{
  Spectre::Engine::Engine *Engine; // rax
  struct Spectre::Engine::ShaderManager *ShaderManager; // rsi
  __int64 v6; // rcx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  Engine = Spectre::Engine::Component::GetEngine((Spectre::Engine::Component *)this);
  ShaderManager = Spectre::Engine::Engine::GetShaderManager(Engine);
  v6 = *this[202];
  v7 = v6;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    if ( *(_DWORD *)(v6 + 32) == -1 || *(_DWORD *)(v6 + 32) == a2 )
      Spectre::Engine::ShaderManager::SetGlobalVector4((__int64)ShaderManager);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v7);
    v6 = v7;
  }
}
