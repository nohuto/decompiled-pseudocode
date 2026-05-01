/*
 * XREFs of ??0CAltTabViewController@@QEAA@XZ @ 0x180569FB8
 * Callers:
 *     ??$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@$$T$$T@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@$$QEA$$T6@Z @ 0x180569E30 (--$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMul.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@@WRL@Microsoft@@QEAA@XZ @ 0x180569EF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@@WRL.c)
 */

CAltTabViewController *__fastcall CAltTabViewController::CAltTabViewController(CAltTabViewController *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase>((__int64)this);
  *(_QWORD *)this = &CAltTabViewController::`vftable'{for `IMultitaskingViewController'};
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 1) = &CAltTabViewController::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>'};
  *((_QWORD *)this + 2) = &CAltTabViewController::`vftable'{for `ISwitchItemController'};
  *((_QWORD *)this + 3) = &CPPIAllUpViewController::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDismissAnimationController>'};
  return this;
}
