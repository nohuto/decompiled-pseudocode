/*
 * XREFs of LdrLoadDll @ 0x18002A8A0
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x180009DAC (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800E19E0 (RtlWow64LogMessageInEventLogger.c)
 *     SbpResolveBasedOnName @ 0x18012723C (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrpLoadDll @ 0x18001927C (LdrpLoadDll.c)
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     LdrpInitializeDllPath @ 0x18002B234 (LdrpInitializeDllPath.c)
 *     RtlReleasePath @ 0x180032EC0 (RtlReleasePath.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

NTSTATUS __cdecl LdrLoadDll(PWSTR DllPath, PULONG DllCharacteristics, PUNICODE_STRING DllName, PVOID *DllHandle)
{
  signed int v7; // eax
  ULONG v8; // ecx
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  int v12; // ebx
  NTSTATUS Dll; // ebx
  char *v14; // rcx
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-B8h] BYREF
  PWSTR Path[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v18; // [rsp+BCh] [rbp-2Ch]

  if ( DllCharacteristics )
  {
    v7 = *DllCharacteristics;
    v8 = 2 * (*DllCharacteristics & 4);
    v9 = v8 | 0x40;
    if ( (v7 & 2) == 0 )
      v9 = v8;
    v10 = v9 | 0x80;
    if ( (v7 & 0x800000) == 0 )
      v10 = v9;
    v11 = v10 | 0x100;
    if ( (v7 & 0x1000) == 0 )
      v11 = v10;
    v12 = v11 | 0x400000;
    if ( v7 >= 0 )
      v12 = v11;
  }
  else
  {
    v12 = 0;
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    580,
    (__int64)"LdrLoadDll",
    3u,
    "DLL name: %wZ\n",
    DllName);
  if ( (LdrpPolicyBits & 4) == 0 && ((unsigned __int16)DllPath & 0x401) == 0x401LL )
    return -1073741811;
  if ( (v12 & 8) == 0 || (LdrpPolicyBits & 8) != 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x2000) != 0 )
    {
      Dll = -1073740004;
    }
    else
    {
      LdrpInitializeDllPath(DllName->Buffer, DllPath, Path);
      Dll = LdrpLoadDll((__int64)DllName, (int)Path, v12, (__int64)BaseAddress);
      if ( v18 )
        RtlReleasePath(Path[0]);
      if ( Dll >= 0 )
      {
        v14 = (char *)BaseAddress[0];
        *DllHandle = (PVOID)*((_QWORD *)BaseAddress[0] + 6);
        LdrpDereferenceModule(v14);
      }
    }
  }
  else
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      601,
      (__int64)"LdrLoadDll",
      0,
      "Nonpackaged process attempted to load a packaged DLL.\n");
    Dll = -1073741398;
  }
  LdrpLogInternal((unsigned int)"minkernel\\ntdll\\ldrapi.c", 633, (__int64)"LdrLoadDll", 4u, "Status: 0x%08lx\n", Dll);
  return Dll;
}
