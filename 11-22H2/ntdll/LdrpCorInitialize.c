/*
 * XREFs of LdrpCorInitialize @ 0x18008DA54
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLoadDll @ 0x18001927C (LdrpLoadDll.c)
 *     RtlQueryEnvironmentVariable @ 0x18001ED70 (RtlQueryEnvironmentVariable.c)
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x180022DE0 (LdrpGetProcedureAddress.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     LdrpInitializeDllPath @ 0x18002B234 (LdrpInitializeDllPath.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002D65C (LdrpDecrementModuleLoadCountEx.c)
 *     RtlReleasePath @ 0x180032EC0 (RtlReleasePath.c)
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     LdrpBuildSystem32FileName @ 0x1800793C4 (LdrpBuildSystem32FileName.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpCorInitialize(PVOID *a1)
{
  bool v2; // bl
  int Dll; // ebx
  int *v4; // rdi
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
    Dll = LdrpBuildSystem32FileName((unsigned __int16 *)&v9, &LdrpMscoreeDllName);
    v4 = &v9;
  }
  else
  {
    v4 = (int *)&LdrpMscoreeDllName;
    Dll = 0;
  }
  if ( Dll >= 0 )
  {
    LdrpInitializeDllPath(0LL, 0LL, (__int64 *)Path);
    Dll = LdrpLoadDll((__int64)v4, (int)Path, 1, (__int64)&BaseAddress);
    if ( v13 )
      RtlReleasePath(Path[0]);
    if ( Dll >= 0 )
    {
      Dll = LdrpGetProcedureAddress(*((_QWORD *)BaseAddress + 6), "_CorExeMain", 0, (char **)&ReturnLength);
      if ( Dll < 0 )
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
  return (unsigned int)Dll;
}
