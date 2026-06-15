/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEffectsWatcher@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180018684
 * Callers:
 *     ??1CVADServer@@UEAA@XZ @ 0x180017678 (--1CVADServer@@UEAA@XZ.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft@@UEAA@XZ @ 0x1800D572C (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft.c)
 *     ??1AudioEffectsWatcher@@UEAA@XZ @ 0x1800D57CC (--1AudioEffectsWatcher@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800D5B30 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsof.c)
 *     ??1CEndpointNotificationDelegator@@UEAA@XZ @ 0x180104944 (--1CEndpointNotificationDelegator@@UEAA@XZ.c)
 *     ??_GCDeviceGraphManager@@UEAAPEAXI@Z @ 0x180105460 (--_GCDeviceGraphManager@@UEAAPEAXI@Z.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x18015A0D8 (--1AtmosCheck@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800191D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEffectsWatcher>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEffectsWatcher>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v1);
  return result;
}
