/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D102C
 * Callers:
 *     _CSharedStreamGroupProxy::UpdateAuxiliaryStreamState_::_1_::dtor$1 @ 0x18006CEC2 (_CSharedStreamGroupProxy--UpdateAuxiliaryStreamState_--_1_--dtor$1.c)
 *     _AudioServerInitialize_Internal_::_1_::dtor$0 @ 0x18006E9B0 (_AudioServerInitialize_Internal_--_1_--dtor$0.c)
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$4 @ 0x1800D3E64 (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$4.c)
 *     _AudioEffectsWatcher::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800D4787 (_AudioEffectsWatcher--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CVADServer::GetAudioEffectsChangedWnfStateName_::_1_::dtor$0 @ 0x1800EE843 (_CVADServer--GetAudioEffectsChangedWnfStateName_--_1_--dtor$0.c)
 *     _CVADServer::SetAudioEffect_::_1_::dtor$0 @ 0x1800EFE90 (_CVADServer--SetAudioEffect_--_1_--dtor$0.c)
 *     AudioServerGetStreamVpoContext$dtor$0 @ 0x1800F3400 (AudioServerGetStreamVpoContext$dtor$0.c)
 *     _CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor$0 @ 0x1800FEAA1 (_CAudioResourceManager--ConfigureAuxiliaryInputStreamForStreamGroup_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
