/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionary@@$$QEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG$$QEA$$TAEAPEAEAEAI@Z @ 0x180147144
 * Callers:
 *     Create_SpatialAudioMetadataDictionaryFromData @ 0x180148080 (Create_SpatialAudioMetadataDictionaryFromData.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0SpatialAudioMetadataDictionary@@QEAA@XZ @ 0x180147324 (--0SpatialAudioMetadataDictionary@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBGPEAEI@Z @ 0x180147ECC (-RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@GP.c)
 */

// Hidden C++ exception states: #wind=3
__int64 Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioMetadataDictionary,SpatialAudioMetadataDictionary,enum DictionaryLoadKind,_GUID const &,unsigned short &,std::nullptr_t,unsigned char * &,unsigned int &>(
        SpatialAudioMetadataDictionary **a1,
        unsigned int *a2,
        __int64 a3,
        ...)
{
  void *v6; // rax
  int v7; // edi
  SpatialAudioMetadataDictionary *v8; // rbx
  SpatialAudioMetadataDictionary *v10; // [rsp+60h] [rbp+8h] BYREF
  void *v11; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, void *);
  *a1 = 0LL;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>((void **)va);
    return (unsigned int)v7;
  }
  v8 = SpatialAudioMetadataDictionary::SpatialAudioMetadataDictionary((SpatialAudioMetadataDictionary *)v6);
  v10 = v8;
  v11 = 0LL;
  v7 = SpatialAudioMetadataDictionary::RuntimeClassInitialize(v8, *a2, a3);
  if ( v7 < 0 )
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v10);
    goto LABEL_5;
  }
  if ( v8 )
    (*(void (__fastcall **)(SpatialAudioMetadataDictionary *))(*(_QWORD *)v8 + 8LL))(v8);
  *a1 = v8;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v10);
  return 0LL;
}
