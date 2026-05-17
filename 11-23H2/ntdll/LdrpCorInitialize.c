/*
 * XREFs of LdrpCorInitialize @ 0x18008E254
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLoadDll @ 0x18001906C (LdrpLoadDll.c)
 *     RtlQueryEnvironmentVariable @ 0x18001EB90 (RtlQueryEnvironmentVariable.c)
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x180022CD0 (LdrpGetProcedureAddress.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     LdrpInitializeDllPath @ 0x18002B064 (LdrpInitializeDllPath.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002D48C (LdrpDecrementModuleLoadCountEx.c)
 *     RtlReleasePath @ 0x180032D60 (RtlReleasePath.c)
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     LdrpBuildSystem32FileName @ 0x180079A34 (LdrpBuildSystem32FileName.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpCorInitialize(_QWORD *a1)
{
  bool v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  int Dll; // ebx
  int *v6; // rdi
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp-1B8h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-1B0h] BYREF
  int v11; // [rsp+40h] [rbp-1A8h] BYREF
  _WORD *v12; // [rsp+48h] [rbp-1A0h]
  _WORD v13[128]; // [rsp+50h] [rbp-198h] BYREF
  __int64 v14[15]; // [rsp+150h] [rbp-98h] BYREF
  char v15; // [rsp+1CCh] [rbp-1Ch]

  v2 = 1;
  RtlEnterCriticalSection((__int64)&FastPebLock);
  if ( (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 0x13uLL, 0LL, 0LL, &v10) == -1073741789 )
    v2 = (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 0xFuLL, 0LL, 0LL, &v10) != -1073741789;
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  v12 = v13;
  v11 = 0x1000000;
  v13[0] = 0;
  if ( v2 )
  {
    Dll = LdrpBuildSystem32FileName((unsigned __int16 *)&v11, &LdrpMscoreeDllName, v3, v4);
    v6 = &v11;
  }
  else
  {
    v6 = (int *)&LdrpMscoreeDllName;
    Dll = 0;
  }
  if ( Dll >= 0 )
  {
    LdrpInitializeDllPath(0LL, 0LL, v14);
    Dll = LdrpLoadDll((__int64)v6, (int)v14, 1, (__int64)&v9);
    if ( v15 )
      RtlReleasePath(v14[0]);
    if ( Dll >= 0 )
    {
      Dll = LdrpGetProcedureAddress(*(_QWORD *)(v9 + 48), "_CorExeMain", 0, (char **)&v10);
      if ( Dll < 0 )
      {
        LdrpDecrementModuleLoadCountEx(v9, 0);
        v7 = v9;
      }
      else
      {
        LdrpCorExeMainRoutine = __ROR8__(v10 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        v7 = v9;
        *a1 = v9;
      }
      LdrpDereferenceModule(v7);
    }
  }
  if ( v13 != v12 )
    NtdllpFreeStringRoutine((__int64)v12);
  return (unsigned int)Dll;
}
