/*
 * XREFs of ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928
 * Callers:
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x18000C630 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     PbmCastingAppStateChanged @ 0x1800286E0 (PbmCastingAppStateChanged.c)
 *     PbmGetSoundLevel @ 0x180028840 (PbmGetSoundLevel.c)
 *     PbmIsPlaying @ 0x180028950 (PbmIsPlaying.c)
 *     PbmPlayToStreamStateChanged @ 0x180028AB0 (PbmPlayToStreamStateChanged.c)
 *     PbmRegisterAppClosureNotification @ 0x180028BC0 (PbmRegisterAppClosureNotification.c)
 *     PbmRegisterAppManagerNotification @ 0x180028C30 (PbmRegisterAppManagerNotification.c)
 *     PbmRegisterPlaybackManagerNotifications @ 0x180028CA0 (PbmRegisterPlaybackManagerNotifications.c)
 *     PbmSetScreenReaderState @ 0x180029000 (PbmSetScreenReaderState.c)
 *     PbmSetSmtcSubscriptionState @ 0x180029100 (PbmSetSmtcSubscriptionState.c)
 *     PbmUnregisterAppClosureNotification @ 0x1800292B0 (PbmUnregisterAppClosureNotification.c)
 *     PbmUnregisterAppManagerNotification @ 0x180029370 (PbmUnregisterAppManagerNotification.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x1800293E0 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     memset_0 @ 0x1800034E8 (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180006834 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$invoke@P6APEAXPEAX@ZAEAPEAX@wistd@@YAPEAX$$QEAP6APEAXPEAX@ZAEAPEAX@Z @ 0x180008374 (--$invoke@P6APEAXPEAX@ZAEAPEAX@wistd@@YAPEAX$$QEAP6APEAXPEAX@ZAEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000C5FC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?AddHead@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcess@@@Z @ 0x1800156A0 (-AddHead@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAPEAU__POSITION.c)
 *     ??$MakeAndInitialize@VCProcess@@V1@PEAXAEAKAEAKPEAGPEAGAEA_KPEAG_NPEAGAEA_NAEA_NAEAHAEAHAEAHAEAHAEAHAEAHAEA_NAEAHAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCProcess@@$$QEAPEAXAEAK2$$QEAPEAG3AEA_K3$$QEA_N3AEA_N6AEAH77777677@Z @ 0x18001E2A0 (--$MakeAndInitialize@VCProcess@@V1@PEAXAEAKAEAKPEAGPEAGAEA_KPEAG_NPEAGAEA_NAEA_NAEAHAEAHAEAHAEAH.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18001EE24 (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x18001EF74 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x18001FD18 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x180020184 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x180021AF0 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x180021C7C (-ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x180021D14 (-ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180021DB0 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800226D0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z @ 0x180024DEC (-TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180024E94 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800256B4 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     GetAssignedAccessTypeForUser @ 0x180041D88 (GetAssignedAccessTypeForUser.c)
 */

