/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180047644
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18000A48C (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@-$vec.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18000A5A8 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x1800111AC (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 *     ??1CAudioStream@@UEAA@XZ @ 0x180016988 (--1CAudioStream@@UEAA@XZ.c)
 *     ?InitializeAPOs@CBaseStreamGroupProxy@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800475B0 (-InitializeAPOs@CBaseStreamGroupProxy@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     _std::vector_wil::com_ptr_t_IAPOWrapperSrv_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IAPOWrapperSrv_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IAPOWrapperSrv_wil::err_returncode_policy__const_&__::_1_::catch$2 @ 0x180078683 (_std--vector_wil--com_ptr_t_IAPOWrapperSrv_wil--err_returncode_policy__std--allocator_wil--com_p.c)
 * Callees:
 *     ??1?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015DEC (--1-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
