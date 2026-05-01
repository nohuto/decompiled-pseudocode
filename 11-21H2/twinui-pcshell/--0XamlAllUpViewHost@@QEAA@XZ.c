/*
 * XREFs of ??0XamlAllUpViewHost@@QEAA@XZ @ 0x18042E300
 * Callers:
 *     ??$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18042B9D8 (--$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknow.c)
 * Callees:
 *     ??0ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ @ 0x180016F54 (--0ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@QEAA@XZ @ 0x180017854 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIAllUpVi.c)
 */

XamlAllUpViewHost *__fastcall XamlAllUpViewHost::XamlAllUpViewHost(XamlAllUpViewHost *this)
{
  XamlAllUpViewHost *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAllUpViewHost>,IAllUpViewHostInternal,ITabletModeChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAllUpViewHost>,IAllUpViewHostInternal,ITabletModeChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>((__int64)this);
  *((_QWORD *)this + 19) = 0LL;
  *(_QWORD *)this = &XamlAllUpViewHost::`vftable'{for `Microsoft::WRL::ChainInterfaces<IAllUpViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 1) = &XamlAllUpViewHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>'};
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 15) = &XamlAllUpViewHost::`vftable';
  *((_QWORD *)this + 16) = &XamlAllUpViewHost::`vftable'{for `ITabletModeChangeListener'};
  *((_QWORD *)this + 17) = &XamlAllUpViewHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>'};
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 37) = (char *)this + 128;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 39) = (char *)this + 136;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  XamlSwitcherTelemetry::ShowXamlTaskView::ShowXamlTaskView((XamlAllUpViewHost *)((char *)this + 368));
  *((_OWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  result = this;
  *((_DWORD *)this + 178) = 0;
  *((_BYTE *)this + 716) = 0;
  *((_DWORD *)this + 180) = 0;
  *((_DWORD *)this + 18) = 2;
  return result;
}
