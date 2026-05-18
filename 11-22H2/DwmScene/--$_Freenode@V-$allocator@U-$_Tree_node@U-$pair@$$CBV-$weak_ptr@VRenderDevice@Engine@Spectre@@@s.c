/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18002F14C
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@1@@Z @ 0x18002E904 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$weak_ptr@VRenderDevice@Engine@Spectre@@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@U?$owner_less@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@2@@Z @ 0x180038678 (-erase@-$_Tree@V-$_Tmap_traits@V-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V-$shared_ptr@VDi.c)
 * Callees:
 *     ??1?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@QEAA@XZ @ 0x180031B18 (--1-$pair@$$CBV-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V-$shared_ptr@VDisplay@Engine@Spec.c)
 */

void __fastcall std::_Tree_node<std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>,void *>>>(
        __int64 a1,
        char *a2)
{
  std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>::~pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>(a2 + 32);
  std::_Deallocate<16,0>(a2, 0x40uLL);
}
