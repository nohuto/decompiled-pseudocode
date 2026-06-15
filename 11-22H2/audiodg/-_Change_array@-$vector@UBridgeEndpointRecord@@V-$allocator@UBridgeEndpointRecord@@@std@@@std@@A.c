/*
 * XREFs of ?_Change_array@?$vector@UBridgeEndpointRecord@@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@AEAAXQEAUBridgeEndpointRecord@@_K1@Z @ 0x140079F50
 * Callers:
 *     ??$_Emplace_reallocate@AEA_JAEAVWeakRef@WRL@Microsoft@@@?$vector@UBridgeEndpointRecord@@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@QEAAPEAUBridgeEndpointRecord@@QEAU2@AEA_JAEAVWeakRef@WRL@Microsoft@@@Z @ 0x140078FF0 (--$_Emplace_reallocate@AEA_JAEAVWeakRef@WRL@Microsoft@@@-$vector@UBridgeEndpointRecord@@V-$alloc.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140026294 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@YAXPEAUBridgeEndpointRecord@@QEAU1@AEAV?$allocator@UBridgeEndpointRecord@@@0@@Z @ 0x140078F7C (--$_Destroy_range@V-$allocator@UBridgeEndpointRecord@@@std@@@std@@YAXPEAUBridgeEndpointRecord@@Q.c)
 */

void __fastcall std::vector<BridgeEndpointRecord>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( g_bridgeEndpointRegistry )
  {
    std::_Destroy_range<std::allocator<BridgeEndpointRecord>>(g_bridgeEndpointRegistry, qword_1400CF8A8);
    std::_Deallocate<16,0>(
      (void *)g_bridgeEndpointRegistry,
      (qword_1400CF8B0 - g_bridgeEndpointRegistry) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  g_bridgeEndpointRegistry = a2;
  qword_1400CF8B0 = a2 + 16 * a4;
  qword_1400CF8A8 = a2 + 16 * a3;
}
