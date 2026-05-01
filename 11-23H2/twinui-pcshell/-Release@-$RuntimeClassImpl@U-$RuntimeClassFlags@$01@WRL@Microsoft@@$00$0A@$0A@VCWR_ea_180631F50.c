/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@UIServiceProvider@@UICreatingProcess@@UICreatedProcess@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180631F50
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@UIServiceProvider@@UICreatingProcess@@UICreatedProcess@@VFtmBase@23@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x1802AA560 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_1802AA560.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@UIServiceProvider@@UICreatingProcess@@UICreatedProcess@@VFtmBase@23@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x1802AA580 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_1802AA580.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@UIServiceProvider@@UICreatingProcess@@UICreatedProcess@@VFtmBase@23@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x1802AA5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_1802AA5A0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@UIServiceProvider@@UICreatingProcess@@UICreatedProcess@@VFtmBase@23@@Details@WRL@Microsoft@@WEA@EAAKXZ @ 0x1802AA5C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_1802AA5C0.c)
 *     ?Attach@?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@QEAAXPEAVApplicationContainerActivationPolicy@@@Z @ 0x1806305B8 (-Attach@-$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@QEAAXPEAVApplicationCont.c)
 *     ?InternalRelease@?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x180630DA0 (-InternalRelease@-$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801422FC (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithGITSite,IServiceProvider,ICreatingProcess,ICreatedProcess,Microsoft::WRL::FtmBase>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r11

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 100), a2);
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
