/*
 * XREFs of ??0LightDismissElement@@QEAA@XZ @ 0x18058DD50
 * Callers:
 *     ??$MakeAndInitialize@VLightDismissElement@@V1@AEAPEAUILightDismissElementHost@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVLightDismissElement@@AEAPEAUILightDismissElementHost@@AEAI@Z @ 0x18058DC4C (--$MakeAndInitialize@VLightDismissElement@@V1@AEAPEAUILightDismissElementHost@@AEAI@Details@WRL@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CMultitaskingViewElementBase@@QEAA@XZ @ 0x1802E14A8 (--0CMultitaskingViewElementBase@@QEAA@XZ.c)
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
