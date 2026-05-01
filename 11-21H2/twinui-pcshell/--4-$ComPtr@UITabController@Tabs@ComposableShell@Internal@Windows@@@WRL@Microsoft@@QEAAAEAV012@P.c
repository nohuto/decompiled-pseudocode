/*
 * XREFs of ??4?$ComPtr@UITabController@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180116AD0
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x180117EF8 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?RuntimeClassInitialize@CAltTabViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1804ADA80 (-RuntimeClassInitialize@CAltTabViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMulti.c)
 *     ?RuntimeClassInitialize@CSnapAssistViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1804B4600 (-RuntimeClassInitialize@CSnapAssistViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIM.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::ITabController>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = *a1;
    }
    v6 = v4;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v6);
  }
  return a1;
}
