/*
 * XREFs of ?ShowExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x18000AEF8
 * Callers:
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004A4A0 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18000B4DC (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?complete@?$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@@QEAAXXZ @ 0x180045564 (-complete@-$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@.c)
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x180049C0C (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??B?$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ @ 0x18022C5BC (--B-$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18034DAA4 (-ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?ActionCenterLaunchSkippedDueToShellNotReady@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18034DB3C (-ActionCenterLaunchSkippedDueToShellNotReady@NotificationCenterTelemetry@NotificationCenterUITel.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_ControlCenterShowTest@@@details@tip@@@std@@QEAA@XZ @ 0x1803522BC (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_ControlCenterShowTest@@@details@tip@@@std@@.c)
 *     ??0?$test_merged_data@U_tip_ControlCenterShowTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x180353124 (--0-$test_merged_data@U_tip_ControlCenterShowTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrieval.c)
 *     ?ControlCenterPage_PreloadFailed@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ @ 0x18035366C (-ControlCenterPage_PreloadFailed@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::ShowExperience(char *pv)
{
  PTP_TIMER ThreadpoolTimer; // rax
  int v3; // eax
  unsigned int v4; // edi
  char v5; // al
  int v6; // eax
  unsigned int v7; // ebx
  std::_Ref_count_base *v9; // rdi
  std::_Ref_count_base *v10; // rdi
  std::_Ref_count_base *v11; // rax
  std::_Ref_count_base *v12; // rbx
  std::_Ref_count_base *v13; // rsi
  char *v14; // rax
  std::_Ref_count_base *v15; // rdi
  std::_Ref_count_base *v16; // rdi
  std::_Ref_count_base *v17; // rax
  std::_Ref_count_base *v18; // rbx
  std::_Ref_count_base *v19; // rsi
  char *v20; // rax
  std::_Ref_count_base *v21[2]; // [rsp+20h] [rbp-30h] BYREF
  _DWORD *v22; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v23; // [rsp+38h] [rbp-18h]
  _DWORD *v24; // [rsp+40h] [rbp-10h] BYREF
  std::_Ref_count_base *v25; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct _FILETIME pftDueTime; // [rsp+70h] [rbp+20h] BYREF

  if ( *((_DWORD *)pv + 40) == 2 )
    return 0LL;
  if ( (unsigned int)SHWindowsPolicy(&POLID_DisableNotificationCenter) )
  {
    *(_OWORD *)v21 = 0LL;
    v9 = (std::_Ref_count_base *)operator new(0xC0uLL);
    pftDueTime = (struct _FILETIME)v9;
    *(_OWORD *)v9 = 0LL;
    *((_DWORD *)v9 + 2) = 1;
    *((_DWORD *)v9 + 3) = 1;
    *(_QWORD *)v9 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_NotificationCenterShowTest>>::`vftable';
    tip::details::test_merged_data<_tip_ControlCenterShowTest>::test_merged_data<_tip_ControlCenterShowTest>(
      (char *)v9 + 16,
      0LL,
      0LL);
    v22 = (_DWORD *)((char *)v9 + 16);
    v23 = v9;
    std::shared_ptr<KBViewInfo>::operator=(v21, &v22);
    if ( v23 )
      std::_Ref_count_base::_Decref(v23);
    if ( !(unsigned __int8)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool(v21) )
    {
      v12 = v21[1];
      goto LABEL_31;
    }
    v10 = v21[0];
    if ( !v21[0] )
    {
      pftDueTime = (struct _FILETIME)operator new(0xC0uLL);
      v11 = (std::_Ref_count_base *)((__int64 (__fastcall *)(_QWORD))std::_Ref_count_obj2<tip::details::test_merged_data<_tip_ControlCenterShowTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_ControlCenterShowTest>>)(pftDueTime);
      v24 = (_DWORD *)((char *)v11 + 16);
      v25 = v11;
      std::shared_ptr<KBViewInfo>::operator=(v21, &v24);
      if ( v25 )
        std::_Ref_count_base::_Decref(v25);
      v10 = v21[0];
    }
    v12 = v21[1];
    if ( v21[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)v21[1] + 2);
      v12 = v21[1];
      v10 = v21[0];
    }
    v13 = v12;
    tip::details::test_common_data<1>::begin_update((char *)v10 + 8);
    if ( v10 )
      v14 = (char *)v10 + 144;
    else
      v14 = 0LL;
    v14[18] = 1;
    if ( v10 )
    {
      tip::details::test_common_data<1>::end_update((char *)v10 + 8);
      v13 = 0LL;
      if ( !v12 )
      {
LABEL_29:
        tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::complete(v21);
LABEL_31:
        if ( v12 )
          std::_Ref_count_base::_Decref(v12);
        NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToPolicy();
        return 2147943660LL;
      }
      std::_Ref_count_base::_Decref(v12);
    }
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    goto LABEL_29;
  }
  if ( !pv[388] )
  {
    *(_OWORD *)v21 = 0LL;
    v15 = (std::_Ref_count_base *)operator new(0xC0uLL);
    pftDueTime = (struct _FILETIME)v15;
    *(_OWORD *)v15 = 0LL;
    *((_DWORD *)v15 + 2) = 1;
    *((_DWORD *)v15 + 3) = 1;
    *(_QWORD *)v15 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_NotificationCenterShowTest>>::`vftable';
    tip::details::test_merged_data<_tip_ControlCenterShowTest>::test_merged_data<_tip_ControlCenterShowTest>(
      (char *)v15 + 16,
      0LL,
      0LL);
    v24 = (_DWORD *)((char *)v15 + 16);
    v25 = v15;
    std::shared_ptr<KBViewInfo>::operator=(v21, &v24);
    if ( v25 )
      std::_Ref_count_base::_Decref(v25);
    if ( !(unsigned __int8)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool(v21) )
    {
      v18 = v21[1];
      goto LABEL_53;
    }
    v16 = v21[0];
    if ( !v21[0] )
    {
      pftDueTime = (struct _FILETIME)operator new(0xC0uLL);
      v17 = (std::_Ref_count_base *)((__int64 (__fastcall *)(_QWORD))std::_Ref_count_obj2<tip::details::test_merged_data<_tip_ControlCenterShowTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_ControlCenterShowTest>>)(pftDueTime);
      v22 = (_DWORD *)((char *)v17 + 16);
      v23 = v17;
      std::shared_ptr<KBViewInfo>::operator=(v21, &v22);
      if ( v23 )
        std::_Ref_count_base::_Decref(v23);
      v16 = v21[0];
    }
    v18 = v21[1];
    if ( v21[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)v21[1] + 2);
      v18 = v21[1];
      v16 = v21[0];
    }
    v19 = v18;
    tip::details::test_common_data<1>::begin_update((char *)v16 + 8);
    if ( v16 )
      v20 = (char *)v16 + 144;
    else
      v20 = 0LL;
    v20[19] = 1;
    if ( v16 )
    {
      tip::details::test_common_data<1>::end_update((char *)v16 + 8);
      v19 = 0LL;
      if ( !v18 )
      {
LABEL_51:
        tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::complete(v21);
LABEL_53:
        if ( v18 )
          std::_Ref_count_base::_Decref(v18);
        NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToShellNotReady();
        return 2147549183LL;
      }
      std::_Ref_count_base::_Decref(v18);
    }
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
    goto LABEL_51;
  }
  if ( !*((_QWORD *)pv + 73) )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_dee8c31645692b1d90af4228a2054828_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      pv + 584,
      ThreadpoolTimer);
    pftDueTime = (struct _FILETIME)-100000000LL;
    SetThreadpoolTimer(*((PTP_TIMER *)pv + 73), &pftDueTime, 0, 0);
  }
  if ( *((_QWORD *)pv + 18)
    && (v3 = CControlCenterExperienceManager::PositionView((CControlCenterExperienceManager *)pv), v4 = v3, v3 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B6,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3,
      (int)v21[0]);
    return v4;
  }
  else
  {
    if ( pv[707] )
    {
      pv[707] = 0;
      ControlCenterUITelemetry::ControlCenterTelemetry::ControlCenterPage_PreloadFailed();
    }
    v5 = pv[705];
    pv[705] = 1;
    v6 = CSingleViewShellExperience::Show(pv + 120, v5 == 0);
    v7 = v6;
    if ( v6 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C3,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      (int)v21[0]);
    return v7;
  }
}
