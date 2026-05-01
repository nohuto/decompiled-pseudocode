/*
 * XREFs of ?OnViewConsolidationRequested@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A2698
 * Callers:
 *     ?OnViewWrapperViewEvent@MiniSearchExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1803A2FA0 (-OnViewWrapperViewEvent@MiniSearchExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180089344 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x180092A5C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??B?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ @ 0x18019C118 (--B-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ.c)
 *     ?CompleteMiniSearchActivationTest@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A163C (-CompleteMiniSearchActivationTest@MiniSearchExperienceManager@@AEAAXXZ.c)
 *     ?HideView@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A1B70 (-HideView@MiniSearchExperienceManager@@AEAAJXZ.c)
 *     ?UnboostPriority@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A4808 (-UnboostPriority@MiniSearchExperienceManager@@AEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_MiniSearchActivationTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_MiniSearchActivationTest@@@details@tip@@@std@@XZ @ 0x1803A4B94 (-ensure_data@-$tip_test@U_tip_MiniSearchActivationTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merge.c)
 */

__int64 __fastcall MiniSearchExperienceManager::OnViewConsolidationRequested(MiniSearchExperienceManager *this)
{
  char *v1; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  ULONGLONG Ptr; // rbx
  __int64 v6; // rax
  _DWORD *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = (char *)this + 256;
  if ( tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)this + 32) )
  {
    v4 = (_QWORD *)tip::tip_test<_tip_MiniSearchActivationTest>::ensure_data(v1);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v11,
      v4);
    Ptr = v11.Ptr;
    tip::details::test_common_data<0>::begin_update(v11.Ptr + 8);
    v6 = Ptr + 155;
    if ( !Ptr )
      v6 = 11LL;
    *(_BYTE *)v6 = 1;
    if ( Ptr )
    {
      tip::details::test_common_data<0>::end_update(Ptr + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v11);
    }
    if ( *(_QWORD *)&v11.Size )
      std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v11.Size);
    MiniSearchExperienceManager::CompleteMiniSearchActivationTest((struct _TP_TIMER **)this);
  }
  v7 = (_DWORD *)wil::details::static_lazy<SearchAppLauncherLogging>::get(
                   v3,
                   _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v7, (unsigned __int8 *)dword_1806AEE40, 0LL, 0LL, 2u, &v11);
  v8 = MiniSearchExperienceManager::HideView(this);
  v9 = v8;
  if ( v8 >= 0 )
    v9 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  MiniSearchExperienceManager::UnboostPriority(this);
  return v9;
}
