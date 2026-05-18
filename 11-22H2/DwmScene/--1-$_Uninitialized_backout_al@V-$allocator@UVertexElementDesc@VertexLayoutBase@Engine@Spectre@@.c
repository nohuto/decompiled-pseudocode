/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800867F0
 * Callers:
 *     _std::_Uninitialized_copy_Spectre::Engine::VertexLayoutBase::VertexElementDesc___std::allocator_Spectre::Engine::VertexLayoutBase::VertexElementDesc____::_1_::dtor$0 @ 0x1800EA46D (_std--_Uninitialized_copy_Spectre--Engine--VertexLayoutBase--VertexElementDesc___std--allocator_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<std::allocator<Spectre::Engine::VertexLayoutBase::VertexElementDesc>>::~_Uninitialized_backout_al<std::allocator<Spectre::Engine::VertexLayoutBase::VertexElementDesc>>(
        __int64 *a1)
{
  std::_Destroy_range<std::allocator<Spectre::Engine::VertexLayoutBase::VertexElementDesc>>(*a1, a1[1]);
}
