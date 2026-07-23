/*
 * XREFs of LdrpInitializeProcess @ 0x1800DE07C
 * Callers:
 *     _LdrpInitialize @ 0x18007B2BC (_LdrpInitialize.c)
 * Callees:
 *     RtlpInitEnvironmentBlock @ 0x18000CCDC (RtlpInitEnvironmentBlock.c)
 *     EtwEventRegister @ 0x180015AA0 (EtwEventRegister.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlReleasePath @ 0x18001CC00 (RtlReleasePath.c)
 *     RtlInitializeCriticalSectionEx @ 0x18001DA80 (RtlInitializeCriticalSectionEx.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlSetBits @ 0x180031140 (RtlSetBits.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800342A8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180034A60 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpProcessMappedModule @ 0x180034AEC (LdrpProcessMappedModule.c)
 *     LdrUnloadDll @ 0x180038270 (LdrUnloadDll.c)
 *     LdrpInitializeDllPath @ 0x180038594 (LdrpInitializeDllPath.c)
 *     LdrLoadDll @ 0x18003AE00 (LdrLoadDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     LdrpMapAndSnapDependency @ 0x18003D014 (LdrpMapAndSnapDependency.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003F140 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003FEF0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallTlsInitializers @ 0x180042C6C (LdrpCallTlsInitializers.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800437E8 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLogDllState @ 0x180044F74 (LdrpLogDllState.c)
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180049410 (RtlAppendUnicodeStringToString.c)
 *     LdrpInsertDataTableEntry @ 0x18004D144 (LdrpInsertDataTableEntry.c)
 *     LdrpPrepareModuleForExecution @ 0x18004DB8C (LdrpPrepareModuleForExecution.c)
 *     LdrpAllocateModuleEntry @ 0x18004DF68 (LdrpAllocateModuleEntry.c)
 *     LdrpReleaseLoaderLock @ 0x18004F1D0 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18004F230 (LdrpAcquireLoaderLock.c)
 *     RtlAppendUnicodeToString @ 0x18004F4E0 (RtlAppendUnicodeToString.c)
 *     LdrpFindLoadedDll @ 0x18004F750 (LdrpFindLoadedDll.c)
 *     RtlGetNtSystemRoot @ 0x1800509E0 (RtlGetNtSystemRoot.c)
 *     LdrpDrainWorkQueue @ 0x180051600 (LdrpDrainWorkQueue.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x180054278 (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800542D4 (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpInitializePolicy @ 0x180060340 (LdrpInitializePolicy.c)
 *     RtlInitializeCriticalSection @ 0x1800698D0 (RtlInitializeCriticalSection.c)
 *     LdrpFreeLoadContextOfNode @ 0x18006B270 (LdrpFreeLoadContextOfNode.c)
 *     LdrpInitShimEngine @ 0x1800726D8 (LdrpInitShimEngine.c)
 *     LdrpCorInitialize @ 0x180072FF8 (LdrpCorInitialize.c)
 *     LdrpInitializeGraphRecurse @ 0x18007322C (LdrpInitializeGraphRecurse.c)
 *     LdrpEnableParallelLoading @ 0x180074450 (LdrpEnableParallelLoading.c)
 *     RtlInitializeSListHead @ 0x180075EA0 (RtlInitializeSListHead.c)
 *     RtlpInitializeThreadActivationContextStack @ 0x180078FD8 (RtlpInitializeThreadActivationContextStack.c)
 *     TpInitializePackage @ 0x180079FA0 (TpInitializePackage.c)
 *     RtlCreateTagHeap @ 0x18007A050 (RtlCreateTagHeap.c)
 *     LdrpInitializeTls @ 0x18007A64C (LdrpInitializeTls.c)
 *     LdrpDropLastInProgressCount @ 0x18007D1B4 (LdrpDropLastInProgressCount.c)
 *     RtlpInitCurrentDir @ 0x18008044C (RtlpInitCurrentDir.c)
 *     RtlInitializeHistoryTable @ 0x1800809AC (RtlInitializeHistoryTable.c)
 *     RtlSetHeapInformation @ 0x180080EF0 (RtlSetHeapInformation.c)
 *     RtlQueryApplicationKeyOption @ 0x180081D9C (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileExecutionOptions @ 0x180081E80 (RtlQueryImageFileExecutionOptions.c)
 *     LdrpCodeAuthzInitialize @ 0x180082D6C (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180083010 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInsertModuleToIndex @ 0x18008321C (LdrpInsertModuleToIndex.c)
 *     LdrpInitializeSmtDelayedSleep @ 0x180083288 (LdrpInitializeSmtDelayedSleep.c)
 *     RtlpInitParameterBlock @ 0x180084354 (RtlpInitParameterBlock.c)
 *     LdrpInitParallelLoadingSupport @ 0x180085190 (LdrpInitParallelLoadingSupport.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x1800853EC (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     SbObtainTraceHandle @ 0x180086590 (SbObtainTraceHandle.c)
 *     LdrpInitializePatchData @ 0x180087598 (LdrpInitializePatchData.c)
 *     LdrpInitializeImportRedirection @ 0x1800888BC (LdrpInitializeImportRedirection.c)
 *     LdrpProtectAndRelocateImage @ 0x180088EBC (LdrpProtectAndRelocateImage.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x18008939C (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpLoadWow64 @ 0x180089F1C (LdrpLoadWow64.c)
 *     LdrpCorProcessImports @ 0x18008B534 (LdrpCorProcessImports.c)
 *     LdrpCorValidateImage @ 0x18008C52C (LdrpCorValidateImage.c)
 *     RtlNormalizeProcessParams @ 0x18008CBE0 (RtlNormalizeProcessParams.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtQueryInformationProcess @ 0x1800A4390 (NtQueryInformationProcess.c)
 *     NtQuerySystemInformation @ 0x1800A4730 (NtQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x1800A4B70 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1800A66E0 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1800A6D20 (NtQuerySymbolicLinkObject.c)
 *     InterlockedPushListSList @ 0x1800A7DF0 (InterlockedPushListSList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlInitializeHeapManager @ 0x1800B0C34 (RtlInitializeHeapManager.c)
 *     LdrpLoadPatchImage @ 0x1800DA320 (LdrpLoadPatchImage.c)
 *     LdrpCorFixupImage @ 0x1800DA6D8 (LdrpCorFixupImage.c)
 *     LdrpLogEtwHotPatchStatus @ 0x1800DB68C (LdrpLogEtwHotPatchStatus.c)
 *     LdrpCheckAppDirType @ 0x1800DC8F0 (LdrpCheckAppDirType.c)
 *     LdrpDoDebuggerBreak @ 0x1800DCB14 (LdrpDoDebuggerBreak.c)
 *     LdrpIncludeAlternateForwarders @ 0x1800DCD48 (LdrpIncludeAlternateForwarders.c)
 *     LdrpInitializeExceptionTable @ 0x1800DD1F0 (LdrpInitializeExceptionTable.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD27C (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeNlsInfo @ 0x1800DDFE4 (LdrpInitializeNlsInfo.c)
 *     LdrpInitializeProcessHeap @ 0x1800DFF28 (LdrpInitializeProcessHeap.c)
 *     LdrpCaptureCriticalThunks @ 0x1800E0B14 (LdrpCaptureCriticalThunks.c)
 *     AVrfInitializeVerifier @ 0x1800E4F54 (AVrfInitializeVerifier.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1801084E4 (RtlpInitializeNonVolatileFlush.c)
 *     RtlInitializeExceptionLog @ 0x18010D4B8 (RtlInitializeExceptionLog.c)
 *     RtlControlStackTraceDataBase @ 0x18010DC78 (RtlControlStackTraceDataBase.c)
 *     TpSetDefaultPoolCpuSets @ 0x180123C28 (TpSetDefaultPoolCpuSets.c)
 */

