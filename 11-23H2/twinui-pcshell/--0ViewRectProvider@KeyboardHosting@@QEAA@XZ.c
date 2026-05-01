/*
 * XREFs of ??0ViewRectProvider@KeyboardHosting@@QEAA@XZ @ 0x1800A9C1C
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x1800AACDC (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataPro.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

KeyboardHosting::ViewRectProvider *__fastcall KeyboardHosting::ViewRectProvider::ViewRectProvider(
        KeyboardHosting::ViewRectProvider *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KeyboardHosting::IViewRectProvider>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &KeyboardHosting::ViewRectProvider::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_DWORD *)this + 14) = 100;
  *(_OWORD *)((char *)this + 60) = 0LL;
  *(_OWORD *)((char *)this + 76) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *(_OWORD *)((char *)this + 104) = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  *((_DWORD *)this + 34) = 100;
  *(_OWORD *)((char *)this + 140) = 0LL;
  *(_OWORD *)((char *)this + 156) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *(_OWORD *)((char *)this + 184) = 0LL;
  *(_OWORD *)((char *)this + 200) = 0LL;
  *((_DWORD *)this + 54) = 100;
  *(_OWORD *)((char *)this + 220) = 0LL;
  *(_OWORD *)((char *)this + 236) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  return this;
}
