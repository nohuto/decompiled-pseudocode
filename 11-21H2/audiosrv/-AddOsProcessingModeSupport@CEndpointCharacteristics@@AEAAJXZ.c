/*
 * XREFs of ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180046864
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x180049314 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180046328 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?AddInternalVoiceProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x180046980 (-AddInternalVoiceProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800469F8 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x180047194 (-AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180051094 (-AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::AddOsProcessingModeSupport(CEndpointCharacteristics *this)
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

  if ( !(*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this + 56LL))(this) )
  {
    v2 = CEndpointCharacteristics::AddSpatialAudioProcessingSupportForConnector(this, eHostProcessConnector);
    v3 = v2;
    if ( v2 < 0 )
    {
      v7 = 1601LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v2,
        v11.Data1);
      v8 = 2387LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v3,
        v11.Data1);
      return (unsigned int)v3;
    }
    if ( (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(this) )
    {
      v2 = CEndpointCharacteristics::AddSpatialAudioProcessingSupportForConnector(this, eOffloadConnector);
      v3 = v2;
      if ( v2 < 0 )
      {
        v7 = 1605LL;
        goto LABEL_14;
      }
    }
  }
  v3 = CEndpointCharacteristics::AddProcessingModeSupport_for_VSS(this);
  if ( v3 < 0 )
  {
    v8 = 2388LL;
    goto LABEL_16;
  }
  v11 = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
  v3 = CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(this, eHostProcessConnector, &v11);
  if ( v3 < 0 )
  {
    v8 = 2389LL;
    goto LABEL_16;
  }
  v11 = GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0;
  v3 = CEndpointCharacteristics::AddInternalVoiceProcessingMode(this, v4, &v11, 0LL);
  if ( v3 < 0 )
  {
    v8 = 2390LL;
    goto LABEL_16;
  }
  v11 = GUID_461d14af_a88e_4be1_a809_d8bfd44b0121;
  v3 = CEndpointCharacteristics::AddInternalVoiceProcessingMode(this, v5, &v11, 1LL);
  if ( v3 < 0 )
  {
    v8 = 2391LL;
    goto LABEL_16;
  }
  v11 = GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7;
  v3 = CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(this, eHostProcessConnector, &v11);
  if ( v3 < 0 )
  {
    v8 = 2392LL;
    goto LABEL_16;
  }
  if ( !*((_DWORD *)this + 54) )
    return 0LL;
  v11 = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
  v9 = CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(this, eKeywordDetectorConnector, &v11);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x95B,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v9,
    v11.Data1);
  return v10;
}
