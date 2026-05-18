/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800318FC
 * Callers:
 *     ??$_Try_emplace@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@$$V@?$map@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@U?$owner_less@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@_N@1@$$QEAV?$weak_ptr@VRenderDevice@Engine@Spectre@@@1@@Z @ 0x18002FDBC (--$_Try_emplace@V-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@$$V@-$map@V-$weak_ptr@VRenderDev.c)
 * Callees:
 *     ??1?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@QEAA@XZ @ 0x180031B18 (--1-$pair@$$CBV-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V-$shared_ptr@VDisplay@Engine@Spec.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>::~pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>(v2 + 32);
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::GpuQuery::QueryType const,std::stack<std::shared_ptr<Spectre::Engine::GpuQuery>,std::vector<std::shared_ptr<Spectre::Engine::GpuQuery>>>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::GpuQuery::QueryType const,std::stack<std::shared_ptr<Spectre::Engine::GpuQuery>,std::vector<std::shared_ptr<Spectre::Engine::GpuQuery>>>>,void *>>>(a1);
}
