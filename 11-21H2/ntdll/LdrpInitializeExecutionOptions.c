/*
 * XREFs of LdrpInitializeExecutionOptions @ 0x1800DD27C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlQueryEnvironmentVariable_U @ 0x18000CE60 (RtlQueryEnvironmentVariable_U.c)
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringToInteger @ 0x18007C230 (RtlUnicodeStringToInteger.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007C3A8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryApplicationKeyOption @ 0x180081D9C (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileKeyOption @ 0x180081F20 (RtlQueryImageFileKeyOption.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 *     _alloca_probe @ 0x1800A8F40 (_alloca_probe.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800B0844 (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800B0E10 (RtlSetLowFragHeapGlobalFlags.c)
 *     RtlpInitializeLegacyDosDevicePathState @ 0x1800D77B8 (RtlpInitializeLegacyDosDevicePathState.c)
 *     LdrpConstructModernAppKeyName @ 0x1800DCA30 (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DCD78 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800DD130 (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800E02A0 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800E0708 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800E0834 (LdrpQueryIllegalCWDDevices.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800E59B4 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800ECB08 (RtlOpenModernAppOptionsKey.c)
 */

__int64 __fastcall LdrpInitializeExecutionOptions(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        HANDLE *a4,
        HANDLE *a5,
        __int64 a6)
{
  char v8; // r13
  HANDLE v9; // rbx
  ULONG v10; // edi
  char v11; // r12
  int v12; // eax
  void *v13; // r15
  void *v14; // r14
  ULONG v15; // ecx
  char v16; // al
  _BYTE *v17; // r14
  NTSTATUS v18; // eax
  NTSTATUS v19; // edi
  ULONG v20; // ebx
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v23; // eax
  int v24; // ecx
  NTSTATUS v25; // eax
  NTSTATUS v26; // edi
  _BYTE *v27; // rdi
  NTSTATUS v28; // eax
  void *v29; // r14
  int v30; // ecx
  ULONG v31; // ebx
  void *v32; // rcx
  PVOID v33; // rax
  NTSTATUS v34; // eax
  __int64 i; // rdi
  const WCHAR *v36; // rdx
  bool *v37; // rcx
  _BYTE *v38; // rdi
  NTSTATUS v39; // eax
  void *v40; // r14
  int v41; // ecx
  ULONG v42; // ebx
  void *v43; // rcx
  PVOID v44; // rax
  NTSTATUS v45; // eax
  ULONG v46; // ecx
  void *v47; // r14
  ULONG v48; // edi
  int v49; // eax
  __int64 v50; // rdx
  unsigned __int16 *v51; // r14
  HANDLE v52; // r15
  void *v53; // r12
  _BYTE *v54; // r14
  NTSTATUS v55; // eax
  NTSTATUS v56; // edi
  ULONG v57; // ebx
  void *v58; // rcx
  PVOID v59; // rax
  NTSTATUS v60; // eax
  int v61; // ecx
  __int64 v62; // rcx
  int v63; // eax
  HANDLE *v64; // rbx
  HANDLE *v65; // rbx
  ULONG Length; // [rsp+20h] [rbp-E0h]
  ULONG Lengtha; // [rsp+20h] [rbp-E0h]
  ULONG Lengthb; // [rsp+20h] [rbp-E0h]
  __int64 v70; // [rsp+30h] [rbp-D0h]
  __int64 v71; // [rsp+30h] [rbp-D0h]
  __int64 v72; // [rsp+30h] [rbp-D0h]
  __int64 v73; // [rsp+30h] [rbp-D0h]
  __int64 v74; // [rsp+30h] [rbp-D0h]
  __int64 v75; // [rsp+30h] [rbp-D0h]
  __int64 v76; // [rsp+30h] [rbp-D0h]
  __int64 v77; // [rsp+30h] [rbp-D0h]
  __int64 v78; // [rsp+30h] [rbp-D0h]
  __int64 v79; // [rsp+30h] [rbp-D0h]
  __int64 v80; // [rsp+30h] [rbp-D0h]
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v82; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v85; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG v86; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v87; // [rsp+68h] [rbp-98h]
  ULONG v88; // [rsp+70h] [rbp-90h] BYREF
  void *v89; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v91; // [rsp+88h] [rbp-78h] BYREF
  int v92; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING v93; // [rsp+98h] [rbp-68h] BYREF
  _UNICODE_STRING ValueName; // [rsp+A8h] [rbp-58h] BYREF
  _UNICODE_STRING String; // [rsp+B8h] [rbp-48h] BYREF
  _UNICODE_STRING v96; // [rsp+C8h] [rbp-38h] BYREF
  _UNICODE_STRING v97; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v98; // [rsp+E8h] [rbp-18h]
  HANDLE *v99; // [rsp+F0h] [rbp-10h]
  HANDLE *v100; // [rsp+F8h] [rbp-8h]
  _UNICODE_STRING DestinationString; // [rsp+100h] [rbp+0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp+10h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v104[1024]; // [rsp+540h] [rbp+440h] BYREF
  _BYTE v105[1024]; // [rsp+940h] [rbp+840h] BYREF
  _BYTE v106[1024]; // [rsp+D40h] [rbp+C40h] BYREF
  char v107; // [rsp+1140h] [rbp+1040h] BYREF
  WCHAR SourceString[200]; // [rsp+1160h] [rbp+1060h] BYREF

  v98 = a6;
  *a4 = 0LL;
  v8 = 0;
  v99 = a4;
  v9 = 0LL;
  *(_QWORD *)&v93.Length = a3;
  v10 = 0;
  v11 = 1;
  v87 = a1;
  v100 = a5;
  KeyHandle = 0LL;
  Handle = 0LL;
  v82 = 0;
  v89 = 0LL;
  *a5 = 0LL;
  v91 = 0LL;
  LdrpInitializeCriticalSectionExceptionGlobalMitigation();
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 0x4000) != 0 )
    goto LABEL_107;
  v12 = RtlpOpenImageFileOptionsKeyEx(v87, 9LL, 0, &KeyHandle);
  v9 = KeyHandle;
  if ( v12 < 0 )
    goto LABEL_107;
  *a4 = KeyHandle;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 )
  {
    v13 = 0LL;
    if ( LdrpConstructModernAppKeyName(SourceString) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( (int)RtlOpenModernAppOptionsKey(&DestinationString, v9, &v89) >= 0 )
        *a5 = v89;
    }
  }
  else
  {
    v13 = 0LL;
  }
  v14 = v89;
  RtlQueryApplicationKeyOption(
    v89,
    v9,
    (__int64)L"DisableHeapLookaside",
    4LL,
    (__int64)&RtlpDisableHeapLookaside,
    4,
    v70,
    0LL);
  RtlQueryApplicationKeyOption(v14, v9, (__int64)L"FrontEndHeapDebugOptions", 4LL, (__int64)&v82, 4, v71, 0LL);
  RtlQueryApplicationKeyOption(v14, v9, (__int64)L"ShutdownFlags", 4LL, (__int64)&RtlpShutdownProcessFlags, 4, v72, 0LL);
  Value = 0;
  RtlQueryApplicationKeyOption(v14, v9, (__int64)L"UnloadEventTraceDepth", 4LL, (__int64)&Value, 4, v73, 0LL);
  v15 = RtlpUnloadEventTraceExNumber;
  if ( Value )
    v15 = Value;
  RtlpUnloadEventTraceExNumber = v15;
  Value = 0;
  RtlQueryApplicationKeyOption(v14, v9, (__int64)L"MaxLoaderThreads", 4LL, (__int64)&Value, 4, v74, 0LL);
  if ( Value )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = Value;
  Value = 0;
  RtlQueryApplicationKeyOption(v89, v9, (__int64)L"UseImpersonatedDeviceMap", 4LL, (__int64)&Value, 4, v75, 0LL);
  v16 = LdrpUseImpersonatedDeviceMap;
  if ( Value )
    v16 = 1;
  LdrpUseImpersonatedDeviceMap = v16;
  Value = 0;
  RtlQueryApplicationKeyOption(v89, v9, (__int64)L"TracingFlags", 4LL, (__int64)&Value, 4, v76, 0LL);
  if ( Value )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), Value);
    v9 = KeyHandle;
  }
  Value = 0;
  if ( (int)RtlQueryApplicationKeyOption(
              v89,
              v9,
              (__int64)L"RaiseExceptionOnPossibleDeadlock",
              4LL,
              (__int64)&Value,
              4,
              v77,
              0LL) >= 0 )
    RtlpRaiseExceptionOnPossibleDeadlock = Value != 0;
  Value = 0;
  if ( (int)RtlQueryApplicationKeyOption(v89, v9, (__int64)L"LegacyDosDevicePaths", 4LL, (__int64)&Value, 4, v78, 0LL) >= 0 )
    RtlpInitializeLegacyDosDevicePathState(Value);
  Value = 0;
  if ( RtlInitUnicodeStringEx(&ValueName, L"CFGOptions") >= 0 )
  {
    v17 = KeyValueInformation;
    v18 = NtQueryValueKey(v9, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x400u, &ResultLength);
    v19 = v18;
    if ( v18 < 0 )
    {
      if ( v18 == -2147483643 )
      {
        while ( 1 )
        {
          v20 = ResultLength;
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( !ProcessHeap )
            break;
          Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, ResultLength);
          v13 = Heap;
          if ( !Heap )
            break;
          v17 = Heap;
          Length = v20;
          v9 = KeyHandle;
          v23 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Length, &ResultLength);
          v19 = v23;
          if ( v23 >= 0 )
            goto LABEL_28;
          if ( v23 != -2147483643 )
            goto LABEL_39;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
        }
        v9 = KeyHandle;
      }
      goto LABEL_44;
    }
