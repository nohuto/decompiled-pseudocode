/*
 * XREFs of ??$MakeAndInitialize@VCSnapAssistViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x1804B3B80
 * Callers:
 *     ?CSnapAssistViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B40BC (-CSnapAssistViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskin.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??0CSnapAssistViewController@@QEAA@XZ @ 0x1804B3D3C (--0CSnapAssistViewController@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCSnapAssistViewController@@@WRL@Microsoft@@IEAAKXZ @ 0x1804B4258 (-InternalRelease@-$ComPtr@VCSnapAssistViewController@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CSnapAssistViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1804B4600 (-RuntimeClassInitialize@CSnapAssistViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIM.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSnapAssistViewController,CSnapAssistViewController,WeakReference::IWeakReference * &,IMultitaskingViewManager * &,IImmersiveAppCrusher * &,IApplicationViewCollection * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
        CSnapAssistViewController **a1,
        struct IWeakReference **a2,
        struct IMultitaskingViewManager **a3,
        struct IImmersiveAppCrusher **a4,
        struct IApplicationViewCollection **a5,
        struct Windows::Internal::ComposableShell::Tabs::ITabController **a6,
        struct ITabViewManager **a7)
{
  CSnapAssistViewController *v11; // rax
  int v12; // esi
  CSnapAssistViewController *v13; // rdi
  volatile int *v14; // rdx
  CSnapAssistViewController *v16; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (CSnapAssistViewController *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v11;
  if ( v11 )
  {
    v13 = CSnapAssistViewController::CSnapAssistViewController(v11);
    v16 = v13;
    v12 = CSnapAssistViewController::RuntimeClassInitialize(v13, *a2, *a3, *a4, *a5, *a6, *a7);
    if ( v12 >= 0 )
    {
      if ( v13 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((CSnapAssistViewController *)((char *)v13 + 140), v14);
      *a1 = v13;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<CSnapAssistViewController>::InternalRelease(&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
