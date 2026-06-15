/*
 * XREFs of ??1?$list@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x14006BA30
 * Callers:
 *     _std::_Hash_std::_Umap_traits_IAudioProcessingObject___wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy__std::_Uhash_compare_IAudioProcessingObject___std::hash_IAudioProcessingObject____std::equal_to_IAudioProcessingObject______std::allocator_std::pair_IAudioProcessingObject___const_wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy______0___::_Hash_std::_Umap_traits_IAudioProcessingObject___wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy__std::_Uhash_compare_IAudioProcessingObject___std::hash_IAudioProcessingObject____std::equal_to_IAudioProcessingObject______std::allocator_std::pair_IAudioProcessingObject___const_wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy______0____::_1_::dtor$0 @ 0x14006B1FD (_std--_Hash_std--_Umap_traits_IAudioProcessingObject___wil--com_ptr_t_CAPOProcessin_ea_14006B1FD.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x14006AAE0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUIAudioProcessingObject@@V-$com_ptr_t@VC.c)
 */

void __fastcall std::list<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>::~list<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>(
        void **a1)
{
  std::_List_node<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x20uLL);
}
