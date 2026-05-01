/*
 * XREFs of _lambda_52a7597311830440b167c013db955118_::operator() @ 0x1801964A0
 * Callers:
 *     ?RaiseToastPeekRegionClickedEvent@CToastCenterExperienceManager@@AEAAJXZ @ 0x180364BEC (-RaiseToastPeekRegionClickedEvent@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180020198 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?EventRaised@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1800493EC (-EventRaised@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITe.c)
 *     ??1EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18004A054 (--1EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 *     ?StartActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXPEBG_N@Z @ 0x18004A1A8 (-StartActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUI.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004B04C (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?NoOp_ApplicationNotRunning@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1800A5228 (-NoOp_ApplicationNotRunning@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@Notific.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x1805F178C (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_52a7597311830440b167c013db955118_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r8d
  __int64 v3; // rax
  struct Windows::Foundation::Collections::IPropertySet *v4; // r9
  int v5; // eax
  unsigned int v6; // ebx
  _BYTE v8[32]; // [rsp+20h] [rbp-178h] BYREF
  RTL_SRWLOCK v9[40]; // [rsp+40h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v1 = *a1;
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v9,
    (__int64)"EM_RaiseApplicationEventActivity");
  v9[0].Ptr = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::StartActivity(
    (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *)v9,
    L"ToastPeekRegionClicked",
    1);
  if ( !*(_QWORD *)(v1 + 128) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::NoOp_ApplicationNotRunning((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *)v9);
    goto LABEL_6;
  }
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v8, (const WCHAR **)&off_180646488, v2);
  v5 = CSingleViewShellExperience::Reactivate((CSingleViewShellExperience *)(v1 + 104), *(HSTRING *)(v3 + 24), 0LL, v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::EventRaised((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *)v9);
LABEL_6:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v9, 0);
    v6 = 0;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x326,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::~EM_RaiseApplicationEventActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *)v9);
  return v6;
}
