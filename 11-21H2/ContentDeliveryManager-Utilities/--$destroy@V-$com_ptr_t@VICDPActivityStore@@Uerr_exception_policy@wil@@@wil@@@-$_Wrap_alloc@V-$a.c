/*
 * XREFs of ??$destroy@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXPEAV?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180075FC0
 * Callers:
 *     _std::_Uninit_move_wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____std::allocator_wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____::_1_::catch$0 @ 0x1800F0DF4 (_std--_Uninit_move_wil--com_ptr_t_ICDPActivityStore_wil--err_exception_policy____wil--com_ptr_t_.c)
 *     _std::_Uninit_move_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____std::allocator_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____::_1_::catch$0 @ 0x1800F6433 (_std--_Uninit_move_wil--com_ptr_t_Windows--Data--Xml--Dom--IXmlNode_wil--err_exception_policy___.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Wrap_alloc<std::allocator<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>>::destroy<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  if ( *a2 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return result;
}
