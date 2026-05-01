/*
 * XREFs of ?HandleTaskGroupSwitchItemRemoved@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x18078E97C
 * Callers:
 *     ?OnTaskGroupsSwitchItemCollectionChanged@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUISwitchItemCollectionChangedEventArgs@34567@@Z @ 0x18078ED9C (-OnTaskGroupsSwitchItemCollectionChanged@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItemDataSourc.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$as@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18078DCE0 (--$as@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Utype@-$abi@UIUnknown@Foun.c)
 *     ??$as@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18078DD48 (--$as@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@Utype@-$abi@UIUnknow.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppViewDataSourceAdapter::HandleTaskGroupSwitchItemRemoved(
        AppViewDataSourceAdapter *this,
        const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v8)(_QWORD, void *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  winrt::impl::as<winrt::Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v8,
    *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a2);
  winrt::impl::as<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v9,
    v8);
  v3 = *((_QWORD *)this + 4);
  v4 = v9;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 64LL))(v3, v9);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1F0,
      (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v5,
      v6);
  if ( v4 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v9);
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
}
