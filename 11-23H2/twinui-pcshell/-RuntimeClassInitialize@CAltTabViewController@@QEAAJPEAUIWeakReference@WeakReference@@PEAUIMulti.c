/*
 * XREFs of ?RuntimeClassInitialize@CAltTabViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUIUnknown@@@Z @ 0x18056A4DC
 * Callers:
 *     ??$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@$$T$$T@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@$$QEA$$T6@Z @ 0x180569E30 (--$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMul.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIApplicationViewSwitcher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewSwitcher@@@Z @ 0x180139AE0 (--4-$ComPtr@UIApplicationViewSwitcher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewSwitcher@.c)
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x18013A7FC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 *     ??4?$ComPtr@UIImmersiveAppCrusher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveAppCrusher@@@Z @ 0x18013AD10 (--4-$ComPtr@UIImmersiveAppCrusher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveAppCrusher@@@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWeakReference@WeakReference@@@Z @ 0x1805628C0 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWeakReference@WeakRe.c)
 *     ??$As@UIMultitaskingViewForegroundStaging@@@?$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewForegroundStaging@@@WRL@Microsoft@@@Details@12@@Z @ 0x180569D34 (--$As@UIMultitaskingViewForegroundStaging@@@-$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Mic.c)
 *     ??4?$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewManagerInternal@@@Z @ 0x18056A090 (--4-$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingView.c)
 */

__int64 __fastcall CAltTabViewController::RuntimeClassInitialize(
        CAltTabViewController *this,
        struct IWeakReference *a2,
        struct IMultitaskingViewManagerInternal *a3,
        struct IApplicationViewSwitcher *a4,
        struct IImmersiveAppCrusher *a5,
        struct IApplicationViewCollection *a6)
{
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)this + 5, (__int64)a2);
  Microsoft::WRL::ComPtr<IApplicationViewSwitcher>::operator=((__int64 *)this + 6, (__int64)a4);
  Microsoft::WRL::ComPtr<IImmersiveAppCrusher>::operator=((__int64 *)this + 7, (__int64)a5);
  Microsoft::WRL::ComPtr<IMultitaskingViewManagerInternal>::operator=((__int64 *)this + 16, (__int64)a3);
  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((__int64 *)this + 11, (__int64)a6);
  v9 = Microsoft::WRL::ComPtr<IMultitaskingViewManagerInternal>::As<IMultitaskingViewForegroundStaging>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 16,
         (__int64 *)this + 17);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewcontroller.cpp",
      (const char *)(unsigned int)v9);
  return v10;
}
