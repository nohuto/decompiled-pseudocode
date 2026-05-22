/*
 * XREFs of _std::vector_wil::com_ptr_t_HapticInterface_wil::err_exception_policy__std::allocator_wil::com_ptr_t_HapticInterface_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_HapticInterface_wil::err_exception_policy__const_&__::_1_::catch$2 @ 0x1800BA7F7
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180057B56 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1800BA694 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_HapticInterface_wil::err_exception_policy__std::allocator_wil::com_ptr_t_HapticInterface_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_HapticInterface_wil::err_exception_policy__const____::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 8LL * *(_QWORD *)(a2 + 120));
  throw;
}
