/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x180056E60
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x180056E60 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$weak_ptr@VCamera@Engine@Spectre@@@std@@.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@U?$owner_less@V?$weak_ptr@VCamera@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180057230 (--1-$_Tree@V-$_Tmap_traits@V-$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Eng.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@U?$owner_less@V?$weak_ptr@VCamera@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$weak_ptr@VCamera@Engine@Spectre@@@2@@Z @ 0x18005849C (-erase@-$_Tree@V-$_Tmap_traits@V-$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x180056E60 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$weak_ptr@VCamera@Engine@Spectre@@@std@@.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180056EB8 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$weak_ptr@VCamera@Engine@Spectre@@@std@@UC.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<std::weak_ptr<Spectre::Engine::Camera> const,Spectre::Engine::Display::CameraViewport>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::weak_ptr<Spectre::Engine::Camera> const,Spectre::Engine::Display::CameraViewport>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3;
        !*((_BYTE *)i + 25);
        result = std::_Tree_node<std::pair<std::weak_ptr<Spectre::Engine::Camera> const,Spectre::Engine::Display::CameraViewport>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<std::weak_ptr<Spectre::Engine::Camera> const,Spectre::Engine::Display::CameraViewport>,void *>>>(
                   v7,
                   v6) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<std::weak_ptr<Spectre::Engine::Camera> const,Spectre::Engine::Display::CameraViewport>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::weak_ptr<Spectre::Engine::Camera> const,Spectre::Engine::Display::CameraViewport>,void *>>>(
      a1,
      a2,
      i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
