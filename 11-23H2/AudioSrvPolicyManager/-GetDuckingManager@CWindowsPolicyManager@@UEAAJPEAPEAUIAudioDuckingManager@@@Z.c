/*
 * XREFs of ?GetDuckingManager@CWindowsPolicyManager@@UEAAJPEAPEAUIAudioDuckingManager@@@Z @ 0x18001C5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18001AE84 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInterna.c)
 */

__int64 __fastcall CWindowsPolicyManager::GetDuckingManager(
        CWindowsPolicyManager *this,
        struct IAudioDuckingManager **a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents,IAudioDuckingManager>>(
      v2,
      &GUID_6b8591c8_b7d6_455d_8003_822bfd39c679,
      a2);
  else
    *a2 = 0LL;
  return 0LL;
}
