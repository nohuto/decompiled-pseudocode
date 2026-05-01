/*
 * XREFs of ?ReturnFocus@CToastCenterExperienceManager@@AEAAJXZ @ 0x18043970C
 * Callers:
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804378C0 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180056D78 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0$$V@EM_ReturnFocusActivity@ToastCenterTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1804342A0 (--$-0$$V@EM_ReturnFocusActivity@ToastCenterTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??1EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1804355F8 (--1EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?ReturnedToActiveApp@EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180439960 (-ReturnedToActiveApp@EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?ReturnedToLock@EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1804399D0 (-ReturnedToLock@EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CToastCenterExperienceManager::ReturnFocus(ExperienceManagerUtils **this, char a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v3; // rdx
  HWND v4; // rdi
  ExperienceManagerUtils *v5; // rdi
  __int64 (__fastcall *v6)(ExperienceManagerUtils *, GUID *, GUID *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // edx
  __int64 v13[2]; // [rsp+30h] [rbp-168h] BYREF
  _QWORD v14[40]; // [rsp+40h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  ToastCenterTelemetry::EM_ReturnFocusActivity::EM_ReturnFocusActivity((__int64)v14, a2);
  v4 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(this[16], v3);
  if ( !this[16] || !this[89] || GetForegroundWindow() != v4 )
  {
    v11 = -2147418113;
    goto LABEL_16;
  }
  if ( !*((_BYTE *)this + 464) )
  {
    v10 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, __int64))(*(_QWORD *)this[89] + 24LL))(
            this[89],
            0xFFFFLL);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D8,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_17;
    }
    ToastCenterTelemetry::EM_ReturnFocusActivity::ReturnedToActiveApp((ToastCenterTelemetry::EM_ReturnFocusActivity *)v14);
LABEL_14:
    v11 = 0;
LABEL_16:
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v14, v11);
    v8 = 0;
    goto LABEL_17;
  }
  v13[0] = 0LL;
  v5 = this[84];
  v6 = *(__int64 (__fastcall **)(ExperienceManagerUtils *, GUID *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v13);
  v7 = v6(v5, &IID_ILockScreenViewManager, &GUID_053bf212_5a22_4a75_87eb_dfca4ea90e02, v13);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13[0] + 80LL))(v13[0]);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 979LL;
      goto LABEL_9;
    }
    ToastCenterTelemetry::EM_ReturnFocusActivity::ReturnedToLock((ToastCenterTelemetry::EM_ReturnFocusActivity *)v14);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v13);
    goto LABEL_14;
  }
  v9 = 978LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v13);
LABEL_17:
  ToastCenterTelemetry::EM_ReturnFocusActivity::~EM_ReturnFocusActivity((ToastCenterTelemetry::EM_ReturnFocusActivity *)v14);
  return v8;
}
