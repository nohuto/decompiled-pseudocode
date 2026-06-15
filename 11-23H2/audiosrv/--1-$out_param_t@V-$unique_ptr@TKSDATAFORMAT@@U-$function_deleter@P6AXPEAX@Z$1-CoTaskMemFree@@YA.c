/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@TKSDATAFORMAT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x180113F88
 * Callers:
 *     _GetPacketSizeConstraints_::_1_::dtor$8 @ 0x180079C32 (_GetPacketSizeConstraints_--_1_--dtor$8.c)
 *     _CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda____::_1_::dtor$12 @ 0x18007C4B5 (_CEndpointCharacteristics--GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed_ea_18007C4B5.c)
 *     _CEndpointCharacteristics::GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02____::_1_::dtor$12 @ 0x18007CCC3 (_CEndpointCharacteristics--GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02____.c)
 *     _GetConnectorProcessingModeDataFormatsFromDriver_::_1_::dtor$7 @ 0x18007D680 (_GetConnectorProcessingModeDataFormatsFromDriver_--_1_--dtor$7.c)
 *     _EffectPack::SetDeviceFormatAndSpatialSettings_::_1_::dtor$4 @ 0x18007D8D0 (_EffectPack--SetDeviceFormatAndSpatialSettings_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<wistd::unique_ptr<KSDATAFORMAT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<KSDATAFORMAT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
        __int64 a1)
{
  void *v1; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(void ***)a1;
    **(_QWORD **)a1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      CoTaskMemFree(v1);
  }
}
