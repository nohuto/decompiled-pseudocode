/*
 * XREFs of ??$MakeAndInitialize@VCSnapAssistViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x1804A33A4
 * Callers:
 *     ?CSnapAssistViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A3B3C (-CSnapAssistViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInter.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??0CSnapAssistViewHost@@QEAA@XZ @ 0x1804A36CC (--0CSnapAssistViewHost@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCSnapAssistViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x1804A4328 (-InternalRelease@-$ComPtr@VCSnapAssistViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1804A44E4 (-RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMa.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSnapAssistViewHost,CSnapAssistViewHost,IMultitaskingData * &,IMultitaskingViewManagerInternal * &,IMultitaskingViewVisibilityServiceInternal * &,IImmersiveAppCrusher * &,IApplicationViewCollection * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
        CSnapAssistViewHost **a1,
        struct IMultitaskingData **a2,
        struct IMultitaskingViewManagerInternal **a3,
        struct IMultitaskingViewVisibilityServiceInternal **a4,
        struct IImmersiveAppCrusher **a5,
        __int64 a6,
        struct Windows::Internal::ComposableShell::Tabs::ITabController **a7,
        struct ITabViewManager **a8)
{
  CSnapAssistViewHost *v12; // rax
  int v13; // esi
  CSnapAssistViewHost *v14; // rdi
  volatile int *v15; // rdx
  struct IApplicationViewCollection *v17; // [rsp+28h] [rbp-30h]
  CSnapAssistViewHost *v18; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v12 = (CSnapAssistViewHost *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v12;
  if ( v12 )
  {
    v14 = CSnapAssistViewHost::CSnapAssistViewHost(v12);
    v18 = v14;
    a6 = 0LL;
    v13 = CSnapAssistViewHost::RuntimeClassInitialize(v14, *a2, *a3, *a4, *a5, v17, *a7, *a8);
    if ( v13 >= 0 )
    {
      if ( v14 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((CSnapAssistViewHost *)((char *)v14 + 156), v15);
      *a1 = v14;
      v13 = 0;
    }
    Microsoft::WRL::ComPtr<CSnapAssistViewHost>::InternalRelease(&v18);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
