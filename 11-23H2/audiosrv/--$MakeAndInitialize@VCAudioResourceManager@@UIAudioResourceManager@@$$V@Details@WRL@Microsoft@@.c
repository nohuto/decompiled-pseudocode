/*
 * XREFs of ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x180057B58
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800594F8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DDCC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAudioResourceManager@@UIWeakReferenceSource@@UIAudioResourceControl@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180057AE8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAudioResourceManager@.c)
 *     ??0CAudioResourceManager@@QEAA@XZ @ 0x180057DF4 (--0CAudioResourceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ @ 0x180057E94 (-RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioResourceManager@@UIAudioResourceControl@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180064D20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioResourceMan.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCAudioResourceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D8538 (--1-$ComPtr@VCAudioResourceManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAudioResourceManager,IAudioResourceManager,>(
        CAudioResourceManager *a1)
{
  CAudioResourceManager *v1; // rax
  CAudioResourceManager *v2; // rbx
  int CanCastTo; // edi
  const struct _GUID *v4; // rcx
  const struct _GUID *v5; // r9
  CAudioResourceManager *v7; // [rsp+30h] [rbp+8h] BYREF
  CAudioResourceManager *v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = a1;
  g_AudioResourceManager = 0LL;
  v1 = (CAudioResourceManager *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v1;
  if ( !v1 )
  {
    CanCastTo = -2147024882;
LABEL_12:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v7);
    return (unsigned int)CanCastTo;
  }
  v2 = CAudioResourceManager::CAudioResourceManager(v1);
  v8 = v2;
  v7 = 0LL;
  CanCastTo = CAudioResourceManager::RuntimeClassInitialize(v2);
  if ( CanCastTo < 0 )
  {
    Microsoft::WRL::ComPtr<CAudioResourceManager>::~ComPtr<CAudioResourceManager>(&v8);
    goto LABEL_12;
  }
  g_AudioResourceManager = 0LL;
  if ( InlineIsEqualGUID(&GUID_cb15cc76_6b1a_4953_b7ac_bfe78d2379e3, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    g_AudioResourceManager = v2;
    (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)v2 + 8LL))(v2);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioResourceManager,IWeakReferenceSource,IAudioResourceControl>::CanCastTo(
                  (__int64)v2 + 8,
                  v5);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 8LL))(g_AudioResourceManager);
  }
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>::Release(v2);
  return (unsigned int)CanCastTo;
}
