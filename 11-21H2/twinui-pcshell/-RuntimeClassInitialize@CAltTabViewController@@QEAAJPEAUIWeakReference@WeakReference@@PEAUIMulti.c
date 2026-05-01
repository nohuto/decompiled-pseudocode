/*
 * XREFs of ?RuntimeClassInitialize@CAltTabViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1804ADA80
 * Callers:
 *     ??$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x1804AD3A0 (--$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMul.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UITabViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabViewManager@@@Z @ 0x1800A255C (--4-$ComPtr@UITabViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabViewManager@@@Z.c)
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x1800FE5EC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 *     ??4?$ComPtr@UIApplicationViewSwitcher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewSwitcher@@@Z @ 0x18011679C (--4-$ComPtr@UIApplicationViewSwitcher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewSwitcher@.c)
 *     ??4?$ComPtr@UIImmersiveAppCrusher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveAppCrusher@@@Z @ 0x1801167EC (--4-$ComPtr@UIImmersiveAppCrusher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveAppCrusher@@@Z.c)
 *     ??4?$ComPtr@UITabController@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180116AD0 (--4-$ComPtr@UITabController@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWeakReference@WeakReference@@@Z @ 0x1804A3094 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWeakReference@WeakRe.c)
 *     ??$As@UIMultitaskingViewForegroundStaging@@@?$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewForegroundStaging@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804AD2A4 (--$As@UIMultitaskingViewForegroundStaging@@@-$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Mic.c)
 *     ??4?$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewManagerInternal@@@Z @ 0x1804AD628 (--4-$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingView.c)
 */

__int64 __fastcall CAltTabViewController::RuntimeClassInitialize(
        CAltTabViewController *this,
        struct IWeakReference *a2,
        struct IMultitaskingViewManagerInternal *a3,
        struct IApplicationViewSwitcher *a4,
        struct IImmersiveAppCrusher *a5,
        struct IApplicationViewCollection *a6,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a7,
        struct ITabViewManager *a8)
{
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)this + 5, (__int64)a2);
  Microsoft::WRL::ComPtr<IApplicationViewSwitcher>::operator=((__int64 *)this + 6, (__int64)a4);
  Microsoft::WRL::ComPtr<IImmersiveAppCrusher>::operator=((__int64 *)this + 7, (__int64)a5);
  Microsoft::WRL::ComPtr<IMultitaskingViewManagerInternal>::operator=((__int64 *)this + 17, (__int64)a3);
  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((__int64 *)this + 12, (__int64)a6);
  Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::ITabController>::operator=(
    (__int64 *)this + 10,
    (__int64)a7);
  Microsoft::WRL::ComPtr<ITabViewManager>::operator=((__int64 *)this + 11, (__int64)a8);
  v11 = Microsoft::WRL::ComPtr<IMultitaskingViewManagerInternal>::As<IMultitaskingViewForegroundStaging>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 17,
          (__int64 *)this + 18);
  v12 = v11;
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewcontroller.cpp",
      (const char *)(unsigned int)v11);
  return v12;
}
