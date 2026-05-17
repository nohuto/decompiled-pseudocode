/*
 * XREFs of LdrpLoadShimEngine @ 0x180079E58
 * Callers:
 *     LdrpInitShimEngine @ 0x1800797C8 (LdrpInitShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800DC930 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     LdrpLoadDll @ 0x18001906C (LdrpLoadDll.c)
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     LdrpInitializeDllPath @ 0x18002B064 (LdrpInitializeDllPath.c)
 *     RtlReleasePath @ 0x180032D60 (RtlReleasePath.c)
 *     LdrpInitializeNode @ 0x18006D4F4 (LdrpInitializeNode.c)
 *     LdrpPinModule @ 0x180079978 (LdrpPinModule.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x180079FD8 (LdrpSendShimEngineInitialNotifications.c)
 *     LdrpInitializeShimDllDependencies @ 0x18007A070 (LdrpInitializeShimDllDependencies.c)
 *     LdrpInitializationFailure @ 0x18008ACF0 (LdrpInitializationFailure.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1800A1430 (ZwTerminateProcess.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall LdrpLoadShimEngine(PCWSTR SourceString)
{
  char v2; // r14
  void (__fastcall *v3)(_QWORD); // rsi
  __int64 v4; // rdi
  __int64 *v5; // rbx
  int Dll; // eax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  __int64 i; // rax
  __int64 v12; // [rsp+30h] [rbp-89h]
  __int64 v13; // [rsp+40h] [rbp-79h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-71h] BYREF
  __int64 v15[15]; // [rsp+60h] [rbp-59h] BYREF
  char v16; // [rsp+DCh] [rbp+23h]

  v2 = 1;
  LdrpInitializeDllPath(0LL, 16385LL, v15);
  g_ShimsLoading = 1;
  v3 = (void (__fastcall *)(_QWORD))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                            g_pfnSE_ShimDllLoaded,
                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    Dll = LdrpLoadDll((__int64)&DestinationString, (int)v15, 1, (__int64)&v13);
    if ( Dll < 0 )
    {
      LODWORD(v12) = Dll;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2949LL,
        (__int64)"LdrpLoadShimEngine",
        0LL,
        "Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n",
        &DestinationString,
        v12);
      v2 = 0;
    }
    else
    {
      *(_DWORD *)(v13 + 104) |= 0x100u;
      LdrpPinModule(v13);
      v8 = v13;
      if ( *(_DWORD *)(*(_QWORD *)(v13 + 152) + 56LL) == 7 )
      {
        v9 = LdrpInitializeNode(*(_QWORD *)(v13 + 152));
        v10 = v9;
        if ( v9 < 0 )
        {
          LODWORD(v12) = v9;
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            2975LL,
            (__int64)"LdrpLoadShimEngine",
            0LL,
            "Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n",
            &DestinationString,
            v12);
          v2 = 0;
          LdrpInitializationFailure(v10);
          ZwTerminateProcess(-1LL, v10);
          break;
        }
        v8 = v13;
      }
      v3(*(_QWORD *)(v8 + 48));
      LdrpDereferenceModule(v13);
    }
    SourceString += (unsigned __int64)DestinationString.MaximumLength >> 1;
  }
  if ( v16 )
    RtlReleasePath(v15[0]);
  ((void (*)(void))(__ROR8__(g_pfnSE_InstallBeforeInit, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
  v4 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    for ( i = qword_180187450; (__int64 *)i != &qword_180187450; i = *(_QWORD *)i )
    {
      v13 = i;
      *(_BYTE *)(i + 105) &= ~8u;
    }
  }
  v5 = (__int64 *)qword_180187450;
  if ( LdrInitState >= 2 )
    goto LABEL_10;
  while ( 1 )
  {
    v5 = (__int64 *)*v5;
LABEL_10:
    if ( v5 == &qword_180187450 )
      break;
    v13 = (__int64)v5;
    LdrpSendShimEngineInitialNotifications(v5[19], v4);
  }
  g_ShimsLoading = 0;
  g_ShimsEnabled = 1;
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
  LdrpInitializeShimDllDependencies();
  return v2;
}
