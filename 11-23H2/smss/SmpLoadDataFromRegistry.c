/*
 * XREFs of SmpLoadDataFromRegistry @ 0x14000B688
 * Callers:
 *     SmpInit @ 0x14000DDE0 (SmpInit.c)
 * Callees:
 *     SmpFreeSavedRegistryEntry @ 0x140001200 (SmpFreeSavedRegistryEntry.c)
 *     SmpOpenKnownDllsHandles @ 0x140001230 (SmpOpenKnownDllsHandles.c)
 *     RtlStringCbPrintfW @ 0x140004384 (RtlStringCbPrintfW.c)
 *     SmpExecuteCommand @ 0x140004F44 (SmpExecuteCommand.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x140007C60 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpConfigureSharedSessionData @ 0x140008400 (SmpConfigureSharedSessionData.c)
 *     SmpInitializeKnownDlls @ 0x140008C00 (SmpInitializeKnownDlls.c)
 *     SmpInitializeDosDevices @ 0x1400098E0 (SmpInitializeDosDevices.c)
 *     SmpFinalizePathStrings @ 0x14000A6D0 (SmpFinalizePathStrings.c)
 *     SmpNtSerializeBoot @ 0x14000B0FC (SmpNtSerializeBoot.c)
 *     SmpProcessFileRenames @ 0x14000B13C (SmpProcessFileRenames.c)
 *     SmpEventWrite @ 0x14000C78C (SmpEventWrite.c)
 *     SmpReadSafeBootOption @ 0x14000CA50 (SmpReadSafeBootOption.c)
 *     SmpGetPlatformBinary @ 0x14000CAF0 (SmpGetPlatformBinary.c)
 *     SmpInitializeSessionManagement @ 0x14000CB80 (SmpInitializeSessionManagement.c)
 *     SmpTranslateSystemPartitionInformation @ 0x14000D8E0 (SmpTranslateSystemPartitionInformation.c)
 *     SmpCreateProtectedPrefixes @ 0x14000FC70 (SmpCreateProtectedPrefixes.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     SmpInitializeKnownDllsAsync @ 0x140011A9C (SmpInitializeKnownDllsAsync.c)
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x140011DE0 (SmpReplaceSystemHiveOnSoftReboot.c)
 *     SmpSuffixUnicodeString @ 0x140011F44 (SmpSuffixUnicodeString.c)
 *     SmpPlatformBinaryTableExists @ 0x140019F7C (SmpPlatformBinaryTableExists.c)
 *     SmpSendPlatformBinaryStatus @ 0x14001A120 (SmpSendPlatformBinaryStatus.c)
 */

