/*
 * XREFs of ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x18036558C
 * Callers:
 *     ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x180362838 (-ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell.c)
 *     ?Show@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x18036545C (-Show@CToastCenterExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1800732BC (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18036217C (--0-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180362620 (--1EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180365B78 (-StartActivity@EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180365CD0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::ShowInHolographic(CToastCenterExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  float v7; // [rsp+38h] [rbp-C8h]
  float v8; // [rsp+3Ch] [rbp-C4h]
  struct tagRECT v9; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v10[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v10,
    (__int64)"EM_ShowInHolographic");
  v10[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic *)v10);
  if ( !*((_QWORD *)this + 97) || !*((_QWORD *)this + 95) )
    goto LABEL_8;
  v9.left = 0;
  v9.top = 0;
  v9.right = MulDiv((int)*((float *)this + 37), 150, 100);
  v9.bottom = MulDiv((int)*((float *)this + 38), 150, 100);
  v2 = CSingleViewShellExperience::SetPosition((CToastCenterExperienceManager *)((char *)this + 104), &v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v6 = 0LL;
    v7 = (float)(v9.right - v9.left);
    v8 = (float)(v9.bottom - v9.top);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 95) + 48LL))(
           *((_QWORD *)this + 95),
           *((_QWORD *)this + 15),
           *((_QWORD *)this + 16),
           &v6);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 1663LL;
      goto LABEL_7;
    }
LABEL_8:
    wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v10);
    v3 = 0;
    goto LABEL_9;
  }
  v4 = 1659LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_9:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic::~EM_ShowInHolographic((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic *)v10);
  return v3;
}
