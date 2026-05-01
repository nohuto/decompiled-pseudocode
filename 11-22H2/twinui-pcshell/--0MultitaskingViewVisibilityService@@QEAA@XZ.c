/*
 * XREFs of ??0MultitaskingViewVisibilityService@@QEAA@XZ @ 0x180109290
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityService@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x180108B0C (--$MakeAndInitialize@VMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityService@@$$.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800C9020 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CGITRegistrationList@@QEAA@XZ @ 0x180109900 (--0CGITRegistrationList@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
MultitaskingViewVisibilityService *__fastcall MultitaskingViewVisibilityService::MultitaskingViewVisibilityService(
        MultitaskingViewVisibilityService *this)
{
  Microsoft::WRL::FtmBase::FtmBase((MultitaskingViewVisibilityService *)((char *)this + 16));
  *((_DWORD *)this + 13) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityServiceInternal,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityServiceInternal,Microsoft::WRL::FtmBase>::`vftable'{for `IMultitaskingViewVisibilityServiceInternal'};
  *((_QWORD *)this + 2) = &MultitaskingViewVisibilityService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &MultitaskingViewVisibilityService::`vftable';
  *((_QWORD *)this + 1) = &MultitaskingViewVisibilityService::`vftable'{for `IMultitaskingViewVisibilityServiceInternal'};
  *((_QWORD *)this + 2) = &MultitaskingViewVisibilityService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  InitializeSRWLock((PSRWLOCK)this + 7);
  *((_DWORD *)this + 16) = 0;
  CGITRegistrationList::CGITRegistrationList((MultitaskingViewVisibilityService *)((char *)this + 72));
  *((_DWORD *)this + 30) = SHTaskPoolGetUniqueContext();
  return this;
}
