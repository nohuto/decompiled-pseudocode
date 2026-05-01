/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperienceManagerFactory@@UICompositeExperienceManagerFactory@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180140D70
 * Callers:
 *     ??$MakeAndInitialize@VJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18017425C (--$MakeAndInitialize@VJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@VMultitaskingViewGestureState@@UIMultitaskingViewGestureStateInternal@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewGestureStateInternal@@@Z @ 0x180184AE4 (--$MakeAndInitialize@VMultitaskingViewGestureState@@UIMultitaskingViewGestureStateInternal@@$$V@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperienceManagerFactory@@UICompositeExperienceManagerFactory@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180298260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIn_ea_180298260.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureState@@UIMultitaskingViewGestureStateInternal@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180298280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMu_ea_180298280.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801422FC (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IIndividualExperienceManagerFactory,ICompositeExperienceManagerFactory,Microsoft::WRL::FtmBase>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r11

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 52), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
