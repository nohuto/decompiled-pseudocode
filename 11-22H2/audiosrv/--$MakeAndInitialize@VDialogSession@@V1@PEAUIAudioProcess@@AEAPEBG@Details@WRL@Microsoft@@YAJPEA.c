/*
 * XREFs of ??$MakeAndInitialize@VDialogSession@@V1@PEAUIAudioProcess@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVDialogSession@@$$QEAPEAUIAudioProcess@@AEAPEBG@Z @ 0x18010CEEC
 * Callers:
 *     ?RpcBeginDialogSession@@YAJPEBGPEAPEAVDialogSession@@@Z @ 0x18010D310 (-RpcBeginDialogSession@@YAJPEBGPEAPEAVDialogSession@@@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180027450 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082450 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z @ 0x18010D3D8 (-RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DialogSession,DialogSession,IAudioProcess *,unsigned short const * &>(
        _QWORD *a1,
        struct IAudioProcess **a2,
        const unsigned __int16 **a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // edi
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v10 = v6;
  if ( !v6 )
  {
    v8 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v10);
    return (unsigned int)v8;
  }
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)v6);
  *v7 = &DialogSession::`vftable';
  v7[2] = 0LL;
  v7[3] = 0LL;
  *((_DWORD *)v7 + 8) = 0;
  v11 = v7;
  v10 = 0LL;
  v8 = DialogSession::RuntimeClassInitialize((DialogSession *)v7, *a2, *a3);
  if ( v8 < 0 )
  {
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&v11);
    goto LABEL_5;
  }
  (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
  *a1 = v7;
  (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return 0LL;
}
