/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18001C2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[7] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
