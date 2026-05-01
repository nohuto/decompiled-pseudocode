/*
 * XREFs of ??0HostingAnimationListener@@QEAA@XZ @ 0x1800699DC
 * Callers:
 *     ??$MakeAndInitialize@VHostingAnimationListener@@V1@PEAVTouchKeyboardExperienceManager@@W4AnimationType@@@Details@WRL@Microsoft@@YAJPEAPEAVHostingAnimationListener@@$$QEAPEAVTouchKeyboardExperienceManager@@$$QEAW4AnimationType@@@Z @ 0x180069934 (--$MakeAndInitialize@VHostingAnimationListener@@V1@PEAVTouchKeyboardExperienceManager@@W4Animati.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

HostingAnimationListener *__fastcall HostingAnimationListener::HostingAnimationListener(HostingAnimationListener *this)
{
  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDWMStoryboardListener>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDWMStoryboardListener>::`vftable'{for `IDWMStoryboardListener'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDWMStoryboardListener>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &HostingAnimationListener::`vftable';
  *((_QWORD *)this + 1) = &HostingAnimationListener::`vftable'{for `IDWMStoryboardListener'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDWMStoryboardListener>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  return this;
}
