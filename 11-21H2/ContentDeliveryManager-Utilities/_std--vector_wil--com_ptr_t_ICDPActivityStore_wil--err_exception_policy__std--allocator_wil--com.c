/*
 * XREFs of _std::vector_wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy__std::allocator_wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy_____::_Reallocate_::_1_::catch$1 @ 0x1800F166D
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800222FC (_CxxThrowException_0.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXPEAV?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x18007BB34 (-deallocate@-$_Wrap_alloc@V-$allocator@V-$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wi.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy__std::allocator_wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy_____::_Reallocate_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>>::deallocate(
    a1,
    *(void **)(a2 + 88));
  throw;
}
