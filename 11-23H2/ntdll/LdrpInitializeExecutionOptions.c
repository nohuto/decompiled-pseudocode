/*
 * XREFs of LdrpInitializeExecutionOptions @ 0x1800DD3AC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     LdrControlFlowGuardEnforced @ 0x18002C3A0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180032E40 (LdrProtectMrdata.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180058DC0 (RtlQueryEnvironmentVariable_U.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180076F0C (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlUnicodeStringToInteger @ 0x180077500 (RtlUnicodeStringToInteger.c)
 *     RtlQueryApplicationKeyOption @ 0x18007DDEC (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileKeyOption @ 0x18007DF70 (RtlQueryImageFileKeyOption.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800AF77E (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800B0764 (RtlSetLowFragHeapGlobalFlags.c)
 *     RtlpInitializeLegacyDosDevicePathState @ 0x1800D716C (RtlpInitializeLegacyDosDevicePathState.c)
 *     LdrpConstructModernAppKeyName @ 0x1800DCB60 (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DCEA8 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800DD260 (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800DFEE4 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800E034C (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800E0478 (LdrpQueryIllegalCWDDevices.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800E5B74 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800ED708 (RtlOpenModernAppOptionsKey.c)
 */

__int64 __fastcall LdrpInitializeExecutionOptions(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        HANDLE *a4,
        HANDLE *a5,
        __int64 a6)
{
  HANDLE *v6; // r13
  char v8; // r12
  __int64 v9; // rdi
  unsigned int v10; // esi
  __int64 v11; // r14
  HANDLE v12; // r15
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ecx
  char v16; // al
  int v17; // eax
  int v18; // esi
  __int64 i; // rsi
  wchar_t *v20; // rdx
  bool *v21; // rax
  unsigned int v22; // ecx
  int v23; // r12d
  int v24; // eax
  int v25; // esi
  int ApplicationKeyOption; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  HANDLE *v30; // rbx
  int v32; // [rsp+30h] [rbp-D0h]
  int v33; // [rsp+30h] [rbp-D0h]
  int v34; // [rsp+30h] [rbp-D0h]
  int v35; // [rsp+30h] [rbp-D0h]
  int v36; // [rsp+30h] [rbp-D0h]
  int v37; // [rsp+30h] [rbp-D0h]
  int v38; // [rsp+30h] [rbp-D0h]
  int v39; // [rsp+30h] [rbp-D0h]
  int v40; // [rsp+30h] [rbp-D0h]
  int v41; // [rsp+30h] [rbp-D0h]
  int v42; // [rsp+30h] [rbp-D0h]
  int v43; // [rsp+30h] [rbp-D0h]
  unsigned int v44; // [rsp+40h] [rbp-C0h] BYREF
  char v45; // [rsp+44h] [rbp-BCh]
  __int64 v46; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v47; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v50; // [rsp+68h] [rbp-98h]
  __int64 v51[2]; // [rsp+70h] [rbp-90h] BYREF
  void *v52; // [rsp+80h] [rbp-80h] BYREF
  HANDLE *v53; // [rsp+88h] [rbp-78h]
  HANDLE *v54; // [rsp+90h] [rbp-70h]
  __int64 v55; // [rsp+98h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  int v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  void *v59; // [rsp+C0h] [rbp-40h]
  int v60; // [rsp+C8h] [rbp-38h]
  __int128 v61; // [rsp+D0h] [rbp-30h]
  char v62; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[200]; // [rsp+100h] [rbp+0h] BYREF

  v6 = a5;
  v50 = a1;
  v55 = a6;
  *a4 = 0LL;
  v8 = 0;
  *a5 = 0LL;
  v9 = 0LL;
  v53 = a4;
  v10 = 0;
  v51[0] = a3;
  v11 = 0LL;
  v54 = a5;
  v12 = 0LL;
  v46 = 0LL;
  Handle = 0LL;
  v47 = 0;
  v48 = 0LL;
  v45 = 1;
  v52 = 0LL;
  LdrpInitializeCriticalSectionExceptionGlobalMitigation();
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 0x4000) == 0 )
  {
    v13 = RtlpOpenImageFileOptionsKeyEx(v50, 9u, 0, &v46);
    v9 = v46;
    if ( v13 >= 0 )
    {
      *v53 = (HANDLE)v46;
      if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && (int)LdrpConstructModernAppKeyName(SourceString) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        v14 = RtlOpenModernAppOptionsKey(&DestinationString, v9, &v48);
        v11 = v48;
        if ( v14 >= 0 )
          *a5 = (HANDLE)v48;
      }
      RtlQueryApplicationKeyOption(
        v11,
        v9,
        (__int64)L"DisableHeapLookaside",
        4u,
        (__int64)&RtlpDisableHeapLookaside,
        4,
        v32,
        0LL);
      RtlQueryApplicationKeyOption(v11, v9, (__int64)L"FrontEndHeapDebugOptions", 4u, (__int64)&v47, 4, v33, 0LL);
      RtlQueryApplicationKeyOption(
        v11,
        v9,
        (__int64)L"ShutdownFlags",
        4u,
        (__int64)&RtlpShutdownProcessFlags,
        4,
        v34,
        0LL);
      v44 = 0;
      RtlQueryApplicationKeyOption(v11, v9, (__int64)L"UnloadEventTraceDepth", 4u, (__int64)&v44, 4, v35, 0LL);
      v15 = RtlpUnloadEventTraceExNumber;
      if ( v44 )
        v15 = v44;
      RtlpUnloadEventTraceExNumber = v15;
      v44 = 0;
      RtlQueryApplicationKeyOption(v11, v9, (__int64)L"MaxLoaderThreads", 4u, (__int64)&v44, 4, v36, 0LL);
      if ( v44 )
        *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = v44;
      v44 = 0;
      RtlQueryApplicationKeyOption(v11, v9, (__int64)L"UseImpersonatedDeviceMap", 4u, (__int64)&v44, 4, v37, 0LL);
      v16 = LdrpUseImpersonatedDeviceMap;
      if ( v44 )
        v16 = 1;
      LdrpUseImpersonatedDeviceMap = v16;
      v44 = 0;
      RtlQueryApplicationKeyOption(v11, v9, (__int64)L"TracingFlags", 4u, (__int64)&v44, 4, v38, 0LL);
      if ( v44 )
      {
        _InterlockedOr((volatile signed __int32 *)(a2 + 888), v44);
        v9 = v46;
        v11 = v48;
      }
      v44 = 0;
      if ( (int)RtlQueryApplicationKeyOption(
                  v11,
                  v9,
                  (__int64)L"RaiseExceptionOnPossibleDeadlock",
                  4u,
                  (__int64)&v44,
                  4,
                  v39,
                  0LL) >= 0 )
        RtlpRaiseExceptionOnPossibleDeadlock = v44 != 0;
      v44 = 0;
      if ( (int)RtlQueryApplicationKeyOption(v11, v9, (__int64)L"LegacyDosDevicePaths", 4u, (__int64)&v44, 4, v40, 0LL) >= 0 )
        RtlpInitializeLegacyDosDevicePathState(v44);
      v44 = 0;
      if ( (int)RtlQueryImageFileKeyOption(v9, (__int64)L"CFGOptions", 4, &v44, 4u, 0LL) >= 0 && (v44 & 1) != 0 )
      {
        LdrProtectMrdata(0);
        RtlGuardAllowSuppressedCalls = 1;
        LdrProtectMrdata(1);
      }
      if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
      {
        v57 = 48;
        v59 = &unk_180133DD0;
        v58 = v9;
        v60 = 64;
        v61 = 0LL;
        v17 = NtOpenKey();
        v18 = v17;
        if ( v17 == -1073741772 )
        {
          LdrpLargePageDllKeyHandle = 0LL;
        }
        else if ( v17 < 0 )
        {
          goto LABEL_71;
        }
      }
      RtlQueryImageFileKeyOption(v9, (__int64)L"MinimumStackCommitInBytes", 4, &v44, 4u, 0LL);
      if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)v44 )
        *(_QWORD *)(a2 + 792) = v44;
      for ( i = 0LL; i != 6; i += 2LL )
      {
        v20 = (&off_180134258)[i];
        v44 = 0;
        RtlQueryImageFileKeyOption(v9, (__int64)v20, 4, &v44, 4u, 0LL);
        v21 = (bool *)*(&off_180134258 + i + 1);
        *v21 = v44 != 0;
      }
      v44 = 0;
      RtlQueryImageFileKeyOption(v9, (__int64)L"MaxDeadActivationContexts", 4, &v44, 4u, 0LL);
      v22 = g_SxsMaxDeadActivationContexts;
      v23 = *(_DWORD *)(a2 + 188);
      if ( v44 )
        v22 = v44;
      g_SxsMaxDeadActivationContexts = v22;
      v8 = BYTE1(v23) & 1;
      v24 = RtlQueryApplicationKeyOption(v11, v9, (__int64)L"GlobalFlag", 4u, (__int64)&v46, 4, v41, &v52);
      v6 = v54;
      if ( v24 < 0 )
        goto LABEL_41;
      v25 = v46;
      if ( (v46 & 0x2000100) != 0 )
      {
        if ( !(unsigned int)LdrpIsVerifierActivationFilterMatched(a2, v11, v9) )
        {
          v25 &= 0xFDFFFEFF;
          LODWORD(v46) = v25;
        }
        if ( (v25 & 0x2000100) != 0 )
        {
          if ( (int)LdrpQueryAndUpdateVerifierLaunchCounter(v50, &v48) < 0 )
          {
LABEL_41:
            if ( (int)RtlQueryApplicationKeyOption(v11, v9, (__int64)L"GlobalFlag2", 4u, (__int64)&v46, 4, v42, 0LL) >= 0 )
              *(_DWORD *)(a2 + 1988) = v46;
            if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
            {
              v45 = 0;
              v12 = v52;
            }
            v44 = 0;
            ApplicationKeyOption = RtlQueryApplicationKeyOption(
                                     v11,
                                     v9,
                                     (__int64)L"QueryProcessModuleInformationLoopDetectorCount",
                                     4u,
                                     (__int64)&v44,
                                     4,
                                     v43,
                                     0LL);
            v10 = v47;
            if ( ApplicationKeyOption >= 0 )
              LdrpQueryProcessModuleInformationLoopDetectorCount = v44;
            goto LABEL_47;
          }
          if ( !(_DWORD)v48 )
          {
            v25 &= 0xFDFFFEFF;
            LODWORD(v46) = v25;
          }
        }
      }
      *(_DWORD *)(a2 + 188) = v25;
      goto LABEL_41;
    }
  }
