/*
 * XREFs of ?QueryInterface@CPerEndpointVolumeAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800818E0
 * Callers:
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180076390 (-QueryInterface@CPerEndpointVolumeAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800763B0 (-QueryInterface@CPerEndpointVolumeAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800763D0 (-QueryInterface@CPerEndpointVolumeAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800763F0 (-QueryInterface@CPerEndpointVolumeAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180076410 (-QueryInterface@CPerEndpointVolumeAudioSession@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WDJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180076430 (-QueryInterface@CPerEndpointVolumeAudioSession@@WDJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F104 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::QueryInterface(
        CPerEndpointVolumeAudioSession *this,
        struct _GUID *a2,
        void **a3)
{
  void **v3; // r11
  CPerEndpointVolumeAudioSession *v4; // r10
  __int64 v6; // rax
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  v3 = a3;
  v4 = this;
  if ( !a3 )
    return 2147500035LL;
  v6 = *(_QWORD *)&IID_IAudioEndpointVolumeCallback.Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&IID_IAudioEndpointVolumeCallback.Data1 == *(_QWORD *)&a2->Data1 )
    v6 = *(_QWORD *)IID_IAudioEndpointVolumeCallback.Data4 - *(_QWORD *)a2->Data4;
  if ( v6 )
    return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>>(
             (__int64)this,
             (__int64)a2,
             a3);
  v7 = *((_QWORD *)this + 7);
  while ( v7 >= 0 )
  {
    if ( (_DWORD)v7 != 0x7FFFFFFF )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v7 + 1, v7);
      if ( v8 != v7 )
        continue;
    }
    goto LABEL_12;
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v7 + 16), (volatile int *)a2);
LABEL_12:
  *v3 = (void *)(((unsigned __int64)v4 + 920) & -(__int64)(v4 != 0LL));
  return 0LL;
}
