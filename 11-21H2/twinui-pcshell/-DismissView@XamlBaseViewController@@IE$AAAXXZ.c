/*
 * XREFs of ?DismissView@XamlBaseViewController@@IE$AAAXXZ @ 0x180447DD4
 * Callers:
 *     ?HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180443CB4 (-HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@Composabl.c)
 *     ?ActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z @ 0x180447CA8 (-ActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAXPE$AAV.c)
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAX_N_K@Z @ 0x180447ED8 (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$.c)
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAXXZ @ 0x18044809C (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAXXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180060018 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_84429cdf929064e299b144c114ce1e9e_::operator() @ 0x180447C0C (_lambda_84429cdf929064e299b144c114ce1e9e_--operator().c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlBaseViewController::DismissView(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v2 = __abi_winrt_ptr_ctor(a1);
  v5 = __abi_winrt_ptr_ctor(a1);
  v6 = __abi_winrt_ptr_ctor(v2);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::GetImpl'::`2'::impl,
    1u,
    3u,
    v3);
  result = lambda_84429cdf929064e299b144c114ce1e9e_::operator()((__int64)&v5);
  if ( v6 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v5 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
