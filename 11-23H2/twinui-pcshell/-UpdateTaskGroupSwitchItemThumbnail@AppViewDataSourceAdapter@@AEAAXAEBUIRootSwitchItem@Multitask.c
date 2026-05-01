/*
 * XREFs of ?UpdateTaskGroupSwitchItemThumbnail@AppViewDataSourceAdapter@@AEAAXAEBUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x18078F6A0
 * Callers:
 *     ?HandleTaskGroupSwitchItemAdded@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x18078E8C0 (-HandleTaskGroupSwitchItemAdded@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItem@Multitasking@Comp.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUTaskGroup@TaskGroups@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18064A718 (--$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windo.c)
 *     ??$as@UITaskGroup@TaskGroups@Shell@Internal@Windows@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITaskGroup@TaskGroups@Shell@Internal@Windows@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18078DDB0 (--$as@UITaskGroup@TaskGroups@Shell@Internal@Windows@@Utype@-$abi@UIUnknown@Foundation@Windows@wi.c)
 *     ??$as@UIThumbnailFactory@Multitasking@ComposableShell@Internal@Windows@winrt@@U12345@$0A@@impl@winrt@@YA?AUIThumbnailFactory@Multitasking@ComposableShell@Internal@Windows@1@PEAU23456@@Z @ 0x18078DE18 (--$as@UIThumbnailFactory@Multitasking@ComposableShell@Internal@Windows@winrt@@U12345@$0A@@impl@w.c)
 *     ?Data@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18078E4B8 (-Data@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UIRootSwitchItem@Multi.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall AppViewDataSourceAdapter::UpdateTaskGroupSwitchItemThumbnail(
        AppViewDataSourceAdapter *this,
        const struct winrt::Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a2)
{
  _QWORD *v4; // rax
  int v5; // eax
  __int64 v6; // rbx
  signed int v7; // eax
  int v8[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 (__fastcall ***v10)(_QWORD, void *, __int64 *); // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, void *, __int64 *); // [rsp+68h] [rbp+38h] BYREF

  if ( *((_QWORD *)this + 8) )
  {
    v4 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem>::Data(
           (__int64 *)a2,
           v8);
    winrt::impl::as<winrt::Windows::Internal::Shell::TaskGroups::TaskGroup,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v12,
      (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*v4);
    if ( *(_QWORD *)v8 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v8);
    winrt::impl::as<Windows::Internal::Shell::TaskGroups::ITaskGroup,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v11,
      v12);
    v10 = 0LL;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 8) + 96LL))(
           *((_QWORD *)this + 8),
           v11,
           &v10);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1FE,
        (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v5,
        v8[0]);
    winrt::impl::as<winrt::Windows::Internal::ComposableShell::Multitasking::IThumbnailFactory,Windows::Internal::ComposableShell::Multitasking::IThumbnailFactory,0>(
      v8,
      v10);
    v6 = *(_QWORD *)v8;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a2 + 104LL))(*(_QWORD *)a2, *(_QWORD *)v8);
    if ( v7 < 0 )
      winrt::throw_hresult(v7);
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v8);
    if ( v10 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v10);
    if ( v11 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v11);
    if ( v12 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  }
}
