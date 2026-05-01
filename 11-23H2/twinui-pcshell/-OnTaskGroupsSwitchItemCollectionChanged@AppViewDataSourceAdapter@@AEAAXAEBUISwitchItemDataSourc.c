/*
 * XREFs of ?OnTaskGroupsSwitchItemCollectionChanged@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUISwitchItemCollectionChangedEventArgs@34567@@Z @ 0x18078ED9C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs___lambda_e154441d1d346fb4a2aa0b556d03af10___::Invoke @ 0x18078EA30 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18078EA30.c)
 * Callees:
 *     ?Data@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180027964 (-Data@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitask.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUTaskGroup@TaskGroups@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18064A718 (--$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windo.c)
 *     ?HandleTaskGroupSwitchItemAdded@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x18078E8C0 (-HandleTaskGroupSwitchItemAdded@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItem@Multitasking@Comp.c)
 *     ?HandleTaskGroupSwitchItemRemoved@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x18078E97C (-HandleTaskGroupSwitchItemRemoved@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItem@Multitasking@Co.c)
 *     ?Item@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemCollectionChangedEventArgs@UISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18078EBA0 (-Item@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemCollectionChangedEventA.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall AppViewDataSourceAdapter::OnTaskGroupsSwitchItemCollectionChanged(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource *a2,
        const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs *a3)
{
  RTL_SRWLOCK *v5; // rbx
  _QWORD *v6; // rax
  signed int v7; // eax
  __int64 v8; // [rsp+60h] [rbp+28h] BYREF
  const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource *v9; // [rsp+68h] [rbp+30h] BYREF
  __int64 v10; // [rsp+70h] [rbp+38h] BYREF
  __int64 v11; // [rsp+78h] [rbp+40h] BYREF

  v9 = a2;
  v5 = this + 15;
  AcquireSRWLockExclusive(this + 15);
  winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemCollectionChangedEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs>::Item(
    (__int64 *)a3,
    &v8);
  v6 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::Data(
         &v8,
         &v10);
  winrt::impl::as<winrt::Windows::Internal::Shell::TaskGroups::TaskGroup,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v11,
    (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*v6);
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  LODWORD(v9) = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource **))(**(_QWORD **)a3 + 48LL))(
         *(_QWORD *)a3,
         &v9);
  if ( v7 < 0 )
    winrt::throw_hresult(v7);
  if ( (_DWORD)v9 )
  {
    if ( (_DWORD)v9 == 1 )
      AppViewDataSourceAdapter::HandleTaskGroupSwitchItemRemoved(
        (AppViewDataSourceAdapter *)this,
        (const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem *)&v8);
  }
  else
  {
    AppViewDataSourceAdapter::HandleTaskGroupSwitchItemAdded(
      (AppViewDataSourceAdapter *)this,
      (const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem *)&v8);
  }
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
}
