/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@AEAAX_K@Z @ 0x18006EA00
 * Callers:
 *     ??$GetComponents_Internal@VCamera@Engine@Spectre@@@Scene@Engine@Spectre@@AEBA?AV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x180062770 (--$GetComponents_Internal@VCamera@Engine@Spectre@@@Scene@Engine@Spectre@@AEBA-AV-$vector@V-$shar.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180010B48 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@YAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@0@@Z @ 0x18002FFB8 (--$_Uninitialized_move@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr.c)
 */

void __fastcall std::vector<std::shared_ptr<Spectre::Engine::Camera>>::_Reallocate_exactly(char **a1)
{
  __int64 v2; // rdi
  unsigned __int64 size_of; // rax
  _QWORD *v4; // rbx

  v2 = (a1[1] - *a1) >> 4;
  size_of = std::_Get_size_of_n<16>(0x20uLL);
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_move<std::shared_ptr<Spectre::Engine::Camera> *,std::allocator<std::shared_ptr<Spectre::Engine::Camera>>>(
    *a1,
    a1[1],
    v4);
  std::vector<std::shared_ptr<Spectre::Engine::Camera>>::_Change_array((__int64)a1, (__int64)v4, v2, 32LL);
}
