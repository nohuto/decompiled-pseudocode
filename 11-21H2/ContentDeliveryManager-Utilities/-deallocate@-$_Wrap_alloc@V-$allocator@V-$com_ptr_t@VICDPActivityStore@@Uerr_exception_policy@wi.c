/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXPEAV?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x18007BB34
 * Callers:
 *     _std::vector_wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy__std::allocator_wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy_____::_Reallocate_::_1_::catch$1 @ 0x1800F166D (_std--vector_wil--com_ptr_t_ICDPActivityStore_wil--err_exception_policy__std--allocator_wil--com.c)
 *     _std::vector_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__std::allocator_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy_____::_Reallocate_::_1_::catch$1 @ 0x1800F7173 (_std--vector_wil--com_ptr_t_Windows--Data--Xml--Dom--IXmlNode_wil--err_exception_policy__std--al.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2);
}
