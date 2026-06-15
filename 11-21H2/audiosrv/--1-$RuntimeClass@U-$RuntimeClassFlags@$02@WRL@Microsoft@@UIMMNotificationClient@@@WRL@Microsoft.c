/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft@@UEAA@XZ @ 0x1800D2AE0
 * Callers:
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$0 @ 0x1800720E0 (_AtmosCheck--AtmosCheck_--_1_--dtor$0.c)
 *     _AudioEffectsWatcher::AudioEffectsWatcher_::_1_::dtor$0 @ 0x1800D2A16 (_AudioEffectsWatcher--AudioEffectsWatcher_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMMNotificationClient>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMMNotificationClient>(
        __int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEffectsWatcher>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEffectsWatcher>(a1);
}
