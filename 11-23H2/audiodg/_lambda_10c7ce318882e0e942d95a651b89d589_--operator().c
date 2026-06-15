/*
 * XREFs of _lambda_10c7ce318882e0e942d95a651b89d589_::operator() @ 0x1400504E0
 * Callers:
 *     ?Run@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x140052054 (-Run@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001AA68 (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001AFE0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x14001C758 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001DEC4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1400260A0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004DEB4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUSC_HANDLE__@@P6AHPEAU1@@Z$1?CloseServiceHandle@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14005041C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUSC_HANDLE__@@P6AHPEAU1@@Z$1-CloseServ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140050440 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     ?InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z @ 0x140050FDC (-InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z.c)
 *     ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x1400518C8 (-PreMessageLoop@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x14005202C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     WPP_SF_ @ 0x140052860 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14005288C (WPP_SF_D.c)
 *     ?InitializeCpuManager@@YAJXZ @ 0x140053F50 (-InitializeCpuManager@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_10c7ce318882e0e942d95a651b89d589_::operator()(__int64 *a1)
{
  int LastErrorFailHr; // ebx
  __int64 v3; // rdx
  __int64 v5; // r14
  __int64 v6; // rdx
  wil::details *v7; // rcx
  wil::details *Event; // rbx
  __int64 v9; // r8
  const char *v10; // r9
  const char *v11; // r9
  int LastError; // eax
  unsigned int v13; // eax
  __int64 v14; // rdx
  SC_HANDLE v15; // rdi
  SC_HANDLE v16; // rbx
  const char *v17; // r9
  __int64 v18; // rdx
  HANDLE v19; // rax
  unsigned int v20; // edx
  CAudioDGModule *v21; // rcx
  unsigned int v22; // r8d
  int v23; // esi
  __int64 v24; // rdx
  LSTATUS ValueW; // eax
  int v26; // ecx
  void *v27; // rdx
  unsigned int pcbBytesNeeded; // [rsp+20h] [rbp-49h]
  int pvData; // [rsp+40h] [rbp-29h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-25h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp-21h] BYREF
  SC_HANDLE v32; // [rsp+50h] [rbp-19h] BYREF
  SC_HANDLE v33; // [rsp+58h] [rbp-11h] BYREF
  DWORD pdwType; // [rsp+60h] [rbp-9h] BYREF
  LARGE_INTEGER Frequency; // [rsp+68h] [rbp-1h] BYREF
  BYTE Buffer[4]; // [rsp+70h] [rbp+7h] BYREF
  int v37; // [rsp+74h] [rbp+Bh]
  DWORD dwProcessId; // [rsp+8Ch] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_131b8c4e0fcd3ed8c88f07f30abb8f12_Traceguids);
  }
  QueryPerformanceFrequency(&Frequency);
  g_u64QPCFrequency = Frequency.QuadPart;
  LastErrorFailHr = CoInitializeEx(0LL, 4u);
  if ( LastErrorFailHr < 0 )
  {
    v3 = 326LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
      (const char *)(unsigned int)LastErrorFailHr);
    return (unsigned int)LastErrorFailHr;
  }
  v5 = *a1;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)(v5 + 128),
      Event);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v7, v6, v9, v10);
    if ( LastErrorFailHr < 0 )
    {
      v3 = 331LL;
      goto LABEL_7;
    }
  }
  LastErrorFailHr = InitializeCpuManager();
  if ( LastErrorFailHr < 0 )
  {
    v3 = 337LL;
    goto LABEL_7;
  }
  SecurityDescriptor = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &SecurityDescriptor,
    0LL);
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-405489"
           "3335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x157,
                  (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
                  v11);
LABEL_20:
    LastErrorFailHr = LastError;
LABEL_46:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(&SecurityDescriptor);
    return (unsigned int)LastErrorFailHr;
  }
  v13 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioDeviceGraph", SecurityDescriptor);
  if ( v13 )
  {
    v14 = 345LL;
LABEL_19:
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)v14,
                  (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
                  (const char *)v13,
                  pcbBytesNeeded);
    goto LABEL_20;
  }
  pcbBytesNeeded = 1234;
  v13 = RpcServerRegisterIf3(&unk_1400ABBB0, 0LL, 0LL, 33LL);
  if ( v13 )
  {
    v14 = 346LL;
    goto LABEL_19;
  }
  fRpcStarted = 1;
  v15 = OpenSCManagerW(0LL, 0LL, 1u);
  v33 = v15;
  v16 = OpenServiceW(v15, L"AUDIOSRV", 4u);
  v32 = v16;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_131b8c4e0fcd3ed8c88f07f30abb8f12_Traceguids);
  }
  pdwType = 36;
  if ( !QueryServiceStatusEx(v16, SC_STATUS_PROCESS_INFO, Buffer, 0x24u, &pdwType) )
  {
    v18 = 356LL;
LABEL_29:
    LastErrorFailHr = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)v18,
                        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
                        v17);
LABEL_30:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<SC_HANDLE__ *,int (*)(SC_HANDLE__ *),&int CloseServiceHandle(SC_HANDLE__ *),wistd::integral_constant<unsigned __int64,0>,SC_HANDLE__ *,SC_HANDLE__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<SC_HANDLE__ *,int (*)(SC_HANDLE__ *),&int CloseServiceHandle(SC_HANDLE__ *),wistd::integral_constant<unsigned __int64,0>,SC_HANDLE__ *,SC_HANDLE__ *,0,std::nullptr_t>>>(&v32);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<SC_HANDLE__ *,int (*)(SC_HANDLE__ *),&int CloseServiceHandle(SC_HANDLE__ *),wistd::integral_constant<unsigned __int64,0>,SC_HANDLE__ *,SC_HANDLE__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<SC_HANDLE__ *,int (*)(SC_HANDLE__ *),&int CloseServiceHandle(SC_HANDLE__ *),wistd::integral_constant<unsigned __int64,0>,SC_HANDLE__ *,SC_HANDLE__ *,0,std::nullptr_t>>>(&v33);
    goto LABEL_46;
  }
  if ( ((v37 - 1) & 0xFFFFFFFD) == 0 )
  {
    LastErrorFailHr = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x169,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_30;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_131b8c4e0fcd3ed8c88f07f30abb8f12_Traceguids);
  }
  *(_DWORD *)(v5 + 144) = dwProcessId;
  v19 = OpenProcess(0x100000u, 0, dwProcessId);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)(v5 + 136),
    v19);
  if ( ((*(_QWORD *)(v5 + 136) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v18 = 366LL;
    goto LABEL_29;
  }
  v23 = CAudioDGModule::InitializeSecurity(v21, v20, v22, (unsigned int)v17);
  if ( v23 < 0 )
  {
    v24 = 371LL;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
      (const char *)(unsigned int)v23);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<SC_HANDLE__ *,int (*)(SC_HANDLE__ *),&int CloseServiceHandle(SC_HANDLE__ *),wistd::integral_constant<unsigned __int64,0>,SC_HANDLE__ *,SC_HANDLE__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<SC_HANDLE__ *,int (*)(SC_HANDLE__ *),&int CloseServiceHandle(SC_HANDLE__ *),wistd::integral_constant<unsigned __int64,0>,SC_HANDLE__ *,SC_HANDLE__ *,0,std::nullptr_t>>>(&v32);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<SC_HANDLE__ *,int (*)(SC_HANDLE__ *),&int CloseServiceHandle(SC_HANDLE__ *),wistd::integral_constant<unsigned __int64,0>,SC_HANDLE__ *,SC_HANDLE__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<SC_HANDLE__ *,int (*)(SC_HANDLE__ *),&int CloseServiceHandle(SC_HANDLE__ *),wistd::integral_constant<unsigned __int64,0>,SC_HANDLE__ *,SC_HANDLE__ *,0,std::nullptr_t>>>(&v33);
    LastErrorFailHr = v23;
    goto LABEL_46;
  }
  pvData = 0;
  pcbData = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"AudioDgWatchDogTimerInMs",
    0x18u,
    0LL,
    &pvData,
    &pcbData);
  pvData = 0;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             L"UseNewStreamManagementCodePath",
             0x18u,
             0LL,
             &pvData,
             &pcbData);
  v26 = g_UseNewStreamManagementCodePath;
  if ( !ValueW )
    v26 = pvData;
  g_UseNewStreamManagementCodePath = v26;
  v23 = ATL::CAtlExeModuleT<CAudioDGModule>::PreMessageLoop(v5);
  if ( v23 < 0 )
  {
    v24 = 391LL;
    goto LABEL_45;
  }
  wil::details::SetEvent(*(wil::details **)(v5 + 152), v27);
  if ( v16 )
    CloseServiceHandle(v16);
  if ( v15 )
    CloseServiceHandle(v15);
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return 0LL;
}
