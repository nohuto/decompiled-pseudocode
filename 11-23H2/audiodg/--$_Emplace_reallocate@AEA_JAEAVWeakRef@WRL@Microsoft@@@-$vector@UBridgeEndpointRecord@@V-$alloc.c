/*
 * XREFs of ??$_Emplace_reallocate@AEA_JAEAVWeakRef@WRL@Microsoft@@@?$vector@UBridgeEndpointRecord@@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@QEAAPEAUBridgeEndpointRecord@@QEAU2@AEA_JAEAVWeakRef@WRL@Microsoft@@@Z @ 0x140078FA0
 * Callers:
 *     ?RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@I@Z @ 0x140079C8C (-RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMed.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400065C4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1400251BC (-InternalAddRef@-$ComPtr@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Medi.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x140064498 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUBridgeEndpointRecord@@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@YAPEAUBridgeEndpointRecord@@QEAU1@0PEAU1@AEAV?$allocator@UBridgeEndpointRecord@@@0@@Z @ 0x140079260 (--$_Uninitialized_move@PEAUBridgeEndpointRecord@@V-$allocator@UBridgeEndpointRecord@@@std@@@std@.c)
 *     ?_Change_array@?$vector@UBridgeEndpointRecord@@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@AEAAXQEAUBridgeEndpointRecord@@_K1@Z @ 0x140079F00 (-_Change_array@-$vector@UBridgeEndpointRecord@@V-$allocator@UBridgeEndpointRecord@@@std@@@std@@A.c)
 */

char *__fastcall std::vector<BridgeEndpointRecord>::_Emplace_reallocate<__int64 &,Microsoft::WRL::WeakRef &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  _QWORD *v14; // rdi
  char *v15; // rsi
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  char *result; // rax
  __int64 v21; // [rsp+20h] [rbp-48h]
  char *v22; // [rsp+28h] [rbp-40h]
  void *v23; // [rsp+28h] [rbp-40h]
  __int64 v24; // [rsp+70h] [rbp+8h]

  v6 = a2 - g_bridgeEndpointRegistry;
  v7 = (qword_1400CF8A8 - g_bridgeEndpointRegistry) >> 4;
  v8 = 0xFFFFFFFFFFFFFFFLL;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (qword_1400CF8B0 - g_bridgeEndpointRegistry) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v22 = v13;
  v15 = &v13[v6 & 0xFFFFFFFFFFFFFFF0uLL];
  try
  {
    *(_QWORD *)v15 = *a3;
    *((_QWORD *)v15 + 1) = *a4;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::InternalAddRef((__int64 *)v15 + 1);
    v24 = (__int64)v15;
    v16 = qword_1400CF8A8;
    v17 = v14;
    v18 = g_bridgeEndpointRegistry;
    if ( a2 != qword_1400CF8A8 )
    {
      std::_Uninitialized_move<BridgeEndpointRecord *>(g_bridgeEndpointRegistry, a2, v14);
      v24 = (__int64)v14;
      v17 = v15 + 16;
      v16 = qword_1400CF8A8;
      v18 = a2;
    }
    std::_Uninitialized_move<BridgeEndpointRecord *>(v18, v16, v17);
    std::vector<BridgeEndpointRecord>::_Change_array(v19, v14, v9, v8, v15 + 16, v22);
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<BridgeEndpointRecord>>(v24, v21);
    std::_Deallocate<16,0>(v23, 16 * v8);
    throw;
  }
  return result;
}
