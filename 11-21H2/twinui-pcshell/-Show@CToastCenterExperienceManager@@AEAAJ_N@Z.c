/*
 * XREFs of ?Show@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x18036545C
 * Callers:
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180363960 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18000B4DC (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180020198 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004B04C (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??1EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1803625F4 (--1EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?NoOp_AlreadyVisible@EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1803632D8 (-NoOp_AlreadyVisible@EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@.c)
 *     ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x18036558C (-ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?ShowingInHolographic@EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180365744 (-ShowingInHolographic@EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?StartActivity@EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAX_N@Z @ 0x180365AD4 (-StartActivity@EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAX_.c)
 *     ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x1805F12F4 (-BringToForeground@CSingleViewShellExperience@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CToastCenterExperienceManager::Show(CToastCenterExperienceManager *this, unsigned __int8 a2)
{
  int v2; // esi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v8[2]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v2 = a2;
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v8,
    (__int64)"EM_ShowActivity");
  *(_QWORD *)v8 = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity::StartActivity(
    (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity *)v8,
    v2);
  if ( *((_DWORD *)this + 36) == 2 )
  {
    if ( (_BYTE)v2 )
      CSingleViewShellExperience::BringToForeground((CToastCenterExperienceManager *)((char *)this + 104));
    else
      NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity::NoOp_AlreadyVisible((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity *)v8);
    goto LABEL_12;
  }
  if ( !*((_QWORD *)this + 95)
    || *((_DWORD *)this + 192) != 1
    || (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity::ShowingInHolographic((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity *)v8),
        v4 = CToastCenterExperienceManager::ShowInHolographic(this),
        v5 = v4,
        v4 >= 0) )
  {
    v4 = CSingleViewShellExperience::Show(
           (__int64)this + 104,
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)(v2 ^ 1u));
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 901LL;
      goto LABEL_8;
    }
LABEL_12:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((PSRWLOCK)v8, 0);
    v5 = 0;
    goto LABEL_13;
  }
  v6 = 894LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_13:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity::~EM_ShowActivity((volatile signed __int32 **)v8);
  return v5;
}
