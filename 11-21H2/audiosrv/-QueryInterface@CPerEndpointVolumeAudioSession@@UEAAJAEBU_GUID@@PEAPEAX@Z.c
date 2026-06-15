/*
 * XREFs of ?QueryInterface@CPerEndpointVolumeAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DA370
 * Callers:
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006AB80 (-QueryInterface@CPerEndpointVolumeAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006ABA0 (-QueryInterface@CPerEndpointVolumeAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006ABC0 (-QueryInterface@CPerEndpointVolumeAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006ABE0 (-QueryInterface@CPerEndpointVolumeAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006AC00 (-QueryInterface@CPerEndpointVolumeAudioSession@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WDJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006AC20 (-QueryInterface@CPerEndpointVolumeAudioSession@@WDJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800181E0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F07C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@U?$ChainInterfaces@UIAudioSessionPolicyControl@@UIAudioSessionInfo@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWeakReferenceSource@@UIAudioSessionInfoInternal@@UIAudioSessionDuckingControl@@U4@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800D6A00 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@U-$Chai.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerEndpointVolumeAudioSession::QueryInterface(
        CPerEndpointVolumeAudioSession *this,
        struct _GUID *a2,
        void **a3)
{
  CPerEndpointVolumeAudioSession *v4; // r11
  __int64 v6; // rax
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  const struct _GUID *v9; // rcx
  __int64 *v10; // r8
  __int64 v11; // r11
  const struct _GUID *v12; // r9
  int CanCastTo; // edi
  _QWORD *v14; // r8

  v4 = this;
  if ( !a3 )
    return 2147500035LL;
  v6 = *(_QWORD *)&IID_IAudioEndpointVolumeCallback.Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&IID_IAudioEndpointVolumeCallback.Data1 == *(_QWORD *)&a2->Data1 )
    v6 = *(_QWORD *)IID_IAudioEndpointVolumeCallback.Data4 - *(_QWORD *)a2->Data4;
  if ( v6 )
  {
    *a3 = 0LL;
    if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v9, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *v10 = v11;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      return 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IWeakReferenceSource,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::CanCastTo(
                    v11,
                    v12);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 8LL))(*v14);
    }
    return (unsigned int)CanCastTo;
  }
  else
  {
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
    *a3 = (void *)(((unsigned __int64)v4 + 920) & -(__int64)(v4 != 0LL));
    return 0LL;
  }
}
