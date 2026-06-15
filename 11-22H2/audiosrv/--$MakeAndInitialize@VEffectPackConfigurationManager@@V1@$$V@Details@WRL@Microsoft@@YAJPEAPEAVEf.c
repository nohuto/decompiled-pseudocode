/*
 * XREFs of ??$MakeAndInitialize@VEffectPackConfigurationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVEffectPackConfigurationManager@@@Z @ 0x18005B4B8
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800594E8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??0EffectPackConfigurationManager@@QEAA@XZ @ 0x18005B574 (--0EffectPackConfigurationManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@EffectPackConfigurationManager@@QEAAJXZ @ 0x18005B5FC (-RuntimeClassInitialize@EffectPackConfigurationManager@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082450 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<EffectPackConfigurationManager,EffectPackConfigurationManager,>(
        EffectPackConfigurationManager **a1)
{
  EffectPackConfigurationManager *v2; // rax
  EffectPackConfigurationManager *v3; // rbx
  int v4; // edi
  EffectPackConfigurationManager *v6; // [rsp+30h] [rbp+8h] BYREF
  EffectPackConfigurationManager *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = (EffectPackConfigurationManager *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( !v2 )
  {
    v4 = -2147024882;
LABEL_10:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v6);
    return (unsigned int)v4;
  }
  v3 = EffectPackConfigurationManager::EffectPackConfigurationManager(v2);
  v7 = v3;
  v6 = 0LL;
  v4 = EffectPackConfigurationManager::RuntimeClassInitialize(v3);
  if ( v4 < 0 )
  {
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&v7);
    goto LABEL_10;
  }
  if ( v3 )
    (*(void (__fastcall **)(EffectPackConfigurationManager *))(*(_QWORD *)v3 + 8LL))(v3);
  *a1 = v3;
  if ( v3 )
    (*(void (__fastcall **)(EffectPackConfigurationManager *))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
