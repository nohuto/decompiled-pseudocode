/*
 * XREFs of ?RuntimeClassInitialize@CPPIAllUpViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUITabletModeViewManager@@@Z @ 0x1804B5B34
 * Callers:
 *     ??$MakeAndInitialize@VCPPIAllUpViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabletModeViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabletModeViewManager@@@Z @ 0x1804B580C (--$MakeAndInitialize@VCPPIAllUpViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIM.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationViewSwitcher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewSwitcher@@@Z @ 0x18011679C (--4-$ComPtr@UIApplicationViewSwitcher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewSwitcher@.c)
 *     ??4?$ComPtr@UIImmersiveAppCrusher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveAppCrusher@@@Z @ 0x1801167EC (--4-$ComPtr@UIImmersiveAppCrusher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveAppCrusher@@@Z.c)
 *     ??4?$ComPtr@UITabletModeViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabletModeViewManager@@@Z @ 0x180116918 (--4-$ComPtr@UITabletModeViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabletModeViewManager@@@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWeakReference@WeakReference@@@Z @ 0x1804A3094 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWeakReference@WeakRe.c)
 *     ??4?$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewManagerInternal@@@Z @ 0x1804AD628 (--4-$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingView.c)
 */

__int64 __fastcall CPPIAllUpViewController::RuntimeClassInitialize(
        CPPIAllUpViewController *this,
        struct IWeakReference *a2,
        struct IMultitaskingViewManagerInternal *a3,
        struct IApplicationViewSwitcher *a4,
        struct IImmersiveAppCrusher *a5,
        struct ITabletModeViewManager *a6)
{
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)this + 5, (__int64)a2);
  Microsoft::WRL::ComPtr<IApplicationViewSwitcher>::operator=((__int64 *)this + 6, (__int64)a4);
  Microsoft::WRL::ComPtr<IImmersiveAppCrusher>::operator=((__int64 *)this + 7, (__int64)a5);
  Microsoft::WRL::ComPtr<IMultitaskingViewManagerInternal>::operator=((__int64 *)this + 17, (__int64)a3);
  Microsoft::WRL::ComPtr<ITabletModeViewManager>::operator=((__int64 *)this + 8, (__int64)a6);
  return 0LL;
}
