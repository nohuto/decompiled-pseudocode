/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800F7364
 * Callers:
 *     _std::map_unsigned_long_unsigned_long_std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__unsigned_long_____::_Try_emplace_unsigned_long_const_&__::_1_::dtor$6 @ 0x18006C820 (_std--map_unsigned_long_unsigned_long_std--less_unsigned_long__std--allocator_std--pair_unsigned.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x28uLL);
}
