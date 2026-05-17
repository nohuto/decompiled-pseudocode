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
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  void (__fastcall *v6)(_QWORD); // rsi
  __int64 v7; // rdi
  __int64 *v8; // rbx
  int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // edi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int64 i; // rax
  __int64 v21; // [rsp+30h] [rbp-89h]
  __int64 v22; // [rsp+40h] [rbp-79h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-71h] BYREF
  __int64 v24[15]; // [rsp+60h] [rbp-59h] BYREF
  char v25; // [rsp+DCh] [rbp+23h]

  v2 = 1;
  LdrpInitializeDllPath(0LL, 16385LL, v24);
  v4 = MEMORY[0x7FFE0330];
  v5 = MEMORY[0x7FFE0330] & 0x3F;
  g_ShimsLoading = 1;
  v6 = (void (__fastcall *)(_QWORD))(MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_ShimDllLoaded, 64 - (unsigned __int8)v5));
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v10 = LdrpLoadDll(&DestinationString.Length, (int)v24, 1u, &v22);
    if ( v10 < 0 )
    {
      LODWORD(v21) = v10;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2933,
        (__int64)"LdrpLoadShimEngine",
        0,
        "Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n",
        &DestinationString,
        v21);
      v2 = 0;
    }
    else
    {
      *(_DWORD *)(v22 + 104) |= 0x100u;
      LdrpPinModule(v22, v11, v12, v13);
      v14 = v22;
      if ( *(_DWORD *)(*(_QWORD *)(v22 + 152) + 56LL) == 7 )
      {
        v15 = LdrpInitializeNode(*(_QWORD *)(v22 + 152));
        v16 = v15;
        if ( v15 < 0 )
        {
          LODWORD(v21) = v15;
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            2959,
            (__int64)"LdrpLoadShimEngine",
            0,
            "Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n",
            &DestinationString,
            v21);
          v2 = 0;
          LdrpInitializationFailure(v16);
          ZwTerminateProcess(-1LL, v16);
          break;
        }
        v14 = v22;
      }
      v6(*(_QWORD *)(v14 + 48));
      LdrpDereferenceModule(v22, v17, v18, v19);
    }
    SourceString += (unsigned __int64)DestinationString.MaximumLength >> 1;
  }
  if ( v25 )
    RtlReleasePath(v24[0], v5, v4, v3);
  ((void (*)(void))(__ROR8__(g_pfnSE_InstallBeforeInit, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
  v7 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    for ( i = qword_18017A150; (__int64 *)i != &qword_18017A150; i = *(_QWORD *)i )
    {
      v22 = i;
      *(_BYTE *)(i + 105) &= ~8u;
    }
  }
  v8 = (__int64 *)qword_18017A150;
  if ( LdrInitState >= 2 )
    goto LABEL_10;
  while ( 1 )
  {
    v8 = (__int64 *)*v8;
LABEL_10:
    if ( v8 == &qword_18017A150 )
      break;
    v22 = (__int64)v8;
    LdrpSendShimEngineInitialNotifications(v8[19], v7);
  }
  g_ShimsLoading = 0;
  g_ShimsEnabled = 1;
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
  LdrpInitializeShimDllDependencies();
  return v2;
}
