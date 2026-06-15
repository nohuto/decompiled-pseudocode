/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18002E2D4
 * Callers:
 *     Create_SpatialAudioDeviceStateReader @ 0x18002E218 (Create_SpatialAudioDeviceStateReader.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002E45C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18002E520 (-Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x1800476EC (-InternalRelease@-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateReader,SpatialAudioDeviceStateReader,unsigned short const * &,IPropertyStore * &>(
        char **a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  char *v6; // rax
  char *v7; // rdi
  char *v8; // rsi
  int v9; // ebx
  char *v11; // [rsp+50h] [rbp+8h] BYREF
  char *v12; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (char *)operator new(0x268uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v11 = v6;
  if ( v6 )
  {
    memset_0(v6 + 8, 0, 0x208uLL);
    *((_QWORD *)v7 + 66) = 0LL;
    *((_QWORD *)v7 + 67) = 0LL;
    *(_QWORD *)v7 = &SpatialAudioStateIO::`vftable';
    *((_OWORD *)v7 + 34) = 0LL;
    *((_QWORD *)v7 + 70) = 0LL;
    v8 = v7 + 568;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 576));
    *((_DWORD *)v7 + 153) = 1;
    *((_QWORD *)v7 + 71) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioDeviceStateReader'};
    *((_QWORD *)v7 + 72) = &SpatialAudioDeviceStateReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v7 = &SpatialAudioDeviceStateReader::`vftable';
    *(_QWORD *)v8 = &SpatialAudioDeviceStateReader::`vftable'{for `ISpatialAudioDeviceStateReader'};
    *((_QWORD *)v7 + 72) = &SpatialAudioDeviceStateReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v12 = v7;
    v11 = 0LL;
    v9 = SpatialAudioIO::Initialize((SpatialAudioIO *)v7, *a2, *a3);
    if ( v9 >= 0 )
      v9 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
    if ( v9 >= 0 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))(v7 + 568);
      *a1 = v7;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 16LL))(v7 + 568);
      return 0LL;
    }
    Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(&v12);
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v11);
  return (unsigned int)v9;
}
