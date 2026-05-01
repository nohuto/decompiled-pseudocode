/*
 * XREFs of ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1804361F8
 * Callers:
 *     ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800568DC (-Hide@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x180435AD4 (-ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell.c)
 *     ?OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180438240 (-OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1804350B8 (--0-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1EM_HideInHolographic@ToastCenterTelemetry@@QEAA@XZ @ 0x1804354F0 (--1EM_HideInHolographic@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x180438748 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@EM_HideInHolographic@ToastCenterTelemetry@@QEAAXXZ @ 0x180439FF4 (-StartActivity@EM_HideInHolographic@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18043A340 (-Stop@-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::HideInHolographic(CToastCenterExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  int v7[2]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v7,
    (__int64)"EM_HideInHolographic");
  *(_QWORD *)v7 = &ToastCenterTelemetry::EM_HideInHolographic::`vftable';
  ToastCenterTelemetry::EM_HideInHolographic::StartActivity((ToastCenterTelemetry::EM_HideInHolographic *)v7);
  v2 = *((_QWORD *)this + 97);
  if ( !v2 || !*((_QWORD *)this + 99) )
  {
LABEL_7:
    wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v7);
    v4 = 0;
    goto LABEL_8;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 56LL))(
         v2,
         *((_QWORD *)this + 15),
         *((_QWORD *)this + 16));
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = CToastCenterExperienceManager::PositionView(this);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6F8,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6F5,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_8:
  ToastCenterTelemetry::EM_HideInHolographic::~EM_HideInHolographic((ToastCenterTelemetry::EM_HideInHolographic *)v7);
  return v4;
}