LABEL_28:
    v24 = *((_DWORD *)v17 + 1);
    if ( ((v24 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v24 == 4 )
      {
        if ( *((_DWORD *)v17 + 2) == 4 )
        {
          ResultLength = 4;
          Value = *((_DWORD *)v17 + 3);
        }
        else
        {
          v19 = -1073741820;
        }
        goto LABEL_38;
      }
      if ( v24 == 1 )
      {
        if ( ((unsigned __int8)&Value & 3) != 0 )
        {
          v19 = -2147483646;
        }
        else
        {
          ResultLength = 4;
          ValueName.Buffer = (wchar_t *)(v17 + 12);
          ValueName.Length = *((_WORD *)v17 + 4);
          ValueName.MaximumLength = *((_WORD *)v17 + 4);
          v19 = RtlUnicodeStringToInteger(&ValueName, 0, &Value);
        }
        goto LABEL_38;
      }
    }
    v19 = -1073741788;
LABEL_38:
    if ( v13 )
    {
LABEL_39:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
      v9 = KeyHandle;
    }
    if ( v19 >= 0 && (Value & 1) != 0 )
    {
      LdrProtectMrdata(0);
      RtlGuardAllowSuppressedCalls = 1;
      LdrProtectMrdata(1);
    }
  }
LABEL_44:
  if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_18012D648;
    ObjectAttributes.RootDirectory = v9;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v25 = NtOpenKey(&LdrpLargePageDllKeyHandle, 1u, &ObjectAttributes);
    v26 = v25;
    if ( v25 == -1073741772 )
    {
      LdrpLargePageDllKeyHandle = 0LL;
    }
    else if ( v25 < 0 )
    {
      goto LABEL_155;
    }
  }
  if ( RtlInitUnicodeStringEx(&String, L"MinimumStackCommitInBytes") >= 0 )
  {
    v27 = v104;
    v28 = NtQueryValueKey(v9, &String, KeyValuePartialInformation, v104, 0x400u, &v85);
    if ( v28 < 0 )
    {
      if ( v28 != -2147483643 )
        goto LABEL_67;
      while ( 1 )
      {
        v31 = v85;
        v32 = NtCurrentPeb()->ProcessHeap;
        if ( !v32 )
          goto LABEL_66;
        v33 = RtlAllocateHeap(v32, NtdllBaseTag + 1572864, v85);
        v29 = v33;
        if ( !v33 )
          goto LABEL_66;
        v27 = v33;
        Lengtha = v31;
        v9 = KeyHandle;
        v34 = NtQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, v33, Lengtha, &v85);
        if ( v34 >= 0 )
          goto LABEL_51;
        if ( v34 != -2147483643 )
          goto LABEL_65;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v27);
      }
    }
    v29 = 0LL;
