/*
 * XREFs of ?AllowRawStreamCreation@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014B1E0
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x1800450A8 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     AudioServerIsRawStreamSupported @ 0x180124740 (AudioServerIsRawStreamSupported.c)
 * Callees:
 *     ?IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@U_GUID@@@Z @ 0x18002EB7C (-IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 */

char __fastcall EffectPack::AllowRawStreamCreation(EffectPack *this, int a2)
{
  unsigned __int64 v2; // rdi
  int IsConnectorModeSupported; // eax
  __int64 v5; // rcx
  char v6; // r8
  GUID v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  v8 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  IsConnectorModeSupported = EffectPack::IsConnectorModeSupported(this, a2, 0, (__int64)&v8);
  v6 = 0;
  if ( IsConnectorModeSupported )
  {
    if ( v2 >= *((_QWORD *)this + 178) )
    {
      _o_terminate(v5);
      __debugbreak();
      JUMPOUT(0x18014B248LL);
    }
    return *(_DWORD *)(*((_QWORD *)this + 179) + 4 * v2) == 0;
  }
  return v6;
}
