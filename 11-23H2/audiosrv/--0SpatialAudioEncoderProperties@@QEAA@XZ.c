/*
 * XREFs of ??0SpatialAudioEncoderProperties@@QEAA@XZ @ 0x1800847C4
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioEncoderProperties@@AEBU_GUID@@AEAH@Z @ 0x180145618 (--$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002E45C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

SpatialAudioEncoderProperties *__fastcall SpatialAudioEncoderProperties::SpatialAudioEncoderProperties(
        SpatialAudioEncoderProperties *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((SpatialAudioEncoderProperties *)((char *)this + 8));
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioEncoderProperties,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioEncoderProperties'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioEncoderProperties,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SpatialAudioEncoderProperties::`vftable'{for `ISpatialAudioEncoderProperties'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioEncoderProperties,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 6) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 56), 0, 0);
  *((_QWORD *)this + 67) = 0LL;
  *((_DWORD *)this + 136) = 0;
  return this;
}
