/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x140078FB8
 * Callers:
 *     _std::vector_wil::com_ptr_t_IBridgeSourceEndpointConsumer_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IBridgeSourceEndpointConsumer_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IBridgeSourceEndpointConsumer_wil::err_returncode_policy____::_1_::catch$4 @ 0x140079272 (_std--vector_wil--com_ptr_t_IBridgeSourceEndpointConsumer_wil--err_returncode_policy__std--alloc.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x140079318 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wi.c)
 *     ??1CBridgeSourceEndpoint@@EEAA@XZ @ 0x140079484 (--1CBridgeSourceEndpoint@@EEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x140079FD4 (-_Change_array@-$vector@V-$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<IBridgeSourceEndpointConsumer,wil::err_returncode_policy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
