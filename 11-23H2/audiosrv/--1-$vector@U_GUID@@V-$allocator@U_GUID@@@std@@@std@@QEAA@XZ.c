/*
 * XREFs of ??1?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAA@XZ @ 0x1800D8714
 * Callers:
 *     _EffectPackConfiguration::EffectPackConfiguration_::_1_::dtor$3 @ 0x18007A31C (_EffectPackConfiguration--EffectPackConfiguration_--_1_--dtor$3.c)
 *     _CAudioStream::GetAudioEffects_::_1_::dtor$1 @ 0x1800EB8B6 (_CAudioStream--GetAudioEffects_--_1_--dtor$1.c)
 *     _CSharedStreamGroupProxy::CompareEffectTogglesProcessingModeParameters_::_1_::dtor$0 @ 0x180105D09 (_CSharedStreamGroupProxy--CompareEffectTogglesProcessingModeParameters_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<_GUID>::~vector<_GUID>(__int64 a1)
{
  std::vector<_GUID>::_Tidy(a1);
}
