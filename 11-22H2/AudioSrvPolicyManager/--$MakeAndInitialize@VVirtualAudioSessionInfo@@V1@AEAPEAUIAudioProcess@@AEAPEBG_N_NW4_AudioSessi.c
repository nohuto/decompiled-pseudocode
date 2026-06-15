/*
 * XREFs of ??$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessionState@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualAudioSessionInfo@@AEAPEAUIAudioProcess@@AEAPEBG$$QEA_N3$$QEAW4_AudioSessionState@@@Z @ 0x18001B4C0
 * Callers:
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x18001CFE0 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___M.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180015FAC (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016E5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeStateManager@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18001BB0C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeStateMa.c)
 *     ?RuntimeClassInitialize@VirtualAudioSessionInfo@@QEAAJPEAUIAudioProcess@@PEBGHHW4_AudioSessionState@@@Z @ 0x18003CA78 (-RuntimeClassInitialize@VirtualAudioSessionInfo@@QEAAJPEAUIAudioProcess@@PEBGHHW4_AudioSessionSt.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualAudioSessionInfo,VirtualAudioSessionInfo,IAudioProcess * &,unsigned short const * &,bool,bool,enum _AudioSessionState>(
        VirtualAudioSessionInfo **a1,
        struct IAudioProcess **a2,
        const unsigned __int16 **a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        enum _AudioSessionState *a6)
{
  VirtualAudioSessionInfo *v10; // rax
  VirtualAudioSessionInfo *v11; // rbx
  int v12; // edi
  __int64 v13; // rax
  VirtualAudioSessionInfo *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (VirtualAudioSessionInfo *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  v15 = v10;
  if ( v10 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointVolumeStateManager>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointVolumeStateManager>(v10);
    *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioSessionInfo>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v11 = &VirtualAudioSessionInfo::`vftable';
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 3) = 0LL;
    v15 = 0LL;
    v12 = VirtualAudioSessionInfo::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5, *a6);
    v13 = *(_QWORD *)v11;
    if ( v12 >= 0 )
    {
      (*(void (__fastcall **)(VirtualAudioSessionInfo *))(v13 + 8))(v11);
      *a1 = v11;
      (*(void (__fastcall **)(VirtualAudioSessionInfo *))(*(_QWORD *)v11 + 16LL))(v11);
      v12 = 0;
    }
    else
    {
      (*(void (__fastcall **)(VirtualAudioSessionInfo *))(v13 + 16))(v11);
    }
  }
  else
  {
    v12 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>((void **)&v15);
  return (unsigned int)v12;
}
