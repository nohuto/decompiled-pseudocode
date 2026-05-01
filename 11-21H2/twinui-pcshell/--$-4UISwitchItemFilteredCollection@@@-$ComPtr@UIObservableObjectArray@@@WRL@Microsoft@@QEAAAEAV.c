/*
 * XREFs of ??$?4UISwitchItemFilteredCollection@@@?$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@UISwitchItemFilteredCollection@@@12@@Z @ 0x1804A0E5C
 * Callers:
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@PEAUITouchGestureSettings@@@Z @ 0x1804A1E70 (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 *     ?LoadTabsOnlyPivot@CMultitaskingViewFrame@@UEAAJXZ @ 0x1804B1750 (-LoadTabsOnlyPivot@CMultitaskingViewFrame@@UEAAJXZ.c)
 *     ?LoadWindowsOnlyPivot@CMultitaskingViewFrame@@UEAAJXZ @ 0x1804B1880 (-LoadWindowsOnlyPivot@CMultitaskingViewFrame@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IObservableObjectArray>::operator=<ISwitchItemFilteredCollection>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = *a2;
  v2 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
  v5 = *a1;
  *a1 = v2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  return a1;
}