__int64 __fastcall SmpLoadDataFromRegistry(HANDLE EventHandle)
{
  __int64 v2; // r13
  unsigned __int16 *v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 NtSystemRoot; // rax
  NTSTATUS Environment; // eax
  int v10; // ebx
  __int64 v11; // rax
  NTSTATUS v12; // eax
  int v13; // eax
  unsigned __int16 *Heap; // rax
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int8 *v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  NTSTATUS v21; // eax
  int RegistryValues; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  int v28; // eax
  char v29; // al
  int v30; // eax
  int v31; // eax
  int v32; // eax
  NTSTATUS v33; // eax
  int ProtectedPrefixes; // eax
  int PlatformBinary; // r14d
  __int64 *v36; // rax
  __int64 **v37; // rsi
  const UNICODE_STRING *v38; // rbx
  int v39; // eax
  int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 *v43; // rbx
  __int64 *v44; // rsi
  __int64 v45; // r8
  __int64 *v46; // rsi
  __int64 *v47; // rbx
  __int64 v48; // r8
  __int64 *v49; // rsi
  __int64 *v50; // rbx
  int v51; // eax
  int v52; // eax
  __int64 v53; // r8
  unsigned int v54; // ebx
  int v55; // eax
  __int64 v56; // r8
  int v57; // ebx
  int v58; // edx
  __int64 v59; // rax
  int v60; // eax
  int DynamicEnvironmentVariables; // eax
  __int64 v62; // r8
  __int64 *v63; // rsi
  __int64 *v64; // rbx
  __int64 v65; // r8
  __int64 *v66; // rsi
  __int64 *v67; // rbx
  int v68; // eax
  SIZE_T Size; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v72; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v73; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v74; // [rsp+58h] [rbp-B0h] BYREF
  PWSTR OldEnvironment; // [rsp+60h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v77; // [rsp+98h] [rbp-70h]
  struct _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-50h] BYREF
  int v81; // [rsp+C0h] [rbp-48h] BYREF
  const wchar_t *v82; // [rsp+C8h] [rbp-40h]
  int v83; // [rsp+D0h] [rbp-38h] BYREF
  const wchar_t *v84; // [rsp+D8h] [rbp-30h]
  struct _UNICODE_STRING ValueName; // [rsp+E0h] [rbp-28h] BYREF
  int v86; // [rsp+F0h] [rbp-18h] BYREF
  const wchar_t *v87; // [rsp+F8h] [rbp-10h]
  char v88; // [rsp+108h] [rbp+0h] BYREF
  HANDLE Object; // [rsp+110h] [rbp+8h]
  HANDLE ThreadHandle; // [rsp+118h] [rbp+10h]
  char v91; // [rsp+15Eh] [rbp+56h]
  wchar_t pszDest[256]; // [rsp+178h] [rbp+70h] BYREF

  v81 = 7602290;
  v86 = 1310738;
  v82 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT";
  v83 = 10354844;
  v87 = L"\\Sessions";
  *(_DWORD *)&ValueName.Length = 2752552;
  v84 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Environment";
  SmpClearTempFiles = 0;
  ValueName.Buffer = L"NUMBER_OF_PROCESSORS";
  v2 = 0LL;
  v72 = 0LL;
  qword_14002BB28 = (__int64)&SmpBootExecuteList;
  v3 = 0LL;
  SmpBootExecuteList = (__int64)&SmpBootExecuteList;
  qword_14002BB38 = (__int64)&SmpBootExecuteNoPnpSyncList;
  SmpBootExecuteNoPnpSyncList = (__int64)&SmpBootExecuteNoPnpSyncList;
  qword_14002BB48 = (__int64)&SmpPlatformExecuteList;
  SmpPlatformExecuteList = (__int64)&SmpPlatformExecuteList;
  qword_14002BB58 = (__int64)&SmpSetupExecuteList;
  SmpSetupExecuteList = (__int64)&SmpSetupExecuteList;
  qword_14002BB68 = (__int64)&SmpSetupExecuteNoPnpSyncList;
  SmpSetupExecuteNoPnpSyncList = (__int64)&SmpSetupExecuteNoPnpSyncList;
  qword_14002BC88 = (__int64)&SmpPagingFileList;
  SmpPagingFileList = &SmpPagingFileList;
  qword_14002BB78 = (__int64)&SmpDosDevicesList;
  SmpDosDevicesList = &SmpDosDevicesList;
  qword_14002BB88 = (__int64)&SmpFileRenameList;
  SmpFileRenameList = &SmpFileRenameList;
  qword_14002BB98 = (__int64)&SmpKnownDllsList;
  SmpKnownDllsList = (__int64)&SmpKnownDllsList;
  qword_14002BBA8 = (__int64)&SmpExcludeKnownDllsList;
  SmpExcludeKnownDllsList = (__int64)&SmpExcludeKnownDllsList;
  qword_14002BBB8 = (__int64)&SmpSubSystemsRequired;
  SmpSubSystemsRequired = (__int64)&SmpSubSystemsRequired;
  qword_14002BBC8 = (__int64)&SmpSubSystemsToDefer;
  SmpSubSystemsToDefer = (__int64)&SmpSubSystemsToDefer;
  qword_14002BC78 = (__int64)&SmpExistingPageFilesList;
  SmpExistingPageFilesList = &SmpExistingPageFilesList;
  KeyHandle = 0LL;
  OldEnvironment = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  NtSystemRoot = RtlGetNtSystemRoot(v5, v4, v6, v7);
  RtlStringCbPrintfW(SmpTempDirNameBuffer, 0x20AuLL, L"\\??\\%s", NtSystemRoot);
  RtlInitUnicodeString(&SmpTempFilesDir, SmpTempDirNameBuffer);
  Environment = RtlCreateEnvironment(1u, &SmpDefaultEnvironment);
  v10 = Environment;
  if ( Environment < 0 )
  {
    SmpInitProgressByLine = 2144;
    SmpInitReturnStatus = Environment;
    SmpInitLastCall = (__int64)RtlCreateEnvironment;
    v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v11 + 2] = 2146;
