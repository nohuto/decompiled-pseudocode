/*
 * XREFs of _std::vector_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_Insert_range_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_1_::catch$4 @ 0x18007CBA4
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18000A364 (--$_Uninitialized_move@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$alloc.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18001C500 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@st.c)
 *     _CxxThrowException_0 @ 0x1800759D0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_Insert_range_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  __int64 **v3; // rbx

  v3 = *(__int64 ***)(a2 + 144);
  std::_Uninitialized_move<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
    *(__int64 **)(a2 + 128),
    *v3,
    *(_QWORD **)(a2 + 136));
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
    *(__int64 **)(a2 + 128),
    *v3);
  *v3 = *(__int64 **)(a2 + 40);
  throw;
}
