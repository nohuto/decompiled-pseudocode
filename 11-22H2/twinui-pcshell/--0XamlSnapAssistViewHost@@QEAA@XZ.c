/*
 * XREFs of ??0XamlSnapAssistViewHost@@QEAA@XZ @ 0x18076A17C
 * Callers:
 *     ??$MakeAndInitialize@VXamlSnapAssistViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlSnapAssistViewHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x180769150 (--$MakeAndInitialize@VXamlSnapAssistViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Mi.c)
 * Callees:
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180762020 (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflect_ea_180762020.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlSnapAssistViewHostInternal@@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@ABI@@U5@UIImmersiveMonitorNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@QEAA@XZ @ 0x180769A2C (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UISnapAss.c)
 */

XamlSnapAssistViewHost *__fastcall XamlSnapAssistViewHost::XamlSnapAssistViewHost(XamlSnapAssistViewHost *this)
{
  XamlSnapAssistViewHost *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CMultitaskingViewHostBase<ISnapAssistViewHost>,IXamlSnapAssistViewHostInternal,ABI::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost,IXamlSnapAssistViewHostInternal,IImmersiveMonitorNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CMultitaskingViewHostBase<ISnapAssistViewHost>,IXamlSnapAssistViewHostInternal,ABI::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost,IXamlSnapAssistViewHostInternal,IImmersiveMonitorNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>((__int64)this);
  *(_QWORD *)this = &XamlSnapAssistViewHost::`vftable';
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 1) = &XamlSnapAssistViewHost::`vftable'{for `Microsoft::WRL::ChainInterfaces<ISnapAssistViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 2) = &XamlSnapAssistViewHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>'};
  *((_QWORD *)this + 16) = &XamlSnapAssistViewHost::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 17) = &XamlSnapAssistViewHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IXamlSnapAssistViewHostInternal,ABI::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost,IXamlSnapAssistViewHostInternal,IImmersiveMonitorNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>'};
  *((_QWORD *)this + 18) = &XamlSnapAssistViewHost::`vftable'{for `ABI::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost'};
  *((_QWORD *)this + 19) = &XamlSnapAssistViewHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IXamlSnapAssistViewHostInternal,IImmersiveMonitorNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>'};
  *((_QWORD *)this + 20) = &XamlSnapAssistViewHost::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 21) = &XamlSnapAssistViewHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>'};
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_BYTE *)this + 304) = 0;
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (XamlSnapAssistViewHost *)((char *)this + 312),
    (__int64)"ShowSnapAssist");
  *((_QWORD *)this + 39) = &XamlSwitcherTelemetry::ShowSnapAssist::`vftable';
  *((_QWORD *)this + 79) = 0LL;
  result = this;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 81) = ((unsigned __int64)this + 168) & -(__int64)(this != 0LL);
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_DWORD *)this + 20) = 4;
  return result;
}
