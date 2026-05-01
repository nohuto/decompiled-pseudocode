/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1803DF080
 * Callers:
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_wil::com_ptr_t_CRefCountedObject_WindowEventDispatcher::PendingActivationData__wil::err_exception_policy__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_wil::com_ptr_t_CRefCountedObject_WindowEventDispatcher::PendingActivationData__wil::err_exception_policy__void________wil::com_ptr_t_CRefCountedObject_WindowEventDispatcher::PendingActivationData__wil::err_exception_policy__const_&__::_1_::dtor$0 @ 0x1802164B6 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_wil--com_ptr_t_CRefCountedObject_Win.c)
 *     _WindowEventDispatcher::v_ShutdownServices_::_1_::dtor$18 @ 0x1802232C0 (_WindowEventDispatcher--v_ShutdownServices_--_1_--dtor$18.c)
 *     _WindowEventDispatcher::QueuePendingActivationForDestruction_::_1_::dtor$25 @ 0x1803E5B20 (_WindowEventDispatcher--QueuePendingActivationForDestruction_--_1_--dtor$25.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_wil::com_ptr_t_CRefCountedObject_UwpWindowEventDispatcher::PendingActivationData__wil::err_exception_policy__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_wil::com_ptr_t_CRefCountedObject_UwpWindowEventDispatcher::PendingActivationData__wil::err_exception_policy__void________wil::com_ptr_t_CRefCountedObject_UwpWindowEventDispatcher::PendingActivationData__wil::err_exception_policy__const_&__::_1_::dtor$0 @ 0x1803E7F62 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_wil--com_ptr_t_CRefCountedObject_Uwp.c)
 *     _UwpWindowEventDispatcher::QueuePendingActivationForDestruction_::_1_::dtor$25 @ 0x1803F0044 (_UwpWindowEventDispatcher--QueuePendingActivationForDestruction_--_1_--dtor$25.c)
 *     _UwpWindowEventDispatcher::v_ShutdownServices_::_1_::dtor$18 @ 0x1803F8C64 (_UwpWindowEventDispatcher--v_ShutdownServices_--_1_--dtor$18.c)
 *     _std::_Hash_std::_Uset_traits_unsigned_int_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_unsigned_int__0___::emplace_unsigned_int_const_&__::_1_::dtor$8 @ 0x18045A238 (_std--_Hash_std--_Uset_traits_unsigned_int_std--_Uhash_compare_unsigned_int_std--hash_unsigned_i.c)
 *     _std::_Hash_std::_Uset_traits_unsigned_int_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_unsigned_int__0___::emplace_unsigned_int_const_&__::_1_::dtor$0 @ 0x18045A244 (_std--_Hash_std--_Uset_traits_unsigned_int_std--_Uhash_compare_unsigned_int_std--ha_ea_18045A244.c)
 *     _std::list_wil::com_ptr_t_IImmersiveMonitor_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IImmersiveMonitor_wil::err_exception_policy_____::_Emplace_Microsoft::WRL::ComPtr_IImmersiveMonitor__const_&__::_1_::dtor$1 @ 0x1804EF12B (_std--list_wil--com_ptr_t_IImmersiveMonitor_wil--err_exception_policy__std--allocator_wil--com_p.c)
 *     _std::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0___::emplace_unsigned___int64_const_&__::_1_::dtor$8 @ 0x180577859 (_std--_Hash_std--_Uset_traits_unsigned___int64_std--_Uhash_compare_unsigned___int64_ea_180577859.c)
 *     _std::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0___::emplace_unsigned___int64_const_&__::_1_::dtor$0 @ 0x180577865 (_std--_Hash_std--_Uset_traits_unsigned___int64_std--_Uhash_compare_unsigned___int64_ea_180577865.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x18uLL);
}
