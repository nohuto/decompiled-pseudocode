/*
 * XREFs of ??0CSnapAssistViewController@@QEAA@XZ @ 0x1804B3D3C
 * Callers:
 *     ??$MakeAndInitialize@VCSnapAssistViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x1804B3B80 (--$MakeAndInitialize@VCSnapAssistViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAU.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CMultitaskingViewControllerBase@@QEAA@XZ @ 0x1804AD55C (--0CMultitaskingViewControllerBase@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CSnapAssistViewController *__fastcall CSnapAssistViewController::CSnapAssistViewController(
        CSnapAssistViewController *this)
{
  __int64 v2; // rcx

  CMultitaskingViewControllerBase::CMultitaskingViewControllerBase(this);
  *(_DWORD *)(v2 + 140) = 1;
  *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase,ISnapAssistViewController>::`vftable'{for `IMultitaskingViewController'};
  *(_QWORD *)(v2 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase,ISnapAssistViewController>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>'};
  *(_QWORD *)(v2 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase,ISnapAssistViewController>::`vftable'{for `ISwitchItemController'};
  *(_QWORD *)(v2 + 24) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase,ISnapAssistViewController>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDismissAnimationController>'};
  *(_QWORD *)(v2 + 128) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase,ISnapAssistViewController>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CSnapAssistViewController::`vftable'{for `IMultitaskingViewController'};
  *((_QWORD *)this + 1) = &CSnapAssistViewController::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>'};
  *((_QWORD *)this + 2) = &CSnapAssistViewController::`vftable'{for `ISwitchItemController'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase,ISnapAssistViewController>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDismissAnimationController>'};
  *((_QWORD *)this + 16) = &CSnapAssistViewController::`vftable';
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_BYTE *)this + 176) = 0;
  return this;
}
