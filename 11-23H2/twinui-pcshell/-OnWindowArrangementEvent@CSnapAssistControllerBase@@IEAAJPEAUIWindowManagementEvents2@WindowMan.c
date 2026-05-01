/*
 * XREFs of ?OnWindowArrangementEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x18066B330
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1800B68FC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180192FD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1801F0838 (-complete@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223E48 (--1-$test_data_control@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@1@XZ @ 0x180223F70 (--C-$tip_test@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_d.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DetermineSnapRegionForView@SnapLayoutHelpers@@YA?AW4SnapRegion@@PEAUIApplicationView@@@Z @ 0x1802E93A4 (-DetermineSnapRegionForView@SnapLayoutHelpers@@YA-AW4SnapRegion@@PEAUIApplicationView@@@Z.c)
 *     ?IsGuidedSnapAssistActive@CSnapAssistControllerBase@@IEAA_NXZ @ 0x18066B218 (-IsGuidedSnapAssistActive@CSnapAssistControllerBase@@IEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSnapAssistControllerBase::OnWindowArrangementEvent(
        CSnapAssistControllerBase *this,
        struct Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        const struct Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs *a3)
{
  int v5; // eax
  unsigned int v6; // esi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rsi
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+18h] BYREF
  void *v18; // [rsp+48h] [rbp+20h] BYREF

  if ( *((_WORD *)a3 + 4) == 1 )
  {
    if ( CSnapAssistControllerBase::IsGuidedSnapAssistActive(this) )
    {
      if ( *(_QWORD *)a3 == *((_QWORD *)this + 34) )
      {
        *((_QWORD *)this + 34) = 0LL;
      }
      else
      {
        *((_QWORD *)this + 34) = *(_QWORD *)a3;
        v5 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 5) + 56LL))(
               (char *)this + 40,
               *(_QWORD *)a3);
        v6 = v5;
        if ( v5 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4C3,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
            (const char *)(unsigned int)v5);
          return v6;
        }
      }
    }
    else if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)this + 30) )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
        1u,
        v8,
        v9);
    }
    v10 = (__int64 *)((char *)this + 312);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)this + 39) )
    {
      v17 = 0LL;
      v11 = (__int64 *)*((_QWORD *)this + 9);
      v12 = *v11;
      v17 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v12 + 48))(v11, *(_QWORD *)a3, &v17);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4D3,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
          (const char *)(unsigned int)v13);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
        return v14;
      }
      v15 = SnapLayoutHelpers::DetermineSnapRegionForView(v17);
      *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::operator->(
                     (__int64)v10,
                     (__int64 *)&v18)
                + 272) = v15;
      tip2::test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::~test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>(&v18);
      tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::complete(v10);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
    }
  }
  return 0LL;
}
