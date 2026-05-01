/*
 * XREFs of ?UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ @ 0x18043D0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1804350B8 (--0-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1EM_UnregisterHolographicExecutor@ToastCenterTelemetry@@QEAA@XZ @ 0x18043567C (--1EM_UnregisterHolographicExecutor@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x180435AD4 (-ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell.c)
 *     ?StartActivity@EM_UnregisterHolographicExecutor@ToastCenterTelemetry@@QEAAXXZ @ 0x18043A29C (-StartActivity@EM_UnregisterHolographicExecutor@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18043A340 (-Stop@-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::UnregisterHolographicExecutor(CToastCenterExperienceManager *this)
{
  int v2; // edx
  int v3; // eax
  unsigned int v4; // ebx
  int v6[2]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v6,
    (__int64)"EM_UnregisterHolographicExecutor");
  *(_QWORD *)v6 = &ToastCenterTelemetry::EM_UnregisterHolographicExecutor::`vftable';
  ToastCenterTelemetry::EM_UnregisterHolographicExecutor::StartActivity((ToastCenterTelemetry::EM_UnregisterHolographicExecutor *)v6);
  if ( !*((_QWORD *)this + 90) )
    goto LABEL_5;
  RtlUnsubscribeWnfNotificationWaitForCompletion(*((_QWORD *)this + 47));
  *((_QWORD *)this + 47) = 0LL;
  v3 = CToastCenterExperienceManager::ChangeDisplayContext((__int64)this - 56, 0);
  v4 = v3;
  if ( v3 >= 0 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 90);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 92);
LABEL_5:
    wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64 *)v6,
      v2);
    v4 = 0;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x744,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_6:
  ToastCenterTelemetry::EM_UnregisterHolographicExecutor::~EM_UnregisterHolographicExecutor((ToastCenterTelemetry::EM_UnregisterHolographicExecutor *)v6);
  return v4;
}
