/*
 * XREFs of ?InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ @ 0x180541EA8
 * Callers:
 *     ?IsSwitchItemVisibleOnDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@PEAE@Z @ 0x1800374F0 (-IsSwitchItemVisibleOnDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@Compos.c)
 *     ?CanSwitchItemMoveDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180541830 (-CanSwitchItemMoveDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@Composabl.c)
 *     ?IsSwitchItemPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180542490 (-IsSwitchItemPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@Com.c)
 *     ?IsSwitchItemViewPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180542670 (-IsSwitchItemViewPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking.c)
 *     ?MoveSwitchItemToDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@@Z @ 0x180542AA0 (-MoveSwitchItemToDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableS.c)
 * Callees:
 *     ?TaskGroupController@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter@UTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006B674 (-TaskGroupController@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter@UTa.c)
 *     ?CreateDataSourceAdapter@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider@UITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18007ABAC (-CreateDataSourceAdapter@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider@UITaskGr.c)
 *     ??$as@UTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800AE8DC (--$as@UTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnknown.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$call@P6A?AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupProviderStatics@23456@@Z@?$factory_cache_entry@UTaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupProviderStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@2@AEBUITaskGroupProviderStatics@45672@@Z@Z @ 0x18019F640 (--$call@P6A-AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupProvider.c)
 *     ?GetTaskGroupProvider@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProviderStatics@UITaskGroupProviderStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801B2338 (-GetTaskGroupProvider@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProviderStatics@UITa.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall VirtualDesktopController::InitializeTaskGroupController(VirtualDesktopController *this)
{
  winrt::Windows::Foundation::IUnknown *v1; // rdi
  winrt::Windows::Foundation::IUnknown *v2; // rbx
  _QWORD *v3; // rax
  winrt::Windows::Foundation::IUnknown *v4; // rax
  void (__fastcall *v5[2])(__int64, __int64 *); // [rsp+20h] [rbp-10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+20h] BYREF
  __int64 v7; // [rsp+58h] [rbp+28h] BYREF
  __int64 v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF

  v1 = (VirtualDesktopController *)((char *)this + 128);
  if ( !*((_QWORD *)this + 16) )
  {
    v2 = (VirtualDesktopController *)((char *)this + 120);
    if ( !*((_QWORD *)this + 15) )
    {
      v5[1] = (void (__fastcall *)(__int64, __int64 *))&qword_18098E5F8;
      _InterlockedIncrement64(&qword_18098E5F8);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics> )
      {
        winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProviderStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>::GetTaskGroupProvider(
          &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>,
          &v6);
        _InterlockedDecrement64(&qword_18098E5F8);
      }
      else
      {
        _InterlockedDecrement64(&qword_18098E5F8);
        v5[0] = (void (__fastcall *)(__int64, __int64 *))_lambda_34d03d9a202a7fc782dd640c0005da4a_::_lambda_invoker_cdecl_;
        winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>::call<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProvider (*)(winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics const &)>(
          (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
          (__int64)&v6,
          v5);
      }
      v3 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProvider>::CreateDataSourceAdapter(
             &v6,
             &v8);
      winrt::impl::as<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        &v7,
        (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*v3);
      winrt::Windows::Foundation::IUnknown::operator=(v2, (winrt::Windows::Foundation::IUnknown *)&v7);
      if ( v7 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
      if ( v8 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
      if ( v6 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
    }
    v4 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter>::TaskGroupController(
                                                   (__int64 *)v2,
                                                   &v9);
    winrt::Windows::Foundation::IUnknown::operator=(v1, v4);
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  }
}