// Hidden C++ exception states: #wind=43
__int64 __fastcall CApplicationManager::RpcGetProcess(CApplicationManager *this, void *a2, struct CProcess **a3)
{
  struct CProcess **v3; // r14
  CApplicationManager *v5; // rdi
  RPC_STATUS v6; // eax
  unsigned int LastError; // ebx
  __int64 result; // rax
  int ProcessFromProcessId; // eax
  struct _RTL_CRITICAL_SECTION *v10; // r13
  struct CProcess *v11; // rcx
  int v12; // eax
  unsigned int v13; // eax
  HANDLE CurrentThread; // rax
  const char *v15; // r9
  unsigned int v16; // eax
  char *v17; // rbx
  const char *v18; // r9
  int ProcessModuleNameAndAppId; // eax
  unsigned int v20; // edi
  unsigned __int8 v21; // al
  unsigned __int8 v22; // di
  void *v23; // rsi
  DWORD v24; // edi
  const char *v25; // r9
  int v26; // eax
  unsigned int v27; // eax
  signed int v28; // eax
  bool v29; // sf
  signed int v30; // eax
  bool v31; // sf
  int v32; // eax
  int v33; // eax
  CApplicationManager *v34; // rcx
  int v35; // eax
  LONG v36; // eax
  bool v37; // sf
  void **v38; // rax
  const char *v39; // r9
  HLOCAL v40; // rdi
  int AssignedAccessTypeForUser; // eax
  int v42; // eax
  const char *v43; // r9
  unsigned int v44; // r14d
  const char *v45; // r9
  PSID *v46; // r14
  const char *v47; // r9
  signed int v48; // eax
  bool v49; // sf
  signed int v50; // eax
  bool v51; // sf
  unsigned __int16 *v52; // r14
  struct CProcess *v53; // rcx
  int v54; // eax
  int v55; // eax
  struct CProcess *v56; // rdx
  signed __int32 v57; // eax
  ATL::CAtlException *v58; // rbx
  unsigned __int8 v59[8]; // [rsp+B0h] [rbp-2F8h] BYREF
  struct CProcess *v60; // [rsp+B8h] [rbp-2F0h] BYREF
  char *v61; // [rsp+C0h] [rbp-2E8h]
  void *TokenHandle; // [rsp+C8h] [rbp-2E0h] BYREF
  HLOCAL hMem; // [rsp+D0h] [rbp-2D8h] BYREF
  char v64; // [rsp+D8h] [rbp-2D0h] BYREF
  char v65; // [rsp+D9h] [rbp-2CFh] BYREF
  bool v66; // [rsp+DAh] [rbp-2CEh] BYREF
  HANDLE v67; // [rsp+E0h] [rbp-2C8h] BYREF
  unsigned __int16 *v68; // [rsp+E8h] [rbp-2C0h] BYREF
  unsigned __int8 v69; // [rsp+F0h] [rbp-2B8h] BYREF
  unsigned __int8 v70[3]; // [rsp+F1h] [rbp-2B7h] BYREF
  unsigned int v71; // [rsp+F4h] [rbp-2B4h]
  int v72; // [rsp+F8h] [rbp-2B0h] BYREF
  HLOCAL v73; // [rsp+100h] [rbp-2A8h] BYREF
  unsigned int Pid; // [rsp+108h] [rbp-2A0h] BYREF
  DWORD TokenInformationLength; // [rsp+10Ch] [rbp-29Ch] BYREF
  HANDLE hObject; // [rsp+110h] [rbp-298h] BYREF
  char v77; // [rsp+119h] [rbp-28Fh]
  unsigned int v78; // [rsp+11Ch] [rbp-28Ch] BYREF
  unsigned int v79; // [rsp+120h] [rbp-288h] BYREF
  unsigned int v80; // [rsp+124h] [rbp-284h] BYREF
  CApplicationManager *v81; // [rsp+128h] [rbp-280h]
  int TokenInformation; // [rsp+130h] [rbp-278h] BYREF
  int v83; // [rsp+134h] [rbp-274h] BYREF
  int v84; // [rsp+138h] [rbp-270h] BYREF
  int v85; // [rsp+13Ch] [rbp-26Ch] BYREF
  int v86; // [rsp+140h] [rbp-268h] BYREF
  BOOL v87; // [rsp+144h] [rbp-264h] BYREF
  LPVOID pv; // [rsp+148h] [rbp-260h] BYREF
  HLOCAL (__stdcall *v89)(HLOCAL); // [rsp+150h] [rbp-258h] BYREF
  struct CProcess **v90; // [rsp+158h] [rbp-250h] BYREF
  __int64 (__fastcall *v91)(_QWORD); // [rsp+160h] [rbp-248h] BYREF
  PVOID (__stdcall *v92)(PSID); // [rsp+168h] [rbp-240h] BYREF
  PSID Sid; // [rsp+170h] [rbp-238h] BYREF
  struct CProcess **v94; // [rsp+178h] [rbp-230h] BYREF
  DWORD ReturnLength; // [rsp+180h] [rbp-228h] BYREF
  int v96; // [rsp+184h] [rbp-224h] BYREF
  int v97; // [rsp+188h] [rbp-220h] BYREF
  UINT32 packageRelativeApplicationIdLength; // [rsp+18Ch] [rbp-21Ch] BYREF
  unsigned int v99; // [rsp+190h] [rbp-218h] BYREF
  HANDLE v100; // [rsp+198h] [rbp-210h]
  UINT32 packageFamilyNameLength; // [rsp+1A0h] [rbp-208h] BYREF
  __int64 v102; // [rsp+1A8h] [rbp-200h] BYREF
  unsigned __int64 v103; // [rsp+1B0h] [rbp-1F8h] BYREF
  const unsigned __int16 *v104; // [rsp+1B8h] [rbp-1F0h] BYREF
  const unsigned __int16 *v105; // [rsp+1C0h] [rbp-1E8h] BYREF
  const unsigned __int16 *v106; // [rsp+1C8h] [rbp-1E0h] BYREF
  int v107[2]; // [rsp+1D0h] [rbp-1D8h] BYREF
  void *v108; // [rsp+1D8h] [rbp-1D0h] BYREF
  struct CProcess *v109; // [rsp+1E0h] [rbp-1C8h] BYREF
  PSID *v110; // [rsp+1E8h] [rbp-1C0h] BYREF
  __int64 (__fastcall *v111[2])(_QWORD); // [rsp+1F0h] [rbp-1B8h] BYREF
  __int64 v112; // [rsp+200h] [rbp-1A8h] BYREF
  int v113; // [rsp+208h] [rbp-1A0h] BYREF
  __int64 v114; // [rsp+210h] [rbp-198h] BYREF
  int v115; // [rsp+218h] [rbp-190h] BYREF
  HANDLE v116; // [rsp+220h] [rbp-188h]
  ATL::CAtlException *v117[3]; // [rsp+228h] [rbp-180h] BYREF
  char v118; // [rsp+240h] [rbp-168h]
  WCHAR packageFamilyName[72]; // [rsp+250h] [rbp-158h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+2E0h] [rbp-C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3A8h] [rbp+0h]

  v3 = a3;
  v94 = a3;
  v90 = a3;
  v5 = g_ApplicationManager;
  v81 = g_ApplicationManager;
  *a3 = 0LL;
  v6 = I_RpcBindingInqLocalClientPID(a2, &Pid);
  LastError = v6;
  if ( v6 > 0 )
    LastError = (unsigned __int16)v6 | 0x80070000;
  if ( (LastError & 0x80000000) != 0 )
  {
    result = 2147944125LL;
    if ( LastError == -2147023171 )
      return result;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x316,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)LastError);
    return LastError;
  }
  v60 = 0LL;
  ProcessFromProcessId = CApplicationManager::TryFindProcessFromProcessId(v5, Pid, &v60);
  LastError = ProcessFromProcessId;
  if ( ProcessFromProcessId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31B,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)ProcessFromProcessId);
    goto LABEL_9;
  }
  if ( v60 )
    goto LABEL_349;
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 32);
  v89 = (HLOCAL (__stdcall *)(HLOCAL))((char *)v5 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 32));
  v111[1] = (__int64 (__fastcall *)(_QWORD))((char *)v5 + 32);
  v11 = v60;
  v60 = 0LL;
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v11);
  v12 = CApplicationManager::TryFindProcessFromProcessId(v5, Pid, &v60);
  LastError = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x323,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v12);
    if ( v5 == (CApplicationManager *)-32LL )
      goto LABEL_9;
    goto LABEL_34;
  }
  if ( v60 )
  {
LABEL_347:
    if ( v10 )
      LeaveCriticalSection(v10);
LABEL_349:
    *v3 = v60;
    return 0LL;
  }
  v13 = RpcImpersonateClient(a2);
  if ( v13 )
  {
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  807LL,
                  (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  (const char *)v13);
    if ( v5 == (CApplicationManager *)-32LL )
      goto LABEL_9;
    goto LABEL_34;
  }
  v77 = 1;
  TokenHandle = 0LL;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x32B,
                  (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  v15);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    RpcRevertToSelf();
    if ( v5 == (CApplicationManager *)-32LL )
      goto LABEL_9;
    goto LABEL_34;
  }
  hMem = 0LL;
  v73 = 0LL;
  v16 = GetTokenInformation(TokenHandle, (unsigned __int16 **)&v73, &v78, (unsigned __int16 **)&hMem, &v99);
  if ( v16 )
  {
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  817LL,
                  (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  (const char *)v16);
    if ( hMem )
      LocalFree(hMem);
    if ( v73 )
      LocalFree(v73);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    RpcRevertToSelf();
    if ( v5 == (CApplicationManager *)-32LL )
      goto LABEL_9;
LABEL_34:
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 32));
LABEL_9:
    if ( v60 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v60);
    return LastError;
  }
  v17 = (char *)OpenProcess(0x101000u, 0, Pid);
  v100 = v17;
  if ( !v17 && GetLastError() == 5 )
  {
    v17 = (char *)OpenProcess(0x100400u, 0, Pid);
    v100 = v17;
    if ( (unsigned __int64)(v17 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x341,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        v18);
  }
  v71 = 0;
  TokenInformation = 0;
  ReturnLength = 0;
  if ( GetTokenInformation(TokenHandle, TokenUIAccess, &TokenInformation, 4u, &ReturnLength) )
    v71 = TokenInformation != 0;
  v103 = -1LL;
  pv = 0LL;
  v68 = 0LL;
  ProcessModuleNameAndAppId = GetProcessModuleNameAndAppId(v17, &v68, (unsigned __int16 **)&pv);
  v20 = ProcessModuleNameAndAppId;
  if ( ProcessModuleNameAndAppId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x357,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)ProcessModuleNameAndAppId);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v68 )
      CoTaskMemFree(v68);
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v17);
    if ( hMem )
      LocalFree(hMem);
    if ( v73 )
      LocalFree(v73);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    RpcRevertToSelf();
    if ( !v10 )
      goto LABEL_56;
    goto LABEL_55;
  }
  v67 = 0LL;
  if ( (int)AppModelPolicy_GetPolicy_Internal(-6LL, 1, &v96, &v113, &v112) < 0
    || (v21 = 1, (unsigned int)(v96 - 65537) > 1) )
  {
    v21 = 0;
  }
  v70[0] = v21;
  if ( (int)AppModelPolicy_GetPolicy_Internal(-6LL, 14, &v97, &v115, &v114) < 0 || (v22 = 1, v97 != 917505) )
    v22 = 0;
  v59[0] = v22;
  v69 = v22;
  v87 = 0;
  v72 = 0;
  v86 = 0;
  v85 = 0;
  v84 = 0;
  v66 = 0;
  v23 = pv;
  if ( *(_WORD *)pv )
  {
    hObject = v67;
    if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      v24 = GetLastError();
      CloseHandle(hObject);
      SetLastError(v24);
      v22 = v59[0];
    }
    v67 = 0LL;
    if ( !OpenProcessToken(v17, 8u, &v67) )
    {
      v20 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x373,
              (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
              v25);
      if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(v67);
      CoTaskMemFree(v23);
      if ( v68 )
        CoTaskMemFree(v68);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v73 )
        LocalFree(v73);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      RpcRevertToSelf();
      if ( !v10 )
        goto LABEL_56;
      goto LABEL_55;
    }
    v26 = RtlQueryTokenHostIdAsUlong64(v67, &v103);
    if ( v26 < 0 )
    {
      v20 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0x374,
              (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
              (const char *)(unsigned int)v26);
      if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(v67);
      CoTaskMemFree(v23);
      if ( v68 )
        CoTaskMemFree(v68);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v73 )
        LocalFree(v73);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      RpcRevertToSelf();
      if ( !v10 )
        goto LABEL_56;
      goto LABEL_55;
    }
  }
  if ( v22 && v78 )
  {
    v102 = 0LL;
    v27 = RtlQueryPackageClaims(-6LL, 0LL, 0LL, 0LL, 0LL, 0LL, &v102, 0LL);
    if ( v27 )
    {
      v20 = wil::details::in1diag3::Return_Win32(
              retaddr,
              891LL,
              (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
              (const char *)v27);
      if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(v67);
      CoTaskMemFree(v23);
      if ( v68 )
        CoTaskMemFree(v68);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v73 )
        LocalFree(v73);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      RpcRevertToSelf();
      if ( !v10 )
        goto LABEL_56;
      goto LABEL_55;
    }
    v66 = (v102 & 0x10) != 0;
    v64 = 0;
    v28 = CapabilityCheck(-6LL, L"voipCall", &v64);
    v29 = v28 < 0;
    if ( v28 > 0 )
    {
      v28 = (unsigned __int16)v28 | 0x80070000;
      v29 = v28 < 0;
    }
    if ( v29
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, v28);
    }
    v87 = v64 != 0;
    v65 = 0;
    v30 = CapabilityCheck(-6LL, L"backgroundMediaPlayback", &v65);
    v31 = v30 < 0;
    if ( v30 > 0 )
    {
      v30 = (unsigned __int16)v30 | 0x80070000;
      v31 = v30 < 0;
    }
    if ( v31
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, v30);
    }
    v32 = v72;
    if ( v65 )
      v32 = 1;
    v72 = v32;
    v33 = CApplicationManager::ReadBackgroundMediaRecordingCapability(
            (CApplicationManager *)1,
            (void *)0xFFFFFFFFFFFFFFFALL,
            &v85);
    v20 = v33;
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x389,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v33);
      if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(v67);
      CoTaskMemFree(v23);
      if ( v68 )
        CoTaskMemFree(v68);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v73 )
        LocalFree(v73);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      RpcRevertToSelf();
      if ( !v10 )
        goto LABEL_56;
      goto LABEL_55;
    }
    v35 = CApplicationManager::ReadUserSigninSupportCapability(v34, (void *)0xFFFFFFFFFFFFFFFALL, &v84);
    v20 = v35;
    if ( v35 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38D,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v35);
      if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(v67);
      CoTaskMemFree(v23);
      if ( v68 )
        CoTaskMemFree(v68);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v73 )
        LocalFree(v73);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      RpcRevertToSelf();
      if ( !v10 )
        goto LABEL_56;
      goto LABEL_55;
    }
  }
  if ( !hMem )
  {
    memset_0(packageFamilyName, 0, 0x82uLL);
    memset_0(packageRelativeApplicationId, 0, 0x84uLL);
    packageFamilyNameLength = 65;
    packageRelativeApplicationIdLength = 66;
    v36 = ParseApplicationUserModelId(
            (PCWSTR)v23,
            &packageFamilyNameLength,
            packageFamilyName,
            &packageRelativeApplicationIdLength,
            packageRelativeApplicationId);
    v37 = v36 < 0;
    if ( v36 > 0 )
      v37 = 1;
    if ( !v37 )
    {
      Sid = 0LL;
      if ( (int)AppContainerDeriveSidFromMoniker(packageFamilyName, &Sid) >= 0 )
      {
        v38 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator&(&hMem);
        if ( !ConvertSidToStringSidW(Sid, (LPWSTR *)v38) )
        {
          v20 = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x39C,
                  (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  v39);
          if ( Sid )
          {
            v94 = (struct CProcess **)Sid;
            hObject = RtlFreeSid;
            wistd::invoke<void * (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&hObject, &v94);
          }
          if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(v67);
          CoTaskMemFree(v23);
          if ( v68 )
            CoTaskMemFree(v68);
          if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            CloseHandle(v17);
          if ( hMem )
            LocalFree(hMem);
          if ( v73 )
            LocalFree(v73);
          if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(TokenHandle);
          RpcRevertToSelf();
          if ( !v10 )
            goto LABEL_56;
LABEL_55:
          LeaveCriticalSection(v10);
LABEL_56:
          if ( v60 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v60);
          return v20;
        }
      }
      if ( Sid )
      {
        v91 = (__int64 (__fastcall *)(_QWORD))Sid;
        v92 = RtlFreeSid;
        wistd::invoke<void * (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v92, &v91);
      }
    }
  }
  v77 = 0;
  RpcRevertToSelf();
  v40 = v73;
  AssignedAccessTypeForUser = GetAssignedAccessTypeForUser(v73);
  v79 = AssignedAccessTypeForUser == 1;
  if ( !v59[0] || v72 )
  {
    v72 = 1;
  }
  else
  {
    v42 = CApplicationManager::ReadBackgroundAudioTaskCapability(
            (CApplicationManager *)(AssignedAccessTypeForUser == 1),
            v67,
            &v72,
            &v86);
    LODWORD(v61) = v42;
    if ( v42 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B2,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v42);
      if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(v67);
      CoTaskMemFree(v23);
      if ( v68 )
        CoTaskMemFree(v68);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v40 )
        LocalFree(v40);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      if ( !v10 )
        goto LABEL_202;
      goto LABEL_201;
    }
  }
  v83 = 0;
  if ( v78 && !(unsigned int)CheckTokenCapability(TokenHandle, *((_QWORD *)v81 + 2), &v83) )
  {
    v44 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x3BE,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
            v43);
    if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(v67);
    CoTaskMemFree(v23);
    if ( v68 )
      CoTaskMemFree(v68);
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v17);
    if ( hMem )
      LocalFree(hMem);
    if ( v40 )
      LocalFree(v40);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    if ( !v10 )
      goto LABEL_222;
    goto LABEL_221;
  }
  TokenInformationLength = 0;
  GetTokenInformation(TokenHandle, TokenIntegrityLevel, 0LL, 0, &TokenInformationLength);
  if ( GetLastError() != 122 )
  {
    v44 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x3C6,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
            v45);
    if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(v67);
    CoTaskMemFree(v23);
    if ( v68 )
      CoTaskMemFree(v68);
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v17);
    if ( hMem )
      LocalFree(hMem);
    if ( v40 )
      LocalFree(v40);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    if ( !v10 )
      goto LABEL_222;
    goto LABEL_221;
  }
  v46 = (PSID *)LocalAlloc(0x40u, TokenInformationLength);
  if ( !v46 )
  {
    v44 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C9,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)0x8007000ELL);
    if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(v67);
    CoTaskMemFree(v23);
    if ( v68 )
      CoTaskMemFree(v68);
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v17);
    if ( hMem )
      LocalFree(hMem);
    if ( v40 )
      LocalFree(v40);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    if ( !v10 )
      goto LABEL_222;
