/*
 * XREFs of ??0CBtLeAudioResourceManager@@QEAA@XZ @ 0x1800F5294
 * Callers:
 *     ??$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIBtAudioResourceManager@@AEAU_GUID@@@Z @ 0x1800F49C8 (--$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@@Details@W.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CBtAudioResourceManagerBase@@QEAA@XZ @ 0x1800F5128 (--0CBtAudioResourceManagerBase@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
CBtLeAudioResourceManager *__fastcall CBtLeAudioResourceManager::CBtLeAudioResourceManager(
        CBtLeAudioResourceManager *this)
{
  CBtAudioResourceManagerBase::CBtAudioResourceManagerBase(this);
  *((_DWORD *)this + 59) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CBtAudioResourceManagerBase,ISessionInternalEvents,IEndpointCustomFormatHandler>::`vftable';
  *((_QWORD *)this + 1) = &CBtLeAudioResourceManager::`vftable'{for `IBtAudioResourceManager'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CBtAudioResourceManagerBase,ISessionInternalEvents,IEndpointCustomFormatHandler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IEndpointCustomFormatHandler>'s `Microsoft::WRL::Details::Selector<CBtAudioResourceManagerBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CBtAudioResourceManagerBase>,ISessionInternalEvents,IEndpointCustomFormatHandler>>'};
  *((_QWORD *)this + 27) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CBtAudioResourceManagerBase,ISessionInternalEvents,IEndpointCustomFormatHandler>::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 28) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CBtAudioResourceManagerBase,ISessionInternalEvents,IEndpointCustomFormatHandler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IEndpointCustomFormatHandler>'s `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ISessionInternalEvents,IEndpointCustomFormatHandler>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CBtAudioResourceManagerBase>,ISessionInternalEvents,IEndpointCustomFormatHandler>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CBtLeAudioResourceManager::`vftable';
  *((_QWORD *)this + 1) = &CBtLeAudioResourceManager::`vftable'{for `IBtAudioResourceManager'};
  *((_QWORD *)this + 2) = &CBtLeAudioResourceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IEndpointCustomFormatHandler>'s `Microsoft::WRL::Details::Selector<CBtAudioResourceManagerBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CBtAudioResourceManagerBase>,ISessionInternalEvents,IEndpointCustomFormatHandler>>'};
  *((_QWORD *)this + 27) = &CBtLeAudioResourceManager::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 28) = &CBtLeAudioResourceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IEndpointCustomFormatHandler>'s `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ISessionInternalEvents,IEndpointCustomFormatHandler>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CBtAudioResourceManagerBase>,ISessionInternalEvents,IEndpointCustomFormatHandler>>'};
  *((_QWORD *)this + 30) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 248), 0, 0);
  *((_DWORD *)this + 120) = 0;
  *((_DWORD *)this + 121) = 0;
  *((_DWORD *)this + 122) = 0;
  *(_QWORD *)((char *)this + 492) = 0LL;
  return this;
}
