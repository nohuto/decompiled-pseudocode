/*
 * XREFs of ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x18056FF28
 * Callers:
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18056FD5C (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1805BA7B0 (-ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1805BD330 (-InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180116ABC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall IsPeopleExperienceHostView(struct IApplicationView *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  int (__fastcall *v6)(struct IApplicationView *, LPCWCH *); // rbx
  LPCWCH lpString1; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v5 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PeopleBar>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  lpString1 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v6 = *(int (__fastcall **)(struct IApplicationView *, LPCWCH *))(*(_QWORD *)a1 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
  v9 = -1LL;
  v10 = -1LL;
  if ( v6(a1, &lpString1) < 0
    || CompareStringOrdinal(lpString1, -1, L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App", -1, 1) != 2
    && CompareStringOrdinal(lpString1, -1, L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App", -1, 1) != 2 )
  {
    v5 = 0;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
  return v5;
}
