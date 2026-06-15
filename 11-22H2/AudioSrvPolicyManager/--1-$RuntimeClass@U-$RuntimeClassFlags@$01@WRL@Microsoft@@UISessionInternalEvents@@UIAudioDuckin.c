/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISessionInternalEvents@@UIAudioDuckingManager@@@WRL@Microsoft@@UEAA@XZ @ 0x18001BEB8
 * Callers:
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$0 @ 0x180049D39 (_CDuckingManager--CDuckingManager_--_1_--dtor$0.c)
 *     _CProcess::CProcess_::_1_::dtor$0 @ 0x18004A99C (_CProcess--CProcess_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISessionInternalEvents,IAudioDuckingManager>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISessionInternalEvents,IAudioDuckingManager>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 20) = -1073741823;
}
