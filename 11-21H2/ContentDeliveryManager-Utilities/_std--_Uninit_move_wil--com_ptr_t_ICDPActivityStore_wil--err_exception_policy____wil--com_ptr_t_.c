/*
 * XREFs of _std::_Uninit_move_wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____std::allocator_wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____::_1_::catch$0 @ 0x1800F0DF4
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800222FC (_CxxThrowException_0.c)
 *     ??$destroy@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXPEAV?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180075FC0 (--$destroy@V-$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@-$_Wrap_alloc@V-$a.c)
 */

void __fastcall __noreturn std::_Uninit_move_wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____std::allocator_wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *i; // rbx

  for ( i = *(_QWORD **)(a2 + 72); i != *(_QWORD **)(a2 + 64); ++i )
    std::_Wrap_alloc<std::allocator<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>>::destroy<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>(
      a1,
      i);
  throw;
}
