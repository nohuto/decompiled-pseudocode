/*
 * XREFs of ??0SpatialAudioEncoderPropertiesFactory@@QEAA@XZ @ 0x18008489E
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioEncoderPropertiesFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioEncoderPropertiesFactory@@@Z @ 0x180084766 (--$MakeAndInitialize@VSpatialAudioEncoderPropertiesFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002E45C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

SpatialAudioEncoderPropertiesFactory *__fastcall SpatialAudioEncoderPropertiesFactory::SpatialAudioEncoderPropertiesFactory(
        SpatialAudioEncoderPropertiesFactory *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((SpatialAudioEncoderPropertiesFactory *)((char *)this + 8));
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioEncoderPropertiesFactory,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioEncoderPropertiesFactory'};
  *v2 = &SpatialAudioEncoderPropertiesFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SpatialAudioEncoderPropertiesFactory::`vftable'{for `ISpatialAudioEncoderPropertiesFactory'};
  *v2 = &SpatialAudioEncoderPropertiesFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