LABEL_51:
    v30 = *((_DWORD *)v27 + 1);
    if ( ((v30 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v30 == 4 )
      {
        if ( *((_DWORD *)v27 + 2) == 4 )
        {
          v85 = 4;
          Value = *((_DWORD *)v27 + 3);
        }
      }
      else if ( v30 == 1 && ((unsigned __int8)&Value & 3) == 0 )
      {
        v85 = 4;
        String.Buffer = (wchar_t *)(v27 + 12);
        String.Length = *((_WORD *)v27 + 4);
        String.MaximumLength = *((_WORD *)v27 + 4);
        RtlUnicodeStringToInteger(&String, 0, &Value);
      }
    }
    if ( v29 )
    {
LABEL_65:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v29);
LABEL_66:
      v9 = KeyHandle;
    }
  }
LABEL_67:
  if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)Value )
    *(_QWORD *)(a2 + 792) = Value;
  for ( i = 0LL; i != 6; i += 2LL )
  {
    v36 = (&off_18012D5E8)[i];
    Value = 0;
    RtlQueryImageFileKeyOption(v9, v36, 4, &Value, 4u, 0LL);
    v37 = (bool *)*(&off_18012D5E8 + i + 1);
    *v37 = Value != 0;
  }
  Value = 0;
  if ( RtlInitUnicodeStringEx(&v96, L"MaxDeadActivationContexts") >= 0 )
  {
    v38 = v105;
    v39 = NtQueryValueKey(v9, &v96, KeyValuePartialInformation, v105, 0x400u, &v86);
    if ( v39 < 0 )
    {
      if ( v39 == -2147483643 )
      {
        while ( 1 )
        {
          v42 = v86;
          v43 = NtCurrentPeb()->ProcessHeap;
          if ( !v43 )
            break;
          v44 = RtlAllocateHeap(v43, NtdllBaseTag + 1572864, v86);
          v40 = v44;
          if ( !v44 )
            break;
          v38 = v44;
          Lengthb = v42;
          v9 = KeyHandle;
          v45 = NtQueryValueKey(KeyHandle, &v96, KeyValuePartialInformation, v44, Lengthb, &v86);
          if ( v45 >= 0 )
            goto LABEL_74;
          if ( v45 != -2147483643 )
            goto LABEL_88;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v38);
        }
        v9 = KeyHandle;
      }
    }
    else
    {
      v40 = 0LL;
LABEL_74:
      v41 = *((_DWORD *)v38 + 1);
      if ( ((v41 - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( v41 == 4 )
        {
          if ( *((_DWORD *)v38 + 2) == 4 )
          {
            v86 = 4;
            Value = *((_DWORD *)v38 + 3);
          }
        }
        else if ( v41 == 1 && ((unsigned __int8)&Value & 3) == 0 )
        {
          v86 = 4;
          v96.Buffer = (wchar_t *)(v38 + 12);
          v96.Length = *((_WORD *)v38 + 4);
          v96.MaximumLength = *((_WORD *)v38 + 4);
          RtlUnicodeStringToInteger(&v96, 0, &Value);
        }
      }
      if ( v40 )
      {
LABEL_88:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v40);
        v9 = KeyHandle;
      }
      v46 = g_SxsMaxDeadActivationContexts;
      if ( Value )
        v46 = Value;
      g_SxsMaxDeadActivationContexts = v46;
    }
  }
  v47 = v89;
  v8 = BYTE1(*(_DWORD *)(a2 + 188)) & 1;
  if ( (int)RtlQueryApplicationKeyOption(v89, v9, (__int64)L"GlobalFlag", 4LL, (__int64)&v88, 4, v79, &v91) < 0 )
    goto LABEL_102;
  v48 = v88;
  if ( (v88 & 0x2000100) == 0 )
    goto LABEL_101;
  if ( !(unsigned int)LdrpIsVerifierActivationFilterMatched(a2, v47, v9) )
  {
    v48 &= 0xFDFFFEFF;
    v88 = v48;
  }
  if ( (v48 & 0x2000100) == 0 )
    goto LABEL_101;
  if ( (int)LdrpQueryAndUpdateVerifierLaunchCounter(v87, &v92) >= 0 )
  {
    if ( !v92 )
    {
      v48 &= 0xFDFFFEFF;
      v88 = v48;
    }
LABEL_101:
    *(_DWORD *)(a2 + 188) = v48;
  }
