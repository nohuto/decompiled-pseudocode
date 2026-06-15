/*
 * XREFs of ??$copy_to@UIMMDevice@@@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMMDevice@@@Z @ 0x18004756C
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000D804 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x180011F60 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_G.c)
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800149A0 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x180014D6C (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ReconsiderSpatialOnComboEndpoints @ 0x18001F818 (ReconsiderSpatialOnComboEndpoints.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N_N66W4_BridgeStreamProperties@@6PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x18006F1BC (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x180101390 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAVCEndpointCharacteri.c)
 *     ?ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1801140B4 (-ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioeng.c)
 *     AudioServerGetBufferSizeLimits @ 0x180120DD0 (AudioServerGetBufferSizeLimits.c)
 *     AudioServerGetMixFormat @ 0x180122210 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x180123880 (AudioServerIsFormatSupported.c)
 *     ?GetDeviceFromDeviceId@DynamicAudioEndpointManager@@CAJPEBGPEAPEAUIMMDevice@@@Z @ 0x18013F300 (-GetDeviceFromDeviceId@DynamicAudioEndpointManager@@CAJPEBGPEAPEAUIMMDevice@@@Z.c)
 *     ?GetMMDevice@CEndpointCharacteristics@@QEAAXPEAPEAUIMMDevice@@@Z @ 0x18014CD28 (-GetMMDevice@CEndpointCharacteristics@@QEAAXPEAPEAUIMMDevice@@@Z.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1801575B0 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::copy_to<IMMDevice>(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a2 = v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else
  {
    *a2 = 0LL;
  }
  return 0LL;
}
