/*
 * XREFs of ??0CEnumerateEntries@@QEAA@XZ @ 0x18002FB98
 * Callers:
 *     ??$MakeAndInitialize@VCEnumerateEntries@@V1@AEAPEAEAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCEnumerateEntries@@AEAPEAEAEAK@Z @ 0x18002FAE0 (--$MakeAndInitialize@VCEnumerateEntries@@V1@AEAPEAEAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCEnumer.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CEnumerateEntries *__fastcall CEnumerateEntries::CEnumerateEntries(CEnumerateEntries *this)
{
  *(_QWORD *)this = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KnownGameList::IEnumerateEntries>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CEnumerateEntries::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  return this;
}
