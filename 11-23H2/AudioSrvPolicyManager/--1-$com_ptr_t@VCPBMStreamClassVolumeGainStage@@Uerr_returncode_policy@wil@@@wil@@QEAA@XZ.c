/*
 * XREFs of ??1?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015FBC
 * Callers:
 *     ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180015B10 (--1_Flist_node_remove_op@-$forward_list@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_retur.c)
 *     _lambda_4d82e2a18adfd26d1e0b2998ee994ec4_::operator() @ 0x180020650 (_lambda_4d82e2a18adfd26d1e0b2998ee994ec4_--operator().c)
 *     ??1?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180032040 (--1-$forward_list@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$5 @ 0x180047EF0 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$5.c)
 *     __lambda_4d82e2a18adfd26d1e0b2998ee994ec4_::operator()_::_1_::dtor$1 @ 0x180048AE9 (__lambda_4d82e2a18adfd26d1e0b2998ee994ec4_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800228D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 */

__int64 __fastcall wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>::~com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v1);
  return result;
}
