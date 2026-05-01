/*
 * XREFs of ?InternalRelease@?$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ @ 0x1804A5DC4
 * Callers:
 *     ??$MakeAndInitialize@VCPPIAllUpViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUITabletModeViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUITabletModeViewManager@@@Z @ 0x1804A552C (--$MakeAndInitialize@VCPPIAllUpViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewMa.c)
 *     ??1?$ComPtr@VCPPIAllUpViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1804A57F4 (--1-$ComPtr@VCPPIAllUpViewHost@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A590C (-CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInterna.c)
 *     ??$MakeAndInitialize@VAccessibleElement@@V1@AEAPEAUIWeakReference@WeakReference@@AEAW4AccessibleElementFlags@@AEAJ@Details@WRL@Microsoft@@YAJPEAPEAVAccessibleElement@@AEAPEAUIWeakReference@WeakReference@@AEAW4AccessibleElementFlags@@AEAJ@Z @ 0x1804CC2F0 (--$MakeAndInitialize@VAccessibleElement@@V1@AEAPEAUIWeakReference@WeakReference@@AEAW4Accessible.c)
 *     ?AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags@@JAEBU_GUID@@PEAPEAX@Z @ 0x1804CC5CC (-AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1804A5E70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$C_ea_1804A5E70.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<IPPIAllUpViewHost>,IExternalDragHost>::Release(v1);
  }
  return result;
}
