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

__int64 __fastcall LdrpInitializeProcess(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // r15d
  NTSTATUS v5; // eax
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
  __int64 v16; // r14
  __int64 v17; // rcx
  _QWORD *v19; // rax
  int v20; // eax
  char v21; // al
  int v22; // eax
  int WowTebOffset; // ecx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r13
  _DWORD *Config; // r15
  int NtGlobalFlag; // eax
  char v30; // al
  _QWORD *v31; // r8
  char v32; // al
  unsigned int v33; // eax
  int v34; // ecx
  unsigned __int64 v35; // r14
  __int64 v36; // rax
  __int64 *v37; // r15
  __int64 v38; // rcx
  int v39; // r14d
  int inited; // eax
  __int64 v41; // r8
  __int64 v42; // r9
  _RTL_USER_PROCESS_PARAMETERS *v43; // r13
  HANDLE v44; // rdx
  char v45; // r12
  __int64 NtSystemRoot; // rax
  __int16 v47; // r14
  __int64 Heap; // rax
  __int64 v49; // r14
  int v50; // eax
  __int64 v51; // rdx
  int v52; // eax
  int SymbolicLinkObject; // eax
  __int64 v54; // r12
  __m128i DosPath; // xmm0
  wchar_t *v56; // xmm0_8
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  wchar_t *v61; // r14
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned __int64 v66; // r14
  __int64 v67; // rdx
  unsigned __int64 v68; // r15
  __int16 v69; // dx
  __int64 v70; // r8
  unsigned __int64 v71; // rdx
  _WORD *v72; // rax
  _WORD *v73; // r9
  __int16 v74; // dx
  __int64 v75; // rax
  unsigned __int64 v76; // rcx
  _QWORD *v77; // rax
  __int64 v78; // rcx
  _QWORD *v79; // rcx
  int v80; // eax
  __int64 ModuleEntry; // rax
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  int v85; // eax
  char v86; // dl
  int v87; // eax
  __int64 v88; // r13
  int v89; // eax
  __int64 v90; // rax
  __int64 v91; // r14
  __int64 v92; // r15
  int Wow64; // eax
  char v94; // r15
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int ProcedureAddressForCaller; // eax
  int LoadedDll; // eax
  unsigned __int64 v101; // rcx
  int v102; // eax
  unsigned int v103; // eax
  int v104; // eax
  int v105; // eax
  __int64 v106; // r14
  char v107; // al
  _RTL_USER_PROCESS_PARAMETERS *v108; // rax
  unsigned int v109; // eax
  int v110; // ecx
  int PatchImage; // eax
  __int64 v112; // rcx
  unsigned __int64 v113; // r8
  unsigned __int64 v114; // r9
  void (*PostProcessInitRoutine)(void); // rax
  __int64 v116; // [rsp+28h] [rbp-3A0h]
  __int64 v117; // [rsp+28h] [rbp-3A0h]
  int *v118; // [rsp+28h] [rbp-3A0h]
  __int64 v119; // [rsp+28h] [rbp-3A0h]
  __int64 v120; // [rsp+30h] [rbp-398h]
  __int64 v121; // [rsp+30h] [rbp-398h]
  __int64 v122; // [rsp+38h] [rbp-390h]
  unsigned int ApplicationKeyOption; // [rsp+50h] [rbp-378h] BYREF
  char v124; // [rsp+54h] [rbp-374h] BYREF
  char v125[3]; // [rsp+55h] [rbp-373h] BYREF
  int v126; // [rsp+58h] [rbp-370h]
  __int64 v127; // [rsp+60h] [rbp-368h] BYREF
  __int64 **ProcessInformation; // [rsp+68h] [rbp-360h] BYREF
  __int128 v129; // [rsp+70h] [rbp-358h] BYREF
  int v130; // [rsp+80h] [rbp-348h] BYREF
  int v131; // [rsp+84h] [rbp-344h] BYREF
  int v132; // [rsp+88h] [rbp-340h]
  HANDLE v133[2]; // [rsp+90h] [rbp-338h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-328h] BYREF
  __int128 v135; // [rsp+B0h] [rbp-318h] BYREF
  unsigned __int16 Length; // [rsp+C0h] [rbp-308h] BYREF
  __int16 v137; // [rsp+C2h] [rbp-306h]
  unsigned __int64 v138; // [rsp+C8h] [rbp-300h]
  HANDLE v139; // [rsp+D0h] [rbp-2F8h] BYREF
  __m128i ImagePathName; // [rsp+E0h] [rbp-2E8h] BYREF
  unsigned int v141; // [rsp+F0h] [rbp-2D8h]
  __int64 v142; // [rsp+F8h] [rbp-2D0h] BYREF
  __int64 v143; // [rsp+100h] [rbp-2C8h] BYREF
  struct _TEB *v144; // [rsp+108h] [rbp-2C0h]
  __int64 v145; // [rsp+110h] [rbp-2B8h]
  UNICODE_STRING v146; // [rsp+120h] [rbp-2A8h] BYREF
  __m128i v147; // [rsp+130h] [rbp-298h] BYREF
  __int64 pShimData; // [rsp+140h] [rbp-288h]
  _RTL_USER_PROCESS_PARAMETERS *v149; // [rsp+148h] [rbp-280h]
  __int64 v150[2]; // [rsp+150h] [rbp-278h] BYREF
  int v151; // [rsp+160h] [rbp-268h] BYREF
  const WCHAR *v152; // [rsp+168h] [rbp-260h]
  __int64 SystemInformation; // [rsp+170h] [rbp-258h] BYREF
  __int64 v154; // [rsp+178h] [rbp-250h] BYREF
  _DWORD *v155; // [rsp+180h] [rbp-248h] BYREF
  __int64 v156; // [rsp+188h] [rbp-240h] BYREF
  __int64 (*v157)(void); // [rsp+190h] [rbp-238h] BYREF
  int v158; // [rsp+198h] [rbp-230h] BYREF
  int v159; // [rsp+1A0h] [rbp-228h]
  __int64 v160; // [rsp+1A8h] [rbp-220h]
  int *v161; // [rsp+1B0h] [rbp-218h]
  int v162; // [rsp+1B8h] [rbp-210h]
  __int128 v163; // [rsp+1C0h] [rbp-208h]
  _QWORD v164[4]; // [rsp+1D0h] [rbp-1F8h] BYREF
  __int64 v165; // [rsp+1F0h] [rbp-1D8h] BYREF
  int v166; // [rsp+1F8h] [rbp-1D0h]
  __int128 v167; // [rsp+200h] [rbp-1C8h]
  __int128 v168; // [rsp+210h] [rbp-1B8h]
  __int128 v169; // [rsp+220h] [rbp-1A8h]
  __int64 v170; // [rsp+230h] [rbp-198h]
  __m128i v171; // [rsp+240h] [rbp-188h] BYREF
  __int64 *v172; // [rsp+250h] [rbp-178h]
  int v173; // [rsp+260h] [rbp-168h]
  unsigned int *p_ApplicationKeyOption; // [rsp+268h] [rbp-160h]
  __int64 v175[15]; // [rsp+310h] [rbp-B8h] BYREF
  char v176; // [rsp+38Ch] [rbp-3Ch]
  unsigned __int64 retaddr; // [rsp+3C8h] [rbp+0h]

  v127 = a2;
  v145 = a1;
  v151 = 1441812;
  v152 = L"\\KnownDlls";
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
      RtlRaiseStatus((unsigned int)v5);
    v3 = (unsigned int)ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = (int)ProcessInformation;
  }
  v6 = 63;
  RtlpUnhandledExceptionFilter = __ROR8__(v3, v3 & 0x3F);
  v7 = NtCurrentTeb();
  v144 = v7;
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
  qword_180182EA0 = 0LL;
  qword_180182EB0 = 0LL;
  qword_180182EC0 = (__int64)&qword_180182EB8;
  qword_180182EB8 = (__int64)&qword_180182EB8;
  RtlpInitializeNonVolatileFlush();
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  Buffer = (wchar_t *)((char *)ProcessParameters->ImagePathName.Buffer + (unsigned __int64)ProcessParameters);
  if ( (ProcessParameters->Flags & 1) != 0 )
    Buffer = ProcessParameters->ImagePathName.Buffer;
  v138 = (unsigned __int64)Buffer;
  Length = ProcessParameters->ImagePathName.Length;
  v15 = Length;
  v137 = Length + 2;
  if ( Length >= 8u && *Buffer == 92 && Buffer[1] == 63 && Buffer[2] == 63 && Buffer[3] == 92 )
  {
    Length -= 8;
    v137 = v15 - 6;
    v138 = (unsigned __int64)(Buffer + 4);
    ProcessParameters->ImagePathName.Length -= 8;
    ProcessParameters->ImagePathName.MaximumLength -= 8;
    ProcessParameters->ImagePathName.Buffer += 4;
  }
  v132 = 1;
  UseCOR = 0;
  LOBYTE(v6) = 0;
  v126 = v6;
  v131 = 0;
  RtlImageNtHeaderEx(3, (unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress, 0LL, &v143);
  v16 = v143;
  LdrpAppHeaders = v143;
  v17 = 32LL;
  if ( LdrpIsSecureProcess && (*(_BYTE *)(v143 + 22) & 0x20) == 0 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4906LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
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
  LdrpInitializeExceptionTable(a2, 1LL);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  LOBYTE(v20) = LdrControlFlowGuardEnforcedWithExportSuppression();
  if ( v20 == 1 )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  v21 = ((unsigned __int64)qword_1801993A8 >> 4) & 3;
  LdrpEnforceIntegrityContinuity = v21 == 1;
  LdrpAuditIntegrityContinuity = ((v21 - 1) & 0xFD) == 0;
  v22 = LdrpInitializeExecutionOptions(
          (unsigned int)&Length,
          (_DWORD)ProcessEnvironmentBlock,
          a2,
          (unsigned int)&v139,
          (__int64)v133,
          (__int64)&v154);
  ApplicationKeyOption = v22;
  if ( v22 < 0 )
  {
    LODWORD(v116) = v7->ClientId.UniqueProcess;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5052LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      v116,
      v22);
    return ApplicationKeyOption;
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 2) != 0 )
    LdrpDebugFlags |= 1u;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrinit.c",
    5099LL,
    (__int64)"LdrpInitializeProcess",
    2LL,
    "Initializing process 0x%p\n",
    v7->ClientId.UniqueProcess);
  pShimData = 0LL;
  WowTebOffset = v144->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( v16 )
  {
    if ( *(_WORD *)(v16 + 24) == 267 && WowTebOffset <= 0 )
    {
      UseCOR = 1;
      LOBYTE(v6) = 1;
      v126 = v6;
      v4 = 1;
      LODWORD(v24) = LdrpCorFixupImage(ProcessEnvironmentBlock->ImageBaseAddress);
      ApplicationKeyOption = v24;
      if ( (int)v24 < 0 )
        return (unsigned int)v24;
    }
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v25 = RtlpImageDirectoryEntryToDataEx(
            (unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress,
            1,
            0xEu,
            &v158,
            v150);
    v26 = v150[0];
    if ( v25 < 0 )
      v26 = 0LL;
    v150[0] = v26;
    if ( v26 )
    {
      UseCOR = 1;
      v6 = (unsigned __int8)v6;
      if ( (*(_BYTE *)(v26 + 16) & 1) != 0 )
        v6 = 1;
      v126 = v6;
    }
  }
  LdrpSystemDllBase = v127;
  if ( !UseWOW64 )
    pShimData = (__int64)ProcessEnvironmentBlock->pShimData;
  RtlpTimeout = ProcessEnvironmentBlock->CriticalSectionTimeout.QuadPart;
  v27 = RtlNormalizeProcessParams((__int64)ProcessEnvironmentBlock->ProcessParameters);
  ImagePathName = *(__m128i *)(v27 + 96);
  if ( UseWOW64 || UseCOR && v4 )
    Config = 0LL;
  else
    Config = LdrImageDirectoryEntryToLoadConfig((unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress);
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
    RtlSetBits((__int64)ProcessEnvironmentBlock->TlsBitmap, 0, 0x13u);
  RtlSetBits((__int64)ProcessEnvironmentBlock->TlsBitmap, 0x10u, 1u);
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x1000) != 0 || (v32 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v33 = 24;
    v130 = 24;
    if ( LdrpIsSecureProcess )
    {
      v34 = -1073741772;
    }
    else
    {
      LOBYTE(v120) = 0;
      v34 = RtlQueryImageFileExecutionOptions(
              &Length,
              (__int64)L"StackTraceDatabaseSizeInMb",
              4u,
              (__int64)&v130,
              4,
              0LL);
      v33 = v130;
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
      5347LL,
      (__int64)"LdrpInitializeProcess",
      2LL,
      "Stack trace database size is %Id Mb\n",
      v35 >> 20);
    v164[0] = 0LL;
    v164[1] = 0LL;
    v164[2] = v35;
    RtlControlStackTraceDataBase(0LL, 24LL, v164);
    v32 = LdrpShouldCreateStackTraceDb;
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x1000) != 0 || v32 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    RtlpForceCSDebugInfoCreation = 1;
    RtlpForceCSToUseEvents = 1;
  }
  LODWORD(v24) = RtlInitializeCriticalSectionEx((__int64)&FastPebLock, 0, 0);
  ApplicationKeyOption = v24;
  if ( (int)v24 < 0 )
    return (unsigned int)v24;
  ProcessEnvironmentBlock->FastPebLock = (_RTL_CRITICAL_SECTION *)&FastPebLock;
  LODWORD(v24) = RtlInitializeHeapManager((__int64)&Length);
  ApplicationKeyOption = v24;
  if ( (int)v24 < 0 )
    return (unsigned int)v24;
  if ( (((unsigned __int64)qword_1801993A0 >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, 1, 0LL, 0LL);
  v36 = LdrpInitializeProcessHeap(Config, v143, v27);
  v37 = (__int64 *)v36;
  if ( !v36 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5419LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Creating the process heap failed\n");
    return 3221225495LL;
  }
  ProcessEnvironmentBlock->ProcessHeap = (void *)v36;
  RtlInitializeCriticalSectionEx((__int64)&LdrpEnclaveListLock, 0, 0);
  qword_180184AC8 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  RtlpInitializeThreadActivationContextStack((__int64)v144);
  LdrpHeap = (__int64)v37;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
LABEL_297:
    RtlRaiseStatus(2147483650LL);
  EtwpFreeRegistrationList = 0LL;
  PrivateLoggerNotificationEntry = 0LL;
  ApplicationKeyOption = NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &SystemInformation, 8u, 0LL);
  v38 = RtlpHypervisorSharedUserVa;
  if ( (ApplicationKeyOption & 0x80000000) == 0 )
    v38 = SystemInformation;
  RtlpHypervisorSharedUserVa = v38;
  NtdllBaseTag = RtlCreateTagHeap(v37, 0, (__int64)L"NTDLL!", L"!Process");
  LODWORD(v24) = TpInitializePackage();
  ApplicationKeyOption = v24;
  if ( (int)v24 < 0 )
    return (unsigned int)v24;
  if ( *(_DWORD *)(v27 + 1080) )
    TpSetDefaultPoolCpuSets(*(void **)(v27 + 1072));
  v39 = *(_DWORD *)(v27 + 1084);
  if ( v39 )
  {
    RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
    TppPoolpGlobalPoolMaxThreadsOverride = v39;
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_18017E3C8);
  EtwEventRegister((int)&PrivateLoggerNotificationGuid, 0LL, 0LL, (__int64)&g_hPrivLoggerNotificationProvider);
  EtwEventRegister(
    (int)&UserDiagnosticGuid,
    (__int64)UserDiagnosticProviderCallback,
    0LL,
    (__int64)&g_hUserDiagnosticProvider);
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_18017E390);
  EtwEventRegister(
    (int)&WindowsHeapSnapshotProvider,
    (__int64)RtlpHpStackTraceEtwCallback,
    0LL,
    (__int64)&RtlpHpStackTraceProviderHandle);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_18017E358);
  LODWORD(v24) = RtlpInitEnvironmentBlock();
  ApplicationKeyOption = v24;
  if ( (int)v24 < 0 )
    return (unsigned int)v24;
  inited = RtlpInitParameterBlock();
  v24 = (unsigned int)inited;
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)v24;
  v43 = ProcessEnvironmentBlock->ProcessParameters;
  v149 = v43;
  ImagePathName = (__m128i)v43->ImagePathName;
  v138 = _mm_srli_si128(ImagePathName, 8).m128i_u64[0];
  v44 = v139;
  if ( v139 || v133[0] )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             (__int64)v133[0],
                             (__int64)v139,
                             (__int64)L"DebugProcessHeapOnly",
                             4u,
                             (__int64)&v131,
                             4,
                             v120,
                             0LL);
    v45 = 0;
    if ( (ApplicationKeyOption & 0x80000000) == 0 && dword_18017E828 && v131 )
    {
      dword_18017E828 = 0;
      *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  else
  {
    v45 = 0;
  }
  NtSystemRoot = RtlGetNtSystemRoot(v24, (__int64)v44, v41, v42);
  RtlInitUnicodeStringEx((__int64)&v146, NtSystemRoot);
  v47 = v146.Length + 40;
  Heap = RtlAllocateHeap((__int64)v37, 0, (unsigned int)v146.Length + 38 + 2LL);
  if ( !Heap )
    return 3221225495LL;
  LOWORD(v135) = 0;
  WORD1(v135) = v47;
  *((_QWORD *)&v135 + 1) = Heap;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v135, (const void **)&v146);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v135, &SlashSystem32SlashString);
  if ( (ProcessEnvironmentBlock->BitField & 2) == 0 )
  {
    v49 = 48LL;
    v159 = 48;
    v160 = 0LL;
    v162 = 64;
    v161 = &v151;
    v163 = 0LL;
    v50 = ZwOpenDirectoryObject();
    ApplicationKeyOption = v50;
    if ( v50 < 0 )
    {
      LODWORD(v120) = v50;
      v118 = &v151;
      v51 = 5687LL;
LABEL_118:
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        v51,
        (__int64)"LdrpInitializeProcess",
        0LL,
        "Failed to open %wZ with status 0x%08lx\n",
        v118,
        v120);
      return ApplicationKeyOption;
    }
    v159 = 48;
    v160 = LdrpKnownDllDirectoryHandle;
    v162 = 64;
    v161 = (int *)&unk_1801325D0;
    v163 = 0LL;
    v52 = ZwOpenSymbolicLinkObject();
    ApplicationKeyOption = v52;
    if ( v52 < 0 )
    {
      LODWORD(v120) = v52;
      v118 = (int *)&unk_1801325D0;
      v51 = 5710LL;
      goto LABEL_118;
    }
    while ( 1 )
    {
      v54 = RtlAllocateHeap((__int64)v37, 0, v49);
      if ( !v54 )
        return 3221225495LL;
      LdrpKnownDllPath = 0;
      word_180183ED2 = v49;
      qword_180183ED8 = v54;
      SymbolicLinkObject = NtQuerySymbolicLinkObject();
      ApplicationKeyOption = SymbolicLinkObject;
      if ( SymbolicLinkObject >= 0 )
        break;
      if ( SymbolicLinkObject != -1073741789 )
      {
        LODWORD(v117) = SymbolicLinkObject;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5745LL,
          (__int64)"LdrpInitializeProcess",
          0LL,
          "Querying the known DLL directory link object failed with status 0x%08lx\n",
          v117);
        return ApplicationKeyOption;
      }
      RtlFreeHeap((__int64)v37, 0, v54);
      v49 = v141;
    }
    NtClose((HANDLE)v150[1]);
    v45 = 0;
  }
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = v146;
  }
  else
  {
    DosPath = (__m128i)v43->CurrentDirectory.DosPath;
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)&v43->CurrentDirectory.DosPath.Length;
    v56 = (wchar_t *)_mm_srli_si128(DosPath, 8).m128i_u64[0];
    UnicodeString.Buffer = v56;
    if ( !v56 || !UnicodeString.Length || !*v56 )
    {
      v61 = (wchar_t *)RtlAllocateHeap((__int64)v37, 0, 8LL);
      UnicodeString.Buffer = v61;
      if ( !v61 )
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5792LL,
          (__int64)"LdrpInitializeProcess",
          0LL,
          "Allocating a buffer to hold the current working directory failed\n");
        return 3221225495LL;
      }
      v132 = 0;
      v62 = RtlGetNtSystemRoot(v58, v57, v59, v60);
      *(_DWORD *)v61 = *(_DWORD *)v62;
      v61[2] = *(_WORD *)(v62 + 4);
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  v66 = (unsigned __int16)v135;
  if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x20000000) != 0 )
  {
    v45 = LdrpIncludeAlternateForwarders(v63, (unsigned __int16)v135, v64, v65);
    v66 = 2 * v67 + 22;
    if ( v45 )
      v66 = v67 + 2 * v67 + 52;
  }
  v68 = v66;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v68 = v66 + 2 * (v146.Length + 9LL);
    if ( (ProcessEnvironmentBlock->BitField & 2) != 0 )
      v43->DllPath.Length = 0;
  }
  *((_QWORD *)&v129 + 1) = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v68);
  if ( !*((_QWORD *)&v129 + 1) )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5883LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Failed to allocate the system dirs string!\n");
    return 3221225495LL;
  }
  LOWORD(v129) = 0;
  WORD1(v129) = v68;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v129, (const void **)&v135);
  v69 = v129;
  *(_WORD *)(*((_QWORD *)&v129 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v129 >> 1) - 2) = 59;
  RtlpSystem32Dirs = v129;
  LdrpSystem32 = v129;
  LOWORD(LdrpSystem32) = v69 - 2;
  if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x20000000) != 0 )
  {
    if ( v45 )
    {
      RtlAppendUnicodeStringToString((unsigned __int16 *)&v129, (const void **)&v135);
      RtlAppendUnicodeToString((unsigned __int16 *)&v129, L"forwarders\\alt;");
    }
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v129, (const void **)&v135);
    RtlAppendUnicodeToString((unsigned __int16 *)&v129, L"forwarders;");
  }
  if ( v68 > v66 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v129, (const void **)&v146);
    RtlAppendUnicodeToString((unsigned __int16 *)&v129, L"\\system;");
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v129, (const void **)&v146);
    RtlAppendUnicodeToString((unsigned __int16 *)&v129, L";");
    RtlpSystemDirs = v129;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&ImagePathName);
  LODWORD(v24) = LdrpInitializeNtdllDataTableEntry(v127, &LdrpNtDllDataTableEntry, 0LL, 0LL, &v135);
  ApplicationKeyOption = v24;
  if ( (int)v24 < 0 )
    return (unsigned int)v24;
  v70 = 0LL;
  v71 = ImagePathName.m128i_i64[1] + ImagePathName.m128i_u16[0];
  v72 = (_WORD *)v71;
  if ( v71 && v71 > ImagePathName.m128i_i64[1] )
  {
    while ( 1 )
    {
      v73 = v72--;
      if ( *v72 == 92 )
        break;
      if ( (unsigned __int64)v72 <= ImagePathName.m128i_i64[1] )
        goto LABEL_160;
    }
    v70 = (__int64)v73;
  }
