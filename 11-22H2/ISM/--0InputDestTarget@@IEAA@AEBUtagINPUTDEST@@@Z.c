/*
 * XREFs of ??0InputDestTarget@@IEAA@AEBUtagINPUTDEST@@@Z @ 0x1800415BC
 * Callers:
 *     ??$Make@VInputDestTarget@@AEBUtagINPUTDEST@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputDestTarget@@@12@AEBUtagINPUTDEST@@@Z @ 0x180041534 (--$Make@VInputDestTarget@@AEBUtagINPUTDEST@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VInputDestTarg.c)
 * Callees:
 *     ?GetInputSiteFromInputDest@InputDestTarget@@AEBA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBUtagINPUTDEST@@@Z @ 0x180041664 (-GetInputSiteFromInputDest@InputDestTarget@@AEBA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@AEBUtagI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
InputDestTarget *__fastcall InputDestTarget::InputDestTarget(InputDestTarget *this, const struct tagINPUTDEST *a2)
{
  struct Microsoft::WRL::Details::ModuleBase *v4; // rcx

  *((_DWORD *)this + 7) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget,IInputDestComparable,IInputSiteTarget>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget,IInputDestComparable,IInputSiteTarget>::`vftable'{for `IInputDestComparable'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget,IInputDestComparable,IInputSiteTarget>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputSiteTarget>'};
  v4 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &InputDestTarget::`vftable';
  *((_QWORD *)this + 1) = &InputDestTarget::`vftable'{for `IInputDestComparable'};
  *((_QWORD *)this + 2) = &InputDestTarget::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputSiteTarget>'};
  *((_OWORD *)this + 2) = *(_OWORD *)((char *)a2 + 40);
  *((_OWORD *)this + 3) = *(_OWORD *)((char *)a2 + 56);
  *((_QWORD *)this + 8) = *((_QWORD *)a2 + 9);
  InputDestTarget::GetInputSiteFromInputDest(v4, (char *)this + 72, a2);
  return this;
}