LABEL_47:
  if ( LdrControlFlowGuardEnforced() )
    v10 |= 1u;
  RtlSetLowFragHeapGlobalFlags(v10, *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL));
  v18 = 0;
  if ( v45 && !LdrpIsSecureProcess && (MEMORY[0x7FFE03A0] & 1) != 0 )
  {
    if ( (int)AVrfOpenCurrentUserImageFileOptionsKey(v50, v27, &Handle) < 0 )
    {
      Handle = 0LL;
    }
    else if ( (int)RtlQueryImageFileKeyOption((__int64)Handle, (__int64)L"GlobalFlag", 4, &v46, 4u, 0LL) >= 0 )
    {
      v12 = Handle;
      *(_DWORD *)(a2 + 188) |= v46 & 0x2000100;
    }
  }
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 || LdrpPayloadRestrictionMitigationsEnabled() )
  {
    v29 = LdrpInitializeApplicationVerifierPackage(v50, a2, v8, (__int64)v12, v51[0], v55);
    v18 = v29;
    if ( v29 < 0 )
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        9425LL,
        (__int64)"LdrpInitializeExecutionOptions",
        0LL,
        "Initializing the application verifier package failed with status 0x%08lx\n",
        v29);
      goto LABEL_71;
    }
  }
  else if ( !v11 && !v9 )
  {
    if ( *(_BYTE *)(a2 + 2) )
    {
      v28 = *(_QWORD *)(a2 + 32);
      v51[1] = (__int64)&v62;
      LODWORD(v51[0]) = 0x200000;
      if ( (int)RtlQueryEnvironmentVariable_U(*(_WORD **)(v28 + 128), &qword_180133DB0, (__int64)v51) < 0
        || (v18 = RtlUnicodeStringToInteger((unsigned __int16 *)v51, 0, (int *)&v44), v18 < 0)
        || !v44 )
      {
        *(_DWORD *)(a2 + 188) |= 0x70u;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 1988) & 1) != 0 )
    *(_DWORD *)(a2 + 1984) |= 1u;
  if ( v18 >= 0 )
  {
    LdrpQueryIllegalCWDDevices(v9);
    goto LABEL_75;
  }
LABEL_71:
  v30 = v53;
  if ( *v53 )
  {
    NtClose(*v53);
    *v30 = 0LL;
  }
  if ( *v6 )
  {
    NtClose(*v6);
    *v6 = 0LL;
  }
LABEL_75:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v18;
}
