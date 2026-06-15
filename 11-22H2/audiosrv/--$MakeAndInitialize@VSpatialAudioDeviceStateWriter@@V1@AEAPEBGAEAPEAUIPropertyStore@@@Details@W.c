/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1800217F0
 * Callers:
 *     Create_SpatialAudioDeviceStateWriter @ 0x1800216E0 (Create_SpatialAudioDeviceStateWriter.c)
 * Callees:
 *     ??0SpatialAudioDeviceStateWriter@@QEAA@XZ @ 0x1800218A0 (--0SpatialAudioDeviceStateWriter@@QEAA@XZ.c)
 *     ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18002E520 (-Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x1800476EC (-InternalRelease@-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateWriter,SpatialAudioDeviceStateWriter,unsigned short const * &,IPropertyStore * &>(
        SpatialAudioDeviceStateWriter **a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  SpatialAudioDeviceStateWriter *v6; // rax
  SpatialAudioDeviceStateWriter *v7; // rbx
  int v8; // edi
  SpatialAudioDeviceStateWriter *v10; // [rsp+40h] [rbp+8h] BYREF
  SpatialAudioDeviceStateWriter *v11; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (SpatialAudioDeviceStateWriter *)operator new(0x290uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  if ( !v6 )
  {
    v8 = -2147024882;
LABEL_8:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v10);
    return (unsigned int)v8;
  }
  v7 = SpatialAudioDeviceStateWriter::SpatialAudioDeviceStateWriter(v6);
  v11 = v7;
  v10 = 0LL;
  v8 = SpatialAudioIO::Initialize(v7, *a2, *a3);
  if ( v8 < 0 )
  {
    Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(&v11);
    goto LABEL_8;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v7 + 71) + 8LL))((__int64)v7 + 568);
  *a1 = v7;
  Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(&v11);
  return 0LL;
}
