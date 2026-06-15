/*
 * XREFs of ??0CAudioResourceManager@@QEAA@XZ @ 0x180057DE4
 * Callers:
 *     ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x180057B48 (--$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

CAudioResourceManager *__fastcall CAudioResourceManager::CAudioResourceManager(CAudioResourceManager *this)
{
  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioResourceManager,IAudioResourceControl>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioResourceManager,IAudioResourceControl>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioResourceManager,IWeakReferenceSource,IAudioResourceControl>'};
  *((_QWORD *)this + 2) = &CAudioResourceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioResourceManager,IAudioResourceControl>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioResourceControl>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CAudioResourceManager::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CAudioResourceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioResourceManager,IWeakReferenceSource,IAudioResourceControl>'};
  *((_QWORD *)this + 2) = &CAudioResourceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CAudioResourceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioResourceControl>'};
  *((_QWORD *)this + 6) = 0LL;
  return this;
}
