/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioEncoderProperties@@AEBU_GUID@@AEAH@Z @ 0x180145618
 * Callers:
 *     ?CreateForEncoder@SpatialAudioEncoderPropertiesFactory@@UEAAJAEBU_GUID@@HPEAPEAUISpatialAudioEncoderProperties@@@Z @ 0x180146340 (-CreateForEncoder@SpatialAudioEncoderPropertiesFactory@@UEAAJAEBU_GUID@@HPEAPEAUISpatialAudioEnc.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0SpatialAudioEncoderProperties@@QEAA@XZ @ 0x1800847C4 (--0SpatialAudioEncoderProperties@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x180146C38 (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioEncoderProperties,SpatialAudioEncoderProperties,_GUID const &,int &>(
        SpatialAudioEncoderProperties **a1,
        const struct _GUID *a2,
        int *a3)
{
  void *v6; // rax
  int v7; // edi
  SpatialAudioEncoderProperties *v8; // rbx
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  SpatialAudioEncoderProperties *v11; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x228uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v10);
    return (unsigned int)v7;
  }
  v8 = SpatialAudioEncoderProperties::SpatialAudioEncoderProperties((SpatialAudioEncoderProperties *)v6);
  v11 = v8;
  v10 = 0LL;
  v7 = SpatialAudioEncoderProperties::RuntimeClassInitialize(v8, a2, *a3);
  if ( v7 < 0 )
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v11);
    goto LABEL_5;
  }
  if ( v8 )
    (*(void (__fastcall **)(SpatialAudioEncoderProperties *))(*(_QWORD *)v8 + 8LL))(v8);
  *a1 = v8;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v11);
  return 0LL;
}
