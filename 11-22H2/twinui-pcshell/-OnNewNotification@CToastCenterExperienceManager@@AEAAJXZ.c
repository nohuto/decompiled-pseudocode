/*
 * XREFs of ?OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x180438040
 * Callers:
 *     ?OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1801A1F50 (-OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180056D78 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VToastCenterLogging@@@details@wil@@QEAAPEAVToastCenterLogging@@P6AXXZ@Z @ 0x1801A9428 (-get@-$static_lazy@VToastCenterLogging@@@details@wil@@QEAAPEAVToastCenterLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$?0$$V@EM_NewNotificationActivity@ToastCenterTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180434140 (--$-0$$V@EM_NewNotificationActivity@ToastCenterTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@.c)
 *     ??1EM_NewNotificationActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180435548 (--1EM_NewNotificationActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180436A78 (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnNewNotification(struct _TP_TIMER **pv, char a2)
{
  __int64 v3; // rcx
  char v4; // dl
  _DWORD *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD v9[40]; // [rsp+30h] [rbp-178h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+170h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  ToastCenterTelemetry::EM_NewNotificationActivity::EM_NewNotificationActivity((__int64)v9, a2);
  v5 = (_DWORD *)wil::details::static_lazy<ToastCenterLogging>::get(
                   v3,
                   (void (__cdecl *)())_lambda_bf79752da0796684e7476bfa6049aec2_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v5,
      (unsigned __int8 *)dword_18084DF9D,
      (const GUID *)(v9[6] + 8LL),
      0LL,
      2u,
      &v10);
  v6 = CToastCenterExperienceManager::Launch(pv, v4);
  v7 = v6;
  if ( v6 >= 0 )
  {
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v9, 0);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EB,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  }
  ToastCenterTelemetry::EM_NewNotificationActivity::~EM_NewNotificationActivity((ToastCenterTelemetry::EM_NewNotificationActivity *)v9);
  return v7;
}