LABEL_102:
  if ( (int)RtlQueryApplicationKeyOption(v89, v9, (__int64)L"GlobalFlag2", 4LL, (__int64)&v88, 4, v80, 0LL) >= 0 )
    *(_DWORD *)(a2 + 1988) = v88;
  v10 = v82;
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    v11 = 0;
  else
    v91 = 0LL;
LABEL_107:
  LOBYTE(v49) = LdrControlFlowGuardEnforced();
  if ( v49 )
    v10 |= 1u;
  RtlSetLowFragHeapGlobalFlags(v10, *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL));
  if ( !v11 || LdrpIsSecureProcess )
  {
    v51 = v87;
  }
  else
  {
    v51 = v87;
    if ( (MEMORY[0x7FFE03A0] & 1) != 0 )
    {
      if ( (int)AVrfOpenCurrentUserImageFileOptionsKey(v87, v50, &Handle) < 0 )
      {
        Handle = 0LL;
      }
      else
      {
        v52 = Handle;
        v53 = 0LL;
        if ( RtlInitUnicodeStringEx(&v97, L"GlobalFlag") >= 0 )
        {
          v54 = v106;
          v55 = NtQueryValueKey(v52, &v97, KeyValuePartialInformation, v106, 0x400u, &v82);
          v56 = v55;
          if ( v55 < 0 )
          {
            if ( v55 == -2147483643 )
            {
              while ( 1 )
              {
                v57 = v82;
                v58 = NtCurrentPeb()->ProcessHeap;
                if ( !v58 )
                  break;
                v59 = RtlAllocateHeap(v58, NtdllBaseTag + 1572864, v82);
                v53 = v59;
                if ( !v59 )
                  break;
                v54 = v59;
                v60 = NtQueryValueKey(v52, &v97, KeyValuePartialInformation, v59, v57, &v82);
                v56 = v60;
                if ( v60 >= 0 )
                {
                  v9 = KeyHandle;
                  goto LABEL_122;
                }
                if ( v60 != -2147483643 )
                  goto LABEL_133;
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v54);
              }
              v9 = KeyHandle;
            }
            v51 = v87;
            goto LABEL_138;
          }
LABEL_122:
          v61 = *((_DWORD *)v54 + 1);
          if ( ((v61 - 3) & 0xFFFFFFFB) != 0 )
          {
            if ( v61 == 4 )
            {
              if ( *((_DWORD *)v54 + 2) == 4 )
              {
                v82 = 4;
                v88 = *((_DWORD *)v54 + 3);
              }
              else
              {
                v56 = -1073741820;
              }
              goto LABEL_132;
            }
            if ( v61 == 1 )
            {
              if ( ((unsigned __int8)&v88 & 3) != 0 )
              {
                v56 = -2147483646;
              }
              else
              {
                v82 = 4;
                v97.Buffer = (wchar_t *)(v54 + 12);
                v97.Length = *((_WORD *)v54 + 4);
                v97.MaximumLength = *((_WORD *)v54 + 4);
                v56 = RtlUnicodeStringToInteger(&v97, 0, &v88);
              }
              goto LABEL_132;
            }
          }
          v56 = -1073741788;
LABEL_132:
          if ( v53 )
          {
LABEL_133:
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v53);
            v9 = KeyHandle;
          }
          v51 = v87;
          if ( v56 >= 0 )
          {
            *(_DWORD *)(a2 + 188) |= v88 & 0x2000100;
            v91 = Handle;
          }
        }
      }
    }
  }
