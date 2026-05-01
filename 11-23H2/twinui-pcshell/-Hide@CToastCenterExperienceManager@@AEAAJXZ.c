/*
 * XREFs of ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800568DC
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_d583631eb51550469083699cb211e6c4___1_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::Invoke @ 0x180056860 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180056860.c)
 *     ?OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1801A1F50 (-OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804378C0 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 *     wil::details::functor_wrapper_void__lambda_93cac9cad1f570776af354fa4b60c55e__&_::Run @ 0x180439A50 (wil--details--functor_wrapper_void__lambda_93cac9cad1f570776af354fa4b60c55e__-_--Run.c)
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18002C12C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ??1EM_HideActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180056970 (--1EM_HideActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??$?0$$V@EM_HideActivity@ToastCenterTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18005699C (--$-0$$V@EM_HideActivity@ToastCenterTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ?NoOp_AlreadyHidden@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180056BDC (-NoOp_AlreadyHidden@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180056D78 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1804361F8 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?HidingInHolographic@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180436314 (-HidingInHolographic@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::Hide(CToastCenterExperienceManager *this)
{
  unsigned int v2; // ebx
  int v4; // eax
  __int64 v5; // rdx
  int v6[80]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  ToastCenterTelemetry::EM_HideActivity::EM_HideActivity(v6);
  *((_OWORD *)this + 40) = 0LL;
  if ( *((_DWORD *)this + 36) == 2 )
  {
    if ( *((_QWORD *)this + 97)
      && (ToastCenterTelemetry::EM_HideActivity::HidingInHolographic((ToastCenterTelemetry::EM_HideActivity *)v6),
          v4 = CToastCenterExperienceManager::HideInHolographic(this),
          v2 = v4,
          v4 < 0) )
    {
      v5 = 954LL;
    }
    else
    {
      v4 = CSingleViewShellExperience::Hide((__int64)this + 104, 0LL);
      v2 = v4;
      if ( v4 >= 0 )
        goto LABEL_3;
      v5 = 957LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      v6[0]);
    goto LABEL_4;
  }
  ToastCenterTelemetry::EM_HideActivity::NoOp_AlreadyHidden((ToastCenterTelemetry::EM_HideActivity *)v6);
LABEL_3:
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v6, 0LL);
  v2 = 0;
LABEL_4:
  ToastCenterTelemetry::EM_HideActivity::~EM_HideActivity((ToastCenterTelemetry::EM_HideActivity *)v6);
  return v2;
}
