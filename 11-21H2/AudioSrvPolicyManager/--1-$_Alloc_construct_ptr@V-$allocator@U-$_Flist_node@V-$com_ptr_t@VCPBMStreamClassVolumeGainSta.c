/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18000F510
 * Callers:
 *     _CDuckingManager::OnStateChanged_::_1_::dtor$4 @ 0x180044FA7 (_CDuckingManager--OnStateChanged_--_1_--dtor$4.c)
 *     _std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::_Copy_assign_::_1_::dtor$1 @ 0x18004508B (_std--forward_list_IAudioSessionInfo___std--allocator_IAudioSessionInfo_____--_Copy_ea_18004508B.c)
 *     _TsSessionIdAddAppManagerClient_::_1_::dtor$6 @ 0x180045316 (_TsSessionIdAddAppManagerClient_--_1_--dtor$6.c)
 *     _TsSessionCreate_::_1_::dtor$14 @ 0x18004606E (_TsSessionCreate_--_1_--dtor$14.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$15 @ 0x180046080 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$15.c)
 *     _TsSessionCreate_::_1_::dtor$24 @ 0x180046092 (_TsSessionCreate_--_1_--dtor$24.c)
 *     _TsSessionCreate_::_1_::dtor$27 @ 0x1800460A4 (_TsSessionCreate_--_1_--dtor$27.c)
 *     _TsSessionCreate_::_1_::dtor$30 @ 0x1800460B6 (_TsSessionCreate_--_1_--dtor$30.c)
 *     _TsSessionCreate_::_1_::dtor$33 @ 0x1800460C8 (_TsSessionCreate_--_1_--dtor$33.c)
 *     _TsSessionCreate_::_1_::dtor$36 @ 0x1800460DA (_TsSessionCreate_--_1_--dtor$36.c)
 *     _TsSessionCreate_::_1_::dtor$41 @ 0x180046110 (_TsSessionCreate_--_1_--dtor$41.c)
 *     _TsSessionIdAddNotify_::_1_::dtor$7 @ 0x1800461F1 (_TsSessionIdAddNotify_--_1_--dtor$7.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$20 @ 0x18004654E (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$20.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>(
        __int64 a1)
{
  char *v1; // rcx

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x10uLL);
}
