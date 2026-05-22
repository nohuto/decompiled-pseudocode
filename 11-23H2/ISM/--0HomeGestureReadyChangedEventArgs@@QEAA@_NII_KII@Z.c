/*
 * XREFs of ??0HomeGestureReadyChangedEventArgs@@QEAA@_NII_KII@Z @ 0x1801778F8
 * Callers:
 *     ??$Make@VHomeGestureReadyChangedEventArgs@@AEA_NAEAIAEAIAEA_KAEAIAEAI@Details@WRL@Microsoft@@YA?AV?$ComPtr@VHomeGestureReadyChangedEventArgs@@@12@AEA_NAEAI1AEA_K11@Z @ 0x1801770C0 (--$Make@VHomeGestureReadyChangedEventArgs@@AEA_NAEAIAEAIAEA_KAEAIAEAI@Details@WRL@Microsoft@@YA-.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HomeGestureReadyChangedEventArgs *__fastcall HomeGestureReadyChangedEventArgs::HomeGestureReadyChangedEventArgs(
        HomeGestureReadyChangedEventArgs *this,
        char a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  *((_QWORD *)this + 3) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::Internal::Input::MPCManager::IHomeGestureReadyChangedEventArgs>::`vftable'{for `Windows::Internal::Input::MPCManager::IHomeGestureReadyChangedEventArgs'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::Internal::Input::MPCManager::IHomeGestureReadyChangedEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &HomeGestureReadyChangedEventArgs::`vftable'{for `Windows::Internal::Input::MPCManager::IHomeGestureReadyChangedEventArgs'};
  *((_QWORD *)this + 1) = &HomeGestureReadyChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  *((_BYTE *)this + 32) = a2;
  *((_DWORD *)this + 9) = a3;
  *((_DWORD *)this + 10) = a4;
  *((_QWORD *)this + 6) = a5;
  *((_DWORD *)this + 14) = a6;
  *((_DWORD *)this + 15) = a7;
  return this;
}
