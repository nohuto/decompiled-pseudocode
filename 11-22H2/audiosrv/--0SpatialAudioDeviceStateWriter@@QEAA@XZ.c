/*
 * XREFs of ??0SpatialAudioDeviceStateWriter@@QEAA@XZ @ 0x1800218A0
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1800217F0 (--$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002E45C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
SpatialAudioDeviceStateWriter *__fastcall SpatialAudioDeviceStateWriter::SpatialAudioDeviceStateWriter(
        SpatialAudioDeviceStateWriter *this)
{
  memset_0((char *)this + 8, 0, 0x208uLL);
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *(_QWORD *)this = &SpatialAudioStateIO::`vftable';
  *((_OWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  Microsoft::WRL::FtmBase::FtmBase((SpatialAudioDeviceStateWriter *)((char *)this + 576));
  *((_DWORD *)this + 153) = 1;
  *((_QWORD *)this + 71) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDeviceStateWriter,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioDeviceStateWriter'};
  *((_QWORD *)this + 72) = &SpatialAudioDeviceStateWriter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SpatialAudioDeviceStateWriter::`vftable';
  *((_QWORD *)this + 71) = &SpatialAudioDeviceStateWriter::`vftable'{for `ISpatialAudioDeviceStateWriter'};
  *((_QWORD *)this + 72) = &SpatialAudioDeviceStateWriter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 616), 0, 0);
  return this;
}
