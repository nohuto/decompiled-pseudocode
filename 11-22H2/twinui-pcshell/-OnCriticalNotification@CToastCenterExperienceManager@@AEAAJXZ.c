/*
 * XREFs of ?OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x1804376F0
 * Callers:
 *     ?OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1801A1F50 (-OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800507C4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180056D78 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$?0$$V@EM_CriticalNotificationActivity@ToastCenterTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180433E80 (--$-0$$V@EM_CriticalNotificationActivity@ToastCenterTelemetry@@AEAA@U-$integral_constant@D$0A@@w.c)
 *     ??1EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180435440 (--1EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180436A78 (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?TurnedScreenOn@EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18043CFE8 (-TurnedScreenOn@EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnCriticalNotification(struct _TP_TIMER **pv, char a2)
{
  NTSTATUS v3; // eax
  unsigned int v4; // ebx
  char v5; // dl
  int v6; // eax
  _QWORD v8[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  ToastCenterTelemetry::EM_CriticalNotificationActivity::EM_CriticalNotificationActivity((__int64)v8, a2);
  v3 = NtPowerInformation(ProcessorStateHandler2|0x40, 0LL, 0, 0LL, 0);
  if ( v3 >= 0 )
  {
    ToastCenterTelemetry::EM_CriticalNotificationActivity::TurnedScreenOn((ToastCenterTelemetry::EM_CriticalNotificationActivity *)v8);
    v6 = CToastCenterExperienceManager::Launch(pv, v5);
    v4 = v6;
    if ( v6 >= 0 )
    {
      wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v8, 0);
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E1,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    }
  }
  else
  {
    v4 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x2DE,
           (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
           (const char *)(unsigned int)v3);
  }
  ToastCenterTelemetry::EM_CriticalNotificationActivity::~EM_CriticalNotificationActivity((ToastCenterTelemetry::EM_CriticalNotificationActivity *)v8);
  return v4;
}
