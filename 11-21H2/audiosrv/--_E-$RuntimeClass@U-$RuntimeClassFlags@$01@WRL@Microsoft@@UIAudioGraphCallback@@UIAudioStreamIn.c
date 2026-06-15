/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAudioGraphCallback@@UIAudioStreamInfo@@UIAudioStreamPolicyVolumeClient@@UIDuckingController@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800EDC20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioGraphCallback,IAudioStreamInfo,IAudioStreamPolicyVolumeClient,IDuckingController>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[9] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