LABEL_160:
  if ( v70 )
  {
    v74 = v71 - v70;
    v147.m128i_i16[0] = v74;
    if ( ImagePathName.m128i_u16[1] - (unsigned __int64)ImagePathName.m128i_u16[0] >= 2 )
      v74 += 2;
    v147.m128i_i16[1] = v74;
    v147.m128i_i64[1] = v70;
  }
  else
  {
    v147 = ImagePathName;
  }
  v75 = LdrpNtdllHotPatchContext;
  if ( *(_WORD *)LdrpNtdllHotPatchContext )
  {
    LdrpLogEtwHotPatchStatus(
      (unsigned int)&v147,
      LdrpNtDllDataTableEntry,
      LdrpNtdllHotPatchContext,
      *(_DWORD *)(LdrpNtdllHotPatchContext + 544),
      0);
    v75 = LdrpNtdllHotPatchContext;
  }
  if ( *(int *)(v75 + 544) < 0 )
    __fastfail(0x45u);
  v142 = 0LL;
  v76 = *(_QWORD *)(v75 + 536);
  if ( v76 )
  {
    LODWORD(v24) = LdrpInitializeNtdllDataTableEntry(v76, &v142, LdrpNtDllDataTableEntry, (unsigned __int16 *)v75, 0LL);
    ApplicationKeyOption = v24;
    if ( (int)v24 < 0 )
      return (unsigned int)v24;
  }
  RtlInitializeHistoryTable();
  v77 = (_QWORD *)(LdrpNtDllDataTableEntry + 32);
  v78 = qword_1801843B0;
  if ( *(__int64 **)(qword_1801843B0 + 8) != &qword_1801843B0 )
    goto LABEL_296;
  *v77 = qword_1801843B0;
  v77[1] = &qword_1801843B0;
  *(_QWORD *)(v78 + 8) = v77;
  qword_1801843B0 = (__int64)v77;
  if ( !v142 )
    goto LABEL_175;
  v79 = (_QWORD *)(v142 + 32);
  if ( (__int64 *)v77[1] != &qword_1801843B0 )
