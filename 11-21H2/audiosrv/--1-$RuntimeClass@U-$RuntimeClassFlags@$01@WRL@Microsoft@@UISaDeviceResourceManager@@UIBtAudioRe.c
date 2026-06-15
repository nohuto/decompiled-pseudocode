/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISaDeviceResourceManager@@UIBtAudioResourceManager@@@WRL@Microsoft@@UEAA@XZ @ 0x180066768
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$0 @ 0x1800724AD (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$0.c)
 *     _CBtAudioResourceManager::CBtAudioResourceManager_::_1_::dtor$0 @ 0x180113840 (_CBtAudioResourceManager--CBtAudioResourceManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISaDeviceResourceManager,IBtAudioResourceManager>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISaDeviceResourceManager,IBtAudioResourceManager>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 20) = -1073741823;
}
