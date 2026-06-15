/*
 * XREFs of ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180047DB8
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18003D84C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x180047E74 (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x180059360 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::CheckADGStatus(CAudioDGProcess *this)
{
  LPCRITICAL_SECTION v1; // rbx
  int v2; // eax
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int LockSemaphore; // ebx
  signed int LastError; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CAudioDGProcess *ExitCode; // [rsp+30h] [rbp+8h] BYREF
  LONG *p_LockCount; // [rsp+38h] [rbp+10h]

  ExitCode = this;
  v1 = g_ADGProcess;
  v2 = CAudioDGProcess::WaitForADGStartup((CAudioDGProcess *)g_ADGProcess, (unsigned int *)&ExitCode);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  v4 = (LPCRITICAL_SECTION)((char *)v1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 48));
  p_LockCount = &v1[1].LockCount;
  if ( !BYTE4(v1[2].OwningThread) )
  {
    if ( GetExitCodeProcess(*(HANDLE *)&v1[2].LockCount, (LPDWORD)&ExitCode) )
    {
      LastError = (int)ExitCode;
      if ( (_DWORD)ExitCode == 259 )
      {
        LastError = CAudioDGProcess::CheckADGStartupStatus((CAudioDGProcess *)v1);
LABEL_11:
        LODWORD(v1[2].LockSemaphore) = LastError;
        BYTE4(v1[2].OwningThread) = 1;
        goto LABEL_3;
      }
    }
    else
    {
      LastError = GetLastError();
      LODWORD(ExitCode) = LastError;
    }
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_11;
  }
LABEL_3:
  LockSemaphore = (int)v1[2].LockSemaphore;
  if ( LockSemaphore < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)LockSemaphore);
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)LockSemaphore;
}
