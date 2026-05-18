/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800700A4
 * Callers:
 *     _std::_Uninitialized_move_Spectre::Engine::ResourceData___std::allocator_Spectre::Engine::ResourceData____::_1_::dtor$0 @ 0x1800E83F9 (_std--_Uninitialized_move_Spectre--Engine--ResourceData___std--allocator_Spectre--Engine--Resour.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<std::allocator<Spectre::Engine::ResourceData>>::~_Uninitialized_backout_al<std::allocator<Spectre::Engine::ResourceData>>(
        Spectre::Engine::ResourceData **a1)
{
  std::_Destroy_range<std::allocator<Spectre::Engine::ResourceData>>(*a1, a1[1]);
}
