/*
 * XREFs of LdrpCorInitialize @ 0x180072FF8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlReleasePath @ 0x18001CC00 (RtlReleasePath.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     RtlQueryEnvironmentVariable @ 0x180036CE0 (RtlQueryEnvironmentVariable.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x180038594 (LdrpInitializeDllPath.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     LdrpGetProcedureAddress @ 0x18003BD10 (LdrpGetProcedureAddress.c)
 *     LdrpLoadDll @ 0x180044E5C (LdrpLoadDll.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180052674 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpBuildSystem32FileName @ 0x1800731B8 (LdrpBuildSystem32FileName.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpCorInitialize(_QWORD *a1)
{
  bool v2; // bl
  int ProcedureAddress; // ebx
  unsigned __int16 *v4; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-1B8h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-1B0h] BYREF
  int v15; // [rsp+40h] [rbp-1A8h] BYREF
  _WORD *v16; // [rsp+48h] [rbp-1A0h]
  _WORD v17[128]; // [rsp+50h] [rbp-198h] BYREF
  __int64 v18[15]; // [rsp+150h] [rbp-98h] BYREF
  char v19; // [rsp+1CCh] [rbp-1Ch]

  v2 = 1;
  RtlEnterCriticalSection((__int64)&FastPebLock);
  if ( (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 0x13uLL, 0LL, 0LL, &v14) == -1073741789 )
    v2 = (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 0xFuLL, 0LL, 0LL, &v14) != -1073741789;
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  v16 = v17;
  v15 = 0x1000000;
  v17[0] = 0;
  if ( v2 )
  {
    ProcedureAddress = LdrpBuildSystem32FileName(&v15, &LdrpMscoreeDllName);
    v4 = (unsigned __int16 *)&v15;
  }
  else
  {
    v4 = (unsigned __int16 *)&LdrpMscoreeDllName;
    ProcedureAddress = 0;
  }
  if ( ProcedureAddress >= 0 )
  {
    LdrpInitializeDllPath(0LL, 0LL, v18);
    ProcedureAddress = LdrpLoadDll(v4, (int)v18, 1u, &v13);
    if ( v19 )
      RtlReleasePath(v18[0], v5, v6, v7);
    if ( ProcedureAddress >= 0 )
    {
      ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(v13 + 48), "_CorExeMain", 0, (char **)&v14);
      if ( ProcedureAddress < 0 )
      {
        LdrpDecrementModuleLoadCountEx(v13, 0LL, v8, v9);
        v11 = v13;
      }
      else
      {
        v10 = __ROR8__(v14 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        LdrpCorExeMainRoutine = v10;
        v11 = v13;
        *a1 = v13;
      }
      LdrpDereferenceModule(v11, v10, v8, v9);
    }
  }
  if ( v17 != v16 )
    NtdllpFreeStringRoutine((__int64)v16);
  return (unsigned int)ProcedureAddress;
}
