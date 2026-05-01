/*
 * XREFs of ??$as@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18078DCE0
 * Callers:
 *     ?HandleTaskGroupSwitchItemAdded@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x18078E8C0 (-HandleTaskGroupSwitchItemAdded@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItem@Multitasking@Comp.c)
 *     ?HandleTaskGroupSwitchItemRemoved@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x18078E97C (-HandleTaskGroupSwitchItemRemoved@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItem@Multitasking@Co.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *))
{
  signed int v3; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = (**a2)(a2, &winrt::impl::guid_v<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem>, &v5);
    if ( v3 < 0 )
      winrt::throw_hresult(v3);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
