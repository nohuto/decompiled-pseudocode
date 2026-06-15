/*
 * XREFs of wil::details::lambda_call__lambda_bb75d7955c525a160db854778f06b41a___::_lambda_call__lambda_bb75d7955c525a160db854778f06b41a___ @ 0x1800F52D8
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002C050 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     _EndpointDevice::InitAdapterInformation_::_1_::dtor$5 @ 0x18006F8AA (_EndpointDevice--InitAdapterInformation_--_1_--dtor$5.c)
 *     _DeriveDeviceGraphFormatsForStream_::_1_::dtor$24 @ 0x18006FE40 (_DeriveDeviceGraphFormatsForStream_--_1_--dtor$24.c)
 *     _CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor$5 @ 0x1800F59A0 (_CKsSoftwareNotificationsMonitor--OnFormatCapsChange_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::GetAvailableConnectorCount_::_1_::dtor$1 @ 0x180147D1F (_CEndpointCharacteristics--GetAvailableConnectorCount_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::UpdateAPOEnableStatus_::_1_::dtor$0 @ 0x18014D3B2 (_CEndpointCharacteristics--UpdateAPOEnableStatus_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::details::lambda_call__lambda_bb75d7955c525a160db854778f06b41a___::_lambda_call__lambda_bb75d7955c525a160db854778f06b41a___(
        __int64 a1)
{
  HRESULT result; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return PropVariantClear(*(PROPVARIANT **)a1);
  }
  return result;
}
