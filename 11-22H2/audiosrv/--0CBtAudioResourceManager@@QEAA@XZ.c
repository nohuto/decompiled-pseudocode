/*
 * XREFs of ??0CBtAudioResourceManager@@QEAA@XZ @ 0x1800F50EC
 * Callers:
 *     ??$MakeAndInitialize@VCBtAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIBtAudioResourceManager@@AEAU_GUID@@@Z @ 0x1800F4964 (--$MakeAndInitialize@VCBtAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@@Details@WRL.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CBtAudioResourceManagerBase@@QEAA@XZ @ 0x1800F5178 (--0CBtAudioResourceManagerBase@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
CBtAudioResourceManager *__fastcall CBtAudioResourceManager::CBtAudioResourceManager(CBtAudioResourceManager *this)
{
  CBtAudioResourceManagerBase::CBtAudioResourceManagerBase(this);
  *((_DWORD *)this + 57) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CBtAudioResourceManagerBase>::`vftable';
  *((_QWORD *)this + 1) = &CBtAudioResourceManager::`vftable'{for `IBtAudioResourceManager'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CBtAudioResourceManagerBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IEndpointCustomFormatHandler>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CBtAudioResourceManager::`vftable';
  *((_QWORD *)this + 1) = &CBtAudioResourceManager::`vftable'{for `IBtAudioResourceManager'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CBtAudioResourceManagerBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IEndpointCustomFormatHandler>'};
  return this;
}
