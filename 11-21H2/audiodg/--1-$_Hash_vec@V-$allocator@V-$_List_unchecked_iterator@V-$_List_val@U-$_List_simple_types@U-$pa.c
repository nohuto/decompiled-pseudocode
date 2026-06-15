/*
 * XREFs of ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x140064C34
 * Callers:
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$16 @ 0x14003923C (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$16.c)
 *     _std::_Hash_std::_Umap_traits_IAudioProcessingObject___wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy__std::_Uhash_compare_IAudioProcessingObject___std::hash_IAudioProcessingObject____std::equal_to_IAudioProcessingObject______std::allocator_std::pair_IAudioProcessingObject___const_wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy______0___::_Hash_std::_Umap_traits_IAudioProcessingObject___wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy__std::_Uhash_compare_IAudioProcessingObject___std::hash_IAudioProcessingObject____std::equal_to_IAudioProcessingObject______std::allocator_std::pair_IAudioProcessingObject___const_wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy______0____::_1_::dtor$1 @ 0x140039268 (_std--_Hash_std--_Umap_traits_IAudioProcessingObject___wil--com_ptr_t_CAPOProcessin_ea_140039268.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14002D290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>>>>>(
        __int64 a1)
{
  __int64 result; // rax

  std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
