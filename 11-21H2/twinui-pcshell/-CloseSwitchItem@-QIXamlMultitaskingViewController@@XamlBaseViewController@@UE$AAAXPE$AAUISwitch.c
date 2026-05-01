/*
 * XREFs of ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180447CD4
 * Callers:
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180202A80 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwitc.c)
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18060E8A0 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwit.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180060018 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_627ca650139ebb5d52b223146a6c93f1_::operator() @ 0x180447B68 (_lambda_627ca650139ebb5d52b223146a6c93f1_--operator().c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall _CloseSwitchItem__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v3 = __abi_winrt_ptr_ctor(a2);
  v6 = __abi_winrt_ptr_ctor(v3);
  v7 = __abi_winrt_ptr_ctor(a1);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::GetImpl'::`2'::impl,
    1u,
    3u,
    v4);
  result = lambda_627ca650139ebb5d52b223146a6c93f1_::operator()(&v6);
  if ( v7 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v6 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
