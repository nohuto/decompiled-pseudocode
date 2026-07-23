/*
 * XREFs of LdrGetDllHandleEx @ 0x180042DE0
 * Callers:
 *     CsrClientConnectToServer @ 0x1800794A0 (CsrClientConnectToServer.c)
 *     LdrGetDllHandle @ 0x18007ECF0 (LdrGetDllHandle.c)
 *     SbpResolveBasedOnName @ 0x1801257CC (SbpResolveBasedOnName.c)
 * Callees:
 *     RtlReleasePath @ 0x18001CC00 (RtlReleasePath.c)
 *     LdrpPinModule @ 0x180032A78 (LdrpPinModule.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x180038594 (LdrpInitializeDllPath.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003FC24 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDll @ 0x18004F750 (LdrpFindLoadedDll.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
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
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-B8h] BYREF
  PWSTR Path[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v15; // [rsp+BCh] [rbp-2Ch]

  BaseAddress[0] = 0LL;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    1516,
    (__int64)"LdrGetDllHandleEx",
    3u,
    "DLL name: %wZ\n",
    DllName);
  LdrpInitializeDllPath(DllName->Buffer, DllPath, (const WCHAR **)Path);
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
      LoadedDll = LdrpFindLoadedDll(DllName, Path, BaseAddress);
      if ( LoadedDll < 0 )
        goto LABEL_14;
      v10 = BaseAddress[0];
      if ( v8 )
      {
        Count = LdrpPinModule((__int64)BaseAddress[0]);
      }
      else
      {
        if ( (Flags & 1) != 0 )
          goto LABEL_10;
        Count = LdrpIncrementModuleLoadCount((__int64)BaseAddress[0]);
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
