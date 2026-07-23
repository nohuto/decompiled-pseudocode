/*
 * XREFs of LdrGetDllHandleEx @ 0x18002A3F0
 * Callers:
 *     LdrGetDllHandle @ 0x18002B290 (LdrGetDllHandle.c)
 *     CsrClientConnectToServer @ 0x18004B5E0 (CsrClientConnectToServer.c)
 *     SbpResolveBasedOnName @ 0x18012723C (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrpFindLoadedDll @ 0x180016374 (LdrpFindLoadedDll.c)
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     LdrpIncrementModuleLoadCount @ 0x18002A550 (LdrpIncrementModuleLoadCount.c)
 *     LdrpInitializeDllPath @ 0x18002B234 (LdrpInitializeDllPath.c)
 *     RtlReleasePath @ 0x180032EC0 (RtlReleasePath.c)
 *     LdrpPinModule @ 0x180079308 (LdrpPinModule.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

NTSTATUS __cdecl LdrGetDllHandleEx(
        ULONG Flags,
        PWSTR DllPath,
        PULONG DllCharacteristics,
        PUNICODE_STRING DllName,
        PVOID *DllHandle)
{
  ULONG v8; // edi
  NTSTATUS LoadedDll; // ebx
  PVOID v10; // rsi
  int Count; // eax
  PVOID BaseAddress; // [rsp+30h] [rbp-B8h] BYREF
  PWSTR Path[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v15; // [rsp+BCh] [rbp-2Ch]

  BaseAddress = 0LL;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    1516,
    (__int64)"LdrGetDllHandleEx",
    3u,
    "DLL name: %wZ\n",
    DllName);
  LdrpInitializeDllPath(DllName->Buffer, DllPath, Path);
  if ( (Flags & 0xFFFFFFF8) == 0 && (Flags & 3) != 3 )
  {
    if ( DllHandle )
    {
      v8 = Flags & 2;
      goto LABEL_5;
    }
    v8 = Flags & 2;
    if ( (Flags & 2) != 0 )
    {
LABEL_5:
      LoadedDll = LdrpFindLoadedDll((__int64)DllName, (__int64)Path, &BaseAddress);
      if ( LoadedDll < 0 )
        goto LABEL_14;
      v10 = BaseAddress;
      if ( v8 )
      {
        Count = LdrpPinModule(BaseAddress);
      }
      else
      {
        if ( (Flags & 1) != 0 )
          goto LABEL_10;
        Count = LdrpIncrementModuleLoadCount(BaseAddress);
      }
      LoadedDll = Count;
      if ( Count < 0 )
      {
LABEL_12:
        LdrpDereferenceModule((char *)v10);
        goto LABEL_14;
      }
LABEL_10:
      if ( DllHandle )
        *DllHandle = (PVOID)*((_QWORD *)v10 + 6);
      goto LABEL_12;
    }
  }
  LoadedDll = -1073741811;
LABEL_14:
  if ( v15 )
    RtlReleasePath(Path[0]);
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    1566,
    (__int64)"LdrGetDllHandleEx",
    4u,
    "Status: 0x%08lx\n",
    LoadedDll);
  return LoadedDll;
}
