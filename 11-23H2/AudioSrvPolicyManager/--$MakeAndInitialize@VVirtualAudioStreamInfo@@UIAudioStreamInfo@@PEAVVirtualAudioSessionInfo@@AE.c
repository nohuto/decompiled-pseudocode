/*
 * XREFs of ??$MakeAndInitialize@VVirtualAudioStreamInfo@@UIAudioStreamInfo@@PEAVVirtualAudioSessionInfo@@AEAKW4SYSTEM_AUDIO_STREAM_TYPE@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioStreamInfo@@$$QEAPEAVVirtualAudioSessionInfo@@AEAK$$QEAW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18001B424
 * Callers:
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x18001CDF0 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___M.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180015DBC (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016C6C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeStateManager@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18001B91C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeStateMa.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualAudioStreamInfo,IAudioStreamInfo,VirtualAudioSessionInfo *,unsigned long &,enum SYSTEM_AUDIO_STREAM_TYPE>(
        _QWORD *a1,
        __int64 *a2,
        int *a3,
        int *a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  unsigned int v10; // edi
  int v11; // esi
  int v12; // ebp
  __int64 v13; // rcx
  void *v15; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  v15 = v8;
  if ( v8 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointVolumeStateManager>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointVolumeStateManager>(v8);
    *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioStreamInfo>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v9 = &VirtualAudioStreamInfo::`vftable';
    v9[2] = 0LL;
    v15 = 0LL;
    v11 = *a4;
    v12 = *a3;
    v13 = *a2;
    v9[2] = *a2;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    *((_DWORD *)v9 + 6) = v12;
    *((_DWORD *)v9 + 7) = v11;
    v10 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v9)(
            v9,
            &GUID_52f049ad_27a3_4984_b7cf_fb04476ad166,
            a1);
    (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v15);
  return v10;
}
