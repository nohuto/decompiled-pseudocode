/*
 * XREFs of ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x180015458
 * Callers:
 *     _std::unordered_map_unsigned_long_std::unique_ptr_TSSession_std::default_delete_TSSession____std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_std::pair_unsigned_long_const__std::unique_ptr_TSSession_std::default_delete_TSSession_________::unordered_map_unsigned_long_std::unique_ptr_TSSession_std::default_delete_TSSession____std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_std::pair_unsigned_long_const__std::unique_ptr_TSSession_std::default_delete_TSSession__________::_1_::dtor$2 @ 0x18004984E (_std--unordered_map_unsigned_long_std--unique_ptr_TSSession_std--default_delete_TSS_ea_18004984E.c)
 *     _CEndpointVolumeStateManager::CEndpointVolumeStateManager_::_1_::dtor$8 @ 0x180049DBC (_CEndpointVolumeStateManager--CEndpointVolumeStateManager_--_1_--dtor$8.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18001ED60 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>>(
        __int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(void **)a1;
  v6 = v2;
  v3 = (*(_QWORD *)(a1 + 8) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL;
  v5 = v3;
  if ( v3 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v6, &v5);
    v3 = v5;
    v2 = v6;
  }
  operator delete(v2, v3);
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
