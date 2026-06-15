/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18002DF08
 * Callers:
 *     Create_SpatialAudioDevicePropertyReader @ 0x18002D72C (Create_SpatialAudioDevicePropertyReader.c)
 * Callees:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18002DDFC (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??0SpatialAudioDevicePropertyReader@@QEAA@XZ @ 0x18002DFB4 (--0SpatialAudioDevicePropertyReader@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDevicePropertyReader,SpatialAudioDevicePropertyReader,unsigned short const * &,IPropertyStore * &>(
        SpatialAudioDevicePropertyReader **a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  SpatialAudioDevicePropertyReader *v6; // rax
  SpatialAudioDevicePropertyReader *v7; // rbx
  int v8; // edi
  SpatialAudioDevicePropertyReader *v10; // [rsp+40h] [rbp+8h] BYREF
  SpatialAudioDevicePropertyReader *v11; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (SpatialAudioDevicePropertyReader *)operator new(0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  if ( !v6 )
  {
    v8 = -2147024882;
LABEL_8:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v10);
    return (unsigned int)v8;
  }
  v7 = SpatialAudioDevicePropertyReader::SpatialAudioDevicePropertyReader(v6);
  v11 = v7;
  v10 = 0LL;
  v8 = SpatialAudioDevicePropertyReader::RuntimeClassInitialize(v7, *a2, *a3);
  if ( v8 < 0 )
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
    goto LABEL_8;
  }
  if ( v7 )
    (*(void (__fastcall **)(SpatialAudioDevicePropertyReader *))(*(_QWORD *)v7 + 8LL))(v7);
  *a1 = v7;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
  return 0LL;
}