LABEL_138:
  v26 = 0;
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 || LdrpPayloadRestrictionMitigationsEnabled() )
  {
    v63 = LdrpInitializeApplicationVerifierPackage(v51, a2, v8, v91, *(__int64 *)&v93.Length, v98);
    v26 = v63;
    if ( v63 < 0 )
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        9282,
        (__int64)"LdrpInitializeExecutionOptions",
        0,
        "Initializing the application verifier package failed with status 0x%08lx\n",
        v63);
      goto LABEL_155;
    }
  }
  else if ( !v89 && !v9 )
  {
    if ( *(_BYTE *)(a2 + 2) )
    {
      v62 = *(_QWORD *)(a2 + 32);
      v93.Buffer = (wchar_t *)&v107;
      *(_DWORD *)&v93.Length = 0x200000;
      if ( RtlQueryEnvironmentVariable_U(*(PVOID *)(v62 + 128), (PUNICODE_STRING)&stru_18012D5C8, &v93) < 0
        || (v26 = RtlUnicodeStringToInteger(&v93, 0, &Value), v26 < 0)
        || !Value )
      {
        *(_DWORD *)(a2 + 188) |= 0x70u;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 1988) & 1) != 0 )
    *(_DWORD *)(a2 + 1984) |= 1u;
  if ( v26 >= 0 )
  {
    LdrpQueryIllegalCWDDevices(v9);
    goto LABEL_159;
  }
LABEL_155:
  v64 = v99;
  if ( *v99 )
  {
    NtClose(*v99);
    *v64 = 0LL;
  }
  v65 = v100;
  if ( *v100 )
  {
    NtClose(*v100);
    *v65 = 0LL;
  }
LABEL_159:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v26;
}
