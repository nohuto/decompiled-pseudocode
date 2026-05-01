/*
 * XREFs of ??0CSnapAssistControllerBase@@QEAA@XZ @ 0x18010B294
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCSnapAssistControllerBase@@@WRL@Microsoft@@QEAA@XZ @ 0x18010B1E0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCSnapAssistControllerBase@@@WRL@Micro.c)
 * Callees:
 *     ??0?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAA@XZ @ 0x18008B3D0 (--0-$deque@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@chrono@.c)
 */

// Hidden C++ exception states: #wind=12
CSnapAssistControllerBase *__fastcall CSnapAssistControllerBase::CSnapAssistControllerBase(
        CSnapAssistControllerBase *this)
{
  *(_QWORD *)this = &CSnapAssistControllerBase::`vftable'{for `ISnapAssistController'};
  *((_QWORD *)this + 1) = &CSnapAssistControllerBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISnapAssistControllerPrivate,ISnapAssistCallback,ITabletModePositionerManagerNotification,Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>'};
  *((_QWORD *)this + 2) = &CSnapAssistControllerBase::`vftable'{for `ISnapAssistCallback'};
  *((_QWORD *)this + 3) = &CSnapAssistControllerBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITabletModePositionerManagerNotification,Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>'};
  *((_QWORD *)this + 4) = &CSnapAssistControllerBase::`vftable'{for `Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2'};
  *((_QWORD *)this + 5) = &CSnapAssistControllerBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 19);
  InitializeSRWLock((PSRWLOCK)this + 20);
  *((_QWORD *)this + 21) = 0LL;
  std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>((_QWORD *)this + 22);
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 1;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 39) = 0LL;
  return this;
}
