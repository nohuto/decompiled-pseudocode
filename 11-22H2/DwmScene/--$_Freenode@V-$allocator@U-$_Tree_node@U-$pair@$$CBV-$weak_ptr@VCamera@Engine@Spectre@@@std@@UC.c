/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180056EB8
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x180056E60 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$weak_ptr@VCamera@Engine@Spectre@@@std@@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@U?$owner_less@V?$weak_ptr@VCamera@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$weak_ptr@VCamera@Engine@Spectre@@@2@@Z @ 0x18005849C (-erase@-$_Tree@V-$_Tmap_traits@V-$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Tree_node<std::pair<std::weak_ptr<Spectre::Engine::Camera> const,Spectre::Engine::Display::CameraViewport>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<std::weak_ptr<Spectre::Engine::Camera> const,Spectre::Engine::Display::CameraViewport>,void *>>>(
        __int64 a1,
        _QWORD *a2)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)a2[5];
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  std::_Deallocate<16,0>(a2, 0x48uLL);
}
