/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioEncoderPropertiesFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioEncoderPropertiesFactory@@@Z @ 0x180084736
 * Callers:
 *     Create_SpatialAudioEncoderProperties @ 0x180146F90 (Create_SpatialAudioEncoderProperties.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0SpatialAudioEncoderPropertiesFactory@@QEAA@XZ @ 0x18008486E (--0SpatialAudioEncoderPropertiesFactory@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioEncoderPropertiesFactory,SpatialAudioEncoderPropertiesFactory,>(
        SpatialAudioEncoderPropertiesFactory **a1)
{
  SpatialAudioEncoderPropertiesFactory *v2; // rax
  SpatialAudioEncoderPropertiesFactory *v4; // rax
  SpatialAudioEncoderPropertiesFactory *v5; // rbx
  SpatialAudioEncoderPropertiesFactory *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (SpatialAudioEncoderPropertiesFactory *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v4 = SpatialAudioEncoderPropertiesFactory::SpatialAudioEncoderPropertiesFactory(v2);
    v5 = v4;
    v6 = v4;
    if ( v4 )
      (*(void (__fastcall **)(SpatialAudioEncoderPropertiesFactory *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v6);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v6);
    return 2147942414LL;
  }
}
