/*
 * XREFs of ??0CPPIAllUpViewService@@QEAA@XZ @ 0x180102BD8
 * Callers:
 *     ??$MakeAndInitialize@VCPPIAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x1801036C0 (--$MakeAndInitialize@VCPPIAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@W.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CPPIAllUpViewService *__fastcall CPPIAllUpViewService::CPPIAllUpViewService(CPPIAllUpViewService *this)
{
  *(_QWORD *)this = &CPinnedList::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IPPIAllUpViewService,IPPIAllUpViewInvoker>::`vftable';
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IPPIAllUpViewService,IPPIAllUpViewInvoker>::`vftable'{for `IPPIAllUpViewService'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IPPIAllUpViewService,IPPIAllUpViewInvoker>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPPIAllUpViewInvoker>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CPPIAllUpViewService::`vftable';
  *((_QWORD *)this + 3) = &CPPIAllUpViewService::`vftable'{for `IPPIAllUpViewService'};
  *((_QWORD *)this + 4) = &CPPIAllUpViewService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPPIAllUpViewInvoker>'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
