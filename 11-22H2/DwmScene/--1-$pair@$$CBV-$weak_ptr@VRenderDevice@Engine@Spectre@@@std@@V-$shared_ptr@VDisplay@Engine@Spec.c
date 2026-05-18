/*
 * XREFs of ??1?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@QEAA@XZ @ 0x180031B18
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18002F14C (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$weak_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800318FC (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$weak_ptr@VRenderDevice@Engine@Spe.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>::~pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 24);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
}
