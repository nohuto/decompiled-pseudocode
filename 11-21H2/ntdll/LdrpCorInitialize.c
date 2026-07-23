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

__int64 __fastcall LdrpCorInitialize(PVOID *a1)
{
  bool v2; // bl
  int ProcedureAddress; // ebx
  unsigned __int16 *v4; // rdi
  char *v5; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp-1B8h] BYREF
  ULONG_PTR ReturnLength; // [rsp+38h] [rbp-1B0h] BYREF
  int v9; // [rsp+40h] [rbp-1A8h] BYREF
  _WORD *v10; // [rsp+48h] [rbp-1A0h]
  _WORD v11[128]; // [rsp+50h] [rbp-198h] BYREF
  PWSTR Path[15]; // [rsp+150h] [rbp-98h] BYREF
  char v13; // [rsp+1CCh] [rbp-1Ch]

  v2 = 1;
  RtlEnterCriticalSection(&FastPebLock);
  if ( RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 0x13uLL, 0LL, 0LL, &ReturnLength) == -1073741789 )
    v2 = RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 0xFuLL, 0LL, 0LL, &ReturnLength) != -1073741789;
  RtlLeaveCriticalSection(&FastPebLock);
  v10 = v11;
  v9 = 0x1000000;
  v11[0] = 0;
  if ( v2 )
  {
    ProcedureAddress = LdrpBuildSystem32FileName(&v9, &LdrpMscoreeDllName);
    v4 = (unsigned __int16 *)&v9;
  }
  else
  {
    v4 = (unsigned __int16 *)&LdrpMscoreeDllName;
    ProcedureAddress = 0;
  }
  if ( ProcedureAddress >= 0 )
  {
    LdrpInitializeDllPath(0LL, 0LL, (const WCHAR **)Path);
    ProcedureAddress = LdrpLoadDll(v4, (int)Path, 1, &BaseAddress);
    if ( v13 )
      RtlReleasePath(Path[0]);
    if ( ProcedureAddress >= 0 )
    {
      ProcedureAddress = LdrpGetProcedureAddress(*((_QWORD *)BaseAddress + 6), "_CorExeMain", 0, (char **)&ReturnLength);
      if ( ProcedureAddress < 0 )
      {
        LdrpDecrementModuleLoadCountEx((__int64)BaseAddress, 0);
        v5 = (char *)BaseAddress;
      }
      else
      {
        LdrpCorExeMainRoutine = __ROR8__(ReturnLength ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        v5 = (char *)BaseAddress;
        *a1 = BaseAddress;
      }
      LdrpDereferenceModule(v5);
    }
  }
  if ( v11 != v10 )
    NtdllpFreeStringRoutine(v10);
  return (unsigned int)ProcedureAddress;
}
