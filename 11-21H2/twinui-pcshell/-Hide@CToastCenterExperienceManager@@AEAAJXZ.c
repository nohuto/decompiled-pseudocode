/*
 * XREFs of ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800A6ECC
 * Callers:
 *     ?OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1800A63E0 (-OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z.c)
 *     _lambda_b9d311b2d01ba9cc4dc437503952e2a6_::operator() @ 0x1801969B0 (_lambda_b9d311b2d01ba9cc4dc437503952e2a6_--operator().c)
 *     wil::details::functor_wrapper_void__lambda_d30de9bea7c208beeecc3353020bcb61__&_::Run @ 0x180196FC0 (wil--details--functor_wrapper_void__lambda_d30de9bea7c208beeecc3353020bcb61__-_--Run.c)
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180363960 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18000CAF8 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180020198 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@P6AXXZ@Z @ 0x1800A6D60 (-get@-$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@.c)
 *     ??$?0$$V@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800A6E00 (--$-0$$V@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U-$inte.c)
 *     ??1EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1800A6EA0 (--1EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180362BF8 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?HidingInHolographic@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180362D14 (-HidingInHolographic@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::Hide(CToastCenterExperienceManager *this, char a2)
{
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v8; // rdx
  RTL_SRWLOCK v9[40]; // [rsp+30h] [rbp-178h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+170h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity::EM_HideActivity((__int64)v9, a2);
  *((_OWORD *)this + 39) = 0LL;
  if ( *((_DWORD *)this + 36) != 2 )
  {
    v4 = (_DWORD *)wil::details::static_lazy<NotificationCenterLogging>::get(
                     v3,
                     _lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_)[1];
    if ( *v4 > 5u )
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)v4,
        (unsigned __int8 *)dword_1806A6479,
        (const GUID *)((char *)v9[6].Ptr + 8),
        0LL,
        2u,
        &v10);
    goto LABEL_4;
  }
  if ( *((_QWORD *)this + 95) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity::HidingInHolographic((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity *)v9);
    v7 = CToastCenterExperienceManager::HideInHolographic(this);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 930LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_5;
    }
  }
  v7 = CSingleViewShellExperience::Hide((__int64)this + 104, 0LL);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 933LL;
    goto LABEL_11;
  }
LABEL_4:
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v9, 0);
  v5 = 0;
LABEL_5:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity::~EM_HideActivity((volatile signed __int32 **)v9);
  return v5;
}
