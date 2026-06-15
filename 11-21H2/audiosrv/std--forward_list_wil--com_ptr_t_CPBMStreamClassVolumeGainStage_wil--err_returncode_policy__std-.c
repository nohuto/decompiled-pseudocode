/*
 * XREFs of std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_5fdc09f974c9fb8661da7e153f1f57b6___ @ 0x1800D5C1C
 * Callers:
 *     ?RemoveDuckingManagerGainStage@CAudioSession@@UEAAJPEAUIDuckingController@@_NPEA_J@Z @ 0x18000C9F0 (-RemoveDuckingManagerGainStage@CAudioSession@@UEAAJPEAUIDuckingController@@_NPEA_J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800D6258 (--1_Flist_node_remove_op@-$forward_list@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_retur.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_5fdc09f974c9fb8661da7e153f1f57b6___(
        __int64 **a1,
        __int64 a2)
{
  __int64 **v3; // rdi
  __int64 *v4; // rbx
  _QWORD *v5; // rbp
  _QWORD **v6; // r14
  __int64 *v7; // rcx
  __int64 **v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v11; // [rsp+30h] [rbp-18h]

  v3 = a1;
  v9 = a1;
  v10 = 0LL;
  v11 = &v10;
  v4 = *a1;
  if ( *a1 )
  {
    v5 = *(_QWORD **)a2;
    do
    {
      if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4[1] + 56) + 32LL))(*(_QWORD *)(v4[1] + 56)) == *v5 )
      {
        v6 = *(_QWORD ***)(a2 + 8);
        if ( *v6 )
          **v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4[1] + 56) + 16LL))(*(_QWORD *)(v4[1] + 56));
        v7 = *v3;
        v4 = (__int64 *)**v3;
        *v7 = 0LL;
        *v3 = v4;
        *v11 = (__int64)v7;
        v11 = v7;
      }
      else
      {
        v3 = (__int64 **)v4;
        v4 = (__int64 *)*v4;
      }
    }
    while ( v4 );
  }
  return std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::_Flist_node_remove_op::~_Flist_node_remove_op(&v9);
}
