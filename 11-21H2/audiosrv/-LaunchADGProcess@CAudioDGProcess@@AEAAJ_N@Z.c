/*
 * XREFs of ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18003D7B0
 * Callers:
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x18003D660 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     StringCopyWorkerW @ 0x18003D9EC (StringCopyWorkerW.c)
 *     StringLengthWorkerW @ 0x18003DA68 (StringLengthWorkerW.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DAB0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18003DAEC (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003E8A0 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BFD00 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::LaunchADGProcess(size_t *this, unsigned __int8 a2)
{
  int v2; // r12d
  char v4; // r14
  size_t v5; // rdx
  const char *v6; // r9
  HRESULT LastError; // ebx
  wchar_t *v8; // r15
  size_t v9; // rdi
  int v10; // eax
  int ADGProcessSD; // eax
  const char *v12; // r9
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  char *v16; // rcx
  size_t bInheritHandles; // [rsp+20h] [rbp-E0h]
  size_t pcchLength; // [rsp+50h] [rbp-B0h] BYREF
  _SECURITY_ATTRIBUTES ProcessAttributes; // [rsp+58h] [rbp-A8h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+70h] [rbp-90h] BYREF
  CAudioDGProcess *v21; // [rsp+88h] [rbp-78h]
  char v22; // [rsp+90h] [rbp-70h]
  struct _STARTUPINFOW StartupInfo; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t Buffer[264]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+258h]

  v2 = a2;
  v21 = (CAudioDGProcess *)this;
  v4 = 1;
  v22 = 1;
  memset_0(Buffer, 0, 0x208uLL);
  if ( GetSystemDirectoryW(Buffer, 0x104u) )
  {
    LastError = StringLengthWorkerW(Buffer, v5, &pcchLength);
    if ( LastError < 0 )
      goto LABEL_17;
    v8 = &Buffer[pcchLength];
    v9 = 260 - pcchLength;
    if ( 260 - pcchLength <= 1 )
    {
      LastError = -2147024774;
    }
    else
    {
      pcchLength = 0LL;
      LastError = StringCopyWorkerW(v8, v9, &pcchLength, L"\\AUDIODG.EXE", bInheritHandles);
      v8 += pcchLength;
      v9 -= pcchLength;
      if ( (int)(LastError + 0x80000000) >= 0 && LastError != -2147024774 )
        goto LABEL_17;
    }
    if ( LastError < 0 )
    {
LABEL_17:
      v14 = (unsigned int)LastError;
      v15 = 102LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
        (const char *)v14,
        bInheritHandles);
      goto LABEL_12;
    }
    bInheritHandles = this[15];
    v10 = StringCbPrintfW(v8, 2 * v9, L" 0x%p 0x%p", this[14]);
    LastError = v10;
    if ( v10 < 0 )
    {
      v14 = (unsigned int)v10;
      v15 = 104LL;
      goto LABEL_18;
    }
    memset_0(&StartupInfo.cb + 1, 0, 0x64uLL);
    StartupInfo.cb = 104;
    memset(&ProcessAttributes, 0, sizeof(ProcessAttributes));
    ProcessAttributes.nLength = 24;
    ADGProcessSD = CAudioDGProcess::GetADGProcessSD(&ProcessAttributes.lpSecurityDescriptor);
    LastError = ADGProcessSD;
    if ( ADGProcessSD < 0 )
    {
      v14 = (unsigned int)ADGProcessSD;
      v15 = 113LL;
      goto LABEL_18;
    }
    memset(&ProcessInformation, 0, sizeof(ProcessInformation));
    if ( CreateProcessW(0LL, Buffer, &ProcessAttributes, 0LL, 1, v2 << 18, 0LL, 0LL, &StartupInfo, &ProcessInformation) )
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        this + 11,
        ProcessInformation.hProcess);
      *((_DWORD *)this + 24) = ProcessInformation.dwProcessId;
      v4 = 0;
      LastError = 0;
      if ( (unsigned __int64)ProcessInformation.hThread - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        CloseHandle(ProcessInformation.hThread);
        ProcessInformation.hThread = 0LL;
      }
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x76,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
                    v12);
    }
    operator delete(ProcessAttributes.lpSecurityDescriptor);
    ProcessAttributes.lpSecurityDescriptor = 0LL;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x62,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
                  v6);
  }
LABEL_12:
  if ( v4 )
  {
    v16 = (char *)this[11];
    if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      WaitForSingleObjectEx(v16, 0xFFFFFFFF, 0);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        this + 11,
        0LL);
      *((_DWORD *)this + 24) = 0;
    }
  }
  return (unsigned int)LastError;
}
