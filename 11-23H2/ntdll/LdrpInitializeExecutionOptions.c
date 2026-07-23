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
  HANDLE v9; // rdi
  unsigned int v10; // esi
  void *v11; // r14
  HANDLE v12; // r15
  int v13; // eax
  int v14; // eax
  ULONG v15; // ecx
  char v16; // al
  NTSTATUS v17; // eax
  NTSTATUS v18; // esi
  __int64 i; // rsi
  const WCHAR *v20; // rdx
  bool *v21; // rax
  ULONG v22; // ecx
  int v23; // r12d
  int v24; // eax
  int v25; // esi
  int ApplicationKeyOption; // eax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  HANDLE *v31; // rbx
  __int64 v33; // [rsp+30h] [rbp-D0h]
  __int64 v34; // [rsp+30h] [rbp-D0h]
  __int64 v35; // [rsp+30h] [rbp-D0h]
  __int64 v36; // [rsp+30h] [rbp-D0h]
  __int64 v37; // [rsp+30h] [rbp-D0h]
  __int64 v38; // [rsp+30h] [rbp-D0h]
  __int64 v39; // [rsp+30h] [rbp-D0h]
  __int64 v40; // [rsp+30h] [rbp-D0h]
  __int64 v41; // [rsp+30h] [rbp-D0h]
  __int64 v42; // [rsp+30h] [rbp-D0h]
  __int64 v43; // [rsp+30h] [rbp-D0h]
  __int64 v44; // [rsp+30h] [rbp-D0h]
  ULONG v45; // [rsp+40h] [rbp-C0h] BYREF
  char v46; // [rsp+44h] [rbp-BCh]
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v48; // [rsp+50h] [rbp-B0h] BYREF
  void *v49; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v51; // [rsp+68h] [rbp-98h]
  _UNICODE_STRING Value; // [rsp+70h] [rbp-90h] BYREF
  void *v53; // [rsp+80h] [rbp-80h] BYREF
  HANDLE *v54; // [rsp+88h] [rbp-78h]
  HANDLE *v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  char v59; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[200]; // [rsp+100h] [rbp+0h] BYREF

  v6 = a5;
  v51 = a1;
  v56 = a6;
  *a4 = 0LL;
  v8 = 0;
  *a5 = 0LL;
  v9 = 0LL;
  v54 = a4;
  v10 = 0;
  *(_QWORD *)&Value.Length = a3;
  v11 = 0LL;
  v55 = a5;
  v12 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  v48 = 0;
  v49 = 0LL;
  v46 = 1;
  v53 = 0LL;
  LdrpInitializeCriticalSectionExceptionGlobalMitigation();
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 0x4000) == 0 )
  {
    v13 = RtlpOpenImageFileOptionsKeyEx(v51, 9u, 0, &KeyHandle);
    v9 = KeyHandle;
    if ( v13 >= 0 )
    {
      *v54 = KeyHandle;
      if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && LdrpConstructModernAppKeyName(SourceString) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        v14 = RtlOpenModernAppOptionsKey(&DestinationString, v9, &v49);
        v11 = v49;
        if ( v14 >= 0 )
          *a5 = v49;
      }
      RtlQueryApplicationKeyOption(
        v11,
        v9,
        (__int64)L"DisableHeapLookaside",
        4LL,
        (__int64)&RtlpDisableHeapLookaside,
        4,
        v33,
        0LL);
      RtlQueryApplicationKeyOption(v11, v9, (__int64)L"FrontEndHeapDebugOptions", 4LL, (__int64)&v48, 4, v34, 0LL);
      RtlQueryApplicationKeyOption(
        v11,
        v9,
        (__int64)L"ShutdownFlags",
        4LL,
        (__int64)&RtlpShutdownProcessFlags,
        4,
        v35,
        0LL);
      v45 = 0;
      RtlQueryApplicationKeyOption(v11, v9, (__int64)L"UnloadEventTraceDepth", 4LL, (__int64)&v45, 4, v36, 0LL);
      v15 = RtlpUnloadEventTraceExNumber;
      if ( v45 )
        v15 = v45;
      RtlpUnloadEventTraceExNumber = v15;
      v45 = 0;
      RtlQueryApplicationKeyOption(v11, v9, (__int64)L"MaxLoaderThreads", 4LL, (__int64)&v45, 4, v37, 0LL);
      if ( v45 )
        *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = v45;
      v45 = 0;
      RtlQueryApplicationKeyOption(v11, v9, (__int64)L"UseImpersonatedDeviceMap", 4LL, (__int64)&v45, 4, v38, 0LL);
      v16 = LdrpUseImpersonatedDeviceMap;
      if ( v45 )
        v16 = 1;
      LdrpUseImpersonatedDeviceMap = v16;
      v45 = 0;
      RtlQueryApplicationKeyOption(v11, v9, (__int64)L"TracingFlags", 4LL, (__int64)&v45, 4, v39, 0LL);
      if ( v45 )
      {
        _InterlockedOr((volatile signed __int32 *)(a2 + 888), v45);
        v9 = KeyHandle;
        v11 = v49;
      }
      v45 = 0;
      if ( (int)RtlQueryApplicationKeyOption(
                  v11,
                  v9,
                  (__int64)L"RaiseExceptionOnPossibleDeadlock",
                  4LL,
                  (__int64)&v45,
                  4,
                  v40,
                  0LL) >= 0 )
        RtlpRaiseExceptionOnPossibleDeadlock = v45 != 0;
      v45 = 0;
      if ( (int)RtlQueryApplicationKeyOption(v11, v9, (__int64)L"LegacyDosDevicePaths", 4LL, (__int64)&v45, 4, v41, 0LL) >= 0 )
        RtlpInitializeLegacyDosDevicePathState(v45);
      v45 = 0;
      if ( RtlQueryImageFileKeyOption(v9, L"CFGOptions", 4, &v45, 4u, 0LL) >= 0 && (v45 & 1) != 0 )
      {
        LdrProtectMrdata(0);
        RtlGuardAllowSuppressedCalls = 1;
        LdrProtectMrdata(1);
      }
      if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180133DD0;
        ObjectAttributes.RootDirectory = v9;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v17 = NtOpenKey(&LdrpLargePageDllKeyHandle, 1u, &ObjectAttributes);
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
      RtlQueryImageFileKeyOption(v9, L"MinimumStackCommitInBytes", 4, &v45, 4u, 0LL);
      if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)v45 )
        *(_QWORD *)(a2 + 792) = v45;
      for ( i = 0LL; i != 6; i += 2LL )
      {
        v20 = (&off_180134258)[i];
        v45 = 0;
        RtlQueryImageFileKeyOption(v9, v20, 4, &v45, 4u, 0LL);
        v21 = (bool *)*(&off_180134258 + i + 1);
        *v21 = v45 != 0;
      }
      v45 = 0;
      RtlQueryImageFileKeyOption(v9, L"MaxDeadActivationContexts", 4, &v45, 4u, 0LL);
      v22 = g_SxsMaxDeadActivationContexts;
      v23 = *(_DWORD *)(a2 + 188);
      if ( v45 )
        v22 = v45;
      g_SxsMaxDeadActivationContexts = v22;
      v8 = BYTE1(v23) & 1;
      v24 = RtlQueryApplicationKeyOption(v11, v9, (__int64)L"GlobalFlag", 4LL, (__int64)&KeyHandle, 4, v42, &v53);
      v6 = v55;
      if ( v24 < 0 )
        goto LABEL_41;
      v25 = (int)KeyHandle;
      if ( ((unsigned int)KeyHandle & 0x2000100) != 0 )
      {
        if ( !(unsigned int)LdrpIsVerifierActivationFilterMatched(a2, v11, v9) )
        {
          v25 &= 0xFDFFFEFF;
          LODWORD(KeyHandle) = v25;
        }
        if ( (v25 & 0x2000100) != 0 )
        {
          if ( (int)LdrpQueryAndUpdateVerifierLaunchCounter(v51, &v49) < 0 )
          {
LABEL_41:
            if ( (int)RtlQueryApplicationKeyOption(
                        v11,
                        v9,
                        (__int64)L"GlobalFlag2",
                        4LL,
                        (__int64)&KeyHandle,
                        4,
                        v43,
                        0LL) >= 0 )
              *(_DWORD *)(a2 + 1988) = (_DWORD)KeyHandle;
            if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
            {
              v46 = 0;
              v12 = v53;
            }
            v45 = 0;
            ApplicationKeyOption = RtlQueryApplicationKeyOption(
                                     v11,
                                     v9,
                                     (__int64)L"QueryProcessModuleInformationLoopDetectorCount",
                                     4LL,
                                     (__int64)&v45,
                                     4,
                                     v44,
                                     0LL);
            v10 = v48;
            if ( ApplicationKeyOption >= 0 )
              LdrpQueryProcessModuleInformationLoopDetectorCount = v45;
            goto LABEL_47;
          }
          if ( !(_DWORD)v49 )
          {
            v25 &= 0xFDFFFEFF;
            LODWORD(KeyHandle) = v25;
          }
        }
      }
      *(_DWORD *)(a2 + 188) = v25;
      goto LABEL_41;
    }
  }
