/*
 * XREFs of ?FlushState@ShaderManager@Engine@Spectre@@QEAAXXZ @ 0x18004FA38
 * Callers:
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ?FlushState@ShaderFamily@Engine@Spectre@@AEAAXXZ @ 0x180060968 (-FlushState@ShaderFamily@Engine@Spectre@@AEAAXXZ.c)
 */

void __fastcall Spectre::Engine::ShaderManager::FlushState(Spectre::Engine::ShaderManager *this)
{
  __int64 v1; // rcx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = **((_QWORD **)this + 2320);
  v2 = v1;
  while ( !*(_BYTE *)(v1 + 25) )
  {
    Spectre::Engine::ShaderFamily::FlushState(*(Spectre::Engine::ShaderFamily **)(v1 + 64));
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v2);
    v1 = v2;
  }
}
