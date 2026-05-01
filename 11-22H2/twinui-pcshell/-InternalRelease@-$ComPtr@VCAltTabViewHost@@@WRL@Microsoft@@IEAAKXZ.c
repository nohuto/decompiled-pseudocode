/*
 * XREFs of ?InternalRelease@?$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x1802E050C
 * Callers:
 *     ??$MakeAndInitialize@VCAltTabViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIMultitaskingViewGestureState@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIUnknown@@AEAPEAUITouchGestureSettings@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIMultitaskingViewGestureState@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIUnknown@@AEAPEAUITouchGestureSettings@@@Z @ 0x180560968 (--$MakeAndInitialize@VCAltTabViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewMana.c)
 *     ??1?$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x180560DF0 (--1-$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUIUnknown@@PEAUITouchGestureSettings@@AEBU_GUID@@PEAPEAX@Z @ 0x180561000 (-CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@.c)
 *     ??$MakeAndInitialize@VXamlAltTabViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlAltTabViewHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x180761AC8 (--$MakeAndInitialize@VXamlAltTabViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Micros.c)
 *     ??$MakeAndInitializeOrThrow@VXamlAltTabViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x180761B90 (--$MakeAndInitializeOrThrow@VXamlAltTabViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA-AV-$Co.c)
 *     ?XamlAltTabViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x180766BFC (-XamlAltTabViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIAltTabViewHostInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802E05C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$C_ea_1802E05C0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<IAltTabViewHost>,IAltTabViewHostInternal>::Release(v1);
  }
  return result;
}
