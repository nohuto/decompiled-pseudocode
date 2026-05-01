/*
 * XREFs of ?Hide@MiniSearchExperienceManager@@UEAAJXZ @ 0x1803A1920
 * Callers:
 *     ?SetSearchVisibility@MiniSearchExperienceManager@@UEAAX_N@Z @ 0x180173AA0 (-SetSearchVisibility@MiniSearchExperienceManager@@UEAAX_N@Z.c)
 *     ?OnMessageHandler@MiniSearchExperienceManager@@AEAAJI_K_J@Z @ 0x180176320 (-OnMessageHandler@MiniSearchExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?HandleLauncherDismissRequested@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A18E0 (-HandleLauncherDismissRequested@MiniSearchExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180089344 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??B?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ @ 0x18019C118 (--B-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803A0DDC (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??1MiniSearchAppExperienceManager_Hide@MiniSearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1803A0FD0 (--1MiniSearchAppExperienceManager_Hide@MiniSearchAppExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ?CompleteMiniSearchActivationTest@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A163C (-CompleteMiniSearchActivationTest@MiniSearchExperienceManager@@AEAAXXZ.c)
 *     ?HideView@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A1B70 (-HideView@MiniSearchExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@MiniSearchAppExperienceManager_Hide@MiniSearchAppExperienceManagerTelemetry@@QEAAXXZ @ 0x1803A3710 (-StartActivity@MiniSearchAppExperienceManager_Hide@MiniSearchAppExperienceManagerTelemetry@@QEAA.c)
 *     ?Stop@MiniSearchAppExperienceManager_Hide@MiniSearchAppExperienceManagerTelemetry@@QEAAX_N@Z @ 0x1803A3A6C (-Stop@MiniSearchAppExperienceManager_Hide@MiniSearchAppExperienceManagerTelemetry@@QEAAX_N@Z.c)
 *     ?UnboostPriority@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A4808 (-UnboostPriority@MiniSearchExperienceManager@@AEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_MiniSearchActivationTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_MiniSearchActivationTest@@@details@tip@@@std@@XZ @ 0x1803A4B94 (-ensure_data@-$tip_test@U_tip_MiniSearchActivationTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merge.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MiniSearchExperienceManager::Hide(MiniSearchExperienceManager *this)
{
  char *v2; // rbx
  _QWORD *v3; // rax
  MiniSearchExperienceManager *v4; // rbx
  __int64 v5; // rax
  bool v6; // si
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-178h] BYREF
  MiniSearchExperienceManager *v13; // [rsp+28h] [rbp-170h] BYREF
  std::_Ref_count_base *v14; // [rsp+30h] [rbp-168h]
  _QWORD v15[40]; // [rsp+40h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v2 = (char *)this + 256;
  if ( tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)this + 32) )
  {
    v3 = (_QWORD *)tip::tip_test<_tip_MiniSearchActivationTest>::ensure_data(v2);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v13,
      v3);
    v4 = v13;
    tip::details::test_common_data<0>::begin_update((__int64)v13 + 8);
    v5 = (__int64)v4 + 154;
    if ( !v4 )
      v5 = 10LL;
    v6 = 1;
    *(_BYTE *)v5 = 1;
    if ( v4 )
    {
      tip::details::test_common_data<0>::end_update((__int64)v4 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v13);
    }
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    MiniSearchExperienceManager::CompleteMiniSearchActivationTest((struct _TP_TIMER **)this);
  }
  else
  {
    v6 = 1;
  }
  v13 = this;
  LOBYTE(v14) = 1;
  wil::ActivityBase<SearchAppLauncherLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v15);
  v15[0] = &MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_Hide::`vftable';
  MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_Hide::StartActivity((MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_Hide *)v15);
  try
  {
    v7 = *((_QWORD *)this + 5);
    if ( !v7 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x203,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
        (const char *)0x8007139FLL,
        v12);
    v12 = 1;
    v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 352LL))(v7, &v12);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x206,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
        (const char *)(unsigned int)v8,
        v12);
    if ( v12 == 1 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 56LL))(*((_QWORD *)this + 9));
      v6 = 0;
    }
    else
    {
      v9 = MiniSearchExperienceManager::HideView(this);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x20A,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
          (const char *)(unsigned int)v9,
          v12);
    }
    MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_Hide::Stop(
      (MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_Hide *)v15,
      v6);
    MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_Hide::~MiniSearchAppExperienceManager_Hide((MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_Hide *)v15);
    MiniSearchExperienceManager::UnboostPriority(this);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x215,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
                           v10);
  }
  return result;
}
