/*
 * XREFs of ??0CAPOServiceProvider@@QEAA@XZ @ 0x1400053F8
 * Callers:
 *     ??$MakeAndInitialize@VCAPOServiceProvider@@UIServiceProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIServiceProvider@@@Z @ 0x140005338 (--$MakeAndInitialize@VCAPOServiceProvider@@UIServiceProvider@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CAPOServiceProvider *__fastcall CAPOServiceProvider::CAPOServiceProvider(CAPOServiceProvider *this)
{
  *(_QWORD *)this = &Microsoft::WRL::ChainInterfaces<IServiceProviderWrapper,IServiceProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_DWORD *)this + 7) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IServiceProviderWrapper,IServiceProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioProcessingObjectLoggingService,IAudioProcessingObjectRTQueueService>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IServiceProviderWrapper,IServiceProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioProcessingObjectLoggingService,IAudioProcessingObjectRTQueueService>::`vftable'{for `IAudioProcessingObjectLoggingService'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IServiceProviderWrapper,IServiceProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioProcessingObjectLoggingService,IAudioProcessingObjectRTQueueService>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectRTQueueService>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CAPOServiceProvider::`vftable';
  *((_QWORD *)this + 1) = &CAPOServiceProvider::`vftable'{for `IAudioProcessingObjectLoggingService'};
  *((_QWORD *)this + 2) = &CAPOServiceProvider::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectRTQueueService>'};
  *((GUID *)this + 2) = GUID_00000000_0000_0000_0000_000000000000;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 48), 0, 0);
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  return this;
}