LABEL_3:
    SmpGlobalLog[2 * v11 + 3] = v10;
    *(_QWORD *)&SmpGlobalLog[2 * v11 + 4] = 0LL;
    goto LABEL_116;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v81;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    NtClose(KeyHandle);
    KeyHandle = 0LL;
    SmpMiniNTBoot = 1;
  }
  SmpReadSafeBootOption();
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v83;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v12 = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  v10 = v12;
  if ( v12 < 0 )
  {
    SmpInitProgressByLine = 2195;
    SmpInitReturnStatus = v12;
    SmpInitLastCall = (__int64)NtOpenKey;
    v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v11 + 2] = 2197;
    goto LABEL_3;
  }
  NtDeleteValueKey(KeyHandle, (PUNICODE_STRING)&SmpSafeBootEnvironmentValue);
  LODWORD(Size) = 0;
  LODWORD(v74) = 4;
  v13 = NtQuerySystemInformationEx(107LL, &v74, 4LL, 0LL, 0, &Size);
  v10 = v13;
  if ( v13 != -1073741820 )
  {
    SmpInitProgressByLine = 2235;
    SmpInitReturnStatus = v13;
    SmpInitLastCall = (__int64)NtQuerySystemInformationEx;
    v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v11 + 2] = 2237;
    goto LABEL_3;
  }
  Heap = (unsigned __int16 *)RtlAllocateHeap(
                               *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                               0,
                               (unsigned int)Size);
  v3 = Heap;
  if ( !Heap )
  {
    v10 = -1073741670;
    SmpInitProgressByLine = 2251;
    SmpInitReturnStatus = -1073741670;
    SmpInitLastCall = (__int64)RtlAllocateHeap;
    v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v11 + 2] = 2253;
    goto LABEL_3;
  }
  v15 = NtQuerySystemInformationEx(107LL, &v74, 4LL, Heap, Size, &Size);
  v10 = v15;
  if ( v15 < 0 )
  {
    SmpInitProgressByLine = 2272;
    SmpInitReturnStatus = v15;
    SmpInitLastCall = (__int64)NtQuerySystemInformationEx;
    v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v11 + 2] = 2274;
    goto LABEL_3;
  }
  v16 = 0LL;
  if ( v3[5] )
  {
    v17 = v3[5];
    v18 = (unsigned __int8 *)v3 + 33;
    do
    {
      v19 = *v18;
      v18 += 48;
      v16 = (unsigned int)(v19 + v16);
      --v17;
    }
    while ( v17 );
  }
  RtlStringCbPrintfW(pszDest, 0x200uLL, L"%u", v16);
  v20 = -1LL;
  do
    ++v20;
  while ( pszDest[v20] );
  v21 = NtSetValueKey(KeyHandle, &ValueName, 0, 1u, pszDest, 2 * v20 + 2);
  v10 = v21;
  if ( v21 < 0 )
  {
    SmpInitProgressByLine = 2308;
    SmpInitReturnStatus = v21;
    SmpInitLastCall = (__int64)NtSetValueKey;
    v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v11 + 2] = 2310;
    goto LABEL_3;
  }
  RtlSetCurrentEnvironment(SmpDefaultEnvironment, &OldEnvironment);
  RegistryValues = RtlQueryRegistryValuesEx(2LL, L"Session Manager", &SmpRegistryConfigurationTable, 0LL, 0LL);
  v10 = RegistryValues;
  if ( RegistryValues < 0 )
  {
    SmpInitProgressByLine = 2336;
    SmpInitReturnStatus = RegistryValues;
    SmpInitLastCall = (__int64)RtlQueryRegistryValuesEx;
    v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v11 + 2] = 2338;
    goto LABEL_3;
  }
  v27 = SmpFinalizePathStrings(v24, v23, v25, v26);
  v10 = v27;
  if ( v27 < 0 )
  {
    SmpInitProgressByLine = 2351;
    SmpInitReturnStatus = v27;
    SmpInitLastCall = (__int64)SmpFinalizePathStrings;
    v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v11 + 2] = 2353;
    goto LABEL_3;
  }
  SmpEventWrite(&SmssEvt_InitializeKnownDlls_Start);
  v28 = SmpOpenKnownDllsHandles(
          (struct _UNICODE_STRING *)&SmpKnownDllsObjectDirectoryName,
          (const UNICODE_STRING *)&SmpKnownDllsPathSuffix,
          1,
          &SmpKnownDllsObjectDirectory,
          &SmpKnownDllsFileDirectory);
  v10 = v28;
  if ( v28 < 0 )
  {
    SmpKnownDllsObjectDirectory = 0LL;
    SmpKnownDllsFileDirectory = 0LL;
    SmpInitProgressByLine = 2377;
    SmpInitReturnStatus = v28;
    SmpInitLastCall = (__int64)SmpOpenKnownDllsHandles;
    v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v11 + 2] = 2379;
    goto LABEL_3;
  }
  v29 = SmpLoadKnownDllsFlags;
  if ( SmpSoftBoot && (SmpLoadKnownDllsFlags & 2) != 0 )
  {
    v29 = SmpLoadKnownDllsFlags | 1;
    SmpLoadKnownDllsFlags |= 1u;
  }
  if ( (v29 & 1) != 0 )
  {
    v10 = SmpInitializeKnownDlls(1u);
    if ( v10 < 0 )
    {
LABEL_35:
      SmpInitProgressByLine = 2412;
      SmpInitReturnStatus = v10;
      SmpInitLastCall = (__int64)SmpInitializeKnownDlls;
      v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v11 + 2] = 2414;
      goto LABEL_3;
    }
    v30 = SmpInitializeKnownDllsAsync();
  }
  else
  {
    v30 = SmpInitializeKnownDlls(0);
  }
  v10 = v30;
  if ( v30 < 0 )
    goto LABEL_35;
  v31 = SmpInitializeSessionManagement();
  v10 = v31;
  if ( v31 < 0 )
  {
    SmpInitProgressByLine = 2421;
    SmpInitReturnStatus = v31;
    SmpInitLastCall = (__int64)SmpInitializeSessionManagement;
    v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v11 + 2] = 2423;
    goto LABEL_3;
  }
  RtlSetCurrentEnvironment(OldEnvironment, &SmpDefaultEnvironment);
  OldEnvironment = 0LL;
  v32 = SmpInitializeDosDevices();
  v10 = v32;
  if ( v32 < 0 )
  {
    SmpInitProgressByLine = 2446;
    SmpInitReturnStatus = v32;
    SmpInitLastCall = (__int64)SmpInitializeDosDevices;
    v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v11 + 2] = 2448;
    goto LABEL_3;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v86;
  ObjectAttributes.SecurityDescriptor = SmpPrimarySecurityDescriptor;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 208;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v33 = NtCreateDirectoryObject(&SmpSessionsObjectDirectory, 0xF000Fu, &ObjectAttributes);
  v10 = v33;
  if ( v33 < 0 )
  {
    SmpInitProgressByLine = 2480;
    SmpInitReturnStatus = v33;
    SmpInitLastCall = (__int64)NtCreateDirectoryObject;
    v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v11 + 2] = 2482;
    goto LABEL_3;
  }
  ProtectedPrefixes = SmpCreateProtectedPrefixes();
  v10 = ProtectedPrefixes;
  if ( ProtectedPrefixes < 0 )
  {
    SmpInitProgressByLine = 2499;
    SmpInitReturnStatus = ProtectedPrefixes;
    SmpInitLastCall = (__int64)SmpCreateProtectedPrefixes;
    v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v11 + 2] = 2501;
    goto LABEL_3;
  }
  v77 = 0LL;
  if ( SmpHostSmss )
  {
    if ( SmpMiniNTBoot || SmpSafeBootOption != -1 || SmpDisableWpbtExecution )
    {
      PlatformBinary = -1073741823;
      if ( (unsigned __int8)SmpPlatformBinaryTableExists() )
        SmpSendPlatformBinaryStatus(2LL, 0LL, 0LL, 0LL);
    }
    else
    {
      PlatformBinary = SmpGetPlatformBinary(&DestinationString);
    }
  }
  else
  {
    PlatformBinary = -1073741823;
  }
  v36 = (__int64 *)SmpSetupExecuteList;
  v37 = (__int64 **)SmpSetupExecuteList;
  if ( (__int64 *)SmpBootExecuteList == &SmpBootExecuteList )
  {
LABEL_58:
    if ( (v36 == &SmpSetupExecuteList
       || *v37 == &SmpSetupExecuteList
       && SmpSoftBoot
       && (unsigned __int8)SmpSuffixUnicodeString(&SmpSetupExecuteList, v37 + 2))
      && PlatformBinary < 0 )
    {
      goto LABEL_65;
    }
    goto LABEL_63;
  }
  if ( *(__int64 **)SmpBootExecuteList == &SmpBootExecuteList )
  {
    v38 = (const UNICODE_STRING *)(SmpBootExecuteList + 16);
    if ( RtlEqualUnicodeString(&SmpAutoChkDefaultCommand, (PCUNICODE_STRING)(SmpBootExecuteList + 16), 1u)
      || SmpSoftBoot && RtlPrefixUnicodeString(&SmpAutoChkKeyword, v38, 1u) )
    {
      v36 = (__int64 *)SmpSetupExecuteList;
      goto LABEL_58;
    }
  }
