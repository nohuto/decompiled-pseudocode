/*
 * XREFs of ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x180030F38
 * Callers:
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x180029E80 (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x18002AD54 (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002BDD0 (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002EC18 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x1800318F0 (-GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z.c)
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x180032188 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetChainDescriptorForMode(__int64 a1, _QWORD *a2)
{
  unsigned int OverridingChainDescriptorIndex; // eax
  __int64 v5; // r11
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = *(_OWORD *)a2;
  OverridingChainDescriptorIndex = SystemEffectDescriptor::GetOverridingChainDescriptorIndex(a1, &v7);
  if ( OverridingChainDescriptorIndex != -1 )
    return *(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                        a1 + 32,
                        OverridingChainDescriptorIndex);
  if ( !*(_QWORD *)(a1 + 16)
    || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*(__int64 **)(a1 + 16), a2) == -1 )
  {
    return 0LL;
  }
  return v5;
}