LABEL_221:
    LeaveCriticalSection(v10);
LABEL_222:
    if ( v60 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v60);
    return v44;
  }
  if ( GetTokenInformation(TokenHandle, TokenIntegrityLevel, v46, TokenInformationLength, &TokenInformationLength) )
  {
    hObject = GetSidSubAuthorityCount(*v46);
    v48 = GetLastError();
    LODWORD(v61) = v48;
    v49 = v48 < 0;
    if ( v48 > 0 )
    {
      v48 = (unsigned __int16)v48 | 0x80070000;
      LODWORD(v61) = v48;
      v49 = v48 < 0;
    }
    if ( v49 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D0,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v48);
      v92 = (PVOID (__stdcall *)(PSID))v46;
      v91 = (__int64 (__fastcall *)(_QWORD))LocalFree;
      wistd::invoke<void * (*)(void *),void * &>(&v91, &v92);
      if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(v67);
      CoTaskMemFree(v23);
      if ( v68 )
        CoTaskMemFree(v68);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v40 )
        LocalFree(v40);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      if ( !v10 )
        goto LABEL_202;
      goto LABEL_201;
    }
    if ( hObject && *(_BYTE *)hObject )
    {
      v80 = *GetSidSubAuthority(*v46, (unsigned __int8)(*(_BYTE *)hObject - 1));
      v50 = GetLastError();
      LODWORD(v61) = v50;
      v51 = v50 < 0;
      if ( v50 > 0 )
      {
        v50 = (unsigned __int16)v50 | 0x80070000;
        LODWORD(v61) = v50;
        v51 = v50 < 0;
      }
      if ( v51 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D6,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)(unsigned int)v50);
        v92 = (PVOID (__stdcall *)(PSID))v46;
        v91 = (__int64 (__fastcall *)(_QWORD))LocalFree;
        wistd::invoke<void * (*)(void *),void * &>(&v91, &v92);
        if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(v67);
        CoTaskMemFree(v23);
        if ( v68 )
          CoTaskMemFree(v68);
        if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v17);
        if ( hMem )
          LocalFree(hMem);
        if ( v40 )
          LocalFree(v40);
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        if ( !v10 )
          goto LABEL_202;
