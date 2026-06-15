/*
 * XREFs of _std::vector_wil::com_ptr_t_IBridgeSourceEndpointConsumer_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IBridgeSourceEndpointConsumer_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IBridgeSourceEndpointConsumer_wil::err_returncode_policy____::_1_::catch$4 @ 0x140079272
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140026294 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x140078FB8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_poli.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IBridgeSourceEndpointConsumer_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IBridgeSourceEndpointConsumer_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IBridgeSourceEndpointConsumer_wil::err_returncode_policy____::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IBridgeSourceEndpointConsumer,wil::err_returncode_policy>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 8LL * *(_QWORD *)(a2 + 120));
  throw;
}
