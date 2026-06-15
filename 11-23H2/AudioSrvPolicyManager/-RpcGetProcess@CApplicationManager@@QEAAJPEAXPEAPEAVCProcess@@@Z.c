/*
 * XREFs of ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033A0
 * Callers:
 *     PbmSetSmtcSubscriptionState @ 0x1800028F0 (PbmSetSmtcSubscriptionState.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180002B60 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180002C90 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     PbmCastingAppStateChanged @ 0x1800312A0 (PbmCastingAppStateChanged.c)
 *     PbmGetSoundLevel @ 0x180031400 (PbmGetSoundLevel.c)
 *     PbmIsPlaying @ 0x180031510 (PbmIsPlaying.c)
 *     PbmPlayToStreamStateChanged @ 0x180031670 (PbmPlayToStreamStateChanged.c)
 *     PbmRegisterAppClosureNotification @ 0x180031780 (PbmRegisterAppClosureNotification.c)
 *     PbmRegisterAppManagerNotification @ 0x1800317F0 (PbmRegisterAppManagerNotification.c)
 *     PbmRegisterPlaybackManagerNotifications @ 0x180031860 (PbmRegisterPlaybackManagerNotifications.c)
 *     PbmSetScreenReaderState @ 0x180031AF0 (PbmSetScreenReaderState.c)
 *     PbmUnregisterAppClosureNotification @ 0x180031C30 (PbmUnregisterAppClosureNotification.c)
 *     PbmUnregisterAppManagerNotification @ 0x180031CE0 (PbmUnregisterAppManagerNotification.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180031D50 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180002860 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x180005280 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x180005A00 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A0E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000B5A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18000B7F0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18000E310 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     GetAssignedAccessTypeForUser @ 0x18000FF10 (GetAssignedAccessTypeForUser.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800103FC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113A0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180015DBC (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset @ 0x180015E6C (wil--details--lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___--reset.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016C6C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180017648 (memset_0.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001DFCC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     WPP_SF_d @ 0x18001F1F8 (WPP_SF_d.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800241D0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcess@@@Z @ 0x180025870 (-AddHead@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAPEAU__POSITION.c)
 *     ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18002975C (-RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ??0CProcess@@QEAA@XZ @ 0x18002C274 (--0CProcess@@QEAA@XZ.c)
 *     ?ReadBackgroundAudioPlaybackCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x18002E2F8 (-ReadBackgroundAudioPlaybackCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x18002E3A4 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x18002E530 (-ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x18002E5C8 (-ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?ReadVoipCallCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x18002E664 (-ReadVoipCallCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18002E76C (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002F048 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18002F5DC (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18002FB54 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180045CA0 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CApplicationManager::RpcGetProcess(CApplicationManager *this, void *a2, struct CProcess **a3)
{
  struct CProcess **v3; // rdi
  CApplicationManager *v5; // r15
  int v6; // r12d
  RPC_STATUS v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // r14d
  RTL_SRWLOCK *v11; // r13
  _QWORD *v12; // rax
  signed __int32 *v13; // rdx
  signed __int32 i; // eax
  struct _RTL_CRITICAL_SECTION *v15; // r14
  _QWORD *v16; // rcx
  signed __int32 *v17; // rdx
  signed __int32 j; // eax
  unsigned int v19; // eax
  unsigned int LastError; // ebx
  struct _RTL_CRITICAL_SECTION *v21; // rcx
  HANDLE CurrentThread; // rax
  const char *v23; // r9
  unsigned int v24; // eax
  HLOCAL v25; // rcx
  char *v26; // rbx
  HANDLE v27; // rax
  const char *v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  _WORD *v31; // rdi
  void *v32; // rsi
  int v33; // eax
  signed int v34; // eax
  HLOCAL v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // r9
  unsigned __int16 **v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  _WORD *v41; // rax
  bool v42; // al
  HANDLE v43; // r14
  DWORD v44; // r15d
  const char *v45; // r9
  unsigned int v46; // r14d
  int v47; // eax
  HLOCAL v48; // rcx
  unsigned int PackageClaims; // eax
  CApplicationManager *v50; // rcx
  unsigned int v51; // eax
  int v52; // eax
  CApplicationManager *v53; // rcx
  int v54; // eax
  CApplicationManager *v55; // rcx
  HLOCAL v56; // rcx
  int v57; // eax
  CApplicationManager *v58; // rcx
  HLOCAL v59; // rcx
  int v60; // eax
  LONG v61; // eax
  bool v62; // sf
  DWORD v63; // r14d
  const char *v64; // r9
  HLOCAL v65; // r14
  int AssignedAccessTypeForUser; // eax
  int v67; // eax
  const char *v68; // r9
  HLOCAL v69; // rcx
  const char *v70; // r9
  PSID *v71; // r15
  const char *v72; // r9
  signed int v73; // eax
  bool v74; // sf
  struct _RTL_CRITICAL_SECTION *v75; // rcx
  signed int v76; // eax
  bool v77; // sf
  BOOL v78; // r15d
  void *v79; // rax
  int v80; // r15d
  volatile int *v81; // rdx
  struct _RTL_CRITICAL_SECTION *v82; // rcx
  struct CProcess *v83; // r8
  ATL::CAtlException *v84; // rbx
  int v85; // eax
  volatile int *v86; // rdx
  UINT32 *v87; // rbx
  __int64 v88; // [rsp+0h] [rbp-358h] BYREF
  PDWORD ReturnLength; // [rsp+20h] [rbp-338h]
  unsigned __int16 *p_pv; // [rsp+28h] [rbp-330h]
  HANDLE TargetHandle; // [rsp+30h] [rbp-328h]
  unsigned __int16 *v92; // [rsp+38h] [rbp-320h]
  char v93; // [rsp+B0h] [rbp-2A8h] BYREF
  char v94; // [rsp+B1h] [rbp-2A7h]
  struct CProcess *v95; // [rsp+B8h] [rbp-2A0h] BYREF
  bool v96; // [rsp+C0h] [rbp-298h]
  void *TokenHandle; // [rsp+C8h] [rbp-290h] BYREF
  HLOCAL hMem; // [rsp+D0h] [rbp-288h] BYREF
  char *v99; // [rsp+D8h] [rbp-280h] BYREF
  HANDLE hObject; // [rsp+E0h] [rbp-278h] BYREF
  int v101; // [rsp+E8h] [rbp-270h] BYREF
  char *v102; // [rsp+F0h] [rbp-268h] BYREF
  ULONG ProcessInformationLength; // [rsp+F8h] [rbp-260h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+100h] [rbp-258h]
  PSID Sid; // [rsp+108h] [rbp-250h] BYREF
  HLOCAL v106; // [rsp+110h] [rbp-248h] BYREF
  HLOCAL v107; // [rsp+118h] [rbp-240h] BYREF
  int v108; // [rsp+120h] [rbp-238h] BYREF
  unsigned int Pid; // [rsp+124h] [rbp-234h] BYREF
  UINT32 packageFamilyNameLength[2]; // [rsp+128h] [rbp-230h] BYREF
  LPVOID pv; // [rsp+130h] [rbp-228h] BYREF
  HLOCAL v112; // [rsp+138h] [rbp-220h]
  unsigned int v113; // [rsp+140h] [rbp-218h]
  unsigned int v114; // [rsp+144h] [rbp-214h] BYREF
  UINT32 packageRelativeApplicationIdLength[2]; // [rsp+148h] [rbp-210h] BYREF
  int v116; // [rsp+150h] [rbp-208h] BYREF
  int TokenInformation; // [rsp+154h] [rbp-204h] BYREF
  int v118; // [rsp+158h] [rbp-200h] BYREF
  int v119; // [rsp+15Ch] [rbp-1FCh] BYREF
  BOOL v120; // [rsp+160h] [rbp-1F8h]
  int v121; // [rsp+164h] [rbp-1F4h] BYREF
  CApplicationManager *v122; // [rsp+168h] [rbp-1F0h] BYREF
  unsigned int v123; // [rsp+170h] [rbp-1E8h] BYREF
  int v124; // [rsp+174h] [rbp-1E4h] BYREF
  DWORD v125; // [rsp+178h] [rbp-1E0h] BYREF
  HANDLE v126; // [rsp+180h] [rbp-1D8h] BYREF
  LPVOID v127; // [rsp+188h] [rbp-1D0h]
  _WORD *v128; // [rsp+190h] [rbp-1C8h]
  struct CProcess **v129; // [rsp+198h] [rbp-1C0h]
  CApplicationManager *v130; // [rsp+1A0h] [rbp-1B8h]
  struct CProcess **v131; // [rsp+1A8h] [rbp-1B0h]
  int v132[2]; // [rsp+1B0h] [rbp-1A8h] BYREF
  _QWORD v133[2]; // [rsp+1B8h] [rbp-1A0h] BYREF
  char v134[8]; // [rsp+1C8h] [rbp-190h] BYREF
  char v135[8]; // [rsp+1D0h] [rbp-188h] BYREF
  ATL::CAtlException *v136[3]; // [rsp+1D8h] [rbp-180h] BYREF
  char v137; // [rsp+1F0h] [rbp-168h]
  WCHAR packageFamilyName[72]; // [rsp+200h] [rbp-158h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+290h] [rbp-C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+0h]

  v3 = a3;
  v129 = a3;
  v131 = a3;
  v5 = g_ApplicationManager;
  v122 = g_ApplicationManager;
  v130 = g_ApplicationManager;
  v6 = 0;
  *a3 = 0LL;
  v7 = I_RpcBindingInqLocalClientPID(a2, &Pid);
  v8 = v7;
  if ( v7 > 0 )
    v8 = (unsigned __int16)v7 | 0x80070000;
  if ( (v8 & 0x80000000) != 0 )
  {
    if ( v8 == -2147023171 )
      return 2147944125LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x316,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)v8,
      (int)ReturnLength);
    return v8;
  }
  v10 = Pid;
  v95 = 0LL;
  v11 = (RTL_SRWLOCK *)((char *)v5 + 120);
  AcquireSRWLockShared((PSRWLOCK)v5 + 15);
  v12 = (_QWORD *)*((_QWORD *)v5 + 16);
  while ( v12 )
  {
    v13 = (signed __int32 *)v12[2];
    v12 = (_QWORD *)*v12;
    if ( !v13[104] && v13[40] == v10 )
    {
      for ( i = v13[5]; i != 0x7FFFFFFF; i = v13[5] )
      {
        if ( i == _InterlockedCompareExchange(v13 + 5, i + 1, i) )
          break;
      }
      v95 = (struct CProcess *)v13;
      break;
    }
  }
  if ( v5 != (CApplicationManager *)-120LL )
    ReleaseSRWLockShared((PSRWLOCK)v5 + 15);
  if ( v95 )
  {
LABEL_267:
    *v3 = v95;
    return 0LL;
  }
  v15 = (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 32);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v5 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 32));
  v133[1] = (char *)v5 + 32;
  v113 = Pid;
  v95 = 0LL;
  AcquireSRWLockShared((PSRWLOCK)v5 + 15);
  v16 = (_QWORD *)*((_QWORD *)v5 + 16);
  while ( v16 )
  {
    v17 = (signed __int32 *)v16[2];
    v16 = (_QWORD *)*v16;
    if ( !v17[104] && v17[40] == v113 )
    {
      for ( j = v17[5]; j != 0x7FFFFFFF; j = v17[5] )
      {
        if ( j == _InterlockedCompareExchange(v17 + 5, j + 1, j) )
          break;
      }
      v95 = (struct CProcess *)v17;
      break;
    }
  }
  if ( v5 != (CApplicationManager *)-120LL )
    ReleaseSRWLockShared((PSRWLOCK)v5 + 15);
  if ( v95 )
  {
LABEL_265:
    if ( v15 )
      LeaveCriticalSection(v15);
    goto LABEL_267;
  }
  v19 = RpcImpersonateClient(a2);
  if ( v19 )
  {
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x327,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  (const char *)v19,
                  (unsigned int)ReturnLength);
    if ( v5 == (CApplicationManager *)-32LL )
    {
LABEL_33:
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v95);
      return LastError;
    }
    goto LABEL_31;
  }
  v94 = 1;
  TokenHandle = 0LL;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x32B,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  v23);
    goto LABEL_36;
  }
  hMem = 0LL;
  v106 = 0LL;
  v24 = GetTokenInformation(TokenHandle, (unsigned __int16 **)&v106, &v114, (unsigned __int16 **)&hMem, &v123);
  if ( v24 )
  {
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x331,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  (const char *)v24,
                  (unsigned int)ReturnLength);
    v25 = hMem;
    if ( !hMem )
      goto LABEL_41;
    goto LABEL_40;
  }
  v26 = (char *)OpenProcess(0x101000u, 0, Pid);
  v102 = v26;
  if ( !v26 && GetLastError() == 5 )
  {
    v27 = OpenProcess(0x100400u, 0, Pid);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v102,
      v27);
    v26 = v102;
    if ( (unsigned __int64)(v102 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x341,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        v28);
  }
  v113 = 0;
  TokenInformation = 0;
  v125 = 0;
  if ( GetTokenInformation(TokenHandle, TokenUIAccess, &TokenInformation, 4u, &v125) )
    v113 = TokenInformation != 0;
  v126 = (HANDLE)-1LL;
  v31 = 0LL;
  v128 = 0LL;
  v32 = 0LL;
  v127 = 0LL;
  v112 = 0LL;
  pv = 0LL;
  v107 = 0LL;
  if ( !v26 )
    goto LABEL_67;
  v33 = NtQueryInformationProcess(v26, ProcessImageFileName, 0LL, 0, &ProcessInformationLength);
  if ( (int)(v33 + 0x80000000) >= 0 && v33 != -1073741820 )
    goto LABEL_52;
  v35 = LocalAlloc(0x40u, ProcessInformationLength);
  v112 = v35;
  if ( !v35 )
  {
    LastError = -2147024882;
    CoTaskMemFree(pv);
    CoTaskMemFree(v107);
    LocalFree(v112);
LABEL_56:
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, LastError);
    }
    AudPolicyLogError("GetProcessModuleNameAndAppId", 351, LastError);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x357,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)LastError,
      (int)ReturnLength);
    goto LABEL_61;
  }
  v33 = NtQueryInformationProcess(v26, ProcessImageFileName, v35, ProcessInformationLength, &ProcessInformationLength);
  if ( v33 < 0 )
  {
LABEL_52:
    RtlSetLastWin32ErrorAndNtStatusFromNtStatus(v33);
    v34 = GetLastError();
    LODWORD(v99) = v34;
    if ( v34 > 0 )
      LODWORD(v99) = (unsigned __int16)v34 | 0x80070000;
    goto LABEL_54;
  }
  v37 = (unsigned __int64)*((unsigned __int16 *)v112 + 1) >> 1;
  p_pv = (unsigned __int16 *)&pv;
  LODWORD(v99) = _AllocStringWorker<CTCoAllocPolicy>(&pv, v36, *((_QWORD *)v112 + 1), v37);
  if ( (int)v99 < 0 )
    goto LABEL_54;
  if ( !pv )
  {
LABEL_67:
    p_pv = (unsigned __int16 *)&pv;
    LODWORD(v99) = _AllocStringWorker<CTCoAllocPolicy>(v30, v29, &unk_1800522F8, 0LL);
    if ( (int)v99 < 0 )
      goto LABEL_54;
  }
  CallerIdentity::GetProcessAppId(v26, &v107, v38);
  v41 = v107;
  if ( v107 )
  {
LABEL_71:
    v32 = pv;
    v127 = pv;
    v31 = v41;
    v128 = v41;
    pv = 0LL;
    v107 = 0LL;
    CoTaskMemFree(0LL);
    CoTaskMemFree(0LL);
    LocalFree(v112);
    goto LABEL_72;
  }
  p_pv = (unsigned __int16 *)&v107;
  LODWORD(v99) = _AllocStringWorker<CTCoAllocPolicy>(v40, v39, &unk_1800522F8, 0LL);
  if ( (int)v99 >= 0 )
  {
    v41 = v107;
    goto LABEL_71;
  }
LABEL_54:
  CoTaskMemFree(pv);
  CoTaskMemFree(v107);
  LocalFree(v112);
  if ( (int)v99 < 0 )
  {
    LastError = (unsigned int)v99;
    goto LABEL_56;
  }
LABEL_72:
  hObject = 0LL;
  if ( (int)AppModelPolicy_GetPolicy_Internal(-6LL, 1LL, &v124, v135, v134) < 0
    || (LODWORD(v112) = 1, (unsigned int)(v124 - 65537) > 1) )
  {
    LODWORD(v112) = 0;
  }
  v42 = (int)AppModelPolicy_GetPolicy_Internal(-6LL, 14LL, &v101, v133, v132) >= 0 && v101 == 917505;
  v96 = v42;
  v116 = 0;
  v108 = 0;
  LODWORD(v99) = 0;
  v118 = 0;
  v119 = 0;
  LOBYTE(v120) = 0;
  if ( *v31 )
  {
    v43 = hObject;
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      v44 = GetLastError();
      CloseHandle(v43);
      SetLastError(v44);
      v5 = v122;
    }
    hObject = 0LL;
    if ( !OpenProcessToken(v26, 8u, &hObject) )
    {
      v46 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x373,
              (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
              v45);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      CoTaskMemFree(v31);
      if ( v32 )
        CoTaskMemFree(v32);
      if ( (unsigned __int64)(v26 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v26);
      if ( hMem )
        LocalFree(hMem);
      if ( v106 )
        LocalFree(v106);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      RpcRevertToSelf();
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return v46;
    }
    v47 = RtlQueryTokenHostIdAsUlong64(hObject, &v126);
    if ( v47 < 0 )
    {
      LastError = wil::details::in1diag3::Return_NtStatus(
                    retaddr,
                    (void *)0x374,
                    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                    (const char *)(unsigned int)v47,
                    (int)ReturnLength);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      CoTaskMemFree(v31);
      if ( v32 )
        CoTaskMemFree(v32);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v102);
      if ( hMem )
        LocalFree(hMem);
      v48 = v106;
      if ( v106 )
        goto LABEL_105;
      goto LABEL_106;
    }
    v15 = lpCriticalSection;
    v42 = v96;
  }
  if ( v42 && v114 )
  {
    Sid = 0LL;
    v92 = 0LL;
    TargetHandle = &Sid;
    p_pv = 0LL;
    ReturnLength = 0LL;
    PackageClaims = RtlQueryPackageClaims(-6LL, 0LL, 0LL, 0LL);
    if ( PackageClaims )
    {
      LastError = wil::details::in1diag3::Return_Win32(
                    retaddr,
                    (void *)0x37B,
                    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                    (const char *)PackageClaims,
                    (unsigned int)ReturnLength);
LABEL_113:
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      CoTaskMemFree(v31);
      if ( v32 )
        CoTaskMemFree(v32);
LABEL_61:
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v102);
      v25 = hMem;
      if ( !hMem )
      {
LABEL_41:
        if ( v106 )
          LocalFree(v106);
LABEL_36:
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
        wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v93);
        if ( !v15 )
          goto LABEL_33;
LABEL_31:
        v21 = v15;
LABEL_32:
        LeaveCriticalSection(v21);
        goto LABEL_33;
      }
LABEL_40:
      LocalFree(v25);
      goto LABEL_41;
    }
    v51 = (unsigned int)Sid >> 4;
    LOBYTE(v51) = ((unsigned __int8)Sid & 0x10) != 0;
    v120 = v51;
    v52 = CApplicationManager::ReadVoipCallCapability(v50, (void *)0xFFFFFFFFFFFFFFFALL, &v116);
    v101 = v52;
    if ( v52 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x380,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v52,
        (int)ReturnLength);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      CoTaskMemFree(v31);
      if ( v32 )
        CoTaskMemFree(v32);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v102);
      if ( hMem )
        LocalFree(hMem);
      if ( v106 )
        LocalFree(v106);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
      wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v93);
      if ( !v15 )
        goto LABEL_124;
LABEL_123:
      LeaveCriticalSection(v15);
LABEL_124:
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v95);
      return (unsigned int)v101;
    }
    v54 = CApplicationManager::ReadBackgroundAudioPlaybackCapability(
            v53,
            (void *)0xFFFFFFFFFFFFFFFALL,
            &v108,
            (int *)&v99);
    v101 = v54;
    if ( v54 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x385,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v54,
        (int)ReturnLength);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      CoTaskMemFree(v31);
      if ( v32 )
        CoTaskMemFree(v32);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v102);
      if ( hMem )
        LocalFree(hMem);
      v56 = v106;
      if ( v106 )
        goto LABEL_131;
      goto LABEL_132;
    }
    v57 = CApplicationManager::ReadBackgroundMediaRecordingCapability(v55, (void *)0xFFFFFFFFFFFFFFFALL, &v118);
    v101 = v57;
    if ( v57 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x389,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v57,
        (int)ReturnLength);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      CoTaskMemFree(v31);
      if ( v32 )
        CoTaskMemFree(v32);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v102);
      v59 = hMem;
      if ( hMem )
LABEL_138:
        LocalFree(v59);
LABEL_139:
      v56 = v106;
      if ( v106 )
LABEL_131:
        LocalFree(v56);
LABEL_132:
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
      wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v93);
      if ( !v15 )
        goto LABEL_124;
      goto LABEL_123;
    }
    v60 = CApplicationManager::ReadUserSigninSupportCapability(v58, (void *)0xFFFFFFFFFFFFFFFALL, &v119);
    v101 = v60;
    if ( v60 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38D,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v60,
        (int)ReturnLength);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      CoTaskMemFree(v31);
      if ( v32 )
        CoTaskMemFree(v32);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v102);
      v59 = hMem;
      if ( hMem )
        goto LABEL_138;
      goto LABEL_139;
    }
  }
  if ( !hMem )
  {
    memset_0(packageFamilyName, 0, 0x82uLL);
    memset_0(packageRelativeApplicationId, 0, 0x84uLL);
    packageFamilyNameLength[0] = 65;
    packageRelativeApplicationIdLength[0] = 66;
    v61 = ParseApplicationUserModelId(
            v31,
            packageFamilyNameLength,
            packageFamilyName,
            packageRelativeApplicationIdLength,
            packageRelativeApplicationId);
    v62 = v61 < 0;
    if ( v61 > 0 )
      v62 = 1;
    if ( !v62 )
    {
      Sid = 0LL;
      if ( (int)AppContainerDeriveSidFromMoniker(packageFamilyName, &Sid) >= 0 )
      {
        v107 = hMem;
        if ( hMem )
        {
          v63 = GetLastError();
          LocalFree(v107);
          SetLastError(v63);
          v15 = lpCriticalSection;
        }
        hMem = 0LL;
        if ( !ConvertSidToStringSidW(Sid, (LPWSTR *)&hMem) )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x39C,
                        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                        v64);
          if ( Sid )
            RtlFreeSid(Sid);
          goto LABEL_113;
        }
      }
      if ( Sid )
        RtlFreeSid(Sid);
    }
  }
  v94 = 0;
  RpcRevertToSelf();
  v65 = v106;
  AssignedAccessTypeForUser = GetAssignedAccessTypeForUser((unsigned __int16 *)v106);
  v101 = AssignedAccessTypeForUser == 1;
  if ( !v96 || v108 )
  {
    v108 = 1;
  }
  else
  {
    v67 = CApplicationManager::ReadBackgroundAudioTaskCapability(
            (CApplicationManager *)(AssignedAccessTypeForUser == 1),
            hObject,
            &v108,
            (int *)&v99);
    packageFamilyNameLength[0] = v67;
    if ( v67 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B2,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v67,
        (int)ReturnLength);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      CoTaskMemFree(v31);
      if ( v32 )
        CoTaskMemFree(v32);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v102);
      if ( hMem )
        LocalFree(hMem);
      if ( v65 )
        LocalFree(v65);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
      wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v93);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v95);
      return packageFamilyNameLength[0];
    }
  }
  v121 = 0;
  if ( v114 && !(unsigned int)CheckTokenCapability(TokenHandle, *((_QWORD *)v5 + 2), &v121) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3BE,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  v68);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
    CoTaskMemFree(v31);
    if ( v32 )
      CoTaskMemFree(v32);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v102);
    v69 = hMem;
    if ( hMem )
      goto LABEL_176;
    goto LABEL_177;
  }
  packageRelativeApplicationIdLength[0] = 0;
  GetTokenInformation(TokenHandle, TokenIntegrityLevel, 0LL, 0, packageRelativeApplicationIdLength);
  if ( GetLastError() != 122 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3C6,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  v70);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
    CoTaskMemFree(v31);
    if ( !v32 )
      goto LABEL_182;
    goto LABEL_181;
  }
  v71 = (PSID *)LocalAlloc(0x40u, packageRelativeApplicationIdLength[0]);
  if ( !v71 )
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C9,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)0x8007000ELL,
      (int)ReturnLength);
LABEL_279:
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
    CoTaskMemFree(v31);
    if ( !v32 )
    {
LABEL_182:
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v102);
      v69 = hMem;
      if ( hMem )
LABEL_176:
        LocalFree(v69);
LABEL_177:
      if ( v65 )
      {
        v48 = v65;
LABEL_105:
        LocalFree(v48);
      }
LABEL_106:
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
      wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v93);
      v21 = lpCriticalSection;
      if ( !lpCriticalSection )
        goto LABEL_33;
      goto LABEL_32;
    }
LABEL_181:
    CoTaskMemFree(v32);
    goto LABEL_182;
  }
  if ( !GetTokenInformation(
          TokenHandle,
          TokenIntegrityLevel,
          v71,
          packageRelativeApplicationIdLength[0],
          packageRelativeApplicationIdLength) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3CB,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  v72);
    LocalFree(v71);
    goto LABEL_279;
  }
  Sid = GetSidSubAuthorityCount(*v71);
  v73 = GetLastError();
  ProcessInformationLength = v73;
  v74 = v73 < 0;
  if ( v73 > 0 )
  {
    v73 = (unsigned __int16)v73 | 0x80070000;
    ProcessInformationLength = v73;
    v74 = v73 < 0;
  }
  if ( v74 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D0,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v73,
      (int)ReturnLength);
    LocalFree(v71);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
    CoTaskMemFree(v31);
    if ( v32 )
      CoTaskMemFree(v32);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v102);
    if ( hMem )
      LocalFree(hMem);
    if ( v65 )
      LocalFree(v65);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
    wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v93);
    v75 = lpCriticalSection;
    if ( !lpCriticalSection )
      goto LABEL_197;
    goto LABEL_196;
  }
  if ( Sid && *(_BYTE *)Sid )
  {
    packageFamilyNameLength[0] = *GetSidSubAuthority(*v71, (unsigned __int8)(*(_BYTE *)Sid - 1));
    v76 = GetLastError();
    ProcessInformationLength = v76;
    v77 = v76 < 0;
    if ( v76 > 0 )
    {
      v76 = (unsigned __int16)v76 | 0x80070000;
      ProcessInformationLength = v76;
      v77 = v76 < 0;
    }
    if ( v77 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D6,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v76,
        (int)ReturnLength);
      LocalFree(v71);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      CoTaskMemFree(v31);
      if ( v32 )
        CoTaskMemFree(v32);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v102);
      if ( hMem )
        LocalFree(hMem);
      if ( v65 )
        LocalFree(v65);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
      wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v93);
      v75 = lpCriticalSection;
      if ( !lpCriticalSection )
        goto LABEL_197;
LABEL_196:
      LeaveCriticalSection(v75);
LABEL_197:
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v95);
      return ProcessInformationLength;
    }
    packageFamilyNameLength[0] = packageFamilyNameLength[0] < 0x2000;
    LocalFree(v71);
    pv = hMem;
    v78 = v114 != 0;
    v95 = 0LL;
    v79 = operator new(0x318uLL, (const struct std::nothrow_t *)&std::nothrow);
    Sid = v79;
    v133[0] = v79;
    if ( !v79 )
    {
      v80 = -2147024882;
      goto LABEL_217;
    }
    *(_QWORD *)v132 = v79;
    v107 = CProcess::CProcess((CProcess *)v79);
    *(_QWORD *)packageRelativeApplicationIdLength = v107;
    Sid = 0LL;
    v80 = CProcess::RuntimeClassInitialize(
            (CProcess *)v107,
            v26,
            Pid,
            v123,
            (const unsigned __int16 *)v32,
            v31,
            v126,
            (const unsigned __int16 *)v65,
            v78,
            (const unsigned __int16 *)pv,
            (int)v112,
            v96,
            v116,
            v108,
            (int)v99,
            v118,
            v119,
            v101,
            v120,
            v121,
            packageFamilyNameLength[0]);
    if ( v80 < 0 )
    {
      if ( v107 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v107);
      Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&Sid);
LABEL_217:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3EF,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v80,
        (int)ReturnLength);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      CoTaskMemFree(v31);
      if ( v32 )
        CoTaskMemFree(v32);
      if ( (unsigned __int64)(v26 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v26);
      if ( hMem )
        LocalFree(hMem);
      if ( v65 )
        LocalFree(v65);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      v82 = lpCriticalSection;
      if ( !lpCriticalSection )
        goto LABEL_231;
      goto LABEL_230;
    }
    v83 = (struct CProcess *)v107;
    if ( v107 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v107 + 20), v81);
    v95 = v83;
    if ( v83 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v83);
    Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&Sid);
    *((_DWORD *)v95 + 115) = v113;
    v84 = v122;
    v85 = CApplicationManager::Register(v122, v95);
    v80 = v85;
    if ( v85 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F3,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v85,
        (int)ReturnLength);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      CoTaskMemFree(v31);
      if ( v32 )
        CoTaskMemFree(v32);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v102);
      if ( hMem )
        LocalFree(hMem);
      if ( v65 )
        LocalFree(v65);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
      wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v93);
      v82 = lpCriticalSection;
      if ( !lpCriticalSection )
        goto LABEL_231;
LABEL_230:
      LeaveCriticalSection(v82);
LABEL_231:
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v95);
      return (unsigned int)v80;
    }
    v136[1] = v84;
    v136[2] = (ATL::CAtlException *)&v95;
    v137 = 1;
    Sid = v11;
    AcquireSRWLockExclusive(v11);
    try
    {
      *(_QWORD *)packageFamilyNameLength = v11;
      v122 = v95;
      ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::AddHead((char *)v84 + 128, &v122);
    }
    catch ( ATL::CAtlException *v136 )
    {
      v86 = (volatile int *)&v88;
      v87 = (UINT32 *)v136[0];
      if ( *(_DWORD *)v136[0] == -1073741571 )
        _o__resetstkoflw();
      packageFamilyNameLength[0] = *v87;
      v65 = v106;
      v32 = v127;
      v31 = v128;
      v6 = packageFamilyNameLength[0];
      v11 = (RTL_SRWLOCK *)Sid;
      v84 = v130;
      v129 = v131;
    }
    if ( v11 )
      ReleaseSRWLockExclusive(v11);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3FC,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v6,
        (int)ReturnLength);
      CApplicationManager::Unregister(v84, v95);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      CoTaskMemFree(v31);
      if ( v32 )
        CoTaskMemFree(v32);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v102);
      if ( hMem )
        LocalFree(hMem);
      if ( v65 )
        LocalFree(v65);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
      wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v93);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v95);
      return (unsigned int)v6;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((struct CProcess *)((char *)v95 + 20), v86);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
    CoTaskMemFree(v31);
    if ( v32 )
      CoTaskMemFree(v32);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v102);
    if ( hMem )
      LocalFree(hMem);
    if ( v65 )
      LocalFree(v65);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
    wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v93);
    v3 = v129;
    v15 = lpCriticalSection;
    goto LABEL_265;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3D1,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
    (const char *)0x8000FFFFLL,
    (int)ReturnLength);
  LocalFree(v71);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
  CoTaskMemFree(v31);
  if ( v32 )
    CoTaskMemFree(v32);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v102);
  if ( hMem )
    LocalFree(hMem);
  if ( v65 )
    LocalFree(v65);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
  wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset(&v93);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v95);
  return 2147549183LL;
}
