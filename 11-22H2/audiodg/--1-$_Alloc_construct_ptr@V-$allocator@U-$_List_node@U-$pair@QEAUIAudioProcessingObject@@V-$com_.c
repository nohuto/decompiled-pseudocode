/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x14006B910
 * Callers:
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_IAudioProcessingObject___const_wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy____void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_IAudioProcessingObject___const_wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy____void________IAudioProcessingObject___&_wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy__&__::_1_::dtor$0 @ 0x1400347A4 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_IAudioProcessingObject___c.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140026294 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x20uLL);
}
