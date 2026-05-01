/*
 * XREFs of ??0CSnapAssistViewHost@@QEAA@XZ @ 0x1804A36CC
 * Callers:
 *     ??$MakeAndInitialize@VCSnapAssistViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x1804A33A4 (--$MakeAndInitialize@VCSnapAssistViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingView.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@QEAA@XZ @ 0x1804A3628 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UISnapAss.c)
 */

CSnapAssistViewHost *__fastcall CSnapAssistViewHost::CSnapAssistViewHost(CSnapAssistViewHost *this)
{
  CSnapAssistViewHost *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<ISnapAssistViewHost>,IInvocationAnimationHost,IAnimatedDismissableHost,IDismissalAnimationHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<ISnapAssistViewHost>,IInvocationAnimationHost,IAnimatedDismissableHost,IDismissalAnimationHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>((__int64)this);
  *(_QWORD *)this = &CSnapAssistViewHost::`vftable'{for `Microsoft::WRL::ChainInterfaces<ISnapAssistViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &CSnapAssistViewHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>'};
  *((_QWORD *)this + 15) = &CSnapAssistViewHost::`vftable'{for `IInvocationAnimationHost'};
  *((_QWORD *)this + 16) = &CSnapAssistViewHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAnimatedDismissableHost,IDismissalAnimationHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>'};
  *((_QWORD *)this + 17) = &CSnapAssistViewHost::`vftable'{for `IDismissalAnimationHost'};
  *((_QWORD *)this + 18) = &CSnapAssistViewHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>'};
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = (char *)this + 144;
  result = this;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 18) = 4;
  return result;
}
