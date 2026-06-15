/*
 * XREFs of ?AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180144F7C
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x180033030 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     AudioServerIsRawStreamSupported @ 0x1800F3640 (AudioServerIsRawStreamSupported.c)
 * Callees:
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800024E0 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 */

char __fastcall CEndpointCharacteristics::AllowRawStreamCreation(CEndpointCharacteristics *this, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  BOOL IsConnectorModeSupported; // eax
  __int64 v5; // rcx
  char v6; // r8
  struct _GUID v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = (int)a2;
  v8 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  IsConnectorModeSupported = CEndpointCharacteristics::IsConnectorModeSupported(this, a2, &v8);
  v6 = 0;
  if ( IsConnectorModeSupported )
  {
    if ( v2 >= *((_QWORD *)this + 230) )
    {
      _o_terminate(v5);
      __debugbreak();
      JUMPOUT(0x180144FE1LL);
    }
    return *(_DWORD *)(*((_QWORD *)this + 231) + 4 * v2) == 0;
  }
  return v6;
}
