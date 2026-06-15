/*
 * XREFs of ??0CPrivateAPO@@QEAA@XZ @ 0x140014BB4
 * Callers:
 *     _lambda_89f25345d625e50d879fcb99a1803143_::operator() @ 0x140011F68 (_lambda_89f25345d625e50d879fcb99a1803143_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CPrivateAPO *__fastcall CPrivateAPO::CPrivateAPO(CPrivateAPO *this)
{
  *((_QWORD *)this + 3) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CPrivateAPO::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CPrivateAPO::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 5) = 0LL;
  return this;
}
