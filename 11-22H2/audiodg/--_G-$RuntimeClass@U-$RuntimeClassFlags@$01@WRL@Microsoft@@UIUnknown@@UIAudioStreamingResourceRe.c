/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@UIAudioStreamingResourceRegistration@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140052FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,IAudioStreamingResourceRegistration>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[5] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