LABEL_296:
    __fastfail(3u);
  *v79 = v77;
  v79[1] = &qword_1801843B0;
  v77[1] = v79;
  qword_1801843B0 = (__int64)v79;
LABEL_175:
  v80 = LdrpInitParallelLoadingSupport();
  ApplicationKeyOption = v80;
  if ( v80 < 0 )
  {
    LODWORD(v117) = v80;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6120LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Failed to initialize Parallel loader, st = 0x%x\n",
      v117);
    return ApplicationKeyOption;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, v175);
  memset_thunk_772440563353939046(&v171, 0, 0xC8uLL);
  v172 = v175;
  v173 = 512;
  v171 = ImagePathName;
  p_ApplicationKeyOption = &ApplicationKeyOption;
  ModuleEntry = LdrpAllocateModuleEntry((__int64)&v171);
  if ( !ModuleEntry )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6141LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Allocating a data table entry for the executable failed\n");
    return 3221225495LL;
  }
  LdrpImageEntry = ModuleEntry;
  v82 = 2LL;
  do
  {
    v83 = LdrpImageEntry;
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v82;
  }
  while ( v82 );
  *(_WORD *)(**(_QWORD **)(v83 + 152) - 52LL) = -1;
  v84 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = ImagePathName;
  v85 = *(_DWORD *)(v84 + 104) | 4;
  *(_DWORD *)(v84 + 104) = v85;
  if ( (ProcessEnvironmentBlock->BitField & 0x10) != 0 )
  {
    v85 |= 1u;
    *(_DWORD *)(v84 + 104) = v85;
  }
  v86 = v126;
  if ( UseCOR )
  {
    v87 = v85 | 0x400000;
    *(_DWORD *)(v84 + 104) = v87;
    if ( v86 )
      *(_DWORD *)(v84 + 104) = v87 | 0x1000000;
  }
  if ( (ProcessEnvironmentBlock->BitField & 4) != 0 )
    *(_QWORD *)(v84 + 248) = 0LL;
  *(__m128i *)(v84 + 88) = v147;
  v88 = v143;
  if ( *(void **)(v143 + 48) != ProcessEnvironmentBlock->ImageBaseAddress && !v86 && !UseWOW64 )
  {
    LODWORD(v24) = LdrpProtectAndRelocateImage(ProcessEnvironmentBlock->ImageBaseAddress);
    ApplicationKeyOption = v24;
    if ( (int)v24 < 0 )
      return (unsigned int)v24;
    v84 = LdrpImageEntry;
  }
  *(_QWORD *)(v84 + 48) = ProcessEnvironmentBlock->ImageBaseAddress;
  LdrpInsertDataTableEntry(v84);
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrinit.c",
    6228LL,
    (__int64)"LdrpInitializeProcess",
    2LL,
    "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
    LdrpImageEntry + 88,
    LdrpImageEntry + 72,
    &UnicodeString,
    &LdrpAppPackagesPath);
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpImageEntry, (_DWORD *)v88);
  LODWORD(v24) = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0);
  ApplicationKeyOption = v24;
  if ( (int)v24 < 0 )
    return (unsigned int)v24;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v89 = RtlpInitCurrentDir((__int64)&UnicodeString);
  ApplicationKeyOption = v89;
  if ( v89 < 0 )
  {
    LODWORD(v121) = v89;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6265LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
      &UnicodeString,
      v121);
  }
  if ( !v132 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v90 = LdrpAllocateModuleEntry(0LL);
    v91 = v90;
    if ( !v90 )
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6288LL,
        (__int64)"LdrpInitializeProcess",
        0LL,
        "Allocating a data table entry for the application verifier DLL failed\n");
      return 3221225495LL;
    }
    *(_DWORD *)(*(_QWORD *)(v90 + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(v90 + 152) - 52LL) = -1;
    v92 = v154;
    *(_DWORD *)(v90 + 104) |= *(_DWORD *)(v154 + 104);
    *(_QWORD *)(v90 + 248) = *(_QWORD *)(v92 + 248);
    *(_WORD *)(v90 + 110) = 0;
    *(_OWORD *)(v90 + 72) = *(_OWORD *)(v92 + 72);
    *(_OWORD *)(v90 + 88) = *(_OWORD *)(v92 + 88);
    *(_DWORD *)(v90 + 128) = *(_DWORD *)(v92 + 128);
    *(_DWORD *)(v90 + 288) = *(_DWORD *)(v92 + 288);
    *(_QWORD *)(v90 + 48) = *(_QWORD *)(v92 + 48);
    LdrpInsertDataTableEntry(v90);
    LdrpLogDllState(*(_QWORD *)(v91 + 48), v91 + 72, 0x14A5u);
    LODWORD(v24) = RtlImageNtHeaderEx(3, *(_QWORD *)(v91 + 48), 0LL, &v155);
    ApplicationKeyOption = v24;
    if ( (int)v24 < 0 )
      return (unsigned int)v24;
    LdrpInsertModuleToIndex(v91, v155);
    LODWORD(v24) = LdrpProcessMappedModule(v91, 0, 1);
    ApplicationKeyOption = v24;
    if ( (int)v24 < 0 )
      return (unsigned int)v24;
    *(_QWORD *)(v91 + 56) = *(_QWORD *)(v92 + 56);
    LdrpLogDllState(*(_QWORD *)(v91 + 48), v91 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v91 + 152) + 56LL) = 7;
    if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x100) == 0 && (AvrfAppVerifierMode & 2) == 0 )
    {
      v125[0] = 0;
      LODWORD(v24) = LdrpInitializeGraphRecurse(*(__int64 **)(v91 + 152), 0LL, v125);
      ApplicationKeyOption = v24;
    }
    else
    {
      LODWORD(v24) = AVrfInitializeVerifier(0, 0, 0, 1, v127, 0LL);
      ApplicationKeyOption = v24;
      if ( (int)v24 >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v91 + 152) + 56LL) = 9;
        LODWORD(v24) = ApplicationKeyOption;
      }
    }
    if ( (int)v24 < 0 )
      return (unsigned int)v24;
  }
  LdrpDropLastInProgressCount();
  if ( UseWOW64 )
  {
    if ( v139 )
    {
      NtClose(v139);
      v139 = 0LL;
      if ( LdrpLargePageDllKeyHandle )
      {
        NtClose(LdrpLargePageDllKeyHandle);
        LdrpLargePageDllKeyHandle = 0LL;
      }
    }
    if ( v133[0] )
    {
      NtClose(v133[0]);
      v133[0] = 0LL;
    }
    Wow64 = LdrpLoadWow64((const void **)&v135);
    LODWORD(v24) = Wow64;
    ApplicationKeyOption = Wow64;
    if ( Wow64 >= 0 )
    {
      if ( ProcessEnvironmentBlock->BeingDebugged )
        LdrpDoDebuggerBreak((unsigned int)Wow64);
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      g_LdrpWow64LdrpInitialize(v145);
      goto LABEL_291;
    }
    return (unsigned int)v24;
  }
  ProcessInformation = 0LL;
  if ( UseCOR )
  {
    LODWORD(v24) = LdrpCorInitialize(&ProcessInformation);
    ApplicationKeyOption = v24;
    if ( (int)v24 < 0 )
      return (unsigned int)v24;
    v94 = v126;
    if ( (_BYTE)v126 )
    {
      LODWORD(v24) = LdrpCorValidateImage((unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress);
      ApplicationKeyOption = v24;
      if ( (int)v24 < 0 )
        return (unsigned int)v24;
    }
    if ( (v144->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v145 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  else
  {
    v94 = v126;
  }
  v95 = LdrpInitializeTls();
  ApplicationKeyOption = v95;
  if ( v95 < 0 )
  {
    LODWORD(v119) = v95;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6527LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Initializing TLS slots failed with status 0x%08lx\n",
      v119);
    return ApplicationKeyOption;
  }
  if ( ProcessInformation )
  {
    v124 = 0;
    v96 = LdrpInitializeGraphRecurse(ProcessInformation[19], 0LL, &v124);
    ApplicationKeyOption = v96;
    if ( v96 < 0 )
    {
      LODWORD(v119) = v96;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6546LL,
        (__int64)"LdrpInitializeProcess",
        0LL,
        "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
        v119);
      return ApplicationKeyOption;
    }
  }
  v97 = LdrpInitializeImportRedirection();
  ApplicationKeyOption = v97;
  if ( v97 < 0 )
  {
    LODWORD(v119) = v97;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6562LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Loading of import redirection module failed with status 0x%08x\n",
      v119);
    return ApplicationKeyOption;
  }
  ProcessInformation = 0LL;
  if ( (unsigned __int16)(*(_WORD *)(v88 + 92) - 2) <= 1u )
  {
    v98 = LdrLoadDll(16385LL, 0LL, (__int64)LdrpKernel32DllName, &v127);
    ApplicationKeyOption = v98;
    if ( v98 < 0 )
    {
      if ( v98 != -1073741515 )
      {
        LODWORD(v121) = v98;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6720LL,
          (__int64)"LdrpInitializeProcess",
          0LL,
          "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
          LdrpKernel32DllName,
          v121);
        return ApplicationKeyOption;
      }
      v102 = LdrLoadDll(16385LL, 0LL, (__int64)&LdrpKernelbaseDllName, &v127);
      ApplicationKeyOption = v102;
      if ( v102 < 0 )
      {
        LODWORD(v121) = v102;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6693LL,
          (__int64)"LdrpInitializeProcess",
          0LL,
          "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
          &LdrpKernelbaseDllName,
          v121);
        return ApplicationKeyOption;
      }
      v103 = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = v103;
      if ( (int)(v103 + 0x80000000) >= 0 && v103 != -1073741515 )
      {
        LODWORD(v119) = v103;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6709LL,
          (__int64)"LdrpInitializeProcess",
          0LL,
          "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
          v119);
        return ApplicationKeyOption;
      }
      ApplicationKeyOption = 0;
      v101 = v127;
    }
    else
    {
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                    v127,
                                    &qword_180132420,
                                    0,
                                    &Kernel32ThreadInitThunkFunction,
                                    0,
                                    retaddr);
      ApplicationKeyOption = ProcedureAddressForCaller;
      if ( ProcedureAddressForCaller < 0 )
      {
        LODWORD(v122) = ProcedureAddressForCaller;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6607LL,
          (__int64)"LdrpInitializeProcess",
          0LL,
          "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
          &qword_180132420,
          LdrpKernel32DllName,
          v122);
        return ApplicationKeyOption;
      }
      LdrGetProcedureAddressForCaller(v127, &qword_180132630, 0, &ProcessInformation, 0, retaddr);
      LODWORD(v24) = LdrpSnapKernelBaseExtensions();
      ApplicationKeyOption = v24;
      if ( (int)v24 < 0 )
        return (unsigned int)v24;
      LODWORD(v24) = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = v24;
      if ( (int)v24 < 0 )
        return (unsigned int)v24;
      LoadedDll = LdrpFindLoadedDll((__int64)&LdrpKernelbaseDllName, 0, &v156);
      ApplicationKeyOption = LoadedDll;
      if ( LoadedDll < 0 )
      {
        LODWORD(v121) = LoadedDll;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6675LL,
          (__int64)"LdrpInitializeProcess",
          0LL,
          "Finding \"%wZ\" failed with status 0x%08lx\n",
          &LdrpKernelbaseDllName,
          v121);
        return ApplicationKeyOption;
      }
      v101 = *(_QWORD *)(v156 + 48);
    }
    v104 = LdrGetProcedureAddressForCaller(v101, &qword_180131098, 0, &v157, 0, retaddr);
    ApplicationKeyOption = v104;
    if ( v104 < 0 )
    {
      LODWORD(v119) = v104;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6738LL,
        (__int64)"LdrpInitializeProcess",
        0LL,
        "Finding KernelbasePostInit failed with status 0x%08lx\n",
        v119);
      return ApplicationKeyOption;
    }
    v105 = v157();
    ApplicationKeyOption = v105;
    if ( v105 < 0 )
    {
      LODWORD(v119) = v105;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6746LL,
        (__int64)"LdrpInitializeProcess",
        0LL,
        "Calling KernelbasePostInit failed with status 0x%08lx\n",
        v119);
      return ApplicationKeyOption;
    }
    ApplicationKeyOption = 0;
  }
  LdrpDrainWorkQueue(0);
  SbObtainTraceHandle(0LL);
  v106 = pShimData;
  if ( pShimData && *(_DWORD *)(pShimData + 528) )
  {
    ProcessEnvironmentBlock->AppCompatInfo = 0LL;
    LdrpInitShimEngine(v106);
  }
  v107 = RtlpForceCSDebugInfoCreation;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v107 = 1;
  RtlpForceCSDebugInfoCreation = v107;
  v108 = v149;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
    v149->LoaderThreads = 1;
  LdrpEnableParallelLoading(v108->LoaderThreads);
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  *p_ApplicationKeyOption = 0;
  if ( v94 )
  {
    v109 = LdrpCorProcessImports(LdrpImageEntry);
LABEL_268:
    ApplicationKeyOption = v109;
    v110 = v109;
    goto LABEL_269;
  }
  LdrpThreadTokenSetMainThreadToken();
  v173 |= 1u;
  LdrpMapAndSnapDependency((__int64)&v171);
  LdrpDrainWorkQueue(1);
  if ( LdrpMainThreadToken )
    LdrpThreadTokenUnsetMainThreadToken();
  v110 = ApplicationKeyOption;
  if ( (ApplicationKeyOption & 0x80000000) == 0 )
  {
    v109 = LdrpPrepareModuleForExecution(LdrpImageEntry, (__int64)p_ApplicationKeyOption);
    goto LABEL_268;
  }
