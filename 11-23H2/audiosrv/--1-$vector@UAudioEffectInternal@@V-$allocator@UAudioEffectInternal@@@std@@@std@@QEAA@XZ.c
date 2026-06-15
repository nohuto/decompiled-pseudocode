/*
 * XREFs of ??1?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAA@XZ @ 0x1800EB344
 * Callers:
 *     _CSharedStreamGroupProxy::RefreshAposEffectStates_::_1_::dtor$0 @ 0x180078ABE (_CSharedStreamGroupProxy--RefreshAposEffectStates_--_1_--dtor$0.c)
 *     ?GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z @ 0x1800EB69C (-GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z.c)
 *     _CAudioStream::GetAudioEffects_::_1_::dtor$0 @ 0x1800EB8AA (_CAudioStream--GetAudioEffects_--_1_--dtor$0.c)
 *     _CAudioStream::GetAudioEffects_::_1_::dtor$2 @ 0x1800EB8C2 (_CAudioStream--GetAudioEffects_--_1_--dtor$2.c)
 *     _CAudioStream::GetControllableEffects_::_1_::dtor$2 @ 0x1800EBD4B (_CAudioStream--GetControllableEffects_--_1_--dtor$2.c)
 *     ?SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z @ 0x1800ED534 (-SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z.c)
 *     _CAudioStream::SetAudioEffect_::_1_::dtor$2 @ 0x1800ED8E9 (_CAudioStream--SetAudioEffect_--_1_--dtor$2.c)
 *     _CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForStreaming_::_1_::dtor$2 @ 0x180107C18 (_CSharedStreamGroupProxy--GetEffectsFromMFXInstantiatedForStreaming_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<AudioEffectInternal>::~vector<AudioEffectInternal>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
