/*
 * XREFs of ??$MakeAndInitialize@VCAastPreStartContext@@UIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInfo@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInfo@@@Z @ 0x180032AEC
 * Callers:
 *     ?RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPreStartContext@@@Z @ 0x18001DA10 (-RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPre.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180015FAC (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016E5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeStateManager@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18001BB0C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeStateMa.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180032E08 (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAastPreStartContext,IAudioStreamPreStartContext,IAudioStreamInfo * &>(
        _QWORD *a1,
        struct IAudioStreamInfo **a2)
{
  _BYTE *v4; // rax
  _BYTE *v5; // rbx
  int v6; // edi
  __int64 v7; // rax
  void *v9; // [rsp+40h] [rbp+8h] BYREF
  _BYTE *v10; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v9 = v4;
  if ( v4 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointVolumeStateManager>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointVolumeStateManager>((__int64)v4);
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioStreamPreStartContext>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v5 = &CAastPreStartContext::`vftable';
    v5[16] = 0;
    *((_DWORD *)v5 + 5) = 0;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    *((_QWORD *)v5 + 6) = 7LL;
    *((_WORD *)v5 + 12) = 0;
    v10 = v5;
    v9 = 0LL;
    v6 = CAastPreStartContext::RuntimeClassInitialize((CAastPreStartContext *)v5, *a2);
    v7 = *(_QWORD *)v5;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(_BYTE *, GUID *, _QWORD *))v7)(v5, &GUID_52004e04_018e_41fc_a946_f5027192635b, a1);
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    else
    {
      (*(void (__fastcall **)(_BYTE *))(v7 + 16))(v5);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v9);
  return (unsigned int)v6;
}
