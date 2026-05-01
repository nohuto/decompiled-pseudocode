/*
 * XREFs of ??$MakeAndInitialize@VCPPIAllUpViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUITabletModeViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUITabletModeViewManager@@@Z @ 0x180562AF8
 * Callers:
 *     ?CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x180562F7C (-CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInterna.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??0CPPIAllUpViewHost@@QEAA@XZ @ 0x180562DF8 (--0CPPIAllUpViewHost@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ @ 0x180563414 (-InternalRelease@-$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@@Z @ 0x180563620 (-RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMana.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPPIAllUpViewHost,CPPIAllUpViewHost,IMultitaskingData * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,IMultitaskingViewVisibilityServiceInternal * &,ITabletModeViewManager * &>(
        CPPIAllUpViewHost **a1,
        struct IMultitaskingData **a2,
        struct IMultitaskingViewManagerInternal **a3,
        struct IApplicationViewSwitcher **a4,
        struct IImmersiveAppCrusher **a5,
        struct IMultitaskingViewVisibilityServiceInternal **a6,
        struct ITabletModeViewManager **a7)
{
  CPPIAllUpViewHost *v11; // rax
  int v12; // esi
  CPPIAllUpViewHost *v13; // rdi
  volatile int *v14; // rdx
  CPPIAllUpViewHost *v16; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (CPPIAllUpViewHost *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v11;
  if ( v11 )
  {
    v13 = CPPIAllUpViewHost::CPPIAllUpViewHost(v11);
    v16 = v13;
    v12 = CPPIAllUpViewHost::RuntimeClassInitialize(v13, *a2, *a3, *a4, *a5, *a6, *a7);
    if ( v12 >= 0 )
    {
      if ( v13 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((CPPIAllUpViewHost *)((char *)v13 + 132), v14);
      *a1 = v13;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease(&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
