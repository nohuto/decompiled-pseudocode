/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009329C
 * Callers:
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_enum_winrt::Windows::Internal::Shell::CloudPCState_const__std::shared_ptr_winrt::Windows::Internal::Shell::implementation::ConnectionStateBase____void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_enum_winrt::Windows::Internal::Shell::CloudPCState_const__std::shared_ptr_winrt::Windows::Internal::Shell::implementation::ConnectionStateBase____void________std::pair_enum_winrt::Windows::Internal::Shell::CloudPCState_const__std::shared_ptr_winrt::Windows::Internal::Shell::implementation::ConnectionStateBase____const_&__::_1_::dtor$0 @ 0x1802B6791 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_enum_winrt--Windows--Inter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>,void *>>>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return std::_Deallocate<16,0>(v1, 40LL);
  return result;
}
