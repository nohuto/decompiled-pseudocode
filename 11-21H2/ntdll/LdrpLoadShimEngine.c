/*
 * XREFs of LdrpLoadShimEngine @ 0x180072888
 * Callers:
 *     LdrpInitShimEngine @ 0x1800726D8 (LdrpInitShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800DC800 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     RtlReleasePath @ 0x18001CC00 (RtlReleasePath.c)
 *     LdrpPinModule @ 0x180032A78 (LdrpPinModule.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x180038594 (LdrpInitializeDllPath.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpLoadDll @ 0x180044E5C (LdrpLoadDll.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x180072AA8 (LdrpSendShimEngineInitialNotifications.c)
 *     LdrpInitializeShimDllDependencies @ 0x180072B40 (LdrpInitializeShimDllDependencies.c)
 *     LdrpInitializeNode @ 0x1800732F4 (LdrpInitializeNode.c)
 *     LdrpInitializationFailure @ 0x180091F40 (LdrpInitializationFailure.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1800A45F0 (ZwTerminateProcess.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall LdrpLoadShimEngine(PCWSTR SourceString)
{
  char v2; // r14
  void (__fastcall *v3)(_QWORD); // rsi
  __int64 v4; // rdi
  __int64 *v5; // rbx
  int v7; // eax
  _QWORD *v8; // rcx
  int v9; // eax
  unsigned __int32 v10; // edi
  __int64 *i; // rax
  __int64 v12; // [rsp+30h] [rbp-89h]
  PVOID BaseAddress; // [rsp+40h] [rbp-79h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-71h] BYREF
  PWSTR Path[15]; // [rsp+60h] [rbp-59h] BYREF
  char v16; // [rsp+DCh] [rbp+23h]

  v2 = 1;
  LdrpInitializeDllPath(0LL, (const WCHAR *)0x4001, (const WCHAR **)Path);
  g_ShimsLoading = 1;
  v3 = (void (__fastcall *)(_QWORD))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                            g_pfnSE_ShimDllLoaded,
                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v7 = LdrpLoadDll(&DestinationString.Length, (int)Path, 1, &BaseAddress);
    if ( v7 < 0 )
    {
      LODWORD(v12) = v7;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2933,
        (__int64)"LdrpLoadShimEngine",
        0,
        "Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n",
        &DestinationString,
        v12);
      v2 = 0;
    }
    else
    {
      *((_DWORD *)BaseAddress + 26) |= 0x100u;
      LdrpPinModule((__int64)BaseAddress);
      v8 = BaseAddress;
      if ( *(_DWORD *)(*((_QWORD *)BaseAddress + 19) + 56LL) == 7 )
      {
        v9 = LdrpInitializeNode(*((_QWORD *)BaseAddress + 19));
        v10 = v9;
        if ( v9 < 0 )
        {
          LODWORD(v12) = v9;
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            2959,
            (__int64)"LdrpLoadShimEngine",
            0,
            "Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n",
            &DestinationString,
            v12);
          v2 = 0;
          LdrpInitializationFailure(v10);
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v10);
          break;
        }
        v8 = BaseAddress;
      }
      v3(v8[6]);
      LdrpDereferenceModule((char *)BaseAddress);
    }
    SourceString += (unsigned __int64)DestinationString.MaximumLength >> 1;
  }
  if ( v16 )
    RtlReleasePath(Path[0]);
  ((void (*)(void))(__ROR8__(g_pfnSE_InstallBeforeInit, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
  v4 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    for ( i = (__int64 *)qword_18017A150; i != &qword_18017A150; i = (__int64 *)*i )
    {
      BaseAddress = i;
      *((_BYTE *)i + 105) &= ~8u;
    }
  }
  v5 = (__int64 *)qword_18017A150;
  if ( LdrInitState >= 2 )
    goto LABEL_10;
  while ( 1 )
  {
    v5 = (__int64 *)*v5;
LABEL_10:
    if ( v5 == &qword_18017A150 )
      break;
    BaseAddress = v5;
    LdrpSendShimEngineInitialNotifications(v5[19], v4);
  }
  g_ShimsLoading = 0;
  g_ShimsEnabled = 1;
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  LdrpInitializeShimDllDependencies();
  return v2;
}