LABEL_201:
        LeaveCriticalSection(v10);
LABEL_202:
        if ( v60 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v60);
        return (unsigned int)v61;
      }
      v80 = v80 < 0x2000;
      v110 = v46;
      v111[0] = (__int64 (__fastcall *)(_QWORD))LocalFree;
      wistd::invoke<void * (*)(void *),void * &>(v111, &v110);
      v104 = (const unsigned __int16 *)hMem;
      v59[0] = v78 != 0;
      v105 = (const unsigned __int16 *)v40;
      v106 = (const unsigned __int16 *)v23;
      v52 = v68;
      *(_QWORD *)v107 = v68;
      v108 = v17;
      v53 = v60;
      v60 = 0LL;
      if ( v53 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v53);
      v54 = Microsoft::WRL::Details::MakeAndInitialize<CProcess,CProcess,void *,unsigned long &,unsigned long &,unsigned short *,unsigned short *,unsigned __int64 &,unsigned short *,bool,unsigned short *,bool &,bool &,int &,int &,int &,int &,int &,int &,bool &,int &,int &>(
              (volatile signed __int32 **)&v60,
              &v108,
              (int *)&Pid,
              (int *)&v99,
              (const unsigned __int16 **)v107,
              &v106,
              &v103,
              &v105,
              v59,
              &v104,
              v70,
              &v69,
              &v87,
              &v72,
              &v86,
              &v85,
              &v84,
              (int *)&v79,
              &v66,
              &v83,
              (int *)&v80);
      LODWORD(v61) = v54;
      if ( v54 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3EF,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)(unsigned int)v54);
        if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(v67);
        CoTaskMemFree(v23);
        if ( v52 )
          CoTaskMemFree(v52);
        if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v17);
        if ( hMem )
          LocalFree(hMem);
        if ( v40 )
          LocalFree(v40);
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        if ( !v10 )
          goto LABEL_202;
        goto LABEL_294;
      }
      *((_DWORD *)v60 + 115) = v71;
      v55 = CApplicationManager::Register(v81, v60);
      v71 = v55;
      if ( v55 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3F3,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)(unsigned int)v55);
        if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(v67);
        CoTaskMemFree(v23);
        if ( v52 )
          CoTaskMemFree(v52);
        if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v17);
        if ( hMem )
          LocalFree(hMem);
        if ( v40 )
          LocalFree(v40);
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        if ( v10 )
          LeaveCriticalSection(v10);
        if ( v60 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v60);
        return v71;
      }
      v117[1] = v81;
      v117[2] = (ATL::CAtlException *)&v60;
      v118 = 1;
      hObject = (char *)v81 + 120;
      AcquireSRWLockExclusive((PSRWLOCK)v81 + 15);
      try
      {
        v116 = hObject;
        LODWORD(v61) = 0;
        v109 = v60;
        ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::AddHead((__int64 *)v81 + 16, &v109);
      }
      catch ( ATL::CAtlException *v117 )
      {
        v58 = v117[0];
        if ( *(_DWORD *)v117[0] == -1073741571 )
          _o__resetstkoflw();
        v71 = *(_DWORD *)v58;
        v40 = v73;
        v17 = (char *)v100;
        v52 = v68;
        v23 = pv;
        LODWORD(v61) = v71;
        v10 = (struct _RTL_CRITICAL_SECTION *)v89;
        v94 = v90;
      }
      if ( hObject )
        ReleaseSRWLockExclusive((PSRWLOCK)hObject);
      if ( (int)v61 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3FC,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)(unsigned int)v61);
        CApplicationManager::Unregister(v81, v60);
        if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(v67);
        CoTaskMemFree(v23);
        if ( v52 )
          CoTaskMemFree(v52);
        if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v17);
        if ( hMem )
          LocalFree(hMem);
        if ( v40 )
          LocalFree(v40);
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        if ( !v10 )
          goto LABEL_202;
