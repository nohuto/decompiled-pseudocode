/*
 * XREFs of ?IsSWAPOFallbackSupported@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014B3DC
 * Callers:
 *     ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x18002FEE0 (-UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineend.c)
 * Callees:
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800024E0 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18001058C (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 */

char __fastcall CEndpointCharacteristics::IsSWAPOFallbackSupported(CEndpointCharacteristics *this, unsigned int a2)
{
  char v4; // bl
  struct _GUID v6; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  if ( *(int *)(gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 236, (int)a2) + 8) > 0 )
  {
    v6 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    return CEndpointCharacteristics::IsConnectorModeSupported(this, a2, &v6);
  }
  return v4;
}
