/*
 * XREFs of ?MoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHMONITOR__@@I@Z @ 0x1805463D0
 * Callers:
 *     ?MoveDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@PEAUHMONITOR__@@I@Z @ 0x18020CA60 (-MoveDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@PEAUHMONITOR__@@I@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RvUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180035148 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RvUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x18011FB18 (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801801A4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@0@XZ @ 0x18048C63C (--$open_and_watch_errors@V-$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@.c)
 *     ??0?$com_ptr_t@UIObjectArray@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIObjectArray@@@Z @ 0x1805442A0 (--0-$com_ptr_t@UIObjectArray@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ?GetMonitorsToNotify@CVirtualDesktopManager@@AEAAPEAUIObjectArray@@PEAUHMONITOR__@@@Z @ 0x180545B6C (-GetMonitorsToNotify@CVirtualDesktopManager@@AEAAPEAUIObjectArray@@PEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CVirtualDesktopManager::MoveDesktop(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        const struct _GUID *a3,
        __int64 a4)
{
  __int64 v4; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  std::_Ref_count_base *v10; // rbx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  std::_Ref_count_base *v16; // rbx
  unsigned int v17; // ebx
  struct IObjectArray *MonitorsToNotify; // rax
  int v19; // eax
  unsigned __int64 v20; // [rsp+38h] [rbp-19h] BYREF
  __int64 v21; // [rsp+40h] [rbp-11h] BYREF
  std::_Ref_count_base *v22; // [rsp+48h] [rbp-9h]
  _BYTE v23[8]; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v24[24]; // [rsp+60h] [rbp+Fh] BYREF
  int v25; // [rsp+78h] [rbp+27h]
  __int64 v26; // [rsp+88h] [rbp+37h] BYREF
  std::_Ref_count_base *v27; // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v4 = (unsigned int)a4;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RvUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_RvUpdates>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  tip::open_and_watch_errors<tip::tip_test<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>((__int64)v23);
  if ( *((_DWORD *)this + 69) )
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v21,
      &v26);
    v8 = v21;
    tip::details::test_common_data<1>::begin_update(v21 + 8);
    v9 = v8 + 160;
    if ( !v8 )
      v9 = 16LL;
    *(_BYTE *)v9 = 1;
    if ( v8 )
    {
      tip::details::test_common_data<1>::end_update(v8 + 8);
      v10 = 0LL;
      if ( !v22 )
      {
LABEL_10:
        tip::details::test_common_data<1>::complete(v26 + 8);
        v11 = -2147019873;
        v12 = 546LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)v11);
LABEL_12:
        if ( v27 )
          std::_Ref_count_base::_Decref(v27);
        if ( v25 )
          wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v24);
        return (unsigned int)v11;
      }
      std::_Ref_count_base::_Decref(v22);
    }
    else
    {
      v10 = v22;
    }
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    goto LABEL_10;
  }
  v20 = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, struct IVirtualDesktop *, unsigned __int64 *))(**((_QWORD **)this + 11) + 112LL))(
          *((_QWORD *)this + 11),
          a3,
          a2,
          &v20);
  if ( v11 < 0 )
  {
    v12 = 550LL;
    goto LABEL_11;
  }
  if ( v20 == v4 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x22D,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)0x8000FFFFLL);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v21,
      &v26);
    v14 = v21;
    tip::details::test_common_data<1>::begin_update(v21 + 8);
    v15 = v14 + 161;
    if ( !v14 )
      v15 = 17LL;
    *(_BYTE *)v15 = 1;
    if ( v14 )
    {
      tip::details::test_common_data<1>::end_update(v14 + 8);
      v16 = 0LL;
      if ( !v22 )
      {
LABEL_28:
        tip::details::test_common_data<1>::complete(v26 + 8);
        goto LABEL_36;
      }
      std::_Ref_count_base::_Decref(v22);
    }
    else
    {
      v16 = v22;
    }
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    goto LABEL_28;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, struct IVirtualDesktop *, __int64))(**((_QWORD **)this + 11) + 120LL))(
          *((_QWORD *)this + 11),
          a3,
          a2,
          v4);
  if ( v11 < 0 )
  {
    v12 = 564LL;
    goto LABEL_11;
  }
  v17 = v20;
  if ( v20 > (unsigned int)v20 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x23F,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)0x8000FFFFLL);
  MonitorsToNotify = CVirtualDesktopManager::GetMonitorsToNotify((CVirtualDesktopManager *)((char *)this - 8), a3);
  wil::com_ptr_t<IObjectArray,wil::err_returncode_policy>::com_ptr_t<IObjectArray,wil::err_returncode_policy>(
    &v21,
    (__int64)MonitorsToNotify);
  v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *, _QWORD, _DWORD))(**((_QWORD **)this + 14)
                                                                                             + 64LL))(
          *((_QWORD *)this + 14),
          v21,
          a2,
          v17,
          v4);
  v11 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x241,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v19);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v21);
    goto LABEL_12;
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v21);
LABEL_36:
  if ( v27 )
    std::_Ref_count_base::_Decref(v27);
  if ( v25 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v24);
  return 0LL;
}
