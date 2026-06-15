/*
 * XREFs of ??$MakeAndInitialize@VDynamicAudioEndpointManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDynamicAudioEndpointManager@@@Z @ 0x180058728
 * Callers:
 *     ?Initialize@AudioSessionManagerProvider@@YAJXZ @ 0x180057C3C (-Initialize@AudioSessionManagerProvider@@YAJXZ.c)
 * Callees:
 *     ??0DynamicAudioEndpointManager@@QEAA@XZ @ 0x180058BAC (--0DynamicAudioEndpointManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@DynamicAudioEndpointManager@@QEAAJXZ @ 0x180058D50 (-RuntimeClassInitialize@DynamicAudioEndpointManager@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082450 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DynamicAudioEndpointManager,DynamicAudioEndpointManager,>(
        DynamicAudioEndpointManager **a1)
{
  DynamicAudioEndpointManager *v2; // rax
  DynamicAudioEndpointManager *v3; // rbx
  int v4; // edi
  DynamicAudioEndpointManager *v6; // [rsp+40h] [rbp+8h] BYREF
  DynamicAudioEndpointManager *v7; // [rsp+48h] [rbp+10h] BYREF
  DynamicAudioEndpointManager *v8; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = (DynamicAudioEndpointManager *)operator new(0x3E0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = v2;
  if ( !v2 )
  {
    v4 = -2147024882;
LABEL_10:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v6);
    return (unsigned int)v4;
  }
  v8 = v2;
  v3 = DynamicAudioEndpointManager::DynamicAudioEndpointManager(v2);
  v7 = v3;
  v6 = 0LL;
  v4 = DynamicAudioEndpointManager::RuntimeClassInitialize(v3);
  if ( v4 < 0 )
  {
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&v7);
    goto LABEL_10;
  }
  if ( v3 )
    (*(void (__fastcall **)(DynamicAudioEndpointManager *))(*(_QWORD *)v3 + 8LL))(v3);
  *a1 = v3;
  if ( v3 )
    (*(void (__fastcall **)(DynamicAudioEndpointManager *))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
