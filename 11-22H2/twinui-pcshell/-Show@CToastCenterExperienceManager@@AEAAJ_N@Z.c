/*
 * XREFs of ?Show@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x180439CB0
 * Callers:
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804378C0 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18002B06C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180056D78 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$?0AEA_N@EM_ShowActivity@ToastCenterTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@AEA_N@Z @ 0x1804346C0 (--$-0AEA_N@EM_ShowActivity@ToastCenterTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@AEA_N@Z.c)
 *     ??1EM_ShowActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180435624 (--1EM_ShowActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?NoOp_AlreadyVisible@EM_ShowActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180436EA8 (-NoOp_AlreadyVisible@EM_ShowActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180439DCC (-ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?ShowingInHolographic@EM_ShowActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180439F84 (-ShowingInHolographic@EM_ShowActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x180747320 (-BringToForeground@CSingleViewShellExperience@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::Show(CToastCenterExperienceManager *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v8[4]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v9[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  LOBYTE(v8[0]) = a2;
  ToastCenterTelemetry::EM_ShowActivity::EM_ShowActivity((__int64)v9, a2, (char *)v8);
  if ( *((_DWORD *)this + 36) == 2 )
  {
    if ( a2 )
      CSingleViewShellExperience::BringToForeground((CToastCenterExperienceManager *)((char *)this + 104));
    else
      ToastCenterTelemetry::EM_ShowActivity::NoOp_AlreadyVisible((ToastCenterTelemetry::EM_ShowActivity *)v9);
    goto LABEL_12;
  }
  if ( !*((_QWORD *)this + 97)
    || *((_DWORD *)this + 196) != 1
    || (ToastCenterTelemetry::EM_ShowActivity::ShowingInHolographic((ToastCenterTelemetry::EM_ShowActivity *)v9),
        v4 = CToastCenterExperienceManager::ShowInHolographic(this),
        v5 = v4,
        v4 >= 0) )
  {
    v4 = CSingleViewShellExperience::Show(
           (__int64)this + 104,
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)(a2 == 0));
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 925LL;
      goto LABEL_8;
    }
LABEL_12:
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v9, 0);
    v5 = 0;
    goto LABEL_13;
  }
  v6 = 918LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_13:
  ToastCenterTelemetry::EM_ShowActivity::~EM_ShowActivity((ToastCenterTelemetry::EM_ShowActivity *)v9);
  return v5;
}
