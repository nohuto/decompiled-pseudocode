/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18004ECE0
 * Callers:
 *     Create_SpatialAudioDeviceStateWriter @ 0x18004EBA0 (Create_SpatialAudioDeviceStateWriter.c)
 * Callees:
 *     ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180038D1C (-Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??0SpatialAudioDeviceStateWriter@@QEAA@XZ @ 0x18004EDA8 (--0SpatialAudioDeviceStateWriter@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D608 (-InternalRelease@-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateWriter,SpatialAudioDeviceStateWriter,unsigned short const * &,IPropertyStore * &>(
        SpatialAudioDeviceStateWriter **a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  SpatialAudioDeviceStateWriter *v6; // rax
  SpatialAudioDeviceStateWriter *v7; // rsi
  int v8; // ebx
  SpatialAudioDeviceStateWriter *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (SpatialAudioDeviceStateWriter *)operator new(0x290uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = SpatialAudioDeviceStateWriter::SpatialAudioDeviceStateWriter(v6);
    v10 = v7;
    v11 = 0LL;
    v8 = SpatialAudioIO::Initialize(v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*((_QWORD *)v7 + 71) + 8LL))((__int64)v7 + 568);
      *a1 = v7;
      v8 = 0;
    }
    Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
