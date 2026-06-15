/*
 * XREFs of ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x180030C74
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002BDD0 (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180030CE0 (-FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z @ 0x180084AA2 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z.c)
 * Callees:
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x1800308F0 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemEffectDescriptor::SetDefaultEffectChain(
        SystemEffectDescriptor *this,
        struct CAudioSignalProcessingModeArray *a2,
        unsigned int a3,
        struct _GUID *a4)
{
  int EffectChain; // ebx
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-18h]
  __int64 **v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (__int64 **)((char *)this + 16);
  if ( *((int *)a2 + 2) > 0 )
  {
    EffectChain = SystemEffectChainDescriptor::CreateEffectChain((__int64)a2, a3, a4, 0, 0LL, v8);
    if ( EffectChain >= 0 )
      return 0LL;
    v6 = 161LL;
  }
  else
  {
    EffectChain = SystemEffectChainDescriptor::CreateEffectChain((__int64)a2, 0, 0LL, a3, a4, v8);
    if ( EffectChain >= 0 )
      return 0LL;
    v6 = 166LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)EffectChain,
    v7);
  return (unsigned int)EffectChain;
}
