/*
 * XREFs of LdrpInitializeProcess @ 0x1800DDBD0
 * Callers:
 *     _LdrpInitialize @ 0x1800745DC (_LdrpInitialize.c)
 * Callees:
 *     LdrpInitializeTls @ 0x1800042A0 (LdrpInitializeTls.c)
 *     RtlSetBits @ 0x180005010 (RtlSetBits.c)
 *     LdrpCodeAuthzInitialize @ 0x180009B8C (LdrpCodeAuthzInitialize.c)
 *     RtlAppendUnicodeToString @ 0x18000B3D0 (RtlAppendUnicodeToString.c)
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     LdrpFindLoadedDll @ 0x180016164 (LdrpFindLoadedDll.c)
 *     RtlGetNtSystemRoot @ 0x180018810 (RtlGetNtSystemRoot.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180018890 (LdrpSnapKernelBaseExtensions.c)
 *     RtlAppendUnicodeStringToString @ 0x1800192F0 (RtlAppendUnicodeStringToString.c)
 *     LdrpLogDllState @ 0x180019AB4 (LdrpLogDllState.c)
 *     RtlInitUnicodeStringEx @ 0x18001ACC0 (RtlInitUnicodeStringEx.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180021AD0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrGetProcedureAddressForCaller @ 0x180021FB0 (LdrGetProcedureAddressForCaller.c)
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     LdrpMapAndSnapDependency @ 0x180024A58 (LdrpMapAndSnapDependency.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026AE0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180028AE0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallTlsInitializers @ 0x1800297D4 (LdrpCallTlsInitializers.c)
 *     LdrpDrainWorkQueue @ 0x18002A48C (LdrpDrainWorkQueue.c)
 *     LdrLoadDll @ 0x18002A6D0 (LdrLoadDll.c)
 *     LdrpInitializeDllPath @ 0x18002B064 (LdrpInitializeDllPath.c)
 *     LdrpProcessMappedModule @ 0x18002B3C4 (LdrpProcessMappedModule.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18002B858 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpInsertDataTableEntry @ 0x18002CF08 (LdrpInsertDataTableEntry.c)
 *     LdrUnloadDll @ 0x18002D3E0 (LdrUnloadDll.c)
 *     LdrpPrepareModuleForExecution @ 0x18002DAD8 (LdrpPrepareModuleForExecution.c)
 *     LdrpAllocateModuleEntry @ 0x18002E490 (LdrpAllocateModuleEntry.c)
 *     SbObtainTraceHandle @ 0x18002F38C (SbObtainTraceHandle.c)
 *     EtwEventRegister @ 0x180031A30 (EtwEventRegister.c)
 *     RtlReleasePath @ 0x180032D60 (RtlReleasePath.c)
 *     LdrProtectMrdata @ 0x180032E40 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     LdrpEnableParallelLoading @ 0x18004B644 (LdrpEnableParallelLoading.c)
 *     LdrpReleaseLoaderLock @ 0x180050FC4 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x180051228 (LdrpAcquireLoaderLock.c)
 *     LdrpDropLastInProgressCount @ 0x180052174 (LdrpDropLastInProgressCount.c)
 *     RtlpInitEnvironmentBlock @ 0x18005860C (RtlpInitEnvironmentBlock.c)
 *     RtlInitializeCriticalSection @ 0x18005C7C0 (RtlInitializeCriticalSection.c)
 *     LdrpInitParallelLoadingSupport @ 0x18005C92C (LdrpInitParallelLoadingSupport.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005CDF0 (RtlInitializeCriticalSectionEx.c)
 *     LdrpFreeLoadContextOfNode @ 0x180067B5C (LdrpFreeLoadContextOfNode.c)
 *     LdrpInitializeGraphRecurse @ 0x18006D42C (LdrpInitializeGraphRecurse.c)
 *     RtlInitializeSListHead @ 0x180070F90 (RtlInitializeSListHead.c)
 *     RtlpInitializeThreadActivationContextStack @ 0x180073F18 (RtlpInitializeThreadActivationContextStack.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x180077CAC (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x180077D08 (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpInitializePolicy @ 0x180078D80 (LdrpInitializePolicy.c)
 *     LdrpInitShimEngine @ 0x1800797C8 (LdrpInitShimEngine.c)
 *     RtlpInitCurrentDir @ 0x18007BF24 (RtlpInitCurrentDir.c)
 *     RtlInitializeHistoryTable @ 0x18007C1F4 (RtlInitializeHistoryTable.c)
 *     RtlSetHeapInformation @ 0x18007D200 (RtlSetHeapInformation.c)
 *     RtlQueryApplicationKeyOption @ 0x18007DDEC (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileExecutionOptions @ 0x18007DED0 (RtlQueryImageFileExecutionOptions.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007EE30 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInsertModuleToIndex @ 0x18007EF9C (LdrpInsertModuleToIndex.c)
 *     LdrpInitializeSmtDelayedSleep @ 0x18007F7A4 (LdrpInitializeSmtDelayedSleep.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18007FC8C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     TpInitializePackage @ 0x18007FF9C (TpInitializePackage.c)
 *     RtlCreateTagHeap @ 0x180080060 (RtlCreateTagHeap.c)
 *     RtlpInitParameterBlock @ 0x1800805C0 (RtlpInitParameterBlock.c)
 *     LdrpInitializePatchData @ 0x180083B24 (LdrpInitializePatchData.c)
 *     LdrpInitializeImportRedirection @ 0x180084FE4 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085A44 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpLoadWow64 @ 0x180086520 (LdrpLoadWow64.c)
 *     RtlNormalizeProcessParams @ 0x180087C80 (RtlNormalizeProcessParams.c)
 *     LdrpCorInitialize @ 0x18008E254 (LdrpCorInitialize.c)
 *     LdrpCorProcessImports @ 0x18008E944 (LdrpCorProcessImports.c)
 *     LdrpCorValidateImage @ 0x18008EBD8 (LdrpCorValidateImage.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtQueryInformationProcess @ 0x1800A11D0 (NtQueryInformationProcess.c)
 *     NtQuerySystemInformation @ 0x1800A1570 (NtQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x1800A19B0 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1800A3560 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1800A3BC0 (NtQuerySymbolicLinkObject.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     InterlockedPushListSList @ 0x1800A4CF0 (InterlockedPushListSList.c)
 *     LdrpCaptureCriticalThunks @ 0x1800AF864 (LdrpCaptureCriticalThunks.c)
 *     RtlInitializeHeapManager @ 0x1800B0588 (RtlInitializeHeapManager.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800B0A90 (RtlpInitializeNonVolatileFlush.c)
 *     LdrpLoadPatchImage @ 0x1800D9DC0 (LdrpLoadPatchImage.c)
 *     LdrpCorFixupImage @ 0x1800DA178 (LdrpCorFixupImage.c)
 *     LdrpLogEtwHotPatchStatus @ 0x1800DB554 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpProtectAndRelocateImage @ 0x1800DC6A4 (LdrpProtectAndRelocateImage.c)
 *     LdrpCheckAppDirType @ 0x1800DCA20 (LdrpCheckAppDirType.c)
 *     LdrpDoDebuggerBreak @ 0x1800DCC44 (LdrpDoDebuggerBreak.c)
 *     LdrpIncludeAlternateForwarders @ 0x1800DCE78 (LdrpIncludeAlternateForwarders.c)
 *     LdrpInitializeExceptionTable @ 0x1800DD320 (LdrpInitializeExceptionTable.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD3AC (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeNlsInfo @ 0x1800DDB38 (LdrpInitializeNlsInfo.c)
 *     LdrpInitializeProcessHeap @ 0x1800DFB48 (LdrpInitializeProcessHeap.c)
 *     AVrfInitializeVerifier @ 0x1800E5114 (AVrfInitializeVerifier.c)
 *     RtlInitializeExceptionLog @ 0x18010EAB8 (RtlInitializeExceptionLog.c)
 *     RtlControlStackTraceDataBase @ 0x18010F278 (RtlControlStackTraceDataBase.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 *     TpSetDefaultPoolCpuSets @ 0x180126AE8 (TpSetDefaultPoolCpuSets.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpInitializeProcess(__int64 a1, void *a2)
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
  __int64 v13; // rcx
  _WORD *v14; // rdx
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
  int v29; // eax
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
  __int64 v40; // r13
  bool v41; // r12
  const WCHAR *NtSystemRoot; // rax
  unsigned __int16 v43; // r14
  wchar_t *Heap; // rax
  SIZE_T v45; // r14
  int v46; // edx
  NTSTATUS v47; // eax
  NTSTATUS v48; // eax
  wchar_t *v49; // r12
  __m128i v50; // xmm0
  wchar_t *v51; // xmm0_8
  wchar_t *v52; // r14
  PWSTR v53; // rax
  unsigned __int64 Length; // r14
  __int64 v55; // rdx
  SIZE_T v56; // r15
  __int64 v57; // rdx
  __int64 v58; // r8
  wchar_t *v59; // rdx
  wchar_t *v60; // rax
  wchar_t *v61; // r9
  __int16 v62; // dx
  __int64 v63; // rax
  void *v64; // rcx
  _QWORD *v65; // rax
  __int64 v66; // rcx
  _QWORD *v67; // rcx
  int v68; // eax
  char *ModuleEntry; // rax
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  int v73; // eax
  char v74; // dl
  int v75; // eax
  PIMAGE_NT_HEADERS v76; // r13
  int v77; // eax
  char *v78; // rax
  __int64 v79; // r14
  __int64 v80; // r15
  char v81; // r15
  NTSTATUS v82; // eax
  int v83; // eax
  int v84; // eax
  NTSTATUS v85; // eax
  NTSTATUS ProcedureAddressForCaller; // eax
  int LoadedDll; // eax
  PVOID v88; // rcx
  NTSTATUS v89; // eax
  unsigned int v90; // eax
  NTSTATUS v91; // eax
  int v92; // eax
  __int64 v93; // r14
  char v94; // al
  __int64 v95; // rax
  unsigned int v96; // eax
  int v97; // ecx
  int PatchImage; // eax
  __int64 v99; // rcx
  void (*v100)(void); // rax
  PVOID *Callback; // [rsp+28h] [rbp-3A0h]
  PVOID *Callbacka; // [rsp+28h] [rbp-3A0h]
  PVOID *Callbackb; // [rsp+28h] [rbp-3A0h]
  PVOID *Callbackc; // [rsp+28h] [rbp-3A0h]
  __int64 v105; // [rsp+30h] [rbp-398h]
  __int64 v106; // [rsp+30h] [rbp-398h]
  __int64 v107; // [rsp+38h] [rbp-390h]
  unsigned int ApplicationKeyOption; // [rsp+50h] [rbp-378h] BYREF
  char v109; // [rsp+54h] [rbp-374h] BYREF
  _BYTE v110[3]; // [rsp+55h] [rbp-373h] BYREF
  int v111; // [rsp+58h] [rbp-370h]
  PVOID DllHandle; // [rsp+60h] [rbp-368h] BYREF
  __int64 **ProcessInformation; // [rsp+68h] [rbp-360h] BYREF
  _UNICODE_STRING v114; // [rsp+70h] [rbp-358h] BYREF
  int v115; // [rsp+80h] [rbp-348h] BYREF
  int v116; // [rsp+84h] [rbp-344h] BYREF
  int v117; // [rsp+88h] [rbp-340h]
  HANDLE v118; // [rsp+90h] [rbp-338h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-328h] BYREF
  _UNICODE_STRING Destination; // [rsp+B0h] [rbp-318h] BYREF
  unsigned __int16 v121; // [rsp+C0h] [rbp-308h] BYREF
  __int16 v122; // [rsp+C2h] [rbp-306h]
  unsigned __int64 v123; // [rsp+C8h] [rbp-300h]
  HANDLE Handle; // [rsp+D0h] [rbp-2F8h] BYREF
  __m128i ImagePathName; // [rsp+E0h] [rbp-2E8h] BYREF
  ULONG ReturnedLength; // [rsp+F0h] [rbp-2D8h] BYREF
  __int64 v127; // [rsp+F8h] [rbp-2D0h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+100h] [rbp-2C8h] BYREF
  struct _TEB *v129; // [rsp+108h] [rbp-2C0h]
  __int64 v130; // [rsp+110h] [rbp-2B8h]
  _UNICODE_STRING DestinationString; // [rsp+120h] [rbp-2A8h] BYREF
  __m128i v132; // [rsp+130h] [rbp-298h] BYREF
  __int64 v133; // [rsp+140h] [rbp-288h]
  __int64 v134; // [rsp+148h] [rbp-280h]
  __int64 v135; // [rsp+150h] [rbp-278h] BYREF
  HANDLE LinkHandle; // [rsp+158h] [rbp-270h] BYREF
  int v137; // [rsp+160h] [rbp-268h] BYREF
  const WCHAR *v138; // [rsp+168h] [rbp-260h]
  __int64 SystemInformation; // [rsp+170h] [rbp-258h] BYREF
  __int64 v140; // [rsp+178h] [rbp-250h] BYREF
  PIMAGE_NT_HEADERS v141; // [rsp+180h] [rbp-248h] BYREF
  _QWORD *v142; // [rsp+188h] [rbp-240h] BYREF
  PVOID ProcedureAddress; // [rsp+190h] [rbp-238h] BYREF
  unsigned int v144; // [rsp+198h] [rbp-230h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1A0h] [rbp-228h] BYREF
  _QWORD v146[4]; // [rsp+1D0h] [rbp-1F8h] BYREF
  __int64 v147; // [rsp+1F0h] [rbp-1D8h] BYREF
  int v148; // [rsp+1F8h] [rbp-1D0h]
  __int128 v149; // [rsp+200h] [rbp-1C8h]
  __int128 v150; // [rsp+210h] [rbp-1B8h]
  __int128 v151; // [rsp+220h] [rbp-1A8h]
  __int64 v152; // [rsp+230h] [rbp-198h]
  __m128i v153; // [rsp+240h] [rbp-188h] BYREF
  PWSTR *v154; // [rsp+250h] [rbp-178h]
  int v155; // [rsp+260h] [rbp-168h]
  unsigned int *p_ApplicationKeyOption; // [rsp+268h] [rbp-160h]
  PWSTR Path[15]; // [rsp+310h] [rbp-B8h] BYREF
  char v158; // [rsp+38Ch] [rbp-3Ch]
  PVOID *retaddr; // [rsp+3C8h] [rbp+0h]

  DllHandle = a2;
  v130 = a1;
  v137 = 1441812;
  v138 = L"\\KnownDlls";
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
  v129 = v7;
  ProcessEnvironmentBlock = (__int64)v7->ProcessEnvironmentBlock;
  PebLdr = 88;
  byte_180187444 = 1;
  qword_180187458 = (__int64)&qword_180187450;
  qword_180187450 = (__int64)&qword_180187450;
  qword_180187468 = (__int64)&qword_180187460;
  qword_180187460 = (__int64)&qword_180187460;
  qword_180187478 = (__int64)&qword_180187470;
  qword_180187470 = (__int64)&qword_180187470;
  byte_180187488 = 0;
  qword_180187490 = 0LL;
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
  memset_thunk_772440563353939046(&RtlpFcProcessManager, 0, 0xE8uLL);
  memset_thunk_772440563353939046(&unk_180185E40, 0, 0xA0uLL);
  memset_thunk_772440563353939046(qword_180185E28, 0, 0xA8uLL);
  RunOnce.Value = 0LL;
  stru_180185EF0.0 = 0LL;
  qword_180185F00 = (__int64)&qword_180185EF8;
  qword_180185EF8 = (__int64)&qword_180185EF8;
  RtlpInitializeNonVolatileFlush();
  v13 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v14 = (_WORD *)(*(_QWORD *)(v13 + 104) + v13);
  if ( (*(_BYTE *)(v13 + 8) & 1) != 0 )
    v14 = *(_WORD **)(v13 + 104);
  v123 = (unsigned __int64)v14;
  v121 = *(_WORD *)(v13 + 96);
  v15 = v121;
  v122 = v121 + 2;
  if ( v121 >= 8u && *v14 == 92 && v14[1] == 63 && v14[2] == 63 && v14[3] == 92 )
  {
    v121 -= 8;
    v122 = v15 - 6;
    v123 = (unsigned __int64)(v14 + 4);
    *(_WORD *)(v13 + 96) -= 8;
    *(_WORD *)(v13 + 98) -= 8;
    *(_QWORD *)(v13 + 104) += 8LL;
  }
  v117 = 1;
  UseCOR = 0;
  LOBYTE(v6) = 0;
  v111 = v6;
  v116 = 0;
  RtlImageNtHeaderEx(3u, *(PVOID *)(ProcessEnvironmentBlock + 16), 0LL, &OutHeaders);
  v16 = OutHeaders;
  LdrpAppHeaders = (__int64)OutHeaders;
  v17 = 32LL;
  if ( LdrpIsSecureProcess && (OutHeaders->FileHeader.Characteristics & 0x20) == 0 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4908,
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
  v22 = LdrpInitializeExecutionOptions(&v121, ProcessEnvironmentBlock, (__int64)a2, &Handle, &v118, (__int64)&v140);
  ApplicationKeyOption = v22;
  if ( v22 < 0 )
  {
    LODWORD(Callback) = v7->ClientId.UniqueProcess;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5054,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      Callback,
      v22);
    return ApplicationKeyOption;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrinit.c",
    5101,
    (__int64)"LdrpInitializeProcess",
    2u,
    "Initializing process 0x%p\n",
    v7->ClientId.UniqueProcess);
  v133 = 0LL;
  WowTebOffset = v129->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( v16 )
  {
    if ( v16->OptionalHeader.Magic == 267 && WowTebOffset <= 0 )
    {
      UseCOR = 1;
      LOBYTE(v6) = 1;
      v111 = v6;
      v4 = 1;
      inited = LdrpCorFixupImage(*(void **)(ProcessEnvironmentBlock + 16));
      ApplicationKeyOption = inited;
      if ( inited < 0 )
        return (unsigned int)inited;
    }
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v25 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v144, &v135);
    v26 = v135;
    if ( v25 < 0 )
      v26 = 0LL;
    v135 = v26;
    if ( v26 )
    {
      UseCOR = 1;
      v6 = (unsigned __int8)v6;
      if ( (*(_BYTE *)(v26 + 16) & 1) != 0 )
        v6 = 1;
      v111 = v6;
    }
  }
  LdrpSystemDllBase = (__int64)DllHandle;
  if ( !UseWOW64 )
    v133 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(_QWORD *)(ProcessEnvironmentBlock + 192);
  v27 = RtlNormalizeProcessParams(*(PRTL_USER_PROCESS_PARAMETERS *)(ProcessEnvironmentBlock + 32));
  ImagePathName = (__m128i)v27->ImagePathName;
  if ( UseWOW64 || UseCOR && v4 )
    Config = 0LL;
  else
    Config = LdrImageDirectoryEntryToLoadConfig(*(PVOID *)(ProcessEnvironmentBlock + 16));
  if ( Config )
  {
    if ( *Config < 0x10u )
    {
      v29 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
    }
    else
    {
      v29 = *(_DWORD *)(ProcessEnvironmentBlock + 188) & ~Config[3];
      *(_DWORD *)(ProcessEnvironmentBlock + 188) = v29;
    }
    if ( *Config >= 0x14u )
      *(_DWORD *)(ProcessEnvironmentBlock + 188) = Config[4] | v29;
    if ( *Config >= 0x18u && Config[5] )
      RtlpTimeout = -10000LL * (int)Config[5];
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  v30 = RtlpTimeoutDisable;
  if ( RtlpTimeout < -36000000000LL )
    v30 = 1;
  RtlpTimeoutDisable = v30;
  RtlFailedCriticalDebugAllocations = 0;
  RtlInitializeSListHead(&RtlCriticalSectionDebugSList);
  v31 = &RtlpStaticDebugInfo;
  do
  {
    *v31 = v31 + 6;
    v31 += 6;
  }
  while ( v31 <= qword_1801862E0 );
  *v31 = 0LL;
  InterlockedPushListSList(&RtlCriticalSectionDebugSList, (signed __int64)&RtlpStaticDebugInfo, qword_180186310, 8);
  *(_QWORD *)(ProcessEnvironmentBlock + 120) = &TlsBitMap;
  *(_QWORD *)(ProcessEnvironmentBlock + 568) = &TlsExpansionBitMap;
  memset_thunk_772440563353939046(&RtlpFlsContext, 0, 0x60uLL);
  xmmword_180187ED8 = 0LL;
  xmmword_180187EE8 = 0LL;
  xmmword_180187EF8 = 0LL;
  xmmword_180187F08 = 0LL;
  qword_180187F20 = (__int64)&qword_180187F18;
  qword_180187F18 = (__int64)&qword_180187F18;
  TlsBitMap = 64;
  qword_1801873B8 = ProcessEnvironmentBlock + 128;
  *(_BYTE *)(ProcessEnvironmentBlock + 128) |= 1u;
  TlsExpansionBitMap = 1024;
  qword_180187388 = ProcessEnvironmentBlock + 576;
  if ( UseWOW64 )
    RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || (v32 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v33 = 24;
    v115 = 24;
    if ( LdrpIsSecureProcess )
    {
      v34 = -1073741772;
    }
    else
    {
      LOBYTE(v105) = 0;
      v34 = RtlQueryImageFileExecutionOptions(
              &v121,
              (__int64)L"StackTraceDatabaseSizeInMb",
              4LL,
              (__int64)&v115,
              4,
              0LL);
      v33 = v115;
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
      5349,
      (__int64)"LdrpInitializeProcess",
      2u,
      "Stack trace database size is %Id Mb\n",
      v35 >> 20);
    v146[0] = 0LL;
    v146[1] = 0LL;
    v146[2] = v35;
    RtlControlStackTraceDataBase(0LL, 24LL, v146);
    v32 = LdrpShouldCreateStackTraceDb;
  }
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || v32 )
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
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &FastPebLock;
  inited = RtlInitializeHeapManager((__int64)&v121);
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
      5421,
      (__int64)"LdrpInitializeProcess",
      0,
      "Creating the process heap failed\n");
    return 3221225495LL;
  }
  *(_QWORD *)(ProcessEnvironmentBlock + 48) = v36;
  RtlInitializeCriticalSection(&LdrpEnclaveListLock);
  qword_180187B88 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  RtlpInitializeThreadActivationContextStack((__int64)v129);
  LdrpHeap = v37;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
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
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((char *)&dword_1801814A0);
  EtwEventRegister(&PrivateLoggerNotificationGuid, 0LL, 0LL, &g_hPrivLoggerNotificationProvider);
  EtwEventRegister(&UserDiagnosticGuid, UserDiagnosticProviderCallback, 0LL, &g_hUserDiagnosticProvider);
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((char *)&dword_180181468);
  EtwEventRegister(&WindowsHeapSnapshotProvider, RtlpHpStackTraceEtwCallback, 0LL, &RtlpHpStackTraceProviderHandle);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((char *)&dword_180181430);
  inited = RtlpInitEnvironmentBlock();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  inited = RtlpInitParameterBlock();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  v40 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v134 = v40;
  ImagePathName = *(__m128i *)(v40 + 96);
  v123 = _mm_srli_si128(ImagePathName, 8).m128i_u64[0];
  if ( Handle || v118 )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             v118,
                             Handle,
                             (__int64)L"DebugProcessHeapOnly",
                             4LL,
                             (__int64)&v116,
                             4,
                             v105,
                             0LL);
    v41 = 0;
    if ( (ApplicationKeyOption & 0x80000000) == 0 && dword_180181238 && v116 )
    {
      dword_180181238 = 0;
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
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) == 0 )
  {
    v45 = 48LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v137;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LdrProtectMrdata(0);
    ApplicationKeyOption = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3u, &ObjectAttributes);
    LdrProtectMrdata(1);
    if ( (ApplicationKeyOption & 0x80000000) != 0 )
    {
      LODWORD(v105) = ApplicationKeyOption;
      Callbackb = (PVOID *)&v137;
      v46 = 5693;
LABEL_116:
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        v46,
        (__int64)"LdrpInitializeProcess",
        0,
        "Failed to open %wZ with status 0x%08lx\n",
        Callbackb,
        v105);
      return ApplicationKeyOption;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)dword_180133D90;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v47 = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    ApplicationKeyOption = v47;
    if ( v47 < 0 )
    {
      LODWORD(v105) = v47;
      Callbackb = (PVOID *)dword_180133D90;
      v46 = 5716;
      goto LABEL_116;
    }
    while ( 1 )
    {
      v49 = (wchar_t *)RtlAllocateHeap(v37, 0, v45);
      if ( !v49 )
        return 3221225495LL;
      LdrpKnownDllPath.Length = 0;
      LdrpKnownDllPath.MaximumLength = v45;
      LdrpKnownDllPath.Buffer = v49;
      v48 = NtQuerySymbolicLinkObject(LinkHandle, &LdrpKnownDllPath, &ReturnedLength);
      ApplicationKeyOption = v48;
      if ( v48 >= 0 )
        break;
      if ( v48 != -1073741789 )
      {
        LODWORD(Callbacka) = v48;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5751,
          (__int64)"LdrpInitializeProcess",
          0,
          "Querying the known DLL directory link object failed with status 0x%08lx\n",
          Callbacka);
        return ApplicationKeyOption;
      }
      RtlFreeHeap(v37, 0, v49);
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
    v50 = *(__m128i *)(v40 + 56);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v40 + 56);
    v51 = (wchar_t *)_mm_srli_si128(v50, 8).m128i_u64[0];
    UnicodeString.Buffer = v51;
    if ( !v51 || !UnicodeString.Length || !*v51 )
    {
      v52 = (wchar_t *)RtlAllocateHeap(v37, 0, 8uLL);
      UnicodeString.Buffer = v52;
      if ( !v52 )
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5798,
          (__int64)"LdrpInitializeProcess",
          0,
          "Allocating a buffer to hold the current working directory failed\n");
        return 3221225495LL;
      }
      v117 = 0;
      v53 = RtlGetNtSystemRoot();
      *(_DWORD *)v52 = *(_DWORD *)v53;
      v52[2] = v53[2];
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  Length = Destination.Length;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    v41 = LdrpIncludeAlternateForwarders();
    Length = 2 * v55 + 22;
    if ( v41 )
      Length = v55 + 2 * v55 + 52;
  }
  v56 = Length;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v56 = Length + 2 * (DestinationString.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v40 + 80) = 0;
  }
  v114.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v56);
  if ( !v114.Buffer )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5889,
      (__int64)"LdrpInitializeProcess",
      0,
      "Failed to allocate the system dirs string!\n");
    return 3221225495LL;
  }
  v114.Length = 0;
  v114.MaximumLength = v56;
  RtlAppendUnicodeStringToString(&v114, &Destination);
  v57 = v114.Length;
  v114.Buffer[((unsigned __int64)v114.Length >> 1) - 1] = 59;
  RtlpSystem32Dirs = (__int128)v114;
  LdrpSystem32 = v114;
  LOWORD(v57) = v57 - 2;
  LdrpSystem32.Length = v57;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    if ( v41 )
    {
      RtlAppendUnicodeStringToString(&v114, &Destination);
      RtlAppendUnicodeToString(&v114, L"forwarders\\alt;");
    }
    RtlAppendUnicodeStringToString(&v114, &Destination);
    RtlAppendUnicodeToString(&v114, L"forwarders;");
  }
  if ( v56 > Length )
  {
    RtlAppendUnicodeStringToString(&v114, &DestinationString);
    RtlAppendUnicodeToString(&v114, L"\\system;");
    RtlAppendUnicodeStringToString(&v114, &DestinationString);
    RtlAppendUnicodeToString(&v114, L";");
    RtlpSystemDirs = v114;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType((_UNICODE_STRING *)&ImagePathName, v57);
  inited = LdrpInitializeNtdllDataTableEntry(DllHandle, &LdrpNtDllDataTableEntry, 0LL, 0LL, &Destination);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  v58 = 0LL;
  v59 = (wchar_t *)(ImagePathName.m128i_i64[1] + ImagePathName.m128i_u16[0]);
  v60 = v59;
  if ( v59 && (unsigned __int64)v59 > ImagePathName.m128i_i64[1] )
  {
    while ( 1 )
    {
      v61 = v60--;
      if ( *v60 == 92 )
        break;
      if ( (unsigned __int64)v60 <= ImagePathName.m128i_i64[1] )
        goto LABEL_158;
    }
    v58 = (__int64)v61;
  }
LABEL_158:
  if ( v58 )
  {
    v62 = (_WORD)v59 - v58;
    v132.m128i_i16[0] = v62;
    if ( ImagePathName.m128i_u16[1] - (unsigned __int64)ImagePathName.m128i_u16[0] >= 2 )
      v62 += 2;
    v132.m128i_i16[1] = v62;
    v132.m128i_i64[1] = v58;
  }
  else
  {
    v132 = ImagePathName;
  }
  v63 = LdrpNtdllHotPatchContext;
  if ( *(_WORD *)LdrpNtdllHotPatchContext )
  {
    LdrpLogEtwHotPatchStatus(
      (unsigned __int16 *)&v132,
      LdrpNtDllDataTableEntry,
      (unsigned __int16 *)LdrpNtdllHotPatchContext,
      *(_DWORD *)(LdrpNtdllHotPatchContext + 544),
      0);
    v63 = LdrpNtdllHotPatchContext;
  }
  if ( *(int *)(v63 + 544) < 0 )
    __fastfail(0x45u);
  v127 = 0LL;
  v64 = *(void **)(v63 + 536);
  if ( v64 )
  {
    inited = LdrpInitializeNtdllDataTableEntry(v64, &v127, LdrpNtDllDataTableEntry, (const UNICODE_STRING *)v63, 0LL);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
  }
  RtlInitializeHistoryTable();
  v65 = (_QWORD *)(LdrpNtDllDataTableEntry + 32);
  v66 = qword_180187470;
  if ( *(__int64 **)(qword_180187470 + 8) != &qword_180187470 )
    goto LABEL_295;
  *v65 = qword_180187470;
  v65[1] = &qword_180187470;
  *(_QWORD *)(v66 + 8) = v65;
  qword_180187470 = (__int64)v65;
  if ( !v127 )
    goto LABEL_173;
  v67 = (_QWORD *)(v127 + 32);
  if ( (__int64 *)v65[1] != &qword_180187470 )
LABEL_295:
    __fastfail(3u);
  *v67 = v65;
  v67[1] = &qword_180187470;
  v65[1] = v67;
  qword_180187470 = (__int64)v67;
LABEL_173:
  v68 = LdrpInitParallelLoadingSupport();
  ApplicationKeyOption = v68;
  if ( v68 < 0 )
  {
    LODWORD(Callbacka) = v68;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6126,
      (__int64)"LdrpInitializeProcess",
      0,
      "Failed to initialize Parallel loader, st = 0x%x\n",
      Callbacka);
    return ApplicationKeyOption;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, (__int64 *)Path);
  memset_thunk_772440563353939046(&v153, 0, 0xC8uLL);
  v154 = Path;
  v155 = 512;
  v153 = ImagePathName;
  p_ApplicationKeyOption = &ApplicationKeyOption;
  ModuleEntry = LdrpAllocateModuleEntry((__int64)&v153);
  if ( !ModuleEntry )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6147,
      (__int64)"LdrpInitializeProcess",
      0,
      "Allocating a data table entry for the executable failed\n");
    return 3221225495LL;
  }
  LdrpImageEntry = (__int64)ModuleEntry;
  v70 = 2LL;
  do
  {
    v71 = LdrpImageEntry;
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v70;
  }
  while ( v70 );
  *(_WORD *)(**(_QWORD **)(v71 + 152) - 52LL) = -1;
  v72 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = ImagePathName;
  v73 = *(_DWORD *)(v72 + 104) | 4;
  *(_DWORD *)(v72 + 104) = v73;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x10) != 0 )
  {
    v73 |= 1u;
    *(_DWORD *)(v72 + 104) = v73;
  }
  v74 = v111;
  if ( UseCOR )
  {
    v75 = v73 | 0x400000;
    *(_DWORD *)(v72 + 104) = v75;
    if ( v74 )
      *(_DWORD *)(v72 + 104) = v75 | 0x1000000;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(v72 + 248) = 0LL;
  *(__m128i *)(v72 + 88) = v132;
  v76 = OutHeaders;
  if ( OutHeaders->OptionalHeader.ImageBase != *(_QWORD *)(ProcessEnvironmentBlock + 16) && !v74 && !UseWOW64 )
  {
    inited = LdrpProtectAndRelocateImage(*(PVOID *)(ProcessEnvironmentBlock + 16));
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    v72 = LdrpImageEntry;
  }
  *(_QWORD *)(v72 + 48) = *(_QWORD *)(ProcessEnvironmentBlock + 16);
  LdrpInsertDataTableEntry(v72);
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrinit.c",
    6234,
    (__int64)"LdrpInitializeProcess",
    2u,
    "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
    LdrpImageEntry + 88,
    LdrpImageEntry + 72,
    &UnicodeString,
    &LdrpAppPackagesPath);
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpImageEntry, v76);
  inited = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v77 = RtlpInitCurrentDir((__int64)&UnicodeString);
  ApplicationKeyOption = v77;
  if ( v77 < 0 )
  {
    LODWORD(v106) = v77;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6271,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
      &UnicodeString,
      v106);
  }
  if ( !v117 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v78 = LdrpAllocateModuleEntry(0LL);
    v79 = (__int64)v78;
    if ( !v78 )
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6294,
        (__int64)"LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the application verifier DLL failed\n");
      return 3221225495LL;
    }
    *(_DWORD *)(*((_QWORD *)v78 + 19) + 24LL) = -1;
    *(_WORD *)(**((_QWORD **)v78 + 19) - 52LL) = -1;
    v80 = v140;
    *((_DWORD *)v78 + 26) |= *(_DWORD *)(v140 + 104);
    *((_QWORD *)v78 + 31) = *(_QWORD *)(v80 + 248);
    *((_WORD *)v78 + 55) = 0;
    *(_OWORD *)(v78 + 72) = *(_OWORD *)(v80 + 72);
    *(_OWORD *)(v78 + 88) = *(_OWORD *)(v80 + 88);
    *((_DWORD *)v78 + 32) = *(_DWORD *)(v80 + 128);
    *((_DWORD *)v78 + 72) = *(_DWORD *)(v80 + 288);
    *((_QWORD *)v78 + 6) = *(_QWORD *)(v80 + 48);
    LdrpInsertDataTableEntry((__int64)v78);
    LdrpLogDllState(*(_QWORD *)(v79 + 48), v79 + 72, 0x14A5u);
    inited = RtlImageNtHeaderEx(3u, *(PVOID *)(v79 + 48), 0LL, &v141);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    LdrpInsertModuleToIndex(v79, v141);
    inited = LdrpProcessMappedModule(v79, 0, 1);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    *(_QWORD *)(v79 + 56) = *(_QWORD *)(v80 + 56);
    LdrpLogDllState(*(_QWORD *)(v79 + 48), v79 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v79 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
    {
      inited = AVrfInitializeVerifier(0, 0, 0, 1, (__int64)DllHandle, 0LL);
      ApplicationKeyOption = inited;
      if ( inited >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v79 + 152) + 56LL) = 9;
        inited = ApplicationKeyOption;
      }
    }
    else
    {
      v110[0] = 0;
      inited = LdrpInitializeGraphRecurse(*(__int64 **)(v79 + 152), 0LL, v110);
      ApplicationKeyOption = inited;
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
    if ( v118 )
    {
      NtClose(v118);
      v118 = 0LL;
    }
    inited = LdrpLoadWow64(&Destination);
    ApplicationKeyOption = inited;
    if ( inited >= 0 )
    {
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        LdrpDoDebuggerBreak();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
      g_LdrpWow64LdrpInitialize(v130);
      goto LABEL_290;
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
    v81 = v111;
    if ( (_BYTE)v111 )
    {
      inited = LdrpCorValidateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      ApplicationKeyOption = inited;
      if ( inited < 0 )
        return (unsigned int)inited;
    }
    if ( (v129->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v130 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  else
  {
    v81 = v111;
  }
  v82 = LdrpInitializeTls();
  ApplicationKeyOption = v82;
  if ( v82 < 0 )
  {
    LODWORD(Callbackc) = v82;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6533,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing TLS slots failed with status 0x%08lx\n",
      Callbackc);
    return ApplicationKeyOption;
  }
  if ( ProcessInformation )
  {
    v109 = 0;
    v83 = LdrpInitializeGraphRecurse(ProcessInformation[19], 0LL, &v109);
    ApplicationKeyOption = v83;
    if ( v83 < 0 )
    {
      LODWORD(Callbackc) = v83;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6552,
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
      6568,
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
        LODWORD(v106) = v85;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6726,
          (__int64)"LdrpInitializeProcess",
          0,
          "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
          &LdrpKernel32DllName,
          v106);
        return ApplicationKeyOption;
      }
      v89 = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernelbaseDllName, &DllHandle);
      ApplicationKeyOption = v89;
      if ( v89 < 0 )
      {
        LODWORD(v106) = v89;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6699,
          (__int64)"LdrpInitializeProcess",
          0,
          "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
          &LdrpKernelbaseDllName,
          v106);
        return ApplicationKeyOption;
      }
      v90 = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = v90;
      if ( (int)(v90 + 0x80000000) >= 0 && v90 != -1073741515 )
      {
        LODWORD(Callbackc) = v90;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6715,
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
                                    (PANSI_STRING)&stru_180133DA0,
                                    0,
                                    &Kernel32ThreadInitThunkFunction,
                                    0,
                                    retaddr);
      ApplicationKeyOption = ProcedureAddressForCaller;
      if ( ProcedureAddressForCaller < 0 )
      {
        LODWORD(v107) = ProcedureAddressForCaller;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6613,
          (__int64)"LdrpInitializeProcess",
          0,
          "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
          &stru_180133DA0,
          &LdrpKernel32DllName,
          v107);
        return ApplicationKeyOption;
      }
      LdrGetProcedureAddressForCaller(
        DllHandle,
        (PANSI_STRING)&stru_180133DC0,
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
      LoadedDll = LdrpFindLoadedDll((__int64)&LdrpKernelbaseDllName, 0LL, (PVOID *)&v142);
      ApplicationKeyOption = LoadedDll;
      if ( LoadedDll < 0 )
      {
        LODWORD(v106) = LoadedDll;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6681,
          (__int64)"LdrpInitializeProcess",
          0,
          "Finding \"%wZ\" failed with status 0x%08lx\n",
          &LdrpKernelbaseDllName,
          v106);
        return ApplicationKeyOption;
      }
      v88 = (PVOID)v142[6];
    }
    v91 = LdrGetProcedureAddressForCaller(v88, (PANSI_STRING)&stru_180133DE0, 0, &ProcedureAddress, 0, retaddr);
    ApplicationKeyOption = v91;
    if ( v91 < 0 )
    {
      LODWORD(Callbackc) = v91;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6744,
        (__int64)"LdrpInitializeProcess",
        0,
        "Finding KernelbasePostInit failed with status 0x%08lx\n",
        Callbackc);
      return ApplicationKeyOption;
    }
    v92 = ((__int64 (*)(void))ProcedureAddress)();
    ApplicationKeyOption = v92;
    if ( v92 < 0 )
    {
      LODWORD(Callbackc) = v92;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6752,
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
  v95 = v134;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
    *(_DWORD *)(v134 + 1036) = 1;
  LdrpEnableParallelLoading(*(_DWORD *)(v95 + 1036));
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  *p_ApplicationKeyOption = 0;
  if ( v81 )
  {
    v96 = LdrpCorProcessImports(LdrpImageEntry);
LABEL_267:
    ApplicationKeyOption = v96;
    v97 = v96;
    goto LABEL_268;
  }
  LdrpThreadTokenSetMainThreadToken();
  v155 |= 1u;
  LdrpMapAndSnapDependency((__int64)&v153);
  LdrpDrainWorkQueue(1);
  if ( LdrpMainThreadToken )
    LdrpThreadTokenUnsetMainThreadToken();
  v97 = ApplicationKeyOption;
  if ( (ApplicationKeyOption & 0x80000000) == 0 )
  {
    v96 = LdrpPrepareModuleForExecution(LdrpImageEntry, (__int64)p_ApplicationKeyOption);
    goto LABEL_267;
  }
LABEL_268:
  if ( v97 < 0 )
  {
    LODWORD(Callbackc) = v97;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6969,
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
    PatchImage = LdrpLoadPatchImage(*(const void **)(LdrpImageEntry + 48));
    ApplicationKeyOption = PatchImage;
    if ( PatchImage < 0 )
    {
      LODWORD(v106) = PatchImage;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        7001,
        (__int64)"LdrpInitializeProcess",
        0,
        "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
        LdrpImageEntry + 88,
        v106);
      return ApplicationKeyOption;
    }
  }
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    LdrpDoDebuggerBreak();
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
  LdrpProcessInitContextRecord = v130;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  v109 = 0;
  ApplicationKeyOption = LdrpInitializeGraphRecurse(
                           *(__int64 **)(LdrpImageEntry + 152),
                           (__int64)p_ApplicationKeyOption,
                           &v109);
  LdrpReleaseLoaderLock(v99, 9, ApplicationKeyOption);
  LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), (__int64)p_ApplicationKeyOption);
  LdrpDropLastInProgressCount();
  LdrpProcessInitContextRecord = 0LL;
  if ( v158 )
    RtlReleasePath(Path[0]);
  if ( (ApplicationKeyOption & 0x80000000) != 0 )
  {
    LODWORD(Callbackc) = ApplicationKeyOption;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      7132,
      (__int64)"LdrpInitializeProcess",
      0,
      "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
      Callbackc);
    return ApplicationKeyOption;
  }
  LdrpInitializeSmtDelayedSleep();
  if ( *(_WORD *)(LdrpImageEntry + 110) )
  {
    v147 = 72LL;
    v148 = 1;
    v149 = 0LL;
    v150 = 0LL;
    v151 = 0LL;
    v152 = 0LL;
    RtlActivateActivationContextUnsafeFast((__int64)&v147, *(_QWORD *)(LdrpImageEntry + 136));
    LdrpCallTlsInitializers(1u, LdrpImageEntry);
    RtlDeactivateActivationContextUnsafeFast((__int64)&v147);
  }
  if ( g_ShimsEnabled
    && !((unsigned __int8 (__fastcall *)(unsigned __int16 *, __int64))(__ROR8__(
                                                                         g_pfnSE_InstallAfterInit,
                                                                         64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
          &v121,
          v93) )
  {
    g_ShimsEnabled = 0;
    LdrUnloadDll(g_pShimEngineModule);
    g_pShimEngineModule = 0LL;
  }
  v100 = *(void (**)(void))(ProcessEnvironmentBlock + 560);
  if ( v100 )
    v100();
LABEL_290:
  if ( Handle )
    NtClose(Handle);
  if ( v118 )
    NtClose(v118);
  return 0LL;
}
