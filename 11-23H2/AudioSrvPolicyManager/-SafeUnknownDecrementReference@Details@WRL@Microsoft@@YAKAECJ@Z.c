/*
 * XREFs of ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000A170
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSessionInfo@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001D8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSessionInf.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamInfo@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001D970 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamInfo.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001D9F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001DA60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISe_ea_18001DA60.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001DAF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800228D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180028DA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIBackgroundSessionCallbacks@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180036980 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIBackgroundSessi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003E660 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::SafeUnknownDecrementReference(
        Microsoft::WRL::Details *this,
        volatile int *a2)
{
  signed __int32 i; // edx

  for ( i = *(_DWORD *)this; *(_DWORD *)this != 0x7FFFFFFF; i = *(_DWORD *)this )
  {
    if ( i == _InterlockedCompareExchange((volatile signed __int32 *)this, i - 1, i) )
      break;
  }
  return (unsigned int)(i - 1);
}
