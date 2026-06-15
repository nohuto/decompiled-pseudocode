/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x14001CB04
 * Callers:
 *     ??$emplace@AEAPEAUIAudioProcessingObject@@AEAV?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUIAudioProcessingObject@@AEAV?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x14001C9A8 (--$emplace@AEAPEAUIAudioProcessingObject@@AEAV-$com_ptr_t@VCAPOProcessingHostObject@@Uerr_return.c)
 *     _std::_Hash_std::_Umap_traits_IAudioProcessingObject___wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy__std::_Uhash_compare_IAudioProcessingObject___std::hash_IAudioProcessingObject____std::equal_to_IAudioProcessingObject______std::allocator_std::pair_IAudioProcessingObject___const_wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy______0___::emplace_IAudioProcessingObject___&_wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy__&__::_1_::dtor$0 @ 0x140038DDB (_std--_Hash_std--_Umap_traits_IAudioProcessingObject___wil--com_ptr_t_CAPOProcessingHostObject_w.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14002D290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    result = ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)(v2 + 24));
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 )
      return std::_Deallocate<16,0>(v4, 32LL);
  }
  return result;
}
