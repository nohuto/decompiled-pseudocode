/*
 * XREFs of ??1?$list@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@2@@std@@QEAA@XZ @ 0x1803F95B4
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__unsigned___int64____0___::_Hash_std::_Umap_traits_unsigned___int64_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__unsigned___int64____0____::_1_::dtor$0 @ 0x1802B64B7 (_std--_Hash_std--_Umap_traits_unsigned___int64_unsigned___int64_std--_Uhash_compare_unsigned___i.c)
 *     _std::_Hash_std::_Umap_traits_HWINEVENTHOOK_____GamingOverlayExperienceManager___std::_Uhash_compare_HWINEVENTHOOK_____std::hash_HWINEVENTHOOK______std::equal_to_HWINEVENTHOOK________std::allocator_std::pair_HWINEVENTHOOK_____const_GamingOverlayExperienceManager______0___::_Hash_std::_Umap_traits_HWINEVENTHOOK_____GamingOverlayExperienceManager___std::_Uhash_compare_HWINEVENTHOOK_____std::hash_HWINEVENTHOOK______std::equal_to_HWINEVENTHOOK________std::allocator_std::pair_HWINEVENTHOOK_____const_GamingOverlayExperienceManager______0____::_1_::dtor$0 @ 0x1802C4A95 (_std--_Hash_std--_Umap_traits_HWINEVENTHOOK_____GamingOverlayExperienceManager___std--_Uhash_com.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>::~list<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>(
        void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, 0x20uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, 0x20uLL);
}
