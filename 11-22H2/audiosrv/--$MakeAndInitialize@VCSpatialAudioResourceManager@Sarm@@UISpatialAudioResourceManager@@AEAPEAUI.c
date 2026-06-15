/*
 * XREFs of ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x18006281C
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800594E8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DDCC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??0CSpatialAudioResourceManager@Sarm@@QEAA@XZ @ 0x180062908 (--0CSpatialAudioResourceManager@Sarm@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSpatialAudioResourceManager@Sarm@@QEAAJPEAUIAudioPolicyManager@@@Z @ 0x180062C60 (-RuntimeClassInitialize@CSpatialAudioResourceManager@Sarm@@QEAAJPEAUIAudioPolicyManager@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioResourceManager@@UIAudioAppVolumePolicyChange@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180065A20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioRes.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCSpatialAudioResourceManager@Sarm@@@WRL@Microsoft@@QEAA@XZ @ 0x18013363C (--1-$ComPtr@VCSpatialAudioResourceManager@Sarm@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Sarm::CSpatialAudioResourceManager,ISpatialAudioResourceManager,IAudioPolicyManager * &>(
        Sarm::CSpatialAudioResourceManager *a1,
        struct IAudioPolicyManager **a2)
{
  Sarm::CSpatialAudioResourceManager *v3; // rax
  Sarm::CSpatialAudioResourceManager *v4; // rbx
  unsigned int v5; // edi
  const struct _GUID *v6; // rcx
  const struct _GUID *v7; // rcx
  Sarm::CSpatialAudioResourceManager *v8; // rdx
  BOOL IsEqualGUID; // eax
  struct ISpatialAudioResourceManager *v11; // r8
  Sarm::CSpatialAudioResourceManager *v12; // [rsp+30h] [rbp+8h] BYREF
  Sarm::CSpatialAudioResourceManager *v13; // [rsp+40h] [rbp+18h] BYREF
  Sarm::CSpatialAudioResourceManager *v14; // [rsp+48h] [rbp+20h]

  v12 = a1;
  g_SpatialAudioResourceManager = 0LL;
  v3 = (Sarm::CSpatialAudioResourceManager *)operator new(0x2F0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v3;
  v13 = v3;
  if ( !v3 )
  {
    v5 = -2147024882;
LABEL_12:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v12);
    return v5;
  }
  v14 = v3;
  v4 = (Sarm::CSpatialAudioResourceManager *)Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager(v3);
  v13 = v4;
  v12 = 0LL;
  v5 = Sarm::CSpatialAudioResourceManager::RuntimeClassInitialize(v4, *a2);
  if ( (v5 & 0x80000000) != 0 )
  {
    Microsoft::WRL::ComPtr<Sarm::CSpatialAudioResourceManager>::~ComPtr<Sarm::CSpatialAudioResourceManager>(&v13);
    goto LABEL_12;
  }
  g_SpatialAudioResourceManager = 0LL;
  if ( InlineIsEqualGUID(&GUID_2c794bb5_12d9_433a_b0a1_e3e5c6f54b6b, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    g_SpatialAudioResourceManager = v4;
    (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v4 + 8LL))(v4);
    v5 = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v6, v6) )
    {
      g_SpatialAudioResourceManager = v4;
      v5 = 0;
      v8 = v4;
    }
    else
    {
      IsEqualGUID = InlineIsEqualGUID(v7, &GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b);
      v8 = 0LL;
      if ( IsEqualGUID )
      {
        g_SpatialAudioResourceManager = v11;
        v8 = v11;
      }
      v5 = !IsEqualGUID ? 0x80004002 : 0;
      if ( !IsEqualGUID )
        goto LABEL_7;
    }
    (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v8 + 8LL))(v8);
  }
LABEL_7:
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioResourceManager,IAudioAppVolumePolicyChange>::Release(v4);
  return v5;
}
