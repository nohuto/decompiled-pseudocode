/*
 * XREFs of ?AddOsProcessingModeSupport@EffectPack@@AEAAJXZ @ 0x18003FBCC
 * Callers:
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x18002FFF0 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002BDD0 (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x18002EDFC (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x18003FCFC (-AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18003FE74 (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ @ 0x180040510 (-AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall EffectPack::AddOsProcessingModeSupport(CEndpointCharacteristics **this)
{
  int v2; // eax
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  struct _GUID v11; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !(*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this[161] + 56LL))(this[161]) )
  {
    v2 = EffectPack::AddSpatialAudioProcessingSupportForConnector((EffectPack *)this, 0);
    v3 = v2;
    if ( v2 < 0 )
    {
      v7 = 2276LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v2);
      v8 = 3099LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
    if ( (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(this[161]) )
    {
      v2 = EffectPack::AddSpatialAudioProcessingSupportForConnector((EffectPack *)this, 1);
      v3 = v2;
      if ( v2 < 0 )
      {
        v7 = 2280LL;
        goto LABEL_14;
      }
    }
  }
  v3 = EffectPack::AddProcessingModeSupport_for_VSS((EffectPack *)this);
  if ( v3 < 0 )
  {
    v8 = 3100LL;
    goto LABEL_16;
  }
  v11 = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
  v3 = EffectPack::AugmentOEMSpeechProcessingSupport((EffectPack *)this, eHostProcessConnector, &v11);
  if ( v3 < 0 )
  {
    v8 = 3101LL;
    goto LABEL_16;
  }
  v11 = GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0;
  v3 = ((__int64 (__fastcall *)(CEndpointCharacteristics **, __int64, struct _GUID *, _QWORD))EffectPack::AddInternalVoiceProcessingMode)(
         this,
         v4,
         &v11,
         0LL);
  if ( v3 < 0 )
  {
    v8 = 3102LL;
    goto LABEL_16;
  }
  v11 = GUID_461d14af_a88e_4be1_a809_d8bfd44b0121;
  v3 = ((__int64 (__fastcall *)(CEndpointCharacteristics **, __int64, struct _GUID *, __int64))EffectPack::AddInternalVoiceProcessingMode)(
         this,
         v5,
         &v11,
         1LL);
  if ( v3 < 0 )
  {
    v8 = 3103LL;
    goto LABEL_16;
  }
  v11 = GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7;
  v3 = EffectPack::AugmentOEMSpeechProcessingSupport((EffectPack *)this, eHostProcessConnector, &v11);
  if ( v3 < 0 )
  {
    v8 = 3104LL;
    goto LABEL_16;
  }
  if ( !*((_DWORD *)this[161] + 58) )
    return 0LL;
  v11 = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
  v9 = EffectPack::AugmentOEMSpeechProcessingSupport((EffectPack *)this, eKeywordDetectorConnector, &v11);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC23,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