int __fastcall LdrpInitializeProcess(__int64 a1, void *a2)
{
  __int64 v3; // rax
  int v4; // r15d
  int v5; // eax
  int v6; // r13d
  struct _TEB *v7; // rdi
  __int64 ProcessEnvironmentBlock; // rsi
  int v9; // eax
  bool v10; // cc
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  _WORD *v14; // rcx
  unsigned __int16 v15; // r8
  PIMAGE_NT_HEADERS v16; // r14
  __int64 v17; // rcx
  int result; // eax
  _QWORD *v19; // rax
  char v20; // al
  int v21; // eax
  int WowTebOffset; // ecx
  NTSTATUS v23; // eax
  __int64 v24; // rcx
  PRTL_USER_PROCESS_PARAMETERS v25; // r13
  unsigned int *Config; // r15
  unsigned int v27; // eax
  char v28; // al
  _QWORD *v29; // r8
  int v30; // ecx
  char v31; // al
  unsigned int v32; // eax
  int v33; // ecx
  unsigned __int64 v34; // r14
  __int64 v35; // rax
  void *v36; // r15
  __int64 v37; // rcx
  int DefaultThreadpoolThreadMaximum; // r14d
  __int64 v39; // r13
  bool v40; // r12
  const WCHAR *NtSystemRoot; // rax
  unsigned __int16 v42; // r14
  wchar_t *Heap; // rax
  SIZE_T v44; // r14
  int v45; // edx
  NTSTATUS v46; // eax
  NTSTATUS v47; // eax
  wchar_t *v48; // r12
  __m128i v49; // xmm0
  wchar_t *v50; // xmm0_8
  wchar_t *v51; // r14
  PWSTR v52; // rax
  unsigned __int64 Length; // r14
  __int64 v54; // rdx
  SIZE_T v55; // r15
  __int64 v56; // rdx
  __int64 v57; // r8
  wchar_t *v58; // rdx
  wchar_t *v59; // rax
  wchar_t *v60; // r9
  __int16 v61; // dx
  __int64 v62; // rax
  void *v63; // rcx
  _QWORD *v64; // rax
  __int64 v65; // rcx
  _QWORD *v66; // rcx
  int inited; // eax
  char *ModuleEntry; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // eax
  char v72; // r8
  int v73; // eax
  void *v74; // rax
  void *v75; // rdx
  PIMAGE_NT_HEADERS v76; // r13
  int v77; // eax
  char *v78; // rax
  __int64 v79; // r14
  __int64 v80; // r15
  char v81; // r12
  int v82; // eax
  int v83; // eax
  int v84; // eax
  NTSTATUS v85; // eax
  NTSTATUS ProcedureAddressForCaller; // eax
  int LoadedDll; // eax
  PVOID v88; // rcx
  NTSTATUS v89; // eax
  int v90; // eax
  NTSTATUS v91; // eax
  int v92; // eax
  __int64 v93; // r14
  char v94; // al
  unsigned int v95; // ecx
  int v96; // eax
  int PatchImage; // eax
  __int64 v98; // rcx
  void (*v99)(void); // rax
  PVOID *Callback; // [rsp+28h] [rbp-390h]
  PVOID *Callbacka; // [rsp+28h] [rbp-390h]
  PVOID *Callbackb; // [rsp+28h] [rbp-390h]
  PVOID *Callbackc; // [rsp+28h] [rbp-390h]
  __int64 v104; // [rsp+30h] [rbp-388h]
  __int64 v105; // [rsp+30h] [rbp-388h]
  __int64 v106; // [rsp+38h] [rbp-380h]
  int ApplicationKeyOption; // [rsp+50h] [rbp-368h] BYREF
  char v108; // [rsp+54h] [rbp-364h] BYREF
  _BYTE v109[3]; // [rsp+55h] [rbp-363h] BYREF
  int v110; // [rsp+58h] [rbp-360h]
  PVOID DllHandle; // [rsp+60h] [rbp-358h] BYREF
  __int64 **ProcessInformation; // [rsp+68h] [rbp-350h] BYREF
  _UNICODE_STRING v113; // [rsp+70h] [rbp-348h] BYREF
  int v114; // [rsp+80h] [rbp-338h] BYREF
  int v115; // [rsp+84h] [rbp-334h] BYREF
  int v116; // [rsp+88h] [rbp-330h]
  HANDLE v117; // [rsp+90h] [rbp-328h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-318h] BYREF
  _UNICODE_STRING Destination; // [rsp+B0h] [rbp-308h] BYREF
  unsigned __int16 v120; // [rsp+C0h] [rbp-2F8h] BYREF
  __int16 v121; // [rsp+C2h] [rbp-2F6h]
  unsigned __int64 v122; // [rsp+C8h] [rbp-2F0h]
  HANDLE Handle; // [rsp+D0h] [rbp-2E8h] BYREF
  __m128i v124; // [rsp+E0h] [rbp-2D8h] BYREF
  ULONG ReturnedLength; // [rsp+F0h] [rbp-2C8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+F8h] [rbp-2C0h] BYREF
  struct _TEB *v127; // [rsp+100h] [rbp-2B8h]
  __int64 v128; // [rsp+108h] [rbp-2B0h]
  _UNICODE_STRING DestinationString; // [rsp+110h] [rbp-2A8h] BYREF
  __m128i v130; // [rsp+120h] [rbp-298h] BYREF
  HANDLE LinkHandle; // [rsp+130h] [rbp-288h] BYREF
  __int64 v132; // [rsp+138h] [rbp-280h] BYREF
  __int64 v133; // [rsp+140h] [rbp-278h]
  __int64 v134; // [rsp+148h] [rbp-270h]
  __int64 v135; // [rsp+150h] [rbp-268h] BYREF
  int v136; // [rsp+158h] [rbp-260h] BYREF
  const WCHAR *v137; // [rsp+160h] [rbp-258h]
  __int64 v138; // [rsp+168h] [rbp-250h] BYREF
  __int64 v139; // [rsp+170h] [rbp-248h] BYREF
  _DWORD *v140; // [rsp+178h] [rbp-240h] BYREF
  char *v141; // [rsp+180h] [rbp-238h] BYREF
  __int64 (*v142)(void); // [rsp+188h] [rbp-230h] BYREF
  unsigned int v143; // [rsp+190h] [rbp-228h] BYREF
  _OBJECT_ATTRIBUTES v144; // [rsp+198h] [rbp-220h] BYREF
  _QWORD v145[3]; // [rsp+1C8h] [rbp-1F0h] BYREF
  __int64 v146; // [rsp+1E0h] [rbp-1D8h] BYREF
  int v147; // [rsp+1E8h] [rbp-1D0h]
  __int128 v148; // [rsp+1F0h] [rbp-1C8h]
  __int128 v149; // [rsp+200h] [rbp-1B8h]
  __int128 v150; // [rsp+210h] [rbp-1A8h]
  __int64 v151; // [rsp+220h] [rbp-198h]
  _OWORD v152[13]; // [rsp+230h] [rbp-188h] BYREF
  PWSTR Path[15]; // [rsp+300h] [rbp-B8h] BYREF
  char v154; // [rsp+37Ch] [rbp-3Ch]
  PVOID *retaddr; // [rsp+3B8h] [rbp+0h]

  DllHandle = a2;
  v128 = a1;
  v136 = 1441812;
  v137 = L"\\KnownDlls";
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
  v127 = v7;
  ProcessEnvironmentBlock = (__int64)v7->ProcessEnvironmentBlock;
  PebLdr = 88;
  byte_18017A144 = 1;
  qword_18017A158 = (__int64)&qword_18017A150;
  qword_18017A150 = (__int64)&qword_18017A150;
  qword_18017A168 = (__int64)&qword_18017A160;
  qword_18017A160 = (__int64)&qword_18017A160;
  qword_18017A178 = (__int64)&qword_18017A170;
  qword_18017A170 = (__int64)&qword_18017A170;
  byte_18017A188 = 0;
  qword_18017A190 = 0LL;
  *(_QWORD *)(ProcessEnvironmentBlock + 24) = &PebLdr;
  LdrpInitializeNlsInfo(ProcessEnvironmentBlock);
  v9 = 0;
  v10 = *(_DWORD *)(ProcessEnvironmentBlock + 184) <= 1u;
  if ( *(_DWORD *)(ProcessEnvironmentBlock + 184) > 1u )
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
  memset(&RtlpFcProcessManager, 0, 0xE8uLL);
  memset(&unk_180178B80, 0, 0xA0uLL);
  memset(qword_180178B68, 0, 0xA8uLL);
  RunOnce.Value = 0LL;
  stru_180178C30.0 = 0LL;
  qword_180178C40 = (__int64)&qword_180178C38;
  qword_180178C38 = (__int64)&qword_180178C38;
  RtlpInitializeNonVolatileFlush();
  v13 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v14 = (_WORD *)(*(_QWORD *)(v13 + 104) + v13);
  if ( (*(_BYTE *)(v13 + 8) & 1) != 0 )
    v14 = *(_WORD **)(v13 + 104);
  v122 = (unsigned __int64)v14;
  v120 = *(_WORD *)(v13 + 96);
  v15 = v120;
  v121 = v120 + 2;
  if ( v120 >= 8u && *v14 == 92 && v14[1] == 63 && v14[2] == 63 && v14[3] == 92 )
  {
    v120 -= 8;
    v121 = v15 - 6;
    v122 = (unsigned __int64)(v14 + 4);
    *(_WORD *)(v13 + 96) -= 8;
    *(_WORD *)(v13 + 98) -= 8;
    *(_QWORD *)(v13 + 104) += 8LL;
  }
  v116 = 1;
  UseCOR = 0;
  LOBYTE(v6) = 0;
  v110 = v6;
  v115 = 0;
  RtlImageNtHeaderEx(3u, *(PVOID *)(ProcessEnvironmentBlock + 16), 0LL, &OutHeaders);
  v16 = OutHeaders;
  LdrpAppHeaders = (__int64)OutHeaders;
  v17 = 32LL;
  if ( LdrpIsSecureProcess && (OutHeaders->FileHeader.Characteristics & 0x20) == 0 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4800,
      (__int64)"LdrpInitializeProcess",
      0,
      "Secure processes must be large address aware\n");
    return -1073741637;
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
  if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  v20 = (LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 4) & 3;
  LdrpEnforceIntegrityContinuity = v20 == 1;
  LdrpAuditIntegrityContinuity = ((v20 - 1) & 0xFD) == 0;
  v21 = LdrpInitializeExecutionOptions(&v120, ProcessEnvironmentBlock, (__int64)a2, &Handle, &v117, (__int64)&v139);
  ApplicationKeyOption = v21;
  if ( v21 < 0 )
  {
    LODWORD(Callback) = v7->ClientId.UniqueProcess;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4946,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      Callback,
      v21);
    return ApplicationKeyOption;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrinit.c",
    4993,
    (__int64)"LdrpInitializeProcess",
    2u,
    "Initializing process 0x%p\n",
    v7->ClientId.UniqueProcess);
  v133 = 0LL;
  WowTebOffset = v127->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( v16 )
  {
    if ( v16->OptionalHeader.Magic == 267 && WowTebOffset <= 0 )
    {
      UseCOR = 1;
      LOBYTE(v6) = 1;
      v110 = v6;
      v4 = 1;
      result = LdrpCorFixupImage(*(void **)(ProcessEnvironmentBlock + 16));
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
    }
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v23 = RtlpImageDirectoryEntryToDataEx(
            *(_QWORD *)(ProcessEnvironmentBlock + 16),
            1,
            0xEu,
            &v143,
            (PIMAGE_NT_HEADERS)&v135);
    v24 = v135;
    if ( v23 < 0 )
      v24 = 0LL;
    v135 = v24;
    if ( v24 )
    {
      UseCOR = 1;
      v6 = (unsigned __int8)v6;
      if ( (*(_BYTE *)(v24 + 16) & 1) != 0 )
        v6 = 1;
      v110 = v6;
    }
  }
  LdrpSystemDllBase = (__int64)DllHandle;
  if ( !UseWOW64 )
    v133 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(_QWORD *)(ProcessEnvironmentBlock + 192);
  v25 = RtlNormalizeProcessParams(*(PRTL_USER_PROCESS_PARAMETERS *)(ProcessEnvironmentBlock + 32));
  if ( UseWOW64 || UseCOR && v4 )
    Config = 0LL;
  else
    Config = LdrImageDirectoryEntryToLoadConfig(*(void **)(ProcessEnvironmentBlock + 16));
  if ( Config )
  {
    v27 = *Config;
    if ( *Config >= 0x10 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) &= ~Config[3];
      v27 = *Config;
    }
    if ( v27 >= 0x14 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) |= Config[4];
      v27 = *Config;
    }
    if ( v27 >= 0x18 && Config[5] )
      RtlpTimeout = -10000LL * (int)Config[5];
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  v28 = RtlpTimeoutDisable;
  if ( RtlpTimeout < -36000000000LL )
    v28 = 1;
  RtlpTimeoutDisable = v28;
  RtlFailedCriticalDebugAllocations = 0;
  RtlInitializeSListHead(&RtlCriticalSectionDebugSList);
  v29 = &RtlpStaticDebugInfo;
  do
  {
    *v29 = v29 + 6;
    v29 += 6;
  }
  while ( v29 <= qword_180178FC0 );
  *v29 = 0LL;
  InterlockedPushListSList(&RtlCriticalSectionDebugSList, (signed __int64)&RtlpStaticDebugInfo, qword_180178FF0, 8);
  *(_QWORD *)(ProcessEnvironmentBlock + 120) = &TlsBitMap;
  *(_QWORD *)(ProcessEnvironmentBlock + 568) = &TlsExpansionBitMap;
  memset(&RtlpFlsContext, 0, 0x60uLL);
  xmmword_18017AB98 = 0LL;
  xmmword_18017ABA8 = 0LL;
  xmmword_18017ABB8 = 0LL;
  xmmword_18017ABC8 = 0LL;
  qword_18017ABE0 = (__int64)&qword_18017ABD8;
  qword_18017ABD8 = (__int64)&qword_18017ABD8;
  TlsBitMap = 64;
  qword_18017A0B8 = ProcessEnvironmentBlock + 128;
  *(_DWORD *)(ProcessEnvironmentBlock + 128) |= 1u;
  TlsExpansionBitMap = 1024;
  qword_18017A088 = ProcessEnvironmentBlock + 576;
  if ( UseWOW64 )
    RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  v30 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
  if ( (v30 & 0x1000) != 0 || (v31 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v32 = 24;
    v114 = 24;
    if ( LdrpIsSecureProcess )
    {
      v33 = -1073741772;
    }
    else
    {
      LOBYTE(v104) = 0;
      v33 = RtlQueryImageFileExecutionOptions(
              &v120,
              (__int64)L"StackTraceDatabaseSizeInMb",
              4LL,
              (__int64)&v114,
              4,
              0LL);
      v32 = v114;
    }
    if ( v33 < 0 || v32 < 0x18 )
    {
      v34 = 25165824LL;
    }
    else if ( v32 <= 0x80 )
    {
      v34 = v32 << 20;
    }
    else
    {
      v34 = 0x8000000LL;
    }
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5241,
      (__int64)"LdrpInitializeProcess",
      2u,
      "Stack trace database size is %Id Mb\n",
      v34 >> 20);
    v145[0] = 0LL;
    v145[1] = 0LL;
    v145[2] = v34;
    RtlControlStackTraceDataBase(0LL, 24LL, v145);
    v30 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
    v31 = LdrpShouldCreateStackTraceDb;
  }
  if ( (v30 & 0x1000) != 0 || v31 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    RtlpForceCSDebugInfoCreation = 1;
    RtlpForceCSToUseEvents = 1;
  }
  result = RtlInitializeCriticalSectionEx(&FastPebLock, 0, 0);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &FastPebLock;
  result = RtlInitializeHeapManager((__int64)&v120);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  v35 = LdrpInitializeProcessHeap(Config, OutHeaders, v25);
  v36 = (void *)v35;
  if ( !v35 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5313,
      (__int64)"LdrpInitializeProcess",
      0,
      "Creating the process heap failed\n");
    return -1073741801;
  }
  *(_QWORD *)(ProcessEnvironmentBlock + 48) = v35;
  RtlInitializeCriticalSection(&LdrpEnclaveListLock);
  qword_18017A888 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = &LdrpEnclaveList;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  RtlpInitializeThreadActivationContextStack((__int64)v127);
  LdrpHeap = v36;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  EtwpFreeRegistrationList = 0LL;
  PrivateLoggerNotificationEntry = 0LL;
  ApplicationKeyOption = NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &v138, 8u, 0LL);
  v37 = RtlpHypervisorSharedUserVa;
  if ( ApplicationKeyOption >= 0 )
    v37 = v138;
  RtlpHypervisorSharedUserVa = v37;
  NtdllBaseTag = RtlCreateTagHeap(v36, 0, (PWSTR)L"NTDLL!", (PWSTR)L"!Process");
  result = TpInitializePackage();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  if ( v25->DefaultThreadpoolCpuSetMaskCount )
    TpSetDefaultPoolCpuSets(v25->DefaultThreadpoolCpuSetMasks);
  DefaultThreadpoolThreadMaximum = v25->DefaultThreadpoolThreadMaximum;
  if ( DefaultThreadpoolThreadMaximum )
  {
    RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
    TppPoolpGlobalPoolMaxThreadsOverride = DefaultThreadpoolThreadMaximum;
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  EtwEventRegister(&PrivateLoggerNotificationGuid, 0LL, 0LL, &g_hPrivLoggerNotificationProvider);
  EtwEventRegister(&UserDiagnosticGuid, UserDiagnosticProviderCallback, 0LL, &g_hUserDiagnosticProvider);
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((char *)&dword_180174468);
  EtwEventRegister(&WindowsHeapSnapshotProvider, RtlpHpStackTraceEtwCallback, 0LL, &RtlpHpStackTraceProviderHandle);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((char *)&dword_180174430);
  result = RtlpInitEnvironmentBlock();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  result = RtlpInitParameterBlock();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  v39 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v134 = v39;
  v124 = *(__m128i *)(v39 + 96);
  v122 = _mm_srli_si128(v124, 8).m128i_u64[0];
  if ( Handle || v117 )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             v117,
                             Handle,
                             (__int64)L"DebugProcessHeapOnly",
                             4LL,
                             (__int64)&v115,
                             4,
                             v104,
                             0LL);
    v40 = 0;
    if ( ApplicationKeyOption >= 0 && dword_180174238 && v115 )
    {
      dword_180174238 = 0;
      *RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  else
  {
    v40 = 0;
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx(&DestinationString, NtSystemRoot);
  v42 = DestinationString.Length + 40;
  Heap = (wchar_t *)RtlAllocateHeap(v36, 0, (unsigned int)DestinationString.Length + 38 + 2LL);
  if ( !Heap )
    return -1073741801;
  Destination.Length = 0;
  Destination.MaximumLength = v42;
  Destination.Buffer = Heap;
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  RtlAppendUnicodeStringToString(&Destination, &SlashSystem32SlashString);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) == 0 )
  {
    v44 = 48LL;
    v144.Length = 48;
    v144.RootDirectory = 0LL;
    v144.Attributes = 64;
    v144.ObjectName = (PUNICODE_STRING)&v136;
    *(_OWORD *)&v144.SecurityDescriptor = 0LL;
    LdrProtectMrdata(0);
    ApplicationKeyOption = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3u, &v144);
    LdrProtectMrdata(1);
    if ( ApplicationKeyOption < 0 )
    {
      LODWORD(v104) = ApplicationKeyOption;
      Callbackb = (PVOID *)&v136;
      v45 = 5583;
LABEL_115:
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        v45,
        (__int64)"LdrpInitializeProcess",
        0,
        "Failed to open %wZ with status 0x%08lx\n",
        Callbackb,
        v104);
      return ApplicationKeyOption;
    }
    v144.Length = 48;
    v144.RootDirectory = LdrpKnownDllDirectoryHandle;
    v144.Attributes = 64;
    v144.ObjectName = (PUNICODE_STRING)&unk_18012CD60;
    *(_OWORD *)&v144.SecurityDescriptor = 0LL;
    v46 = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &v144);
    ApplicationKeyOption = v46;
    if ( v46 < 0 )
    {
      LODWORD(v104) = v46;
      Callbackb = (PVOID *)&unk_18012CD60;
      v45 = 5606;
      goto LABEL_115;
    }
    while ( 1 )
    {
      v48 = (wchar_t *)RtlAllocateHeap(v36, 0, v44);
      if ( !v48 )
        return -1073741801;
      LdrpKnownDllPath.Length = 0;
      LdrpKnownDllPath.MaximumLength = v44;
      LdrpKnownDllPath.Buffer = v48;
      v47 = NtQuerySymbolicLinkObject(LinkHandle, &LdrpKnownDllPath, &ReturnedLength);
      ApplicationKeyOption = v47;
      if ( v47 >= 0 )
        break;
      if ( v47 != -1073741789 )
      {
        LODWORD(Callbacka) = v47;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5641,
          (__int64)"LdrpInitializeProcess",
          0,
          "Querying the known DLL directory link object failed with status 0x%08lx\n",
          Callbacka);
        return ApplicationKeyOption;
      }
      RtlFreeHeap(v36, 0, v48);
      v44 = ReturnedLength;
    }
    NtClose(LinkHandle);
    v40 = 0;
  }
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = DestinationString;
  }
  else
  {
    v49 = *(__m128i *)(v39 + 56);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v39 + 56);
    v50 = (wchar_t *)_mm_srli_si128(v49, 8).m128i_u64[0];
    UnicodeString.Buffer = v50;
    if ( !v50 || !UnicodeString.Length || !*v50 )
    {
      v51 = (wchar_t *)RtlAllocateHeap(v36, 0, 8uLL);
      UnicodeString.Buffer = v51;
      if ( !v51 )
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5688,
          (__int64)"LdrpInitializeProcess",
          0,
          "Allocating a buffer to hold the current working directory failed\n");
        return -1073741801;
      }
      v116 = 0;
      v52 = RtlGetNtSystemRoot();
      *(_DWORD *)v51 = *(_DWORD *)v52;
      v51[2] = v52[2];
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  Length = Destination.Length;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    v40 = LdrpIncludeAlternateForwarders();
    Length = 2 * v54 + 22;
    if ( v40 )
      Length = v54 + 2 * v54 + 52;
  }
  v55 = Length;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v55 = Length + 2 * (DestinationString.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v39 + 80) = 0;
  }
  v113.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v55);
  if ( !v113.Buffer )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5779,
      (__int64)"LdrpInitializeProcess",
      0,
      "Failed to allocate the system dirs string!\n");
    return -1073741801;
  }
  v113.Length = 0;
  v113.MaximumLength = v55;
  RtlAppendUnicodeStringToString(&v113, &Destination);
  v56 = v113.Length;
  v113.Buffer[((unsigned __int64)v113.Length >> 1) - 1] = 59;
  RtlpSystem32Dirs = (__int128)v113;
  LdrpSystem32 = v113;
  LOWORD(v56) = v56 - 2;
  LdrpSystem32.Length = v56;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    if ( v40 )
    {
      RtlAppendUnicodeStringToString(&v113, &Destination);
      RtlAppendUnicodeToString(&v113, L"forwarders\\alt;");
    }
    RtlAppendUnicodeStringToString(&v113, &Destination);
    RtlAppendUnicodeToString(&v113, L"forwarders;");
  }
  if ( v55 > Length )
  {
    RtlAppendUnicodeStringToString(&v113, &DestinationString);
    RtlAppendUnicodeToString(&v113, L"\\system;");
    RtlAppendUnicodeStringToString(&v113, &DestinationString);
    RtlAppendUnicodeToString(&v113, L";");
    RtlpSystemDirs = v113;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType((_UNICODE_STRING *)&v124, v56);
  result = LdrpInitializeNtdllDataTableEntry(DllHandle, &LdrpNtDllDataTableEntry, 0LL, 0LL, &Destination);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  v57 = 0LL;
  v58 = (wchar_t *)(v124.m128i_i64[1] + v124.m128i_u16[0]);
  v59 = v58;
  if ( v58 && (unsigned __int64)v58 > v124.m128i_i64[1] )
  {
    while ( 1 )
    {
      v60 = v59--;
      if ( *v59 == 92 )
        break;
      if ( (unsigned __int64)v59 <= v124.m128i_i64[1] )
        goto LABEL_157;
    }
    v57 = (__int64)v60;
  }
LABEL_157:
  if ( v57 )
  {
    v61 = (_WORD)v58 - v57;
    v130.m128i_i16[0] = v61;
    if ( v124.m128i_u16[1] - (unsigned __int64)v124.m128i_u16[0] >= 2 )
      v61 += 2;
    v130.m128i_i16[1] = v61;
    v130.m128i_i64[1] = v57;
  }
  else
  {
    v130 = v124;
  }
  v62 = LdrpNtdllHotPatchContext;
  if ( *(_WORD *)LdrpNtdllHotPatchContext )
  {
    LdrpLogEtwHotPatchStatus(
      (unsigned __int16 *)&v130,
      LdrpNtDllDataTableEntry,
      (unsigned __int16 *)LdrpNtdllHotPatchContext,
      *(_DWORD *)(LdrpNtdllHotPatchContext + 544),
      0);
    v62 = LdrpNtdllHotPatchContext;
  }
  if ( *(int *)(v62 + 544) < 0 )
    __fastfail(0x45u);
  v132 = 0LL;
  v63 = *(void **)(v62 + 536);
  if ( v63 )
  {
    result = LdrpInitializeNtdllDataTableEntry(v63, &v132, LdrpNtDllDataTableEntry, (const UNICODE_STRING *)v62, 0LL);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
  }
  RtlInitializeHistoryTable();
  v64 = (_QWORD *)(LdrpNtDllDataTableEntry + 32);
  v65 = qword_18017A170;
  if ( *(__int64 **)(qword_18017A170 + 8) != &qword_18017A170 )
    goto LABEL_293;
  *v64 = qword_18017A170;
  v64[1] = &qword_18017A170;
  *(_QWORD *)(v65 + 8) = v64;
  qword_18017A170 = (__int64)v64;
  if ( !v132 )
    goto LABEL_171;
  v66 = (_QWORD *)(v132 + 32);
  if ( (__int64 *)v64[1] != &qword_18017A170 )
LABEL_293:
    __fastfail(3u);
  *v66 = v64;
  v66[1] = &qword_18017A170;
  v64[1] = v66;
  qword_18017A170 = (__int64)v66;
LABEL_171:
  inited = LdrpInitParallelLoadingSupport();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    LODWORD(Callbacka) = inited;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6016,
      (__int64)"LdrpInitializeProcess",
      0,
      "Failed to initialize Parallel loader, st = 0x%x\n",
      Callbacka);
    return ApplicationKeyOption;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, (const WCHAR **)Path);
  memset(v152, 0, 0xC8uLL);
  *(_QWORD *)&v152[1] = Path;
  LODWORD(v152[2]) = 512;
  v152[0] = v124;
  *((_QWORD *)&v152[2] + 1) = &ApplicationKeyOption;
  ModuleEntry = LdrpAllocateModuleEntry((__int64)v152);
  if ( !ModuleEntry )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6037,
      (__int64)"LdrpInitializeProcess",
      0,
      "Allocating a data table entry for the executable failed\n");
    return -1073741801;
  }
  LdrpImageEntry = (__int64)ModuleEntry;
  v69 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v69;
  }
  while ( v69 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v70 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = v124;
  v71 = *(_DWORD *)(v70 + 104) | 4;
  *(_DWORD *)(v70 + 104) = v71;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x10) != 0 )
  {
    v71 |= 1u;
    *(_DWORD *)(v70 + 104) = v71;
  }
  v72 = v110;
  if ( UseCOR )
  {
    v73 = v71 | 0x400000;
    *(_DWORD *)(v70 + 104) = v73;
    if ( v72 )
      *(_DWORD *)(v70 + 104) = v73 | 0x1000000;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(v70 + 248) = 0LL;
  *(__m128i *)(v70 + 88) = v130;
  v74 = *(void **)(ProcessEnvironmentBlock + 16);
  v75 = v74;
  v76 = OutHeaders;
  if ( (void *)OutHeaders->OptionalHeader.ImageBase != v74 && !v72 && !UseWOW64 )
  {
    result = LdrpProtectAndRelocateImage(v74);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    v75 = *(void **)(ProcessEnvironmentBlock + 16);
    v70 = LdrpImageEntry;
  }
  *(_QWORD *)(v70 + 48) = v75;
  LdrpInsertDataTableEntry(v70);
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrinit.c",
    6124,
    (__int64)"LdrpInitializeProcess",
    2u,
    "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
    LdrpImageEntry + 88,
    LdrpImageEntry + 72,
    &UnicodeString,
    &LdrpAppPackagesPath);
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpImageEntry, v76);
  result = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v77 = RtlpInitCurrentDir((__int64)&UnicodeString);
  ApplicationKeyOption = v77;
  if ( v77 < 0 )
  {
    LODWORD(v105) = v77;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6161,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
      &UnicodeString,
      v105);
  }
  if ( !v116 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v78 = LdrpAllocateModuleEntry(0LL);
    v79 = (__int64)v78;
    if ( !v78 )
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6184,
        (__int64)"LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the application verifier DLL failed\n");
      return -1073741801;
    }
    *(_DWORD *)(*((_QWORD *)v78 + 19) + 24LL) = -1;
    *(_WORD *)(**((_QWORD **)v78 + 19) - 52LL) = -1;
    v80 = v139;
    *((_DWORD *)v78 + 26) |= *(_DWORD *)(v139 + 104);
    *((_QWORD *)v78 + 31) = *(_QWORD *)(v80 + 248);
    *((_WORD *)v78 + 55) = 0;
    *(_OWORD *)(v78 + 72) = *(_OWORD *)(v80 + 72);
    *(_OWORD *)(v78 + 88) = *(_OWORD *)(v80 + 88);
    *((_DWORD *)v78 + 32) = *(_DWORD *)(v80 + 128);
    *((_DWORD *)v78 + 72) = *(_DWORD *)(v80 + 288);
    *((_QWORD *)v78 + 6) = *(_QWORD *)(v80 + 48);
    LdrpInsertDataTableEntry((__int64)v78);
    LdrpLogDllState(*(_QWORD *)(v79 + 48), v79 + 72, 0x14A5u);
    result = RtlImageNtHeaderEx(3u, *(PVOID *)(v79 + 48), 0LL, (PIMAGE_NT_HEADERS *)&v140);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    LdrpInsertModuleToIndex(v79, v140);
    result = LdrpProcessMappedModule(v79, 0, 1);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    *(_QWORD *)(v79 + 56) = *(_QWORD *)(v80 + 56);
    LdrpLogDllState(*(_QWORD *)(v79 + 48), v79 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v79 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
    {
      result = AVrfInitializeVerifier(0, 0, 0, 1, (__int64)DllHandle, 0LL);
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
      if ( (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v79 + 152) + 56LL) = 9;
        result = ApplicationKeyOption;
      }
    }
    else
    {
      v109[0] = 0;
      result = LdrpInitializeGraphRecurse(*(__int64 **)(v79 + 152), 0LL, v109);
      ApplicationKeyOption = result;
    }
    if ( result < 0 )
      return result;
  }
  LdrpDropLastInProgressCount();
  if ( !UseWOW64 )
  {
    ProcessInformation = 0LL;
    if ( UseCOR )
    {
      result = LdrpCorInitialize((PVOID *)&ProcessInformation);
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
      v81 = v110;
      if ( (_BYTE)v110 )
      {
        result = LdrpCorValidateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
        ApplicationKeyOption = result;
        if ( result < 0 )
          return result;
      }
      if ( (v127->SameTebFlags & 0x400) != 0 )
        *(_QWORD *)(v128 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
    }
    else
    {
      v81 = v110;
    }
    v82 = LdrpInitializeTls();
    ApplicationKeyOption = v82;
    if ( v82 < 0 )
    {
      LODWORD(Callbackc) = v82;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6423,
        (__int64)"LdrpInitializeProcess",
        0,
        "Initializing TLS slots failed with status 0x%08lx\n",
        Callbackc);
      return ApplicationKeyOption;
    }
    if ( ProcessInformation )
    {
      v108 = 0;
      v83 = LdrpInitializeGraphRecurse(ProcessInformation[19], 0LL, &v108);
      ApplicationKeyOption = v83;
      if ( v83 < 0 )
      {
        LODWORD(Callbackc) = v83;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6442,
          (__int64)"LdrpInitializeProcess",
          0,
          "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
          Callbackc);
        return ApplicationKeyOption;
      }
    }
    v84 = LdrpInitializeImportRedirection();
    ApplicationKeyOption = v84;
    if ( v84 < 0 )
    {
      LODWORD(Callbackc) = v84;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6458,
        (__int64)"LdrpInitializeProcess",
        0,
        "Loading of import redirection module failed with status 0x%08x\n",
        Callbackc);
      return ApplicationKeyOption;
    }
    ProcessInformation = 0LL;
    if ( (unsigned __int16)(v76->OptionalHeader.Subsystem - 2) <= 1u )
    {
      v85 = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernel32DllName, &DllHandle);
      ApplicationKeyOption = v85;
      if ( v85 < 0 )
      {
        if ( v85 != -1073741515 )
        {
          LODWORD(v105) = v85;
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            6616,
            (__int64)"LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernel32DllName,
            v105);
          return ApplicationKeyOption;
        }
        v89 = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernelbaseDllName, &DllHandle);
        ApplicationKeyOption = v89;
        if ( v89 < 0 )
        {
          LODWORD(v105) = v89;
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            6589,
            (__int64)"LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernelbaseDllName,
            v105);
          return ApplicationKeyOption;
        }
        v90 = LdrpCodeAuthzInitialize();
        ApplicationKeyOption = v90;
        if ( (int)(v90 + 0x80000000) >= 0 && v90 != -1073741515 )
        {
          LODWORD(Callbackc) = v90;
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            6605,
            (__int64)"LdrpInitializeProcess",
            0,
            "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
            Callbackc);
          return ApplicationKeyOption;
        }
        ApplicationKeyOption = 0;
        v88 = DllHandle;
      }
      else
      {
        ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                      DllHandle,
                                      (PANSI_STRING)&stru_18012CD70,
                                      0,
                                      &Kernel32ThreadInitThunkFunction,
                                      0,
                                      retaddr);
        ApplicationKeyOption = ProcedureAddressForCaller;
        if ( ProcedureAddressForCaller < 0 )
        {
          LODWORD(v106) = ProcedureAddressForCaller;
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            6503,
            (__int64)"LdrpInitializeProcess",
            0,
            "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &stru_18012CD70,
            &LdrpKernel32DllName,
            v106);
          return ApplicationKeyOption;
        }
        LdrGetProcedureAddressForCaller(
          DllHandle,
          (PANSI_STRING)&stru_18012CD80,
          0,
          (PVOID *)&ProcessInformation,
          0,
          retaddr);
        result = LdrpSnapKernelBaseExtensions();
        ApplicationKeyOption = result;
        if ( result < 0 )
          return result;
        result = LdrpCodeAuthzInitialize();
        ApplicationKeyOption = result;
        if ( result < 0 )
          return result;
        LoadedDll = LdrpFindLoadedDll(&LdrpKernelbaseDllName.Length, 0, &v141);
        ApplicationKeyOption = LoadedDll;
        if ( LoadedDll < 0 )
        {
          LODWORD(v105) = LoadedDll;
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            6571,
            (__int64)"LdrpInitializeProcess",
            0,
            "Finding \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernelbaseDllName,
            v105);
          return ApplicationKeyOption;
        }
        v88 = (PVOID)*((_QWORD *)v141 + 6);
      }
      v91 = LdrGetProcedureAddressForCaller(v88, (PANSI_STRING)&stru_18012CDA0, 0, (PVOID *)&v142, 0, retaddr);
      ApplicationKeyOption = v91;
      if ( v91 < 0 )
      {
        LODWORD(Callbackc) = v91;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6634,
          (__int64)"LdrpInitializeProcess",
          0,
          "Finding KernelbasePostInit failed with status 0x%08lx\n",
          Callbackc);
        return ApplicationKeyOption;
      }
      v92 = v142();
      ApplicationKeyOption = v92;
      if ( v92 < 0 )
      {
        LODWORD(Callbackc) = v92;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6642,
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
    v93 = v133;
    if ( v133 && *(_DWORD *)(v133 + 528) )
    {
      *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
      LdrpInitShimEngine(v93);
    }
    v94 = RtlpForceCSDebugInfoCreation;
    if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
      v94 = 1;
    RtlpForceCSDebugInfoCreation = v94;
    if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
    {
      *(_DWORD *)(v134 + 1036) = 1;
      v95 = 1;
    }
    else
    {
      v95 = *(_DWORD *)(v134 + 1036);
    }
    LdrpEnableParallelLoading(v95);
    LdrInitState = 1;
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
    **((_DWORD **)&v152[2] + 1) = 0;
    if ( v81 )
    {
      v96 = LdrpCorProcessImports(LdrpImageEntry);
    }
    else
    {
      LdrpThreadTokenSetMainThreadToken();
      LODWORD(v152[2]) |= 1u;
      LdrpMapAndSnapDependency((__int64)v152);
      LdrpDrainWorkQueue(1);
      if ( LdrpMainThreadToken )
        LdrpThreadTokenUnsetMainThreadToken();
      v96 = ApplicationKeyOption;
      if ( ApplicationKeyOption < 0 )
        goto LABEL_289;
      v96 = LdrpPrepareModuleForExecution(LdrpImageEntry, *((__int64 *)&v152[2] + 1));
    }
    ApplicationKeyOption = v96;
    if ( v96 >= 0 )
    {
      LdrInitState = 2;
      result = LdrpInitializePatchData();
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
      if ( LdrpIsHotPatchingEnabled
        && (PatchImage = LdrpLoadPatchImage(*(const void **)(LdrpImageEntry + 48)),
            ApplicationKeyOption = PatchImage,
            PatchImage < 0) )
      {
        LODWORD(v105) = PatchImage;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6891,
          (__int64)"LdrpInitializeProcess",
          0,
          "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
          LdrpImageEntry + 88,
          v105);
      }
      else
      {
        if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
          LdrpDoDebuggerBreak();
        LdrpDropLastInProgressCount();
        if ( Kernel32ThreadInitThunkFunction )
        {
          result = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))Kernel32ThreadInitThunkFunction)(1LL, 0LL, 0LL);
          ApplicationKeyOption = result;
          if ( result < 0 )
            return result;
          result = LdrpInitializePerUserWindowsDirectory((__int64 (__fastcall *)(_BYTE *, __int64))ProcessInformation);
          ApplicationKeyOption = result;
          if ( result < 0 )
            return result;
        }
        LdrpProcessInitContextRecord = v128;
        LdrpDrainWorkQueue(0);
        LdrpAcquireLoaderLock();
        v108 = 0;
        ApplicationKeyOption = LdrpInitializeGraphRecurse(
                                 *(__int64 **)(LdrpImageEntry + 152),
                                 *((__int64 *)&v152[2] + 1),
                                 &v108);
        LdrpReleaseLoaderLock(v98, 9, ApplicationKeyOption);
        LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *((__int64 *)&v152[2] + 1));
        LdrpDropLastInProgressCount();
        LdrpProcessInitContextRecord = 0LL;
        if ( v154 )
          RtlReleasePath(Path[0]);
        if ( ApplicationKeyOption >= 0 )
        {
          LdrpInitializeSmtDelayedSleep();
          if ( *(_WORD *)(LdrpImageEntry + 110) )
          {
            v146 = 72LL;
            v147 = 1;
            v148 = 0LL;
            v149 = 0LL;
            v150 = 0LL;
            v151 = 0LL;
            RtlActivateActivationContextUnsafeFast((__int64)&v146, *(_QWORD *)(LdrpImageEntry + 136));
            LdrpCallTlsInitializers(1u, LdrpImageEntry);
            RtlDeactivateActivationContextUnsafeFast((__int64)&v146);
          }
          if ( g_ShimsEnabled
            && !((unsigned __int8 (__fastcall *)(unsigned __int16 *, __int64))(__ROR8__(
                                                                                 g_pfnSE_InstallAfterInit,
                                                                                 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
                  &v120,
                  v93) )
          {
            g_ShimsEnabled = 0;
            LdrUnloadDll(g_pShimEngineModule);
            g_pShimEngineModule = 0LL;
          }
          v99 = *(void (**)(void))(ProcessEnvironmentBlock + 560);
          if ( v99 )
            v99();
          goto LABEL_283;
        }
        LODWORD(Callbackc) = ApplicationKeyOption;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          7022,
          (__int64)"LdrpInitializeProcess",
          0,
          "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          Callbackc);
      }
      return ApplicationKeyOption;
    }
LABEL_289:
    LODWORD(Callbackc) = v96;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6859,
      (__int64)"LdrpInitializeProcess",
      0,
      "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
      Callbackc);
    return ApplicationKeyOption;
  }
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
  if ( v117 )
  {
    NtClose(v117);
    v117 = 0LL;
  }
  result = LdrpLoadWow64(&Destination);
  ApplicationKeyOption = result;
  if ( result >= 0 )
  {
    if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
      LdrpDoDebuggerBreak();
    LdrInitState = 3;
    _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
    g_LdrpWow64LdrpInitialize(v128);
LABEL_283:
    if ( Handle )
      NtClose(Handle);
    if ( v117 )
      NtClose(v117);
    return 0;
  }
  return result;
}
