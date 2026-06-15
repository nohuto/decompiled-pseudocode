/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioEncoderPropertiesFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioEncoderPropertiesFactory@@@Z @ 0x1801388F8
 * Callers:
 *     Create_SpatialAudioEncoderProperties @ 0x18013A4B4 (Create_SpatialAudioEncoderProperties.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0SpatialAudioEncoderPropertiesFactory@@QEAA@XZ @ 0x180138A2C (--0SpatialAudioEncoderPropertiesFactory@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioEncoderPropertiesFactory,SpatialAudioEncoderPropertiesFactory,>(
        SpatialAudioEncoderPropertiesFactory **a1)
{
  unsigned int v2; // ebx
  SpatialAudioEncoderPropertiesFactory *v3; // rax
  SpatialAudioEncoderPropertiesFactory *v4; // rax
  SpatialAudioEncoderPropertiesFactory *v5; // rdi
  SpatialAudioEncoderPropertiesFactory *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = (SpatialAudioEncoderPropertiesFactory *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = SpatialAudioEncoderPropertiesFactory::SpatialAudioEncoderPropertiesFactory(v3);
    v5 = v4;
    v7 = v4;
    if ( v4 )
      (*(void (__fastcall **)(SpatialAudioEncoderPropertiesFactory *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
