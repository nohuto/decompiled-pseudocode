/*
 * XREFs of wil::details::lambda_call__lambda_bb75d7955c525a160db854778f06b41a___::_lambda_call__lambda_bb75d7955c525a160db854778f06b41a___ @ 0x18011B01C
 * Callers:
 *     _EndpointDevice::InitAdapterInformation_::_1_::dtor$5 @ 0x18007A976 (_EndpointDevice--InitAdapterInformation_--_1_--dtor$5.c)
 *     _CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor$5 @ 0x18011B6BB (_CKsSoftwareNotificationsMonitor--OnFormatCapsChange_--_1_--dtor$5.c)
 *     ?GetAvailableConnectorCount@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAI@Z @ 0x18014C188 (-GetAvailableConnectorCount@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     _CEndpointCharacteristics::GetAvailableConnectorCount_::_1_::dtor$1 @ 0x18014C3C8 (_CEndpointCharacteristics--GetAvailableConnectorCount_--_1_--dtor$1.c)
 *     ?UpdateAPOEnableStatus@EffectPack@@QEAAJXZ @ 0x1801503C8 (-UpdateAPOEnableStatus@EffectPack@@QEAAJXZ.c)
 *     _EffectPack::UpdateAPOEnableStatus_::_1_::dtor$0 @ 0x1801509CA (_EffectPack--UpdateAPOEnableStatus_--_1_--dtor$0.c)
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
