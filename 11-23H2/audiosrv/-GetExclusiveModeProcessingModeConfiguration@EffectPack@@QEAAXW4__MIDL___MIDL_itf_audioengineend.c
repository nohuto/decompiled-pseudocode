/*
 * XREFs of ?GetExclusiveModeProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18000BE24
 * Callers:
 *     ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18000E010 (-GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x1800450A8 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 * Callees:
 *     ?IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@U_GUID@@@Z @ 0x18002EB7C (-IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?GetDefaultConnectorProcessingModeInternal@EffectPack@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x1800340AC (-GetDefaultConnectorProcessingModeInternal@EffectPack@@AEAA-AU_GUID@@W4__MIDL___MIDL_itf_audioen.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 */

void __fastcall EffectPack::GetExclusiveModeProcessingModeConfiguration(
        EffectPack *this,
        __int64 a2,
        struct _GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5)
{
  unsigned int v7; // r14d
  struct _GUID *DefaultConnectorProcessingModeInternal; // rax
  GUID v10; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-48h] BYREF

  v7 = a2;
  v10 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( (unsigned int)((__int64 (__fastcall *)(EffectPack *, __int64, _QWORD, GUID *))EffectPack::IsConnectorModeSupported)(
                       this,
                       a2,
                       0LL,
                       &v10) )
  {
    DefaultConnectorProcessingModeInternal = &v10;
    v10 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  else
  {
    DefaultConnectorProcessingModeInternal = (struct _GUID *)EffectPack::GetDefaultConnectorProcessingModeInternal(
                                                               this,
                                                               v11,
                                                               v7,
                                                               0LL);
  }
  if ( a3 )
    *a3 = *DefaultConnectorProcessingModeInternal;
  if ( a4 )
    *a4 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( a5 )
    *a5 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
}
