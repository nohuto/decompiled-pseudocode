/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800DF17C
 * Callers:
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$156 @ 0x18006DCE0 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$156.c)
 *     ??$emplace@AEAVCAudioSessionInstanceId@@AEAV?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAVCAudioSessionInstanceId@@AEAV?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800DE898 (--$emplace@AEAVCAudioSessionInstanceId@@AEAV-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@w.c)
 *     _std::_Hash_std::_Umap_traits_CAudioSessionInstanceId_wil::com_ptr_t_CAudioSession_wil::err_returncode_policy__std::_Uhash_compare_CAudioSessionInstanceId_std::hash_CAudioSessionInstanceId__std::equal_to_CAudioSessionInstanceId____std::allocator_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy______0___::emplace_CAudioSessionInstanceId_&_wil::com_ptr_t_CAudioSession_wil::err_returncode_policy__&__::_1_::dtor$0 @ 0x1800DE9C5 (_std--_Hash_std--_Umap_traits_CAudioSessionInstanceId_wil--com_ptr_t_CAudioSession__ea_1800DE9C5.c)
 *     ??$emplace@AEBU?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x1800DE9D8 (--$emplace@AEBU-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncode.c)
 *     _std::_Hash_std::_Umap_traits_CAudioSessionInstanceId_wil::com_ptr_t_CAudioSession_wil::err_returncode_policy__std::_Uhash_compare_CAudioSessionInstanceId_std::hash_CAudioSessionInstanceId__std::equal_to_CAudioSessionInstanceId____std::allocator_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy______0___::emplace_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy____const_&__::_1_::dtor$0 @ 0x1800DEAF3 (_std--_Hash_std--_Umap_traits_CAudioSessionInstanceId_wil--com_ptr_t_CAudioSession__ea_1800DEAF3.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800D6154 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  CAudioSessionInstanceId *v3; // rbx
  void *v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = (CAudioSessionInstanceId *)(v2 + 16);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(v2 + 96));
    CAudioSessionInstanceId::~CAudioSessionInstanceId(v3);
    v4 = *(void **)(a1 + 8);
    if ( v4 )
      std::_Deallocate<16,0>(v4, 0x68uLL);
  }
}
