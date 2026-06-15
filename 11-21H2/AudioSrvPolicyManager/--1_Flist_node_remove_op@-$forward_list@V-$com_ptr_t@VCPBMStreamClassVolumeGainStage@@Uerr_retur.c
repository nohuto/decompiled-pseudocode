/*
 * XREFs of ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800378B8
 * Callers:
 *     _std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_d29f8cb166960269749b8c0ea722c7d7____::_1_::dtor$0 @ 0x1800464E2 (_std--forward_list_wil--com_ptr_t_CPBMStreamClassVolumeGainStage_wil--err_returncode_policy__std.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012230 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 */

void __fastcall std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::_Flist_node_remove_op::~_Flist_node_remove_op(
        __int64 a1)
{
  char *v1; // rbx
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi

  v1 = *(char **)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = (volatile signed __int32 *)*((_QWORD *)v1 + 1);
      v3 = *(char **)v1;
      if ( v2 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v2);
      std::_Deallocate<16,0>(v1, 0x10uLL);
      v1 = v3;
    }
    while ( v3 );
  }
}
