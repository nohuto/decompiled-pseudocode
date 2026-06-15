/*
 * XREFs of ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002D3D4
 * Callers:
 *     ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x18000E9CC (-CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z.c)
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@K@Z @ 0x1800116D8 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUS.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z @ 0x18001F34C (-GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@PEAPEAUPacketSizeCons.c)
 *     ?GetBlob@CUnsupportedConnectorFormats@@QEAAJPEAPEAEPEAK@Z @ 0x180020610 (-GetBlob@CUnsupportedConnectorFormats@@QEAAJPEAPEAEPEAK@Z.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800291A8 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEBG@Z @ 0x18002D328 (-RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEBG@Z.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180046258 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     ?GetConnectorProcessingModeDataFormatsFromDriver@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@U23@@wil@@@Z @ 0x18004C228 (-GetConnectorProcessingModeDataFormatsFromDriver@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x1800541F0 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D62EC (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 * Callees:
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x18002B5D0 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 */

__int64 __fastcall CTCoAllocPolicy::Alloc(void *a1, char a2, SIZE_T a3, void **a4)
{
  void *v6; // rax
  size_t v8; // rax

  v6 = CoTaskMemAlloc(a3);
  *a4 = v6;
  if ( !v6 )
    return 2147942414LL;
  if ( (a2 & 1) != 0 )
  {
    v8 = CTCoAllocPolicy::_CoTaskMemSize(v6);
    memset_0(*a4, 0, v8);
  }
  return 0LL;
}
