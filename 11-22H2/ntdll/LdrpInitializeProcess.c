/*
 * XREFs of LdrpInitializeProcess @ 0x1800D4658
 * Callers:
 *     _LdrpInitialize @ 0x180073F6C (_LdrpInitialize.c)
 * Callees:
 *     LdrpInitializeTls @ 0x180004220 (LdrpInitializeTls.c)
 *     RtlSetBits @ 0x180005010 (RtlSetBits.c)
 *     LdrpCodeAuthzInitialize @ 0x180009DAC (LdrpCodeAuthzInitialize.c)
 *     RtlAppendUnicodeToString @ 0x18000B5F0 (RtlAppendUnicodeToString.c)
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     LdrpFindLoadedDll @ 0x180016374 (LdrpFindLoadedDll.c)
 *     RtlGetNtSystemRoot @ 0x180018A20 (RtlGetNtSystemRoot.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180018AA0 (LdrpSnapKernelBaseExtensions.c)
 *     RtlAppendUnicodeStringToString @ 0x180019500 (RtlAppendUnicodeStringToString.c)
 *     LdrpLogDllState @ 0x180019CC4 (LdrpLogDllState.c)
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180021B9C (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180021CB0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrGetProcedureAddressForCaller @ 0x180022190 (LdrGetProcedureAddressForCaller.c)
 *     RtlImageNtHeaderEx @ 0x180024AA0 (RtlImageNtHeaderEx.c)
 *     LdrpMapAndSnapDependency @ 0x180024BA8 (LdrpMapAndSnapDependency.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026C30 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180028CB0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallTlsInitializers @ 0x1800299A4 (LdrpCallTlsInitializers.c)
 *     LdrpDrainWorkQueue @ 0x18002A65C (LdrpDrainWorkQueue.c)
 *     LdrLoadDll @ 0x18002A8A0 (LdrLoadDll.c)
 *     LdrpInitializeDllPath @ 0x18002B234 (LdrpInitializeDllPath.c)
 *     LdrpProcessMappedModule @ 0x18002B594 (LdrpProcessMappedModule.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18002BA28 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpInsertDataTableEntry @ 0x18002D0D8 (LdrpInsertDataTableEntry.c)
 *     LdrUnloadDll @ 0x18002D5B0 (LdrUnloadDll.c)
 *     LdrpPrepareModuleForExecution @ 0x18002DCA8 (LdrpPrepareModuleForExecution.c)
 *     LdrpAllocateModuleEntry @ 0x18002E660 (LdrpAllocateModuleEntry.c)
 *     SbObtainTraceHandle @ 0x18002F55C (SbObtainTraceHandle.c)
 *     EtwEventRegister @ 0x180031B90 (EtwEventRegister.c)
 *     RtlReleasePath @ 0x180032EC0 (RtlReleasePath.c)
 *     LdrProtectMrdata @ 0x180032FA0 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     LdrpEnableParallelLoading @ 0x18004B7A4 (LdrpEnableParallelLoading.c)
 *     LdrpReleaseLoaderLock @ 0x180051124 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x180051388 (LdrpAcquireLoaderLock.c)
 *     LdrpDropLastInProgressCount @ 0x1800522D4 (LdrpDropLastInProgressCount.c)
 *     RtlpInitEnvironmentBlock @ 0x18005876C (RtlpInitEnvironmentBlock.c)
 *     LdrpInitParallelLoadingSupport @ 0x18005F7B8 (LdrpInitParallelLoadingSupport.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005FC80 (RtlInitializeCriticalSectionEx.c)
 *     LdrpFreeLoadContextOfNode @ 0x180067B7C (LdrpFreeLoadContextOfNode.c)
 *     LdrpInitializeGraphRecurse @ 0x18006D42C (LdrpInitializeGraphRecurse.c)
 *     RtlpInitializeThreadActivationContextStack @ 0x1800738A8 (RtlpInitializeThreadActivationContextStack.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x18007763C (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x180077698 (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpInitializePolicy @ 0x180078710 (LdrpInitializePolicy.c)
 *     LdrpInitShimEngine @ 0x180079158 (LdrpInitShimEngine.c)
 *     RtlpInitCurrentDir @ 0x18007B8B4 (RtlpInitCurrentDir.c)
 *     RtlInitializeHistoryTable @ 0x18007BB84 (RtlInitializeHistoryTable.c)
 *     RtlSetHeapInformation @ 0x18007CB90 (RtlSetHeapInformation.c)
 *     RtlQueryApplicationKeyOption @ 0x18007D77C (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileExecutionOptions @ 0x18007D860 (RtlQueryImageFileExecutionOptions.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007E7C0 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInsertModuleToIndex @ 0x18007E92C (LdrpInsertModuleToIndex.c)
 *     LdrpInitializeSmtDelayedSleep @ 0x18007F134 (LdrpInitializeSmtDelayedSleep.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18007F61C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     TpInitializePackage @ 0x18007F92C (TpInitializePackage.c)
 *     RtlCreateTagHeap @ 0x18007F9F0 (RtlCreateTagHeap.c)
 *     RtlpInitParameterBlock @ 0x18007FF50 (RtlpInitParameterBlock.c)
 *     LdrpInitializePatchData @ 0x1800834B4 (LdrpInitializePatchData.c)
 *     LdrpInitializeImportRedirection @ 0x1800847E4 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085244 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpLoadWow64 @ 0x180085D20 (LdrpLoadWow64.c)
 *     RtlNormalizeProcessParams @ 0x180087480 (RtlNormalizeProcessParams.c)
 *     LdrpCorInitialize @ 0x18008DA54 (LdrpCorInitialize.c)
 *     LdrpCorProcessImports @ 0x18008E144 (LdrpCorProcessImports.c)
 *     LdrpCorValidateImage @ 0x18008E3D8 (LdrpCorValidateImage.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x18009F110 (NtQueryInformationProcess.c)
 *     NtQuerySystemInformation @ 0x18009F4B0 (NtQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x18009F8F0 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1800A14A0 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1800A1B00 (NtQuerySymbolicLinkObject.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     InterlockedPushListSList @ 0x1800A2C30 (InterlockedPushListSList.c)
 *     LdrpCaptureCriticalThunks @ 0x1800AD794 (LdrpCaptureCriticalThunks.c)
 *     RtlInitializeHeapManager @ 0x1800AE4B8 (RtlInitializeHeapManager.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800AE9C0 (RtlpInitializeNonVolatileFlush.c)
 *     LdrpLoadPatchImage @ 0x1800DA410 (LdrpLoadPatchImage.c)
 *     LdrpCorFixupImage @ 0x1800DA7C8 (LdrpCorFixupImage.c)
 *     LdrpLogEtwHotPatchStatus @ 0x1800DBBA4 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpProtectAndRelocateImage @ 0x1800DCCF4 (LdrpProtectAndRelocateImage.c)
 *     LdrpCheckAppDirType @ 0x1800DD070 (LdrpCheckAppDirType.c)
 *     LdrpDoDebuggerBreak @ 0x1800DD294 (LdrpDoDebuggerBreak.c)
 *     LdrpIncludeAlternateForwarders @ 0x1800DD4C8 (LdrpIncludeAlternateForwarders.c)
 *     LdrpInitializeExceptionTable @ 0x1800DD970 (LdrpInitializeExceptionTable.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD9FC (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeNlsInfo @ 0x1800DE784 (LdrpInitializeNlsInfo.c)
 *     LdrpInitializeProcessHeap @ 0x1800DE81C (LdrpInitializeProcessHeap.c)
 *     AVrfInitializeVerifier @ 0x1800E3DE4 (AVrfInitializeVerifier.c)
 *     RtlInitializeExceptionLog @ 0x18010D638 (RtlInitializeExceptionLog.c)
 *     RtlControlStackTraceDataBase @ 0x18010DDF8 (RtlControlStackTraceDataBase.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 *     TpSetDefaultPoolCpuSets @ 0x180125668 (TpSetDefaultPoolCpuSets.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpInitializeProcess(__int64 a1, void *a2)
{
  __int64 v3; // rax
  int v4; // r15d
  int v5; // eax
  int v6; // r13d
  struct _TEB *v7; // rdi
  _PEB *ProcessEnvironmentBlock; // rsi
  int v9; // eax
  bool v10; // cc
  int v11; // eax
  int v12; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  wchar_t *Buffer; // rdx
  unsigned __int16 v15; // r8
  PIMAGE_NT_HEADERS v16; // r14
  __int64 v17; // rcx
  _QWORD *v19; // rax
  int v20; // eax
  char v21; // al
  int v22; // eax
  int WowTebOffset; // ecx
  int inited; // ecx
  NTSTATUS v25; // eax
  __int64 v26; // rcx
  PRTL_USER_PROCESS_PARAMETERS v27; // r13
  _DWORD *Config; // r15
  int NtGlobalFlag; // eax
  char v30; // al
  _QWORD *v31; // r8
  char v32; // al
  unsigned int v33; // eax
  int v34; // ecx
  unsigned __int64 v35; // r14
  __int64 v36; // rax
  void *v37; // r15
  __int64 v38; // rcx
  int DefaultThreadpoolThreadMaximum; // r14d
  _RTL_USER_PROCESS_PARAMETERS *v40; // r13
  char v41; // r12
  const WCHAR *NtSystemRoot; // rax
  unsigned __int16 v43; // r14
  wchar_t *Heap; // rax
  SIZE_T v45; // r14
  NTSTATUS v46; // eax
  int v47; // edx
  NTSTATUS v48; // eax
  NTSTATUS v49; // eax
  wchar_t *v50; // r12
  __m128i DosPath; // xmm0
  wchar_t *v52; // xmm0_8
  wchar_t *v53; // r14
  PWSTR v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned __int64 v58; // r14
  __int64 v59; // rdx
  SIZE_T v60; // r15
  unsigned __int16 v61; // dx
  __int64 v62; // r8
  unsigned __int64 v63; // rdx
  _WORD *v64; // rax
  _WORD *v65; // r9
  __int16 v66; // dx
  __int64 v67; // rax
  void *v68; // rcx
  _QWORD *v69; // rax
  __int64 v70; // rcx
  _QWORD *v71; // rcx
  int v72; // eax
  char *ModuleEntry; // rax
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  int v77; // eax
  char v78; // dl
  int v79; // eax
  PIMAGE_NT_HEADERS v80; // r13
  int v81; // eax
  char *v82; // rax
  __int64 v83; // r14
  __int64 v84; // r15
  int v85; // eax
  char v86; // r15
  NTSTATUS v87; // eax
  int v88; // eax
  int v89; // eax
  NTSTATUS v90; // eax
  NTSTATUS ProcedureAddressForCaller; // eax
  int LoadedDll; // eax
  PVOID v93; // rcx
  NTSTATUS v94; // eax
  unsigned int v95; // eax
  NTSTATUS v96; // eax
  int v97; // eax
  __int64 v98; // r14
  char v99; // al
  _RTL_USER_PROCESS_PARAMETERS *v100; // rax
  unsigned int v101; // eax
  int v102; // ecx
  int PatchImage; // eax
  __int64 v104; // rcx
  void (*PostProcessInitRoutine)(void); // rax
  PVOID *Callback; // [rsp+28h] [rbp-3A0h]
  PVOID *Callbacka; // [rsp+28h] [rbp-3A0h]
  PVOID *Callbackb; // [rsp+28h] [rbp-3A0h]
  PVOID *Callbackc; // [rsp+28h] [rbp-3A0h]
  __int64 v110; // [rsp+30h] [rbp-398h]
  __int64 v111; // [rsp+30h] [rbp-398h]
  __int64 v112; // [rsp+38h] [rbp-390h]
  unsigned int ApplicationKeyOption; // [rsp+50h] [rbp-378h] BYREF
  char v114; // [rsp+54h] [rbp-374h] BYREF
  char v115[3]; // [rsp+55h] [rbp-373h] BYREF
  int v116; // [rsp+58h] [rbp-370h]
  PVOID DllHandle; // [rsp+60h] [rbp-368h] BYREF
  __int64 **ProcessInformation; // [rsp+68h] [rbp-360h] BYREF
  _UNICODE_STRING v119; // [rsp+70h] [rbp-358h] BYREF
  int v120; // [rsp+80h] [rbp-348h] BYREF
  int v121; // [rsp+84h] [rbp-344h] BYREF
  int v122; // [rsp+88h] [rbp-340h]
  HANDLE v123[2]; // [rsp+90h] [rbp-338h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-328h] BYREF
  _UNICODE_STRING Destination; // [rsp+B0h] [rbp-318h] BYREF
  unsigned __int16 Length; // [rsp+C0h] [rbp-308h] BYREF
  __int16 v127; // [rsp+C2h] [rbp-306h]
  unsigned __int64 v128; // [rsp+C8h] [rbp-300h]
  HANDLE Handle; // [rsp+D0h] [rbp-2F8h] BYREF
  __m128i ImagePathName; // [rsp+E0h] [rbp-2E8h] BYREF
  ULONG ReturnedLength; // [rsp+F0h] [rbp-2D8h] BYREF
  __int64 v132; // [rsp+F8h] [rbp-2D0h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+100h] [rbp-2C8h] BYREF
  struct _TEB *v134; // [rsp+108h] [rbp-2C0h]
  __int64 v135; // [rsp+110h] [rbp-2B8h]
  _UNICODE_STRING DestinationString; // [rsp+120h] [rbp-2A8h] BYREF
  __m128i v137; // [rsp+130h] [rbp-298h] BYREF
  __int64 pShimData; // [rsp+140h] [rbp-288h]
  _RTL_USER_PROCESS_PARAMETERS *v139; // [rsp+148h] [rbp-280h]
  __int64 v140; // [rsp+150h] [rbp-278h] BYREF
  HANDLE LinkHandle; // [rsp+158h] [rbp-270h] BYREF
  int v142; // [rsp+160h] [rbp-268h] BYREF
  const WCHAR *v143; // [rsp+168h] [rbp-260h]
  __int64 SystemInformation; // [rsp+170h] [rbp-258h] BYREF
  __int64 v145; // [rsp+178h] [rbp-250h] BYREF
  PIMAGE_NT_HEADERS v146; // [rsp+180h] [rbp-248h] BYREF
  _QWORD *v147; // [rsp+188h] [rbp-240h] BYREF
  PVOID ProcedureAddress; // [rsp+190h] [rbp-238h] BYREF
  unsigned int v149; // [rsp+198h] [rbp-230h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1A0h] [rbp-228h] BYREF
  _QWORD v151[4]; // [rsp+1D0h] [rbp-1F8h] BYREF
  __int64 v152; // [rsp+1F0h] [rbp-1D8h] BYREF
  int v153; // [rsp+1F8h] [rbp-1D0h]
  __int128 v154; // [rsp+200h] [rbp-1C8h]
  __int128 v155; // [rsp+210h] [rbp-1B8h]
  __int128 v156; // [rsp+220h] [rbp-1A8h]
  __int64 v157; // [rsp+230h] [rbp-198h]
  __m128i v158; // [rsp+240h] [rbp-188h] BYREF
  PWSTR *v159; // [rsp+250h] [rbp-178h]
  int v160; // [rsp+260h] [rbp-168h]
  unsigned int *p_ApplicationKeyOption; // [rsp+268h] [rbp-160h]
  PWSTR Path[15]; // [rsp+310h] [rbp-B8h] BYREF
  char v163; // [rsp+38Ch] [rbp-3Ch]
  PVOID *retaddr; // [rsp+3C8h] [rbp+0h]

  DllHandle = a2;
  v135 = a1;
  v142 = 1441812;
  v143 = L"\\KnownDlls";
  v3 = (unsigned int)`RtlpGetCookieValue'::`2'::CookieValue;
  v4 = 0;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v5 = NtQueryInformationProcess(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (PROCESSINFOCLASS)(`RtlpGetCookieValue'::`2'::CookieValue + 36),
           &ProcessInformation,
           4u,
           0LL);
    if ( v5 < 0 )
      RtlRaiseStatus(v5);
    v3 = (unsigned int)ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = (int)ProcessInformation;
  }
  v6 = 63;
  RtlpUnhandledExceptionFilter = __ROR8__(v3, v3 & 0x3F);
  v7 = NtCurrentTeb();
  v134 = v7;
  ProcessEnvironmentBlock = v7->ProcessEnvironmentBlock;
  PebLdr = 88;
  byte_180184384 = 1;
  qword_180184398 = (__int64)&qword_180184390;
  qword_180184390 = (__int64)&qword_180184390;
  qword_1801843A8 = (__int64)&qword_1801843A0;
  qword_1801843A0 = (__int64)&qword_1801843A0;
  qword_1801843B8 = (__int64)&qword_1801843B0;
  qword_1801843B0 = (__int64)&qword_1801843B0;
  byte_1801843C8 = 0;
  qword_1801843D0 = 0LL;
  ProcessEnvironmentBlock->Ldr = (_PEB_LDR_DATA *)&PebLdr;
  LdrpInitializeNlsInfo(ProcessEnvironmentBlock);
  v9 = 0;
  v10 = ProcessEnvironmentBlock->NumberOfProcessors <= 1;
  if ( ProcessEnvironmentBlock->NumberOfProcessors > 1 )
    v9 = 10240;
  SRWLockSpinCycleCount = v9;
  v11 = 0;
  if ( !v10 )
    v11 = 10240;
  ConditionVariableSpinCycleCount = v11;
  v12 = 0;
  if ( !v10 )
    v12 = 10240;
  RtlpWaitOnAddressSpinCycleCount = v12;
  memset_thunk_772440563353939046(&RtlpFcProcessManager, 0, 0xE8uLL);
  memset_thunk_772440563353939046(&unk_180182E00, 0, 0xA0uLL);
  memset_thunk_772440563353939046(qword_180182DE8, 0, 0xA8uLL);
  RunOnce.Value = 0LL;
  stru_180182EB0.0 = 0LL;
  qword_180182EC0 = (__int64)&qword_180182EB8;
  qword_180182EB8 = (__int64)&qword_180182EB8;
  RtlpInitializeNonVolatileFlush();
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  Buffer = (wchar_t *)((char *)ProcessParameters->ImagePathName.Buffer + (unsigned __int64)ProcessParameters);
  if ( (ProcessParameters->Flags & 1) != 0 )
    Buffer = ProcessParameters->ImagePathName.Buffer;
  v128 = (unsigned __int64)Buffer;
  Length = ProcessParameters->ImagePathName.Length;
  v15 = Length;
  v127 = Length + 2;
  if ( Length >= 8u && *Buffer == 92 && Buffer[1] == 63 && Buffer[2] == 63 && Buffer[3] == 92 )
  {
    Length -= 8;
    v127 = v15 - 6;
    v128 = (unsigned __int64)(Buffer + 4);
    ProcessParameters->ImagePathName.Length -= 8;
    ProcessParameters->ImagePathName.MaximumLength -= 8;
    ProcessParameters->ImagePathName.Buffer += 4;
  }
  v122 = 1;
  UseCOR = 0;
  LOBYTE(v6) = 0;
  v116 = v6;
  v121 = 0;
  RtlImageNtHeaderEx(3u, ProcessEnvironmentBlock->ImageBaseAddress, 0LL, &OutHeaders);
  v16 = OutHeaders;
  LdrpAppHeaders = (__int64)OutHeaders;
  v17 = 32LL;
  if ( LdrpIsSecureProcess && (OutHeaders->FileHeader.Characteristics & 0x20) == 0 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4906,
      (__int64)"LdrpInitializeProcess",
      0,
      "Secure processes must be large address aware\n");
    return 3221225659LL;
  }
  v19 = &LdrpHashTable;
  do
  {
    v19[1] = v19;
    *v19 = v19;
    v19 += 2;
    --v17;
  }
  while ( v17 );
  LdrpInitializeExceptionTable(a2);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  LOBYTE(v20) = LdrControlFlowGuardEnforcedWithExportSuppression();
  if ( v20 == 1 )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  v21 = (LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 4) & 3;
  LdrpEnforceIntegrityContinuity = v21 == 1;
  LdrpAuditIntegrityContinuity = ((v21 - 1) & 0xFD) == 0;
  v22 = LdrpInitializeExecutionOptions(
          (unsigned int)&Length,
          (_DWORD)ProcessEnvironmentBlock,
          (_DWORD)a2,
          (unsigned int)&Handle,
          (__int64)v123,
          (__int64)&v145);
  ApplicationKeyOption = v22;
  if ( v22 < 0 )
  {
    LODWORD(Callback) = v7->ClientId.UniqueProcess;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5052,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      Callback,
      v22);
    return ApplicationKeyOption;
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 2) != 0 )
    LdrpDebugFlags |= 1u;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrinit.c",
    5099,
    (__int64)"LdrpInitializeProcess",
    2u,
    "Initializing process 0x%p\n",
    v7->ClientId.UniqueProcess);
  pShimData = 0LL;
  WowTebOffset = v134->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( v16 )
  {
    if ( v16->OptionalHeader.Magic == 267 && WowTebOffset <= 0 )
    {
      UseCOR = 1;
      LOBYTE(v6) = 1;
      v116 = v6;
      v4 = 1;
      inited = LdrpCorFixupImage(ProcessEnvironmentBlock->ImageBaseAddress);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
        return (unsigned int)inited;
    }
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v25 = RtlpImageDirectoryEntryToDataEx(
            (unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress,
            1,
            0xEu,
            &v149,
            &v140);
    v26 = v140;
    if ( v25 < 0 )
      v26 = 0LL;
    v140 = v26;
    if ( v26 )
    {
      UseCOR = 1;
      v6 = (unsigned __int8)v6;
      if ( (*(_BYTE *)(v26 + 16) & 1) != 0 )
        v6 = 1;
      v116 = v6;
    }
  }
  LdrpSystemDllBase = (__int64)DllHandle;
  if ( !UseWOW64 )
    pShimData = (__int64)ProcessEnvironmentBlock->pShimData;
  RtlpTimeout = ProcessEnvironmentBlock->CriticalSectionTimeout.QuadPart;
  v27 = RtlNormalizeProcessParams(ProcessEnvironmentBlock->ProcessParameters);
  ImagePathName = (__m128i)v27->ImagePathName;
  if ( UseWOW64 || UseCOR && v4 )
    Config = 0LL;
  else
    Config = LdrImageDirectoryEntryToLoadConfig(ProcessEnvironmentBlock->ImageBaseAddress);
  if ( Config )
  {
    if ( *Config < 0x10u )
    {
      NtGlobalFlag = ProcessEnvironmentBlock->NtGlobalFlag;
    }
    else
    {
      NtGlobalFlag = ProcessEnvironmentBlock->NtGlobalFlag & ~Config[3];
      ProcessEnvironmentBlock->NtGlobalFlag = NtGlobalFlag;
    }
    if ( *Config >= 0x14u )
      ProcessEnvironmentBlock->NtGlobalFlag = Config[4] | NtGlobalFlag;
    if ( *Config >= 0x18u && Config[5] )
      RtlpTimeout = -10000LL * (int)Config[5];
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 2) != 0 )
    LdrpDebugFlags |= 1u;
  v30 = RtlpTimeoutDisable;
  if ( RtlpTimeout < -36000000000LL )
    v30 = 1;
  RtlpTimeoutDisable = v30;
  RtlFailedCriticalDebugAllocations = 0;
  if ( ((unsigned __int8)&RtlCriticalSectionDebugSList & 0xF) != 0 )
    goto LABEL_297;
  RtlCriticalSectionDebugSList = 0LL;
  v31 = &RtlpStaticDebugInfo;
  do
  {
    *v31 = v31 + 6;
    v31 += 6;
  }
  while ( v31 <= qword_180183240 );
  *v31 = 0LL;
  InterlockedPushListSList(&RtlCriticalSectionDebugSList, (signed __int64)&RtlpStaticDebugInfo, qword_180183270, 8);
  ProcessEnvironmentBlock->TlsBitmap = (_RTL_BITMAP *)&TlsBitMap;
  ProcessEnvironmentBlock->TlsExpansionBitmap = (_RTL_BITMAP *)&TlsExpansionBitMap;
  memset_thunk_772440563353939046(&RtlpFlsContext, 0, 0x60uLL);
  xmmword_180184DD8 = 0LL;
  xmmword_180184DE8 = 0LL;
  xmmword_180184DF8 = 0LL;
  xmmword_180184E08 = 0LL;
  qword_180184E20 = (__int64)&qword_180184E18;
  qword_180184E18 = (__int64)&qword_180184E18;
  TlsBitMap = 64;
  qword_180184318 = (__int64)ProcessEnvironmentBlock->TlsBitmapBits;
  LOBYTE(ProcessEnvironmentBlock->TlsBitmapBits[0]) |= 1u;
  TlsExpansionBitMap = 1024;
  qword_1801842E8 = (__int64)ProcessEnvironmentBlock->TlsExpansionBitmapBits;
  if ( UseWOW64 )
    RtlSetBits(ProcessEnvironmentBlock->TlsBitmap, 0, 0x13u);
  RtlSetBits(ProcessEnvironmentBlock->TlsBitmap, 0x10u, 1u);
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x1000) != 0 || (v32 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v33 = 24;
    v120 = 24;
    if ( LdrpIsSecureProcess )
    {
      v34 = -1073741772;
    }
    else
    {
      LOBYTE(v110) = 0;
      v34 = RtlQueryImageFileExecutionOptions(
              &Length,
              (__int64)L"StackTraceDatabaseSizeInMb",
              4LL,
              (__int64)&v120,
              4,
              0LL);
      v33 = v120;
    }
    if ( v34 >= 0 && v33 >= 0x18 )
    {
      if ( v33 <= 0x80 )
        v35 = v33 << 20;
      else
        v35 = 0x8000000LL;
    }
    else
    {
      v35 = 25165824LL;
    }
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5347,
      (__int64)"LdrpInitializeProcess",
      2u,
      "Stack trace database size is %Id Mb\n",
      v35 >> 20);
    v151[0] = 0LL;
    v151[1] = 0LL;
    v151[2] = v35;
    RtlControlStackTraceDataBase(0LL, 24LL, v151);
    v32 = LdrpShouldCreateStackTraceDb;
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x1000) != 0 || v32 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    RtlpForceCSDebugInfoCreation = 1;
    RtlpForceCSToUseEvents = 1;
  }
  inited = RtlInitializeCriticalSectionEx(&FastPebLock, 0, 0);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  ProcessEnvironmentBlock->FastPebLock = &FastPebLock;
  inited = RtlInitializeHeapManager((__int64)&Length);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  v36 = LdrpInitializeProcessHeap(Config, OutHeaders, v27);
  v37 = (void *)v36;
  if ( !v36 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5419,
      (__int64)"LdrpInitializeProcess",
      0,
      "Creating the process heap failed\n");
    return 3221225495LL;
  }
  ProcessEnvironmentBlock->ProcessHeap = (void *)v36;
  RtlInitializeCriticalSectionEx(&LdrpEnclaveListLock, 0, 0);
  qword_180184AC8 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  RtlpInitializeThreadActivationContextStack((__int64)v134);
  LdrpHeap = v37;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
LABEL_297:
    RtlRaiseStatus(-2147483646);
  EtwpFreeRegistrationList = 0LL;
  PrivateLoggerNotificationEntry = 0LL;
  ApplicationKeyOption = NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &SystemInformation, 8u, 0LL);
  v38 = RtlpHypervisorSharedUserVa;
  if ( (ApplicationKeyOption & 0x80000000) == 0 )
    v38 = SystemInformation;
  RtlpHypervisorSharedUserVa = v38;
  NtdllBaseTag = RtlCreateTagHeap(v37, 0, (PWSTR)L"NTDLL!", (PWSTR)L"!Process");
  inited = TpInitializePackage();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( v27->DefaultThreadpoolCpuSetMaskCount )
    TpSetDefaultPoolCpuSets(v27->DefaultThreadpoolCpuSetMasks);
  DefaultThreadpoolThreadMaximum = v27->DefaultThreadpoolThreadMaximum;
  if ( DefaultThreadpoolThreadMaximum )
  {
    RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
    TppPoolpGlobalPoolMaxThreadsOverride = DefaultThreadpoolThreadMaximum;
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((char *)&dword_18017E3C8);
  EtwEventRegister(&PrivateLoggerNotificationGuid, 0LL, 0LL, &g_hPrivLoggerNotificationProvider);
  EtwEventRegister(&UserDiagnosticGuid, UserDiagnosticProviderCallback, 0LL, &g_hUserDiagnosticProvider);
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((char *)&dword_18017E390);
  EtwEventRegister(&WindowsHeapSnapshotProvider, RtlpHpStackTraceEtwCallback, 0LL, &RtlpHpStackTraceProviderHandle);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((char *)&dword_18017E358);
  inited = RtlpInitEnvironmentBlock();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  inited = RtlpInitParameterBlock();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  v40 = ProcessEnvironmentBlock->ProcessParameters;
  v139 = v40;
  ImagePathName = (__m128i)v40->ImagePathName;
  v128 = _mm_srli_si128(ImagePathName, 8).m128i_u64[0];
  if ( Handle || v123[0] )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             v123[0],
                             Handle,
                             (__int64)L"DebugProcessHeapOnly",
                             4LL,
                             (__int64)&v121,
                             4,
                             v110,
                             0LL);
    v41 = 0;
    if ( (ApplicationKeyOption & 0x80000000) == 0 && dword_18017E828 && v121 )
    {
      dword_18017E828 = 0;
      *RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  else
  {
    v41 = 0;
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx(&DestinationString, NtSystemRoot);
  v43 = DestinationString.Length + 40;
  Heap = (wchar_t *)RtlAllocateHeap(v37, 0, (unsigned int)DestinationString.Length + 38 + 2LL);
  if ( !Heap )
    return 3221225495LL;
  Destination.Length = 0;
  Destination.MaximumLength = v43;
  Destination.Buffer = Heap;
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  RtlAppendUnicodeStringToString(&Destination, &SlashSystem32SlashString);
  if ( (ProcessEnvironmentBlock->BitField & 2) == 0 )
  {
    v45 = 48LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v142;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v46 = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3u, &ObjectAttributes);
    ApplicationKeyOption = v46;
    if ( v46 < 0 )
    {
      LODWORD(v110) = v46;
      Callbackb = (PVOID *)&v142;
      v47 = 5687;
LABEL_118:
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        v47,
        (__int64)"LdrpInitializeProcess",
        0,
        "Failed to open %wZ with status 0x%08lx\n",
        Callbackb,
        v110);
      return ApplicationKeyOption;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1801325D0;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v48 = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    ApplicationKeyOption = v48;
    if ( v48 < 0 )
    {
      LODWORD(v110) = v48;
      Callbackb = (PVOID *)&unk_1801325D0;
      v47 = 5710;
      goto LABEL_118;
    }
    while ( 1 )
    {
      v50 = (wchar_t *)RtlAllocateHeap(v37, 0, v45);
      if ( !v50 )
        return 3221225495LL;
      LdrpKnownDllPath.Length = 0;
      LdrpKnownDllPath.MaximumLength = v45;
      LdrpKnownDllPath.Buffer = v50;
      v49 = NtQuerySymbolicLinkObject(LinkHandle, &LdrpKnownDllPath, &ReturnedLength);
      ApplicationKeyOption = v49;
      if ( v49 >= 0 )
        break;
      if ( v49 != -1073741789 )
      {
        LODWORD(Callbacka) = v49;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5745,
          (__int64)"LdrpInitializeProcess",
          0,
          "Querying the known DLL directory link object failed with status 0x%08lx\n",
          Callbacka);
        return ApplicationKeyOption;
      }
      RtlFreeHeap(v37, 0, v50);
      v45 = ReturnedLength;
    }
    NtClose(LinkHandle);
    v41 = 0;
  }
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = DestinationString;
  }
  else
  {
    DosPath = (__m128i)v40->CurrentDirectory.DosPath;
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)&v40->CurrentDirectory.DosPath.Length;
    v52 = (wchar_t *)_mm_srli_si128(DosPath, 8).m128i_u64[0];
    UnicodeString.Buffer = v52;
    if ( !v52 || !UnicodeString.Length || !*v52 )
    {
      v53 = (wchar_t *)RtlAllocateHeap(v37, 0, 8uLL);
      UnicodeString.Buffer = v53;
      if ( !v53 )
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5792,
          (__int64)"LdrpInitializeProcess",
          0,
          "Allocating a buffer to hold the current working directory failed\n");
        return 3221225495LL;
      }
      v122 = 0;
      v54 = RtlGetNtSystemRoot();
      *(_DWORD *)v53 = *(_DWORD *)v54;
      v53[2] = v54[2];
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  v58 = Destination.Length;
  if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x20000000) != 0 )
  {
    v41 = LdrpIncludeAlternateForwarders(v55, Destination.Length, v56, v57);
    v58 = 2 * v59 + 22;
    if ( v41 )
      v58 = v59 + 2 * v59 + 52;
  }
  v60 = v58;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v60 = v58 + 2 * (DestinationString.Length + 9LL);
    if ( (ProcessEnvironmentBlock->BitField & 2) != 0 )
      v40->DllPath.Length = 0;
  }
  v119.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v60);
  if ( !v119.Buffer )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5883,
      (__int64)"LdrpInitializeProcess",
      0,
      "Failed to allocate the system dirs string!\n");
    return 3221225495LL;
  }
  v119.Length = 0;
  v119.MaximumLength = v60;
  RtlAppendUnicodeStringToString(&v119, &Destination);
  v61 = v119.Length;
  v119.Buffer[((unsigned __int64)v119.Length >> 1) - 1] = 59;
  RtlpSystem32Dirs = (__int128)v119;
  LdrpSystem32 = v119;
  LdrpSystem32.Length = v61 - 2;
  if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x20000000) != 0 )
  {
    if ( v41 )
    {
      RtlAppendUnicodeStringToString(&v119, &Destination);
      RtlAppendUnicodeToString(&v119, L"forwarders\\alt;");
    }
    RtlAppendUnicodeStringToString(&v119, &Destination);
    RtlAppendUnicodeToString(&v119, L"forwarders;");
  }
  if ( v60 > v58 )
  {
    RtlAppendUnicodeStringToString(&v119, &DestinationString);
    RtlAppendUnicodeToString(&v119, L"\\system;");
    RtlAppendUnicodeStringToString(&v119, &DestinationString);
    RtlAppendUnicodeToString(&v119, L";");
    RtlpSystemDirs = v119;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&ImagePathName);
  inited = LdrpInitializeNtdllDataTableEntry(DllHandle, &LdrpNtDllDataTableEntry, 0LL, 0LL, &Destination);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  v62 = 0LL;
  v63 = ImagePathName.m128i_i64[1] + ImagePathName.m128i_u16[0];
  v64 = (_WORD *)v63;
  if ( v63 && v63 > ImagePathName.m128i_i64[1] )
  {
    while ( 1 )
    {
      v65 = v64--;
      if ( *v64 == 92 )
        break;
      if ( (unsigned __int64)v64 <= ImagePathName.m128i_i64[1] )
        goto LABEL_160;
    }
    v62 = (__int64)v65;
  }
LABEL_160:
  if ( v62 )
  {
    v66 = v63 - v62;
    v137.m128i_i16[0] = v66;
    if ( ImagePathName.m128i_u16[1] - (unsigned __int64)ImagePathName.m128i_u16[0] >= 2 )
      v66 += 2;
    v137.m128i_i16[1] = v66;
    v137.m128i_i64[1] = v62;
  }
  else
  {
    v137 = ImagePathName;
  }
  v67 = LdrpNtdllHotPatchContext;
  if ( *(_WORD *)LdrpNtdllHotPatchContext )
  {
    LdrpLogEtwHotPatchStatus(
      (unsigned int)&v137,
      LdrpNtDllDataTableEntry,
      LdrpNtdllHotPatchContext,
      *(_DWORD *)(LdrpNtdllHotPatchContext + 544),
      0);
    v67 = LdrpNtdllHotPatchContext;
  }
  if ( *(int *)(v67 + 544) < 0 )
    __fastfail(0x45u);
  v132 = 0LL;
  v68 = *(void **)(v67 + 536);
  if ( v68 )
  {
    inited = LdrpInitializeNtdllDataTableEntry(v68, &v132, LdrpNtDllDataTableEntry, (const UNICODE_STRING *)v67, 0LL);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
  }
  RtlInitializeHistoryTable();
  v69 = (_QWORD *)(LdrpNtDllDataTableEntry + 32);
  v70 = qword_1801843B0;
  if ( *(__int64 **)(qword_1801843B0 + 8) != &qword_1801843B0 )
    goto LABEL_296;
  *v69 = qword_1801843B0;
  v69[1] = &qword_1801843B0;
  *(_QWORD *)(v70 + 8) = v69;
  qword_1801843B0 = (__int64)v69;
  if ( !v132 )
    goto LABEL_175;
  v71 = (_QWORD *)(v132 + 32);
  if ( (__int64 *)v69[1] != &qword_1801843B0 )
LABEL_296:
    __fastfail(3u);
  *v71 = v69;
  v71[1] = &qword_1801843B0;
  v69[1] = v71;
  qword_1801843B0 = (__int64)v71;
LABEL_175:
  v72 = LdrpInitParallelLoadingSupport();
  ApplicationKeyOption = v72;
  if ( v72 < 0 )
  {
    LODWORD(Callbacka) = v72;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6120,
      (__int64)"LdrpInitializeProcess",
      0,
      "Failed to initialize Parallel loader, st = 0x%x\n",
      Callbacka);
    return ApplicationKeyOption;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, (__int64 *)Path);
  memset_thunk_772440563353939046(&v158, 0, 0xC8uLL);
  v159 = Path;
  v160 = 512;
  v158 = ImagePathName;
  p_ApplicationKeyOption = &ApplicationKeyOption;
  ModuleEntry = LdrpAllocateModuleEntry((__int64)&v158);
  if ( !ModuleEntry )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6141,
      (__int64)"LdrpInitializeProcess",
      0,
      "Allocating a data table entry for the executable failed\n");
    return 3221225495LL;
  }
  LdrpImageEntry = (__int64)ModuleEntry;
  v74 = 2LL;
  do
  {
    v75 = LdrpImageEntry;
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v74;
  }
  while ( v74 );
  *(_WORD *)(**(_QWORD **)(v75 + 152) - 52LL) = -1;
  v76 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = ImagePathName;
  v77 = *(_DWORD *)(v76 + 104) | 4;
  *(_DWORD *)(v76 + 104) = v77;
  if ( (ProcessEnvironmentBlock->BitField & 0x10) != 0 )
  {
    v77 |= 1u;
    *(_DWORD *)(v76 + 104) = v77;
  }
  v78 = v116;
  if ( UseCOR )
  {
    v79 = v77 | 0x400000;
    *(_DWORD *)(v76 + 104) = v79;
    if ( v78 )
      *(_DWORD *)(v76 + 104) = v79 | 0x1000000;
  }
  if ( (ProcessEnvironmentBlock->BitField & 4) != 0 )
    *(_QWORD *)(v76 + 248) = 0LL;
  *(__m128i *)(v76 + 88) = v137;
  v80 = OutHeaders;
  if ( (void *)OutHeaders->OptionalHeader.ImageBase != ProcessEnvironmentBlock->ImageBaseAddress && !v78 && !UseWOW64 )
  {
    inited = LdrpProtectAndRelocateImage(ProcessEnvironmentBlock->ImageBaseAddress);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    v76 = LdrpImageEntry;
  }
  *(_QWORD *)(v76 + 48) = ProcessEnvironmentBlock->ImageBaseAddress;
  LdrpInsertDataTableEntry(v76);
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrinit.c",
    6228,
    (__int64)"LdrpInitializeProcess",
    2u,
    "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
    LdrpImageEntry + 88,
    LdrpImageEntry + 72,
    &UnicodeString,
    &LdrpAppPackagesPath);
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpImageEntry, v80);
  inited = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v81 = RtlpInitCurrentDir((__int64)&UnicodeString);
  ApplicationKeyOption = v81;
  if ( v81 < 0 )
  {
    LODWORD(v111) = v81;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6265,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
      &UnicodeString,
      v111);
  }
  if ( !v122 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v82 = LdrpAllocateModuleEntry(0LL);
    v83 = (__int64)v82;
    if ( !v82 )
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6288,
        (__int64)"LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the application verifier DLL failed\n");
      return 3221225495LL;
    }
    *(_DWORD *)(*((_QWORD *)v82 + 19) + 24LL) = -1;
    *(_WORD *)(**((_QWORD **)v82 + 19) - 52LL) = -1;
    v84 = v145;
    *((_DWORD *)v82 + 26) |= *(_DWORD *)(v145 + 104);
    *((_QWORD *)v82 + 31) = *(_QWORD *)(v84 + 248);
    *((_WORD *)v82 + 55) = 0;
    *(_OWORD *)(v82 + 72) = *(_OWORD *)(v84 + 72);
    *(_OWORD *)(v82 + 88) = *(_OWORD *)(v84 + 88);
    *((_DWORD *)v82 + 32) = *(_DWORD *)(v84 + 128);
    *((_DWORD *)v82 + 72) = *(_DWORD *)(v84 + 288);
    *((_QWORD *)v82 + 6) = *(_QWORD *)(v84 + 48);
    LdrpInsertDataTableEntry((__int64)v82);
    LdrpLogDllState(*(_QWORD *)(v83 + 48), v83 + 72, 0x14A5u);
    inited = RtlImageNtHeaderEx(3u, *(PVOID *)(v83 + 48), 0LL, &v146);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    LdrpInsertModuleToIndex(v83, v146);
    inited = LdrpProcessMappedModule(v83, 0, 1);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    *(_QWORD *)(v83 + 56) = *(_QWORD *)(v84 + 56);
    LdrpLogDllState(*(_QWORD *)(v83 + 48), v83 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v83 + 152) + 56LL) = 7;
    if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x100) == 0 && (AvrfAppVerifierMode & 2) == 0 )
    {
      v115[0] = 0;
      inited = LdrpInitializeGraphRecurse(*(__int64 **)(v83 + 152), 0LL, v115);
      ApplicationKeyOption = inited;
    }
    else
    {
      inited = AVrfInitializeVerifier(0, 0, 0, 1, (__int64)DllHandle, 0LL);
      ApplicationKeyOption = inited;
      if ( inited >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v83 + 152) + 56LL) = 9;
        inited = ApplicationKeyOption;
      }
    }
    if ( inited < 0 )
      return (unsigned int)inited;
  }
  LdrpDropLastInProgressCount();
  if ( UseWOW64 )
  {
    if ( Handle )
    {
      NtClose(Handle);
      Handle = 0LL;
      if ( LdrpLargePageDllKeyHandle )
      {
        NtClose(LdrpLargePageDllKeyHandle);
        LdrpLargePageDllKeyHandle = 0LL;
      }
    }
    if ( v123[0] )
    {
      NtClose(v123[0]);
      v123[0] = 0LL;
    }
    v85 = LdrpLoadWow64(&Destination);
    inited = v85;
    ApplicationKeyOption = v85;
    if ( v85 >= 0 )
    {
      if ( ProcessEnvironmentBlock->BeingDebugged )
        LdrpDoDebuggerBreak((unsigned int)v85);
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      g_LdrpWow64LdrpInitialize(v135);
      goto LABEL_291;
    }
    return (unsigned int)inited;
  }
  ProcessInformation = 0LL;
  if ( UseCOR )
  {
    inited = LdrpCorInitialize((PVOID *)&ProcessInformation);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    v86 = v116;
    if ( (_BYTE)v116 )
    {
      inited = LdrpCorValidateImage((unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
        return (unsigned int)inited;
    }
    if ( (v134->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v135 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  else
  {
    v86 = v116;
  }
  v87 = LdrpInitializeTls();
  ApplicationKeyOption = v87;
  if ( v87 < 0 )
  {
    LODWORD(Callbackc) = v87;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6527,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing TLS slots failed with status 0x%08lx\n",
      Callbackc);
    return ApplicationKeyOption;
  }
  if ( ProcessInformation )
  {
    v114 = 0;
    v88 = LdrpInitializeGraphRecurse(ProcessInformation[19], 0LL, &v114);
    ApplicationKeyOption = v88;
    if ( v88 < 0 )
    {
      LODWORD(Callbackc) = v88;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6546,
        (__int64)"LdrpInitializeProcess",
        0,
        "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
        Callbackc);
      return ApplicationKeyOption;
    }
  }
  v89 = LdrpInitializeImportRedirection();
  ApplicationKeyOption = v89;
  if ( v89 < 0 )
  {
    LODWORD(Callbackc) = v89;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6562,
      (__int64)"LdrpInitializeProcess",
      0,
      "Loading of import redirection module failed with status 0x%08x\n",
      Callbackc);
    return ApplicationKeyOption;
  }
  ProcessInformation = 0LL;
  if ( (unsigned __int16)(v80->OptionalHeader.Subsystem - 2) <= 1u )
  {
    v90 = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernel32DllName, &DllHandle);
    ApplicationKeyOption = v90;
    if ( v90 < 0 )
    {
      if ( v90 != -1073741515 )
      {
        LODWORD(v111) = v90;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6720,
          (__int64)"LdrpInitializeProcess",
          0,
          "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
          &LdrpKernel32DllName,
          v111);
        return ApplicationKeyOption;
      }
      v94 = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernelbaseDllName, &DllHandle);
      ApplicationKeyOption = v94;
      if ( v94 < 0 )
      {
        LODWORD(v111) = v94;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6693,
          (__int64)"LdrpInitializeProcess",
          0,
          "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
          &LdrpKernelbaseDllName,
          v111);
        return ApplicationKeyOption;
      }
      v95 = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = v95;
      if ( (int)(v95 + 0x80000000) >= 0 && v95 != -1073741515 )
      {
        LODWORD(Callbackc) = v95;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6709,
          (__int64)"LdrpInitializeProcess",
          0,
          "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
          Callbackc);
        return ApplicationKeyOption;
      }
      ApplicationKeyOption = 0;
      v93 = DllHandle;
    }
    else
    {
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                    DllHandle,
                                    (PANSI_STRING)&stru_180132420,
                                    0,
                                    &Kernel32ThreadInitThunkFunction,
                                    0,
                                    retaddr);
      ApplicationKeyOption = ProcedureAddressForCaller;
      if ( ProcedureAddressForCaller < 0 )
      {
        LODWORD(v112) = ProcedureAddressForCaller;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6607,
          (__int64)"LdrpInitializeProcess",
          0,
          "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
          &stru_180132420,
          &LdrpKernel32DllName,
          v112);
        return ApplicationKeyOption;
      }
      LdrGetProcedureAddressForCaller(
        DllHandle,
        (PANSI_STRING)&stru_180132630,
        0,
        (PVOID *)&ProcessInformation,
        0,
        retaddr);
      inited = LdrpSnapKernelBaseExtensions();
      ApplicationKeyOption = inited;
      if ( inited < 0 )
        return (unsigned int)inited;
      inited = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = inited;
      if ( inited < 0 )
        return (unsigned int)inited;
      LoadedDll = LdrpFindLoadedDll((__int64)&LdrpKernelbaseDllName, 0LL, (PVOID *)&v147);
      ApplicationKeyOption = LoadedDll;
      if ( LoadedDll < 0 )
      {
        LODWORD(v111) = LoadedDll;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6675,
          (__int64)"LdrpInitializeProcess",
          0,
          "Finding \"%wZ\" failed with status 0x%08lx\n",
          &LdrpKernelbaseDllName,
          v111);
        return ApplicationKeyOption;
      }
      v93 = (PVOID)v147[6];
    }
    v96 = LdrGetProcedureAddressForCaller(v93, (PANSI_STRING)&stru_180131098, 0, &ProcedureAddress, 0, retaddr);
    ApplicationKeyOption = v96;
    if ( v96 < 0 )
    {
      LODWORD(Callbackc) = v96;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6738,
        (__int64)"LdrpInitializeProcess",
        0,
        "Finding KernelbasePostInit failed with status 0x%08lx\n",
        Callbackc);
      return ApplicationKeyOption;
    }
    v97 = ((__int64 (*)(void))ProcedureAddress)();
    ApplicationKeyOption = v97;
    if ( v97 < 0 )
    {
      LODWORD(Callbackc) = v97;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6746,
        (__int64)"LdrpInitializeProcess",
        0,
        "Calling KernelbasePostInit failed with status 0x%08lx\n",
        Callbackc);
      return ApplicationKeyOption;
    }
    ApplicationKeyOption = 0;
  }
  LdrpDrainWorkQueue(0);
  SbObtainTraceHandle(0LL);
  v98 = pShimData;
  if ( pShimData && *(_DWORD *)(pShimData + 528) )
  {
    ProcessEnvironmentBlock->AppCompatInfo = 0LL;
    LdrpInitShimEngine(v98);
  }
  v99 = RtlpForceCSDebugInfoCreation;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v99 = 1;
  RtlpForceCSDebugInfoCreation = v99;
  v100 = v139;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
    v139->LoaderThreads = 1;
  LdrpEnableParallelLoading(v100->LoaderThreads);
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  *p_ApplicationKeyOption = 0;
  if ( v86 )
  {
    v101 = LdrpCorProcessImports(LdrpImageEntry);
LABEL_268:
    ApplicationKeyOption = v101;
    v102 = v101;
    goto LABEL_269;
  }
  LdrpThreadTokenSetMainThreadToken();
  v160 |= 1u;
  LdrpMapAndSnapDependency((__int64)&v158);
  LdrpDrainWorkQueue(1);
  if ( LdrpMainThreadToken )
    LdrpThreadTokenUnsetMainThreadToken();
  v102 = ApplicationKeyOption;
  if ( (ApplicationKeyOption & 0x80000000) == 0 )
  {
    v101 = LdrpPrepareModuleForExecution(LdrpImageEntry, (__int64)p_ApplicationKeyOption);
    goto LABEL_268;
  }
LABEL_269:
  if ( v102 < 0 )
  {
    LODWORD(Callbackc) = v102;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6963,
      (__int64)"LdrpInitializeProcess",
      0,
      "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
      Callbackc);
    return ApplicationKeyOption;
  }
  LdrInitState = 2;
  inited = LdrpInitializePatchData();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( LdrpIsHotPatchingEnabled )
  {
    PatchImage = LdrpLoadPatchImage(*(_QWORD *)(LdrpImageEntry + 48));
    ApplicationKeyOption = PatchImage;
    if ( PatchImage < 0 )
    {
      LODWORD(v111) = PatchImage;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6995,
        (__int64)"LdrpInitializeProcess",
        0,
        "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
        LdrpImageEntry + 88,
        v111);
      return ApplicationKeyOption;
    }
  }
  if ( ProcessEnvironmentBlock->BeingDebugged )
    ((void (*)(void))LdrpDoDebuggerBreak)();
  LdrpDropLastInProgressCount();
  if ( Kernel32ThreadInitThunkFunction )
  {
    inited = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))Kernel32ThreadInitThunkFunction)(1LL, 0LL, 0LL);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    inited = LdrpInitializePerUserWindowsDirectory((__int64 (__fastcall *)(_BYTE *, __int64))ProcessInformation);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
  }
  LdrpProcessInitContextRecord = v135;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  v114 = 0;
  ApplicationKeyOption = LdrpInitializeGraphRecurse(
                           *(__int64 **)(LdrpImageEntry + 152),
                           (__int64)p_ApplicationKeyOption,
                           &v114);
  LdrpReleaseLoaderLock(v104, 9, ApplicationKeyOption);
  LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), (__int64)p_ApplicationKeyOption);
  LdrpDropLastInProgressCount();
  LdrpProcessInitContextRecord = 0LL;
  if ( v163 )
    RtlReleasePath(Path[0]);
  if ( (ApplicationKeyOption & 0x80000000) != 0 )
  {
    LODWORD(Callbackc) = ApplicationKeyOption;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      7126,
      (__int64)"LdrpInitializeProcess",
      0,
      "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
      Callbackc);
    return ApplicationKeyOption;
  }
  LdrpInitializeSmtDelayedSleep();
  if ( *(_WORD *)(LdrpImageEntry + 110) )
  {
    v152 = 72LL;
    v153 = 1;
    v154 = 0LL;
    v155 = 0LL;
    v156 = 0LL;
    v157 = 0LL;
    RtlActivateActivationContextUnsafeFast((__int64)&v152, *(_QWORD *)(LdrpImageEntry + 136));
    LdrpCallTlsInitializers(1u, LdrpImageEntry);
    RtlDeactivateActivationContextUnsafeFast((__int64)&v152);
  }
  if ( g_ShimsEnabled
    && !((unsigned __int8 (__fastcall *)(unsigned __int16 *, __int64))(__ROR8__(
                                                                         g_pfnSE_InstallAfterInit,
                                                                         64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
          &Length,
          v98) )
  {
    g_ShimsEnabled = 0;
    LdrUnloadDll(g_pShimEngineModule);
    g_pShimEngineModule = 0LL;
  }
  PostProcessInitRoutine = ProcessEnvironmentBlock->PostProcessInitRoutine;
  if ( PostProcessInitRoutine )
    PostProcessInitRoutine();
LABEL_291:
  if ( Handle )
    NtClose(Handle);
  if ( v123[0] )
    NtClose(v123[0]);
  return 0LL;
}
