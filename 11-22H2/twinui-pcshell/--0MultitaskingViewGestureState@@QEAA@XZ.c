/*
 * XREFs of ??0MultitaskingViewGestureState@@QEAA@XZ @ 0x180184C70
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingViewGestureState@@UIMultitaskingViewGestureStateInternal@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewGestureStateInternal@@@Z @ 0x180184AE4 (--$MakeAndInitialize@VMultitaskingViewGestureState@@UIMultitaskingViewGestureStateInternal@@$$V@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800C9020 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

MultitaskingViewGestureState *__fastcall MultitaskingViewGestureState::MultitaskingViewGestureState(
        MultitaskingViewGestureState *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((MultitaskingViewGestureState *)((char *)this + 16));
  *((_DWORD *)this + 13) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewGestureState,IMultitaskingViewGestureStateInternal,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewGestureState,IMultitaskingViewGestureStateInternal,Microsoft::WRL::FtmBase>::`vftable'{for `IMultitaskingViewGestureStateInternal'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewGestureState,IMultitaskingViewGestureStateInternal,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &MultitaskingViewGestureState::`vftable';
  *((_QWORD *)this + 1) = &MultitaskingViewGestureState::`vftable'{for `IMultitaskingViewGestureStateInternal'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewGestureState,IMultitaskingViewGestureStateInternal,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  InitializeSRWLock((PSRWLOCK)this + 7);
  *((_DWORD *)this + 16) = 0;
  return this;
}
