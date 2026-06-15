/*
 * XREFs of ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18005E594
 * Callers:
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x18005E4B0 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180042E84 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     StringLengthWorkerW @ 0x18005E7CC (StringLengthWorkerW.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18005E814 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringCopyWorkerW @ 0x18005E880 (StringCopyWorkerW.c)
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18005E944 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CD4F0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     wil::details::lambda_call__lambda_4e3bb789dee41eb65b0b8e9b2cd752e0___::_lambda_call__lambda_4e3bb789dee41eb65b0b8e9b2cd752e0___ @ 0x1800CE43C (wil--details--lambda_call__lambda_4e3bb789dee41eb65b0b8e9b2cd752e0___--_lambda_call__lambda_4e3b.c)
 *     wil::details::lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___::_lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___ @ 0x1800CE49C (wil--details--lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___--_lambda_call__lambda_f40a.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::LaunchADGProcess(void **this, unsigned __int8 a2)
{
  int v2; // r15d
  size_t v4; // rdx
  const char *v5; // r9
  HRESULT LastError; // ebx
  wchar_t *v7; // rsi
  size_t v8; // rdi
  size_t v9; // rdx
  int v10; // eax
  int ADGProcessSD; // eax
  const char *v12; // r9
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  size_t bInheritHandles; // [rsp+28h] [rbp-E0h]
  size_t pcchLength; // [rsp+58h] [rbp-B0h] BYREF
  struct _SECURITY_ATTRIBUTES ProcessAttributes; // [rsp+60h] [rbp-A8h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+78h] [rbp-90h] BYREF
  __int64 v20; // [rsp+90h] [rbp-78h]
  CAudioDGProcess *v21; // [rsp+98h] [rbp-70h] BYREF
  char v22; // [rsp+A0h] [rbp-68h]
  struct _STARTUPINFOW StartupInfo; // [rsp+A8h] [rbp-60h] BYREF
  wchar_t Buffer[264]; // [rsp+118h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+350h] [rbp+248h]

  v2 = a2;
  v21 = (CAudioDGProcess *)this;
  v22 = 1;
  memset_0(Buffer, 0, 0x208uLL);
  if ( !GetSystemDirectoryW(Buffer, 0x104u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x62,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
                  v5);
LABEL_22:
    wil::details::lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___::_lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___(&v21);
    return (unsigned int)LastError;
  }
  LastError = StringLengthWorkerW(Buffer, v4, &pcchLength);
  if ( LastError < 0 )
  {
    v9 = pcchLength;
    v7 = (wchar_t *)pcchLength;
  }
  else
  {
    v7 = &Buffer[pcchLength];
    v8 = 260 - pcchLength;
    if ( pcchLength == 260 || pcchLength == 259 )
    {
      LastError = -2147024774;
    }
    else
    {
      pcchLength = 0LL;
      LastError = StringCopyWorkerW(v7, v8, &pcchLength, L"\\AUDIODG.EXE", bInheritHandles);
      v7 += pcchLength;
      v8 -= pcchLength;
      if ( (int)(LastError + 0x80000000) >= 0 && LastError != -2147024774 )
        goto LABEL_16;
    }
    v9 = 2 * v8;
  }
  if ( LastError < 0 )
  {
LABEL_16:
    v14 = (unsigned int)LastError;
    v15 = 102LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)v14);
    goto LABEL_22;
  }
  v10 = StringCbPrintfW(v7, v9, L" 0x%p 0x%p", this[14], this[15]);
  LastError = v10;
  if ( v10 < 0 )
  {
    v14 = (unsigned int)v10;
    v15 = 104LL;
    goto LABEL_19;
  }
  memset_0(&StartupInfo.cb + 1, 0, 0x64uLL);
  StartupInfo.cb = 104;
  *(_OWORD *)&ProcessAttributes.lpSecurityDescriptor = 0LL;
  LODWORD(ProcessAttributes.lpSecurityDescriptor) = 24;
  ProcessInformation.hProcess = 0LL;
  ADGProcessSD = CAudioDGProcess::GetADGProcessSD((void **)&ProcessAttributes.bInheritHandle);
  LastError = ADGProcessSD;
  if ( ADGProcessSD < 0 )
  {
    v14 = (unsigned int)ADGProcessSD;
    v15 = 113LL;
    goto LABEL_19;
  }
  pcchLength = (size_t)&ProcessAttributes.lpSecurityDescriptor;
  LOBYTE(ProcessAttributes.nLength) = 1;
  *(_OWORD *)&ProcessInformation.hThread = 0LL;
  v20 = 0LL;
  if ( !CreateProcessW(
          0LL,
          Buffer,
          (LPSECURITY_ATTRIBUTES)&ProcessAttributes.lpSecurityDescriptor,
          0LL,
          1,
          v2 << 18,
          0LL,
          0LL,
          &StartupInfo,
          (LPPROCESS_INFORMATION)&ProcessInformation.hThread) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x76,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
                  v12);
    wil::details::lambda_call__lambda_4e3bb789dee41eb65b0b8e9b2cd752e0___::_lambda_call__lambda_4e3bb789dee41eb65b0b8e9b2cd752e0___(&pcchLength);
    goto LABEL_22;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    this + 11,
    ProcessInformation.hThread);
  *((_DWORD *)this + 24) = v20;
  if ( (unsigned __int64)(*(_QWORD *)&ProcessInformation.dwProcessId - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(*(HANDLE *)&ProcessInformation.dwProcessId);
    *(_QWORD *)&ProcessInformation.dwProcessId = 0LL;
  }
  operator delete(*(void **)&ProcessAttributes.bInheritHandle);
  return 0LL;
}
