/*
 * XREFs of ??1?$list@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@V?$allocator@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x1800A5528
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_Spectre::Transcoder::BoundingBox_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__Spectre::Transcoder::BoundingBox____0___::_Hash_std::_Umap_traits_unsigned___int64_Spectre::Transcoder::BoundingBox_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__Spectre::Transcoder::BoundingBox____0____::_1_::dtor$0 @ 0x1800EB678 (_std--_Hash_std--_Umap_traits_unsigned___int64_Spectre--Transcoder--BoundingBox_std_ea_1800EB678.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800A53D0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,Spectre::Transcoder::BoundingBox>>::~list<std::pair<unsigned __int64 const,Spectre::Transcoder::BoundingBox>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned __int64 const,Spectre::Transcoder::BoundingBox>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Spectre::Transcoder::BoundingBox>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x38uLL);
}
