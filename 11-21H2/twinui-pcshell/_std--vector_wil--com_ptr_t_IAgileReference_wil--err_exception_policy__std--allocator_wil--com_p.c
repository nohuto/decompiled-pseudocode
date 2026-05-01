/*
 * XREFs of _std::vector_wil::com_ptr_t_IAgileReference_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IAgileReference_wil::err_exception_policy_____::_Reallocate_exactly_::_1_::catch$1 @ 0x1802186F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IAgileReference_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IAgileReference_wil::err_exception_policy_____::_Reallocate_exactly_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 64), 8LL * *(_QWORD *)(a2 + 72));
  throw;
}
