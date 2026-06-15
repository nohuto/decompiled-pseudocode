/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioResourceManager@@UIAudioResourceControl@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180018624
 * Callers:
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x1800113C4 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ??1CProcessSubmixProxy@@MEAA@XZ @ 0x180015E20 (--1CProcessSubmixProxy@@MEAA@XZ.c)
 *     ??1CAudioSessionStore@@EEAA@XZ @ 0x180019138 (--1CAudioSessionStore@@EEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UIPropertyStore@@UIAudioSessionStore@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800D8BA0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UIPropertyStore@@UIAud.c)
 *     ??_GCAudioResourceManager@@UEAAPEAXI@Z @ 0x1800D8BE0 (--_GCAudioResourceManager@@UEAAPEAXI@Z.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UISaDeviceProxy@@UIInspectable@@@WRL@Microsoft@@UEAA@XZ @ 0x1801047A0 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UISaDeviceProxy@@UIInspectable@@@WRL@M.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800191D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v1);
  return result;
}
