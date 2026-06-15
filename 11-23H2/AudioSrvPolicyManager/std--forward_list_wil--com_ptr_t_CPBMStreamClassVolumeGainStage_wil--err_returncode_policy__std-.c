/*
 * XREFs of std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_165499ea39685c5d8e5f507cce42e944___ @ 0x18003EF38
 * Callers:
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x18000BDA0 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV-$shared_ptr@VDuckingDescriptor.c)
 * Callees:
 *     ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180015B10 (--1_Flist_node_remove_op@-$forward_list@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_retur.c)
 */

void __fastcall std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_165499ea39685c5d8e5f507cce42e944___(
        _QWORD **a1,
        _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 *v3; // r9
  _QWORD **v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = &v5;
  v2 = *a1;
  v4 = a1;
  while ( v2 )
  {
    if ( *a2 == *(_QWORD *)(v2[1] + 56LL) )
    {
      v3 = *a1;
      v2 = (_QWORD *)**a1;
      *v3 = 0LL;
      *a1 = v2;
      *v6 = (__int64)v3;
      v6 = v3;
    }
    else
    {
      a1 = (_QWORD **)v2;
      v2 = (_QWORD *)*v2;
    }
  }
  std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v4);
}
