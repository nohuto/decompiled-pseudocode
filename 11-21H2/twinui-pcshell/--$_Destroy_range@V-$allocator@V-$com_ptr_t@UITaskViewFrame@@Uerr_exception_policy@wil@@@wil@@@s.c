/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18003F498
 * Callers:
 *     ??1TaskViewHost@@UEAA@XZ @ 0x18000F848 (--1TaskViewHost@@UEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180011D40 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@-$vect.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180013338 (--$_Uninitialized_move@PEAV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V-$allo.c)
 *     ?v_DismissView@TaskViewHost@@MEAAXXZ @ 0x180041AE0 (-v_DismissView@TaskViewHost@@MEAAXXZ.c)
 *     _std::vector_wil::com_ptr_t_ITaskViewFrame_wil::err_exception_policy__std::allocator_wil::com_ptr_t_ITaskViewFrame_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_ITaskViewFrame_wil::err_exception_policy__const_&__::_1_::catch$2 @ 0x18021345B (_std--vector_wil--com_ptr_t_ITaskViewFrame_wil--err_exception_policy__std--allocator_wil--com_pt.c)
 *     ??1?$vector@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1805FE42C (--1-$vector@V-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-$com_p.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 */

void __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v3++);
    while ( v3 != a2 );
  }
}
