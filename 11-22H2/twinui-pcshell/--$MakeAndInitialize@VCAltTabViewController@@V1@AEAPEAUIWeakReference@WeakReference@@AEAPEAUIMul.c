/*
 * XREFs of ??$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@$$T$$T@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@$$QEA$$T6@Z @ 0x180569E30
 * Callers:
 *     ?CAltTabViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18056A18C (-CAltTabViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingVie.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CAltTabViewController@@QEAA@XZ @ 0x180569FB8 (--0CAltTabViewController@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ @ 0x18056A2B0 (-InternalRelease@-$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CAltTabViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUIUnknown@@@Z @ 0x18056A4DC (-RuntimeClassInitialize@CAltTabViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMulti.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAltTabViewController,CAltTabViewController,WeakReference::IWeakReference * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,IApplicationViewCollection * &,std::nullptr_t,std::nullptr_t>(
        CAltTabViewController **a1,
        struct IWeakReference **a2,
        struct IMultitaskingViewManagerInternal **a3,
        struct IApplicationViewSwitcher **a4,
        struct IImmersiveAppCrusher **a5,
        struct IApplicationViewCollection **a6)
{
  CAltTabViewController *v10; // rax
  int v11; // ebx
  CAltTabViewController *v12; // rdi
  struct IApplicationViewSwitcher *v13; // r9
  struct IMultitaskingViewManagerInternal *v14; // r8
  volatile int *v15; // rdx
  struct Windows::Internal::ComposableShell::Tabs::ITabController *v17; // [rsp+30h] [rbp-28h]
  struct IUnknown *v18; // [rsp+38h] [rbp-20h]
  CAltTabViewController *v19; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CAltTabViewController *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = CAltTabViewController::CAltTabViewController(v10);
    v13 = *a4;
    v14 = *a3;
    v19 = v12;
    v11 = CAltTabViewController::RuntimeClassInitialize(v12, *a2, v14, v13, *a5, *a6, v17, v18);
    if ( v11 >= 0 )
    {
      if ( v12 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((CAltTabViewController *)((char *)v12 + 124), v15);
      *a1 = v12;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<CAltTabViewController>::InternalRelease(&v19);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
