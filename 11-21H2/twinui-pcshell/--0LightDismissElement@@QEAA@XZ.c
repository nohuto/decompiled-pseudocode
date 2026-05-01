/*
 * XREFs of ??0LightDismissElement@@QEAA@XZ @ 0x1804D6320
 * Callers:
 *     ??$MakeAndInitialize@VLightDismissElement@@V1@AEAPEAUILightDismissElementHost@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVLightDismissElement@@AEAPEAUILightDismissElementHost@@AEAI@Z @ 0x1804D621C (--$MakeAndInitialize@VLightDismissElement@@V1@AEAPEAUILightDismissElementHost@@AEAI@Details@WRL@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CMultitaskingViewElementBase@@QEAA@XZ @ 0x180232E60 (--0CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
LightDismissElement *__fastcall LightDismissElement::LightDismissElement(LightDismissElement *this)
{
  CMultitaskingViewElementBase::CMultitaskingViewElementBase(this);
  *(_QWORD *)this = &CMultitaskingViewButtonElement::`vftable';
  *((_DWORD *)this + 57) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewButtonElement>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &LightDismissElement::`vftable';
  *((_QWORD *)this + 29) = 0LL;
  return this;
}
