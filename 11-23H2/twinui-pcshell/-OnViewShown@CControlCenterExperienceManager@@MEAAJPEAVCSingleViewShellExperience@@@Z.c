/*
 * XREFs of ?OnViewShown@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180421370
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18002C12C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$?0$$V@EM_ViewShownActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18041BA50 (--$-0$$V@EM_ViewShownActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U-$integral_.c)
 *     ??1EM_ViewShownActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041E098 (--1EM_ViewShownActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?BringToForeground@CControlCenterExperienceManager@@AEAAJXZ @ 0x18041E3E4 (-BringToForeground@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?ControlCenterPage_PrelaunchCompleted@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ @ 0x18041E728 (-ControlCenterPage_PrelaunchCompleted@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x1804215EC (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804242B0 (-Stop@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::OnViewShown(
        CControlCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  _BYTE v6[320]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  if ( *((_BYTE *)this + 659) )
  {
    *((_BYTE *)this + 659) = 0;
    ControlCenterUITelemetry::ControlCenterTelemetry::ControlCenterPage_PrelaunchCompleted((__int64)this);
    v3 = CSingleViewShellExperience::Hide((__int64)this + 16, 0LL);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x721,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
  }
  else
  {
    ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewShownActivity::EM_ViewShownActivity((__int64)v6, (char)a2);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 67,
      0LL);
    CControlCenterExperienceManager::OnVisibilityChanged((CControlCenterExperienceManager *)((char *)this - 104));
    CControlCenterExperienceManager::BringToForeground((CControlCenterExperienceManager *)((char *)this - 104));
    wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v6, 0LL);
    ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewShownActivity::~EM_ViewShownActivity((ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewShownActivity *)v6);
  }
  return 0LL;
}
