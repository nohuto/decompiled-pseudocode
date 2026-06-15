/*
 * XREFs of _lambda_d1a8b950306abda3aed68804ea97f7ae_::operator() @ 0x140002364
 * Callers:
 *     ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x140001A04 (-WinMain@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z.c)
 * Callees:
 *     ?InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z @ 0x140001B2C (-InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z.c)
 *     ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x140001EB0 (-PreMessageLoop@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x140001FCC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140002168 (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1400021F8 (--1-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUSC_HANDLE__@@P6AHPEAU1@@Z$1?CloseServiceHandle@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1400026D0 (--1-$unique_storage@U-$resource_policy@PEAUSC_HANDLE__@@P6AHPEAU1@@Z$1-CloseServiceHandle@@YAH0@.c)
 *     ?InitializeCpuManager@@YAJXZ @ 0x140003080 (-InitializeCpuManager@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001F888 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x140021194 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14002B73C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004EC84 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1400516A8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     WPP_SF_ @ 0x140051850 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14005187C (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_d1a8b950306abda3aed68804ea97f7ae_::operator()(__int64 *a1)
{
  HRESULT LastErrorFailHr; // ebx
  __int64 v3; // rdi
  wil::details *v4; // rcx
  HANDLE Event; // r14
  wil::details *v6; // rsi
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // r8d
  void *v10; // rdx
  const char *v12; // r9
  unsigned int v13; // eax
  SC_HANDLE v14; // rbx
  const char *v15; // r9
  HANDLE v16; // rax
  CAudioDGModule *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  DWORD LastError; // ebx
  void *v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rdx
  unsigned int pdwType; // [rsp+20h] [rbp-39h]
  int pdwTypea; // [rsp+20h] [rbp-39h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-19h] BYREF
  DWORD pcbBytesNeeded; // [rsp+48h] [rbp-11h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-Dh] BYREF
  int pvData; // [rsp+50h] [rbp-9h] BYREF
  LARGE_INTEGER Frequency; // [rsp+58h] [rbp-1h] BYREF
  SC_HANDLE v33; // [rsp+60h] [rbp+7h] BYREF
  SC_HANDLE v34; // [rsp+68h] [rbp+Fh] BYREF
  BYTE Buffer[4]; // [rsp+70h] [rbp+17h] BYREF
  int v36; // [rsp+74h] [rbp+1Bh]
  DWORD dwProcessId; // [rsp+8Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids);
  }
  QueryPerformanceFrequency(&Frequency);
  g_u64QPCFrequency = Frequency.QuadPart;
  LastErrorFailHr = CoInitializeEx(0LL, 4u);
  if ( LastErrorFailHr < 0 )
  {
    v19 = 325LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
      (const char *)(unsigned int)LastErrorFailHr,
      pdwType);
    return (unsigned int)LastErrorFailHr;
  }
  v3 = *a1;
  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v6 = *(wil::details **)(v3 + 128);
    if ( v6 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v6, v21);
      SetLastError(LastError);
    }
    *(_QWORD *)(v3 + 128) = Event;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v4);
    if ( LastErrorFailHr < 0 )
    {
      v19 = 330LL;
      goto LABEL_32;
    }
  }
  LastErrorFailHr = InitializeCpuManager();
  if ( LastErrorFailHr < 0 )
  {
    v19 = 336LL;
    goto LABEL_32;
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
    v22 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x156,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
            v12);
LABEL_38:
    LastErrorFailHr = v22;
    goto LABEL_12;
  }
  v13 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioDeviceGraph", SecurityDescriptor);
  if ( v13 )
  {
    v23 = 344LL;
LABEL_37:
    v22 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)v23,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
            (const char *)v13,
            pdwType);
    goto LABEL_38;
  }
  pdwType = 1234;
  v13 = RpcServerRegisterIf3(&unk_140098060, 0LL, 0LL, 33LL);
  if ( v13 )
  {
    v23 = 345LL;
    goto LABEL_37;
  }
  fRpcStarted = 1;
  v34 = OpenSCManagerW(0LL, 0LL, 1u);
  v14 = OpenServiceW(v34, L"AUDIOSRV", 4u);
  v33 = v14;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids);
  }
  pcbBytesNeeded = 36;
  if ( !QueryServiceStatusEx(v14, SC_STATUS_PROCESS_INFO, Buffer, 0x24u, &pcbBytesNeeded) )
  {
    v18 = 355LL;
    goto LABEL_27;
  }
  if ( ((v36 - 1) & 0xFFFFFFFD) == 0 )
  {
    LastErrorFailHr = -2147418113;
    v24 = 2147549183LL;
    v25 = 360LL;
LABEL_48:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
      (const char *)v24,
      pdwTypea);
    goto LABEL_11;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids, dwProcessId);
  }
  *(_DWORD *)(v3 + 144) = dwProcessId;
  v16 = OpenProcess(0x100000u, 0, dwProcessId);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    v3 + 136,
    v16);
  if ( ((*(_QWORD *)(v3 + 136) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v18 = 365LL;
LABEL_27:
    LastErrorFailHr = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)v18,
                        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
                        v15);
    goto LABEL_11;
  }
  v7 = CAudioDGModule::InitializeSecurity(v17);
  LastErrorFailHr = v7;
  if ( v7 < 0 )
  {
    v25 = 370LL;
LABEL_47:
    v24 = (unsigned int)v7;
    goto LABEL_48;
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
  v7 = ATL::CAtlExeModuleT<CAudioDGModule>::PreMessageLoop(v3, v8, v9);
  LastErrorFailHr = v7;
  if ( v7 < 0 )
  {
    v25 = 381LL;
    goto LABEL_47;
  }
  wil::details::SetEvent(*(wil::details **)(v3 + 152), v10);
  LastErrorFailHr = 0;
LABEL_11:
  wil::details::unique_storage<wil::details::resource_policy<SC_HANDLE__ *,int (*)(SC_HANDLE__ *),&int CloseServiceHandle(SC_HANDLE__ *),wistd::integral_constant<unsigned __int64,0>,SC_HANDLE__ *,SC_HANDLE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<SC_HANDLE__ *,int (*)(SC_HANDLE__ *),&int CloseServiceHandle(SC_HANDLE__ *),wistd::integral_constant<unsigned __int64,0>,SC_HANDLE__ *,SC_HANDLE__ *,0,std::nullptr_t>>(&v33);
  wil::details::unique_storage<wil::details::resource_policy<SC_HANDLE__ *,int (*)(SC_HANDLE__ *),&int CloseServiceHandle(SC_HANDLE__ *),wistd::integral_constant<unsigned __int64,0>,SC_HANDLE__ *,SC_HANDLE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<SC_HANDLE__ *,int (*)(SC_HANDLE__ *),&int CloseServiceHandle(SC_HANDLE__ *),wistd::integral_constant<unsigned __int64,0>,SC_HANDLE__ *,SC_HANDLE__ *,0,std::nullptr_t>>(&v34);
LABEL_12:
  wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&SecurityDescriptor);
  return (unsigned int)LastErrorFailHr;
}
