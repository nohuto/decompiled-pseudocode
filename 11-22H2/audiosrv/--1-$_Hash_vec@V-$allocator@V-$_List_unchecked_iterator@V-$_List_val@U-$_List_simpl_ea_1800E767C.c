/*
 * XREFs of ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x1800E767C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_CAudioSessionInstanceId_wil::com_ptr_t_CAudioSession_wil::err_returncode_policy__std::_Uhash_compare_CAudioSessionInstanceId_std::hash_CAudioSessionInstanceId__std::equal_to_CAudioSessionInstanceId____std::allocator_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy______0___::_Hash_std::_Umap_traits_CAudioSessionInstanceId_wil::com_ptr_t_CAudioSession_wil::err_returncode_policy__std::_Uhash_compare_CAudioSessionInstanceId_std::hash_CAudioSessionInstanceId__std::equal_to_CAudioSessionInstanceId____std::allocator_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy______0____std::allocator_std::_List_node_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy____void________::_1_::dtor$1 @ 0x18007A6FA (_std--_Hash_std--_Umap_traits_CAudioSessionInstanceId_wil--com_ptr_t_CAudioSession__ea_18007A6FA.c)
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$14 @ 0x18007A964 (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$14.c)
 *     _std::_Hash_std::_Umap_traits_CAudioSessionInstanceId_wil::com_ptr_t_CAudioSession_wil::err_returncode_policy__std::_Uhash_compare_CAudioSessionInstanceId_std::hash_CAudioSessionInstanceId__std::equal_to_CAudioSessionInstanceId____std::allocator_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy______0___::_Hash_std::_Umap_traits_CAudioSessionInstanceId_wil::com_ptr_t_CAudioSession_wil::err_returncode_policy__std::_Uhash_compare_CAudioSessionInstanceId_std::hash_CAudioSessionInstanceId__std::equal_to_CAudioSessionInstanceId____std::allocator_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy______0____::_1_::dtor$1 @ 0x18007A990 (_std--_Hash_std--_Umap_traits_CAudioSessionInstanceId_wil--com_ptr_t_CAudioSession__ea_18007A990.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$60 @ 0x18007BEA0 (_CAudioSessionManager--Disconnect_--_1_--dtor$60.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$91 @ 0x18007BEE0 (_CAudioSessionManager--Disconnect_--_1_--dtor$91.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2D00 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>>>>>(
        __int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  void *v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(void **)a1;
  v5 = v2;
  v4 = (*(_QWORD *)(a1 + 8) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v4 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v5, &v4);
    v2 = v5;
  }
  operator delete(v2);
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
