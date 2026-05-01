/*
 * XREFs of ?ViewVirtualDesktopChanged@TaskViewHost@@UEAAJPEAUIApplicationView@@@Z @ 0x180768500
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryFindGroupWithWindow@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@@Z @ 0x180036320 (-TryFindGroupWithWindow@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGr.c)
 *     ?TryGetTaskGroupsDataModel@@YA?AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@PEAUIAppViewDataSourceAdapter@@@Z @ 0x1800780CC (-TryGetTaskGroupsDataModel@@YA-AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@PEA.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117E20 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TaskGroupDataSource@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter@UTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180637E60 (-TaskGroupDataSource@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter@UTa.c)
 *     ??$convert_from_abi@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@wil@@YA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x18076770C (--$convert_from_abi@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@wil@@YA-A.c)
 *     ?ReevaluateItem@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x180768144 (-ReevaluateItem@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISw.c)
 *     ?TryGetItemForGroup@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemDataSource@UITaskGroupSwitchItemDataSource@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUTaskGroup@TaskGroups@Shell@Internal@Windows@3@@Z @ 0x18076849C (-TryGetItemForGroup@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemDataSource@U.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall TaskViewHost::ViewVirtualDesktopChanged(
        TaskViewHost *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64))
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  const char *v5; // r9
  int v6; // r14d
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // esi
  __int64 result; // rax
  _QWORD *v12; // rax
  __int64 v13; // r9
  struct IApplicationView *v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-40h] BYREF
  int v18; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v20; // [rsp+80h] [rbp+8h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, void *, _QWORD *); // [rsp+90h] [rbp+18h] BYREF
  __int64 v22; // [rsp+98h] [rbp+20h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 112) & -(__int64)(this != (TaskViewHost *)136));
  v17[1] = v4;
  try
  {
    v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
    v18 = v6;
    if ( !*((_BYTE *)this + 596) )
    {
      v21 = 0LL;
      v7 = (__int64 *)*((_QWORD *)this + 15);
      v8 = *v7;
      v21 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), GUID *, __int64 (__fastcall ****)(_QWORD, void *, _QWORD *)))(v8 + 32))(
             v7,
             a2,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             &v21);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1DC,
          (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
          (const char *)(unsigned int)v9);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
        if ( v6 >= 0 )
          LeaveCriticalSection(v4);
        return v10;
      }
      v12 = wil::convert_from_abi<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(&v20, v21);
      winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView>::ReevaluateItem(
        (_QWORD *)this + 4,
        v12);
      if ( v20 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::GetImpl'::`2'::impl,
        1u,
        3u,
        v13);
      LODWORD(v20) = ApplicationViewHelpers::GetWindowForView(a2, v14);
      TryGetTaskGroupsDataModel(&v16, *((__int64 **)this + 15));
      if ( v16 )
      {
        winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::TryFindGroupWithWindow(
          &v16,
          &v22,
          (unsigned int *)&v20);
        if ( v22 )
        {
          v15 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter>::TaskGroupDataSource(
                  (__int64 *)this + 8,
                  v17);
          winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemDataSource<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupSwitchItemDataSource>::TryGetItemForGroup(
            v15,
            &v20,
            &v22);
          if ( v17[0] )
            winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v17);
          winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView>::ReevaluateItem(
            (_QWORD *)this + 4,
            &v20);
          if ( v20 )
            winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
        }
        if ( v22 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
      }
      if ( v16 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
    }
    if ( v6 >= 0 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v20) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x1F1,
                     (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
                     v5);
    return (unsigned int)v20;
  }
  return result;
}
