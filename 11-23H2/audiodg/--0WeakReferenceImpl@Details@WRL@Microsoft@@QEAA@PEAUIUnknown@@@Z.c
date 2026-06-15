/*
 * XREFs of ??0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z @ 0x14001F708
 * Callers:
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x14001F6CC (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
Microsoft::WRL::Details::WeakReferenceImpl *__fastcall Microsoft::WRL::Details::WeakReferenceImpl::WeakReferenceImpl(
        Microsoft::WRL::Details::WeakReferenceImpl *this,
        struct IUnknown *a2)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IWeakReference>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_DWORD *)this + 4) = 0x3FFFFFFF;
  *(_QWORD *)this = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
  *((_QWORD *)this + 3) = a2;
  *((_DWORD *)this + 3) = 2;
  return this;
}