LABEL_294:
        LeaveCriticalSection(v10);
        goto LABEL_202;
      }
      v56 = v60;
      do
        v57 = *((_DWORD *)v56 + 5);
      while ( v57 != 0x7FFFFFFF && v57 != _InterlockedCompareExchange((volatile signed __int32 *)v56 + 5, v57 + 1, v57) );
      if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(v67);
      CoTaskMemFree(pv);
      if ( v68 )
        CoTaskMemFree(v68);
      if ( (char *)v100 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(v100);
      if ( hMem )
        LocalFree(hMem);
      if ( v73 )
        LocalFree(v73);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      v3 = v94;
      goto LABEL_347;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D1,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)0x8000FFFFLL);
    v90 = (struct CProcess **)v46;
    v89 = LocalFree;
    wistd::invoke<void * (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v89, &v90);
    if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(v67);
    CoTaskMemFree(v23);
    if ( v68 )
      CoTaskMemFree(v68);
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v17);
    if ( hMem )
      LocalFree(hMem);
    if ( v40 )
      LocalFree(v40);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    if ( v10 )
      LeaveCriticalSection(v10);
    if ( v60 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v60);
    return 2147549183LL;
  }
  else
  {
    v79 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x3CB,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
            v47);
    v90 = (struct CProcess **)v46;
    v89 = LocalFree;
    wistd::invoke<void * (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v89, &v90);
    if ( (char *)v67 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(v67);
    CoTaskMemFree(v23);
    if ( v68 )
      CoTaskMemFree(v68);
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v17);
    if ( hMem )
      LocalFree(hMem);
    if ( v40 )
      LocalFree(v40);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    if ( v10 )
      LeaveCriticalSection(v10);
    if ( v60 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v60);
    return v79;
  }
}
