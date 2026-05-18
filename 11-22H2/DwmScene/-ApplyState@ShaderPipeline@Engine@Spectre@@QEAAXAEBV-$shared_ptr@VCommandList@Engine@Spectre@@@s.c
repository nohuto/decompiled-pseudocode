/*
 * XREFs of ?ApplyState@ShaderPipeline@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@W4Sides@123@VShaderTypeGroup@23@_N@Z @ 0x180086A7C
 * Callers:
 *     ?ApplyState@Material@Engine@Spectre@@QEAA?AU?$pair@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@VShaderTypeGroup@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@_N@Z @ 0x180043F18 (-ApplyState@Material@Engine@Spectre@@QEAA-AU-$pair@V-$shared_ptr@VShaderPipeline@Engine@Spectre@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?SetRenderState@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@@Z @ 0x180039720 (-SetRenderState@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VRenderState@Engine@Spectre@@@.c)
 *     ?SetShaderPipeline@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@Z @ 0x1800397F4 (-SetShaderPipeline@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VShaderPipeline@Engine@Spec.c)
 *     ?SetVertexLayout@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VVertexLayout@Engine@Spectre@@@std@@@Z @ 0x18003993C (-SetVertexLayout@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VVertexLayout@Engine@Spectre@.c)
 *     ?shared_from_this@?$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VComponent@Engine@Spectre@@@2@XZ @ 0x1800433FC (-shared_from_this@-$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr.c)
 *     ?ApplyState@ShaderFamily@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@VShaderTypeGroup@23@@Z @ 0x18005FF64 (-ApplyState@ShaderFamily@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std.c)
 *     ?AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180086B60 (-AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 */

void __fastcall Spectre::Engine::ShaderPipeline::ApplyState(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-20h]

  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(*a2 + 72, &v5);
  Spectre::Engine::ShaderPipeline::AttachDevice(a1, &v5);
  Spectre::Engine::ShaderFamily::ApplyState(*(_QWORD *)(a1 + 16));
  Spectre::Engine::CommandList::SetRenderState(*a2);
  Spectre::Engine::CommandList::SetVertexLayout(*a2);
  v4 = *a2;
  std::enable_shared_from_this<Spectre::Engine::Component>::shared_from_this(a1, &v5);
  Spectre::Engine::CommandList::SetShaderPipeline(v4);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
