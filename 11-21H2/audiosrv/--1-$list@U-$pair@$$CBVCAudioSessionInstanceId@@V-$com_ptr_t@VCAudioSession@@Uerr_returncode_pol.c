/*
 * XREFs of ??1?$list@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x1800DF21C
 * Callers:
 *     _CAudioSessionManager::NotifySessionAudioProtocol_::_1_::dtor$5 @ 0x18006D2A4 (_CAudioSessionManager--NotifySessionAudioProtocol_--_1_--dtor$5.c)
 *     _std::_Hash_std::_Umap_traits_CAudioSessionInstanceId_wil::com_ptr_t_CAudioSession_wil::err_returncode_policy__std::_Uhash_compare_CAudioSessionInstanceId_std::hash_CAudioSessionInstanceId__std::equal_to_CAudioSessionInstanceId____std::allocator_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy______0___::_Hash_std::_Umap_traits_CAudioSessionInstanceId_wil::com_ptr_t_CAudioSession_wil::err_returncode_policy__std::_Uhash_compare_CAudioSessionInstanceId_std::hash_CAudioSessionInstanceId__std::equal_to_CAudioSessionInstanceId____std::allocator_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy______0____::_1_::dtor$0 @ 0x18006F52D (_std--_Hash_std--_Umap_traits_CAudioSessionInstanceId_wil--com_ptr_t_CAudioSession_wil--err_retu.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$33 @ 0x1800E03BF (_CAudioSessionManager--Disconnect_--_1_--dtor$33.c)
 *     _CAudioSessionManager::DisconnectSessionsForTsSession_::_1_::dtor$6 @ 0x1800E065D (_CAudioSessionManager--DisconnectSessionsForTsSession_--_1_--dtor$6.c)
 *     _CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess_::_1_::dtor$6 @ 0x1800E1357 (_CAudioSessionManager--RevokeSessionsWithoutDataFlowAccess_--_1_--dtor$6.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180041DEC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@.c)
 */

void __fastcall std::list<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>::~list<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>(
        void **a1)
{
  std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x68uLL);
}
