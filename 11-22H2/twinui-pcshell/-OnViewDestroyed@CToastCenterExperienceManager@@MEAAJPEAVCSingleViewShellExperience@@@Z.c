/*
 * XREFs of ?OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180438240
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180056D78 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801AA05C (-LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$?0$$V@EM_ViewDestroyedActivity@ToastCenterTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180434400 (--$-0$$V@EM_ViewDestroyedActivity@ToastCenterTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@.c)
 *     ??1EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1804356D4 (--1EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1804361F8 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnViewDestroyed(
        CToastCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  LSTATUS ValueW; // eax
  bool v7; // zf
  unsigned int v8; // eax
  unsigned int pvData; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pdwType; // [rsp+44h] [rbp-BCh] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v13[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  ToastCenterTelemetry::EM_ViewDestroyedActivity::EM_ViewDestroyedActivity((__int64)v13, (char)a2);
  if ( !*((_QWORD *)this + 86)
    || (v3 = CToastCenterExperienceManager::HideInHolographic((CToastCenterExperienceManager *)((char *)this - 88)),
        v4 = v3,
        v3 >= 0) )
  {
    pdwType = 0;
    pcbData = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
               L"AllowAutoAppRestartOnCrash",
               0x10000012u,
               &pdwType,
               &pvData,
               &pcbData);
    if ( !ValueW )
    {
      if ( pdwType == 4 )
      {
        if ( pvData <= 1 )
        {
          v7 = pvData == 1;
          goto LABEL_11;
        }
      }
      else if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
      {
        ValueW = 0;
        v7 = (_WORD)pvData == 49;
LABEL_11:
        LOBYTE(ValueW) = v7;
        if ( !ValueW )
          goto LABEL_16;
      }
    }
    v8 = *((_DWORD *)this + 137);
    if ( v8 < 5 )
    {
      *((_DWORD *)this + 137) = v8 + 1;
      pdwType = 0;
      pcbData = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
        L"AllowAutoAppRestartOnCrash",
        0x10000012u,
        &pdwType,
        &pvData,
        &pcbData);
      v3 = CToastCenterExperienceManager::LookupToastQueue((CToastCenterExperienceManager *)((char *)this - 88));
      v4 = v3;
      if ( v3 < 0 )
      {
        v5 = 1322LL;
        goto LABEL_15;
      }
    }
LABEL_16:
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v13, 0);
    v4 = 0;
    goto LABEL_17;
  }
  v5 = 1309LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_17:
  ToastCenterTelemetry::EM_ViewDestroyedActivity::~EM_ViewDestroyedActivity((ToastCenterTelemetry::EM_ViewDestroyedActivity *)v13);
  return v4;
}
