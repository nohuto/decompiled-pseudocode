/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1801425BC
 * Callers:
 *     Create_SpatialAudioDevicePropertyWriter @ 0x1801439DC (Create_SpatialAudioDevicePropertyWriter.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0SpatialAudioDevicePropertyWriter@@QEAA@XZ @ 0x180142698 (--0SpatialAudioDevicePropertyWriter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180142E80 (-RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDevicePropertyWriter,SpatialAudioDevicePropertyWriter,unsigned short const * &,IPropertyStore * &>(
        SpatialAudioDevicePropertyWriter **a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  void *v6; // rax
  int v7; // edi
  SpatialAudioDevicePropertyWriter *v8; // rbx
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  SpatialAudioDevicePropertyWriter *v11; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x278uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v10);
    return (unsigned int)v7;
  }
  v8 = SpatialAudioDevicePropertyWriter::SpatialAudioDevicePropertyWriter((SpatialAudioDevicePropertyWriter *)v6);
  v11 = v8;
  v10 = 0LL;
  v7 = SpatialAudioDevicePropertyWriter::RuntimeClassInitialize(v8, *a2, *a3);
  if ( v7 < 0 )
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v11);
    goto LABEL_5;
  }
  if ( v8 )
    (*(void (__fastcall **)(SpatialAudioDevicePropertyWriter *))(*(_QWORD *)v8 + 8LL))(v8);
  *a1 = v8;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v11);
  return 0LL;
}