LABEL_47:
  LOBYTE(v27) = LdrControlFlowGuardEnforced();
  if ( v27 )
    v10 |= 1u;
  RtlSetLowFragHeapGlobalFlags(v10, *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL));
  v18 = 0;
  if ( v46 && !LdrpIsSecureProcess && (MEMORY[0x7FFE03A0] & 1) != 0 )
  {
    if ( (int)AVrfOpenCurrentUserImageFileOptionsKey(v51, v28, &Handle) < 0 )
    {
      Handle = 0LL;
    }
    else if ( RtlQueryImageFileKeyOption(Handle, L"GlobalFlag", 4, &KeyHandle, 4u, 0LL) >= 0 )
    {
      v12 = Handle;
      *(_DWORD *)(a2 + 188) |= (unsigned int)KeyHandle & 0x2000100;
    }
  }
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 || LdrpPayloadRestrictionMitigationsEnabled() )
  {
    v30 = LdrpInitializeApplicationVerifierPackage(v51, a2, v8, v12, *(__int64 *)&Value.Length, v56);
    v18 = v30;
    if ( v30 < 0 )
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        9425,
        (__int64)"LdrpInitializeExecutionOptions",
        0,
        "Initializing the application verifier package failed with status 0x%08lx\n",
        v30);
      goto LABEL_71;
    }
  }
  else if ( !v11 && !v9 )
  {
    if ( *(_BYTE *)(a2 + 2) )
    {
      v29 = *(_QWORD *)(a2 + 32);
      Value.Buffer = (wchar_t *)&v59;
      *(_DWORD *)&Value.Length = 0x200000;
      if ( RtlQueryEnvironmentVariable_U(*(PVOID *)(v29 + 128), (PUNICODE_STRING)&stru_180133DB0, &Value) < 0
        || (v18 = RtlUnicodeStringToInteger(&Value, 0, &v45), v18 < 0)
        || !v45 )
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
  v31 = v54;
  if ( *v54 )
  {
    NtClose(*v54);
    *v31 = 0LL;
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
