/*
 * XREFs of ??$_Destroy_range@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@YAXPEAUBridgeEndpointRecord@@QEAU1@AEAV?$allocator@UBridgeEndpointRecord@@@0@@Z @ 0x140078F7C
 * Callers:
 *     ?_Tidy@?$vector@UBridgeEndpointRecord@@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@AEAAXXZ @ 0x140027838 (-_Tidy@-$vector@UBridgeEndpointRecord@@V-$allocator@UBridgeEndpointRecord@@@std@@@std@@AEAAXXZ.c)
 *     _std::vector_BridgeEndpointRecord_std::allocator_BridgeEndpointRecord___::_Emplace_reallocate___int64_&_Microsoft::WRL::WeakRef_&__::_1_::catch$1 @ 0x140079123 (_std--vector_BridgeEndpointRecord_std--allocator_BridgeEndpointRecord___--_Emplace_reallocate___.c)
 *     ??$_Uninitialized_move@PEAUBridgeEndpointRecord@@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@YAPEAUBridgeEndpointRecord@@QEAU1@0PEAU1@AEAV?$allocator@UBridgeEndpointRecord@@@0@@Z @ 0x1400792B0 (--$_Uninitialized_move@PEAUBridgeEndpointRecord@@V-$allocator@UBridgeEndpointRecord@@@std@@@std@.c)
 *     ?_Change_array@?$vector@UBridgeEndpointRecord@@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@AEAAXQEAUBridgeEndpointRecord@@_K1@Z @ 0x140079F50 (-_Change_array@-$vector@UBridgeEndpointRecord@@V-$allocator@UBridgeEndpointRecord@@@std@@@std@@A.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E68 (-InternalRelease@-$ComPtr@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Fou.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<BridgeEndpointRecord>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease((__int64 *)(v3 + 8));
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
