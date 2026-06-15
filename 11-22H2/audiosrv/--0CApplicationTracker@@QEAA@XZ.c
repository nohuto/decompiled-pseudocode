/*
 * XREFs of ??0CApplicationTracker@@QEAA@XZ @ 0x180047340
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationTracker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800472B0 (--$MakeAndInitialize@VCApplicationTracker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CApplicationTracker *__fastcall CApplicationTracker::CApplicationTracker(CApplicationTracker *this)
{
  *((_DWORD *)this + 7) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationTracker,IHostedApplicationTracker,IFastRundown>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationTracker,IHostedApplicationTracker,IFastRundown>::`vftable'{for `IHostedApplicationTracker'};
  *((_QWORD *)this + 2) = &CApplicationTracker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFastRundown>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CApplicationTracker::`vftable';
  *((_QWORD *)this + 1) = &CApplicationTracker::`vftable'{for `IHostedApplicationTracker'};
  *((_QWORD *)this + 2) = &CApplicationTracker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFastRundown>'};
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
