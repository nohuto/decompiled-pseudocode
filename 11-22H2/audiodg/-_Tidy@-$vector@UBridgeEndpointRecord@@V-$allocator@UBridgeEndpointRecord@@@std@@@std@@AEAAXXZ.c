/*
 * XREFs of ?_Tidy@?$vector@UBridgeEndpointRecord@@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@AEAAXXZ @ 0x140027838
 * Callers:
 *     _dynamic_atexit_destructor_for__g_bridgeEndpointRegistry__ @ 0x140036F20 (_dynamic_atexit_destructor_for__g_bridgeEndpointRegistry__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140026294 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@YAXPEAUBridgeEndpointRecord@@QEAU1@AEAV?$allocator@UBridgeEndpointRecord@@@0@@Z @ 0x140078F7C (--$_Destroy_range@V-$allocator@UBridgeEndpointRecord@@@std@@@std@@YAXPEAUBridgeEndpointRecord@@Q.c)
 */

void __fastcall std::vector<BridgeEndpointRecord>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<BridgeEndpointRecord>>(v2, *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
