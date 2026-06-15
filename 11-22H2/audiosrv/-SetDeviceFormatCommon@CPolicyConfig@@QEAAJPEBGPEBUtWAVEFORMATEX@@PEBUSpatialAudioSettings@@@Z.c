/*
 * XREFs of ?SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180116BF0
 * Callers:
 *     ?SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z @ 0x180116BB0 (-SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z.c)
 *     ?SetDeviceSpatialSettings@CPolicyConfig@@UEAAJPEBGPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x180116CE0 (-SetDeviceSpatialSettings@CPolicyConfig@@UEAAJPEBGPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18000CB5C (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x1800601E4 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::SetDeviceFormatCommon(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        struct WAVEFORMATEXTENSIBLE *a3,
        const struct SpatialAudioSettings *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  EffectPack *v10[2]; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v11; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_OWORD *)v10 = 0LL;
  v11 = 0LL;
  v6 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, EffectPack **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                                 + 40LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         v10);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 1143LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v6);
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v10);
    return v7;
  }
  v6 = EffectPack::SetDeviceFormatAndSpatialSettings(v10[1], eHostProcessConnector, a3, a4, 1);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 1145LL;
    goto LABEL_5;
  }
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v10);
  return 0LL;
}
