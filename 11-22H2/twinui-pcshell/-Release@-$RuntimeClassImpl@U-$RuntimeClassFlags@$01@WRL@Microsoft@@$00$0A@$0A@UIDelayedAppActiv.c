/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180549E80
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIExecuteCommand@@UIObjectWithSelection@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1802A3290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_1802A3290.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIExecuteCommand@@UIObjectWithSelection@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1802A32B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_1802A32B0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILaunchUIContext@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1802A5400 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILaunchUIContext.c)
 *     ??$Make@VLaunchUIContext@?CP@??GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z@PEAU5678@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VLaunchUIContext@?CP@??GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z@@12@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18059EE70 (--$Make@VLaunchUIContext@-CP@--GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknow.c)
 *     ??1?$ComPtr@VLaunchUIContext@?CP@??GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z@@WRL@Microsoft@@QEAA@XZ @ 0x18059F508 (--1-$ComPtr@VLaunchUIContext@-CP@--GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUn.c)
 *     ?Attach@?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAAXPEAVCDelayedTileActivation@@@Z @ 0x18059FC00 (-Attach@-$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAAXPEAVCDelayedTileActivation@@@Z.c)
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1805A0254 (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@IEAAKXZ @ 0x1805A0808 (-InternalRelease@-$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801422FC (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r11

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 44), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
