/*
 * XREFs of _lambda_41fdec79629b933043b6dd44cc33a98f_::operator() @ 0x1801AFDF8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___::Run @ 0x1801B1180 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800752E4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BF9E8 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAnimationPart2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180155648 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAnimationPart2@@@de.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18017928C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180190C7C (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ??$ShowRejected@AEAIAEAY0O@$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAY0O@$$CBG@Z @ 0x180458300 (--$ShowRejected@AEAIAEAY0O@$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAY0O@$$CBG@Z.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18045D6AC (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SIPShowUpOnLogonUIBugFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804645D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SIPShowUpOnLogonUIBugFix@@@details@wil@@Q.c)
 *     ?ShowRejectedDueToDestroyedView@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180464C38 (-ShowRejectedDueToDestroyedView@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180464CD0 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180469948 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1805F31B4 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_41fdec79629b933043b6dd44cc33a98f_::operator()(unsigned int *a1)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rdx
  TouchKeyboardExperienceManager *v5; // rbp
  unsigned int v6; // ebx
  int ViewInfo; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  std::_Ref_count_base *v12; // r14
  int v13; // eax
  int v14; // ebx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v18; // [rsp+20h] [rbp-88h] BYREF
  std::_Ref_count_base *v19[2]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v20[80]; // [rsp+40h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = (__int64)(a1 + 24);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 24),
    (wil::ActivityThreadWatcher *)v20);
  v18 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 20), (__int64)&v18);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4A8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( !v18 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
LABEL_7:
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v2,
      0);
    v6 = 0;
    goto LABEL_21;
  }
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SIPShowUpOnLogonUIBugFix>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SIPShowUpOnLogonUIBugFix>::GetImpl'::`2'::impl,
    v4);
  v5 = (TouchKeyboardExperienceManager *)*((_QWORD *)a1 + 11);
  if ( !*((_BYTE *)v5 + 1207) )
  {
    TouchKeyboardExperienceTelemetryLogger::ShowRejected<unsigned int &,unsigned short const (&)[14]>(a1);
    goto LABEL_7;
  }
  *(_OWORD *)v19 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(v5, *a1, v19);
  v6 = ViewInfo;
  if ( ViewInfo >= 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
      1u,
      v8,
      v9);
    if ( *((_BYTE *)v19[0] + 32) )
    {
      TouchKeyboardExperienceTelemetryLogger::ShowRejectedDueToDestroyedView();
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v2,
        0);
    }
    else
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputViewModernHostingAnimationPart2>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_InputViewModernHostingAnimationPart2>::GetImpl'::`2'::impl,
        1u,
        v10,
        v11);
      v12 = v19[0];
      v13 = TouchKeyboardExperienceManager::ShowView(
              v5,
              v19[0],
              (const struct tagRECT *)(a1 + 1),
              (const struct ViewOptions *)(a1 + 6));
      v14 = v13;
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4CC,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v13);
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v2,
        v14);
      if ( *((_BYTE *)a1 + 26) )
      {
        v15 = *((_QWORD *)a1 + 11);
        v16 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
                v15 + 744,
                1026LL,
                (v15 + 168) & -(__int64)(v15 != 0),
                *(_QWORD *)v12);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x51B,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v16);
        *(_DWORD *)(v15 + 760) = *a1;
      }
    }
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4BD,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
  }
  if ( v19[1] )
    std::_Ref_count_base::_Decref(v19[1]);
LABEL_21:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v20);
  return v6;
}