LABEL_269:
  if ( v110 < 0 )
  {
    LODWORD(v119) = v110;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6963LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
      v119);
    return ApplicationKeyOption;
  }
  LdrInitState = 2;
  LODWORD(v24) = LdrpInitializePatchData();
  ApplicationKeyOption = v24;
  if ( (int)v24 < 0 )
    return (unsigned int)v24;
  if ( LdrpIsHotPatchingEnabled )
  {
    PatchImage = LdrpLoadPatchImage(*(_QWORD *)(LdrpImageEntry + 48));
    ApplicationKeyOption = PatchImage;
    if ( PatchImage < 0 )
    {
      LODWORD(v121) = PatchImage;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6995LL,
        (__int64)"LdrpInitializeProcess",
        0LL,
        "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
        LdrpImageEntry + 88,
        v121);
      return ApplicationKeyOption;
    }
  }
  if ( ProcessEnvironmentBlock->BeingDebugged )
    ((void (*)(void))LdrpDoDebuggerBreak)();
  LdrpDropLastInProgressCount();
  if ( Kernel32ThreadInitThunkFunction )
  {
    LODWORD(v24) = Kernel32ThreadInitThunkFunction(1LL, 0LL, 0LL);
    ApplicationKeyOption = v24;
    if ( (int)v24 < 0 )
      return (unsigned int)v24;
    LODWORD(v24) = LdrpInitializePerUserWindowsDirectory((__int64 (__fastcall *)(_BYTE *, __int64))ProcessInformation);
    ApplicationKeyOption = v24;
    if ( (int)v24 < 0 )
      return (unsigned int)v24;
  }
  LdrpProcessInitContextRecord = v145;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  v124 = 0;
  ApplicationKeyOption = LdrpInitializeGraphRecurse(
                           *(__int64 **)(LdrpImageEntry + 152),
                           (__int64)p_ApplicationKeyOption,
                           &v124);
  LdrpReleaseLoaderLock(v112, 9, ApplicationKeyOption);
  LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), (__int64)p_ApplicationKeyOption);
  LdrpDropLastInProgressCount();
  LdrpProcessInitContextRecord = 0LL;
  if ( v176 )
    RtlReleasePath(v175[0]);
  if ( (ApplicationKeyOption & 0x80000000) != 0 )
  {
    LODWORD(v119) = ApplicationKeyOption;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      7126LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
      v119);
    return ApplicationKeyOption;
  }
  LdrpInitializeSmtDelayedSleep();
  if ( *(_WORD *)(LdrpImageEntry + 110) )
  {
    v165 = 72LL;
    v166 = 1;
    v167 = 0LL;
    v168 = 0LL;
    v169 = 0LL;
    v170 = 0LL;
    RtlActivateActivationContextUnsafeFast((__int64)&v165, *(_QWORD *)(LdrpImageEntry + 136));
    LdrpCallTlsInitializers(1u, LdrpImageEntry, v113, v114);
    RtlDeactivateActivationContextUnsafeFast((__int64)&v165);
  }
  if ( g_ShimsEnabled
    && !((unsigned __int8 (__fastcall *)(unsigned __int16 *, __int64))(__ROR8__(
                                                                         g_pfnSE_InstallAfterInit,
                                                                         64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
          &Length,
          v106) )
  {
    g_ShimsEnabled = 0;
    LdrUnloadDll(g_pShimEngineModule);
    g_pShimEngineModule = 0LL;
  }
  PostProcessInitRoutine = ProcessEnvironmentBlock->PostProcessInitRoutine;
  if ( PostProcessInitRoutine )
    PostProcessInitRoutine();
LABEL_291:
  if ( v139 )
    NtClose(v139);
  if ( v133[0] )
    NtClose(v133[0]);
  return 0LL;
}