LABEL_63:
  v39 = SmpNtSerializeBoot();
  v40 = v39;
  if ( v39 < 0 )
  {
    SmpInitProgressByLine = 2597;
    SmpInitReturnStatus = v39;
    SmpInitLastCall = (__int64)NtSerializeBoot;
    v41 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    *(_QWORD *)&SmpGlobalLog[2 * v41 + 4] = 0LL;
    SmpGlobalLog[2 * v41 + 2] = 2599;
    SmpGlobalLog[2 * v41 + 3] = v40;
  }
LABEL_65:
  if ( (__int64 *)SmpPlatformExecuteList != &SmpPlatformExecuteList )
  {
    SmpEventWrite(&SmssEvt_PlatformExecuteList_Start);
    v43 = (__int64 *)SmpPlatformExecuteList;
    do
    {
      v44 = v43;
      if ( SmpHostSmss )
        SmpExecuteCommand((__int64)(v43 + 2), 0LL, v42, 0, 0LL);
      v43 = (__int64 *)*v43;
      SmpFreeSavedRegistryEntry(v44);
    }
    while ( v43 != &SmpPlatformExecuteList );
    SmpEventWrite(&SmssEvt_PlatformExecuteList_Stop);
  }
  if ( (__int64 *)SmpBootExecuteList != &SmpBootExecuteList )
  {
    SmpEventWrite(&SmssEvt_BootExecuteList_Start);
    v46 = (__int64 *)SmpBootExecuteList;
    do
    {
      v47 = v46;
      SmpExecuteCommand((__int64)(v46 + 2), 0LL, v45, 0, 0LL);
      v46 = (__int64 *)*v46;
      SmpFreeSavedRegistryEntry(v47);
    }
    while ( v46 != &SmpBootExecuteList );
    SmpEventWrite(&SmssEvt_BootExecuteList_Stop);
    v2 = v72;
  }
  if ( (__int64 *)SmpBootExecuteNoPnpSyncList != &SmpBootExecuteNoPnpSyncList )
  {
    SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Start);
    v49 = (__int64 *)SmpBootExecuteNoPnpSyncList;
    do
    {
      v50 = v49;
      SmpExecuteCommand((__int64)(v49 + 2), 0LL, v48, 0, 0LL);
      v49 = (__int64 *)*v49;
      SmpFreeSavedRegistryEntry(v50);
    }
    while ( v49 != &SmpBootExecuteNoPnpSyncList );
    SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Stop);
    v2 = v72;
  }
  if ( EventHandle )
    NtSetEvent(EventHandle, 0LL);
  SmpEventWrite(&SmssEvt_InitializeRegistry_Start);
  if ( SmpSoftBootSystemHiveReady )
    SmpReplaceSystemHiveOnSoftReboot();
  NtInitializeRegistry(0);
  SmpEventWrite(&SmssEvt_InitializeRegistry_Stop);
  if ( PlatformBinary >= 0 )
  {
    v51 = RtlQueryPerformanceFrequency(&v73);
    v73 &= -(__int64)(v51 != 0);
    v52 = RtlQueryPerformanceCounter(&v80);
    v73 &= -(__int64)(v52 != 0);
    if ( (int)SmpExecuteCommand((__int64)&DestinationString, 0LL, v53, 32, (PRTL_USER_PROCESS_PARAMETERS)&v88) < 0 )
    {
      v54 = 1;
    }
    else
    {
      if ( v91 >= 0 )
      {
        v54 = 3;
        NtTerminateProcess(Object, -1073740760);
      }
      else
      {
        v54 = 0;
        NtResumeThread(ThreadHandle, 0LL);
        NtWaitForSingleObject(Object, 0, 0LL);
      }
      NtClose(Object);
      NtClose(ThreadHandle);
    }
    v55 = RtlQueryPerformanceCounter(&v79);
    v56 = v73 & -(__int64)(v55 != 0);
    v73 = v56;
    if ( v56 > 0 )
      v2 = 1000 * (v79 - v80) / v56;
    SmpSendPlatformBinaryStatus(v54, v77, v2, &DestinationString);
  }
  v57 = 0;
  if ( (unsigned __int8)RtlIsStateSeparationEnabled() )
  {
    v58 = RtlQueryRegistryValuesEx(
            0LL,
            L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager",
            &SmpRegistryConfigurationTable2,
            0LL,
            0LL);
    if ( v58 >= 0 )
    {
      v57 = 1;
    }
    else
    {
      v59 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v59 + 2] = 2810;
      SmpGlobalLog[2 * v59 + 3] = v58;
      *(_QWORD *)&SmpGlobalLog[2 * v59 + 4] = 0LL;
    }
  }
  if ( !SmpMiniNTBoot )
    SmpProcessFileRenames(v57);
  v72 = 0LL;
  v60 = TpAllocWork(&v72, SmpAsyncMemoryConfiguration, 0LL, &SmpCallbackEnviron);
  v10 = v60;
  if ( v60 < 0 )
  {
    SmpInitProgressByLine = 2849;
    SmpInitReturnStatus = v60;
    SmpInitLastCall = (__int64)TpAllocWork;
    v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v11 + 2] = 2851;
    goto LABEL_3;
  }
  TpPostWork(v72);
  if ( SmpWaitForPagingFiles )
    TpWaitForWork(v72, 0LL);
  TpReleaseWork(v72);
  DynamicEnvironmentVariables = SmpCreateDynamicEnvironmentVariables(KeyHandle);
  v10 = DynamicEnvironmentVariables;
  if ( DynamicEnvironmentVariables >= 0 )
  {
    if ( (__int64 *)SmpSetupExecuteList != &SmpSetupExecuteList )
    {
      SmpEventWrite(&SmssEvt_SetupExecuteList_Start);
      v63 = (__int64 *)SmpSetupExecuteList;
      do
      {
        v64 = v63;
        SmpExecuteCommand((__int64)(v63 + 2), 0LL, v62, 0, 0LL);
        v63 = (__int64 *)*v63;
        SmpFreeSavedRegistryEntry(v64);
      }
      while ( v63 != &SmpSetupExecuteList );
      SmpEventWrite(&SmssEvt_SetupExecuteList_Stop);
    }
    if ( (__int64 *)SmpSetupExecuteNoPnpSyncList != &SmpSetupExecuteNoPnpSyncList )
    {
      SmpEventWrite(&SmssEvt_SetupExecuteNoPnpSyncList_Start);
      v66 = (__int64 *)SmpSetupExecuteNoPnpSyncList;
      do
      {
        v67 = v66;
        SmpExecuteCommand((__int64)(v66 + 2), 0LL, v65, 0, 0LL);
        v66 = (__int64 *)*v66;
        SmpFreeSavedRegistryEntry(v67);
      }
      while ( v66 != &SmpSetupExecuteNoPnpSyncList );
      SmpEventWrite(&SmssEvt_SetupExecuteNoPnpSyncList_Stop);
    }
    v68 = SmpConfigureSharedSessionData();
    v10 = v68;
    if ( v68 < 0 )
    {
      SmpInitProgressByLine = 2948;
      SmpInitReturnStatus = v68;
      SmpInitLastCall = (__int64)SmpConfigureSharedSessionData;
      v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v11 + 2] = 2950;
      goto LABEL_3;
    }
    SmpTranslateSystemPartitionInformation();
    v10 = 0;
  }
  else
  {
    SmpInitProgressByLine = 2875;
    SmpInitReturnStatus = DynamicEnvironmentVariables;
    SmpInitLastCall = (__int64)SmpCreateDynamicEnvironmentVariables;
  }
LABEL_116:
  if ( DestinationString.Buffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
  if ( KeyHandle )
    NtClose(KeyHandle);
  if ( v3 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
  if ( OldEnvironment )
    RtlSetCurrentEnvironment(OldEnvironment, &SmpDefaultEnvironment);
  return (unsigned int)v10;
}
