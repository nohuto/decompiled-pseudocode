/*
 * XREFs of ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1400644E8
 * Callers:
 *     ??$_Emplace_reallocate@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAAPEAU_GUID@@QEAU2@AEBU2@@Z @ 0x1400643AC (--$_Emplace_reallocate@AEBU_GUID@@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@QEAAPEAU_GU.c)
 *     ??$_Emplace_reallocate@AEA_JAEAVWeakRef@WRL@Microsoft@@@?$vector@UBridgeEndpointRecord@@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@QEAAPEAUBridgeEndpointRecord@@QEAU2@AEA_JAEAVWeakRef@WRL@Microsoft@@@Z @ 0x140078FF0 (--$_Emplace_reallocate@AEA_JAEAVWeakRef@WRL@Microsoft@@@-$vector@UBridgeEndpointRecord@@V-$alloc.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x140065FB4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<16>(unsigned __int64 a1)
{
  if ( a1 > 0xFFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return 16 * a1;
}
