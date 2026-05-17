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
 *     RtlInitializeExceptionLog @ 0x18010EAE8 (RtlInitializeExceptionLog.c)
 *     RtlControlStackTraceDataBase @ 0x18010F2A8 (RtlControlStackTraceDataBase.c)
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 *     TpSetDefaultPoolCpuSets @ 0x180126B18 (TpSetDefaultPoolCpuSets.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpInitializeProcess(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // r15d
  NTSTATUS v5; // eax
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
  int v29; // eax
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
  __int64 v43; // r13
  HANDLE v44; // rdx
  bool v45; // r12
  __int64 NtSystemRoot; // rax
  __int16 v47; // r14
  __int64 Heap; // rax
  __int64 v49; // r14
  __int64 v50; // rdx
  int v51; // eax
  int SymbolicLinkObject; // eax
  __int64 v53; // r12
  __m128i v54; // xmm0
  wchar_t *v55; // xmm0_8
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  wchar_t *v60; // r14
  __int64 v61; // rax
  unsigned __int64 v62; // r14
  __int64 v63; // rdx
  unsigned __int64 v64; // r15
  __int64 v65; // rdx
  __int64 v66; // r8
  unsigned __int64 v67; // rdx
  _WORD *v68; // rax
  _WORD *v69; // r9
  __int16 v70; // dx
  __int64 v71; // rax
  unsigned __int64 v72; // rcx
  _QWORD *v73; // rax
  __int64 v74; // rcx
  _QWORD *v75; // rcx
  int v76; // eax
  __int64 ModuleEntry; // rax
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  int v81; // eax
  char v82; // dl
  int v83; // eax
  __int64 v84; // r13
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // r14
  __int64 v88; // r15
  char v89; // r15
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int ProcedureAddressForCaller; // eax
  int LoadedDll; // eax
  unsigned __int64 v96; // rcx
  int v97; // eax
  unsigned int v98; // eax
  int v99; // eax
  int v100; // eax
  __int64 v101; // r14
  char v102; // al
  __int64 v103; // rax
  unsigned int v104; // eax
  int v105; // ecx
  int PatchImage; // eax
  __int64 v107; // rcx
  unsigned __int64 v108; // r8
  unsigned __int64 v109; // r9
  void (*v110)(void); // rax
  __int64 v111; // [rsp+28h] [rbp-3A0h]
  __int64 v112; // [rsp+28h] [rbp-3A0h]
  int *v113; // [rsp+28h] [rbp-3A0h]
  __int64 v114; // [rsp+28h] [rbp-3A0h]
  __int64 v115; // [rsp+30h] [rbp-398h]
  __int64 v116; // [rsp+30h] [rbp-398h]
  __int64 v117; // [rsp+38h] [rbp-390h]
  unsigned int ApplicationKeyOption; // [rsp+50h] [rbp-378h] BYREF
  char v119; // [rsp+54h] [rbp-374h] BYREF
  _BYTE v120[3]; // [rsp+55h] [rbp-373h] BYREF
  int v121; // [rsp+58h] [rbp-370h]
  __int64 v122; // [rsp+60h] [rbp-368h] BYREF
  __int64 **ProcessInformation; // [rsp+68h] [rbp-360h] BYREF
  __int128 v124; // [rsp+70h] [rbp-358h] BYREF
  int v125; // [rsp+80h] [rbp-348h] BYREF
  int v126; // [rsp+84h] [rbp-344h] BYREF
  int v127; // [rsp+88h] [rbp-340h]
  HANDLE v128; // [rsp+90h] [rbp-338h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-328h] BYREF
  __int128 v130; // [rsp+B0h] [rbp-318h] BYREF
  unsigned __int16 v131; // [rsp+C0h] [rbp-308h] BYREF
  __int16 v132; // [rsp+C2h] [rbp-306h]
  unsigned __int64 v133; // [rsp+C8h] [rbp-300h]
  HANDLE v134; // [rsp+D0h] [rbp-2F8h] BYREF
  __m128i v135; // [rsp+E0h] [rbp-2E8h] BYREF
  unsigned int v136; // [rsp+F0h] [rbp-2D8h]
  __int64 v137; // [rsp+F8h] [rbp-2D0h] BYREF
  __int64 v138; // [rsp+100h] [rbp-2C8h] BYREF
  struct _TEB *v139; // [rsp+108h] [rbp-2C0h]
  __int64 v140; // [rsp+110h] [rbp-2B8h]
  UNICODE_STRING v141; // [rsp+120h] [rbp-2A8h] BYREF
  __m128i v142; // [rsp+130h] [rbp-298h] BYREF
  __int64 v143; // [rsp+140h] [rbp-288h]
  __int64 v144; // [rsp+148h] [rbp-280h]
  __int64 v145[2]; // [rsp+150h] [rbp-278h] BYREF
  int v146; // [rsp+160h] [rbp-268h] BYREF
  const WCHAR *v147; // [rsp+168h] [rbp-260h]
  __int64 SystemInformation; // [rsp+170h] [rbp-258h] BYREF
  __int64 v149; // [rsp+178h] [rbp-250h] BYREF
  _DWORD *v150; // [rsp+180h] [rbp-248h] BYREF
  __int64 v151; // [rsp+188h] [rbp-240h] BYREF
  __int64 (*v152)(void); // [rsp+190h] [rbp-238h] BYREF
  int v153; // [rsp+198h] [rbp-230h] BYREF
  int v154; // [rsp+1A0h] [rbp-228h]
  __int64 v155; // [rsp+1A8h] [rbp-220h]
  int *v156; // [rsp+1B0h] [rbp-218h]
  int v157; // [rsp+1B8h] [rbp-210h]
  __int128 v158; // [rsp+1C0h] [rbp-208h]
  _QWORD v159[4]; // [rsp+1D0h] [rbp-1F8h] BYREF
  __int64 v160; // [rsp+1F0h] [rbp-1D8h] BYREF
  int v161; // [rsp+1F8h] [rbp-1D0h]
  __int128 v162; // [rsp+200h] [rbp-1C8h]
  __int128 v163; // [rsp+210h] [rbp-1B8h]
  __int128 v164; // [rsp+220h] [rbp-1A8h]
  __int64 v165; // [rsp+230h] [rbp-198h]
  __m128i v166; // [rsp+240h] [rbp-188h] BYREF
  __int64 *v167; // [rsp+250h] [rbp-178h]
  int v168; // [rsp+260h] [rbp-168h]
  unsigned int *p_ApplicationKeyOption; // [rsp+268h] [rbp-160h]
  __int64 v170[15]; // [rsp+310h] [rbp-B8h] BYREF
  char v171; // [rsp+38Ch] [rbp-3Ch]
  unsigned __int64 retaddr; // [rsp+3C8h] [rbp+0h]

  v122 = a2;
  v140 = a1;
  v146 = 1441812;
  v147 = L"\\KnownDlls";
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
  v139 = v7;
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
  qword_180185EE0 = 0LL;
  qword_180185EF0 = 0LL;
  qword_180185F00 = (__int64)&qword_180185EF8;
  qword_180185EF8 = (__int64)&qword_180185EF8;
  RtlpInitializeNonVolatileFlush();
  v13 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v14 = (_WORD *)(*(_QWORD *)(v13 + 104) + v13);
  if ( (*(_BYTE *)(v13 + 8) & 1) != 0 )
    v14 = *(_WORD **)(v13 + 104);
  v133 = (unsigned __int64)v14;
  v131 = *(_WORD *)(v13 + 96);
  v15 = v131;
  v132 = v131 + 2;
  if ( v131 >= 8u && *v14 == 92 && v14[1] == 63 && v14[2] == 63 && v14[3] == 92 )
  {
    v131 -= 8;
    v132 = v15 - 6;
    v133 = (unsigned __int64)(v14 + 4);
    *(_WORD *)(v13 + 96) -= 8;
    *(_WORD *)(v13 + 98) -= 8;
    *(_QWORD *)(v13 + 104) += 8LL;
  }
  v127 = 1;
  UseCOR = 0;
  LOBYTE(v6) = 0;
  v121 = v6;
  v126 = 0;
  RtlImageNtHeaderEx(3, *(_QWORD *)(ProcessEnvironmentBlock + 16), 0LL, &v138);
  v16 = v138;
  LdrpAppHeaders = v138;
  v17 = 32LL;
  if ( LdrpIsSecureProcess && (*(_BYTE *)(v138 + 22) & 0x20) == 0 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4908LL,
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
  LdrpInitializeExceptionTable(a2);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  LOBYTE(v20) = LdrControlFlowGuardEnforcedWithExportSuppression();
  if ( v20 == 1 )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  v21 = ((unsigned __int64)qword_18019C3B8 >> 4) & 3;
  LdrpEnforceIntegrityContinuity = v21 == 1;
  LdrpAuditIntegrityContinuity = ((v21 - 1) & 0xFD) == 0;
  v22 = LdrpInitializeExecutionOptions(&v131, ProcessEnvironmentBlock, a2, &v134, &v128, (__int64)&v149);
  ApplicationKeyOption = v22;
  if ( v22 < 0 )
  {
    LODWORD(v111) = v7->ClientId.UniqueProcess;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5054LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      v111,
      v22);
    return ApplicationKeyOption;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrinit.c",
    5101LL,
    (__int64)"LdrpInitializeProcess",
    2LL,
    "Initializing process 0x%p\n",
    v7->ClientId.UniqueProcess);
  v143 = 0LL;
  WowTebOffset = v139->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( v16 )
  {
    if ( *(_WORD *)(v16 + 24) == 267 && WowTebOffset <= 0 )
    {
      UseCOR = 1;
      LOBYTE(v6) = 1;
      v121 = v6;
      v4 = 1;
      LODWORD(v24) = LdrpCorFixupImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      ApplicationKeyOption = v24;
      if ( (int)v24 < 0 )
        return (unsigned int)v24;
    }
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v25 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v153, v145);
    v26 = v145[0];
    if ( v25 < 0 )
      v26 = 0LL;
    v145[0] = v26;
    if ( v26 )
    {
      UseCOR = 1;
      v6 = (unsigned __int8)v6;
      if ( (*(_BYTE *)(v26 + 16) & 1) != 0 )
        v6 = 1;
      v121 = v6;
    }
  }
  LdrpSystemDllBase = v122;
  if ( !UseWOW64 )
    v143 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(_QWORD *)(ProcessEnvironmentBlock + 192);
  v27 = RtlNormalizeProcessParams(*(_QWORD *)(ProcessEnvironmentBlock + 32));
  v135 = *(__m128i *)(v27 + 96);
  if ( UseWOW64 || UseCOR && v4 )
    Config = 0LL;
  else
    Config = LdrImageDirectoryEntryToLoadConfig(*(_QWORD *)(ProcessEnvironmentBlock + 16));
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
    RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || (v32 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v33 = 24;
    v125 = 24;
    if ( LdrpIsSecureProcess )
    {
      v34 = -1073741772;
    }
    else
    {
      LOBYTE(v115) = 0;
      v34 = RtlQueryImageFileExecutionOptions(&v131, (__int64)L"StackTraceDatabaseSizeInMb", 4u, (__int64)&v125, 4, 0LL);
      v33 = v125;
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
      5349LL,
      (__int64)"LdrpInitializeProcess",
      2LL,
      "Stack trace database size is %Id Mb\n",
      v35 >> 20);
    v159[0] = 0LL;
    v159[1] = 0LL;
    v159[2] = v35;
    RtlControlStackTraceDataBase(0LL, 24LL, v159);
    v32 = LdrpShouldCreateStackTraceDb;
  }
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || v32 )
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
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &FastPebLock;
  LODWORD(v24) = RtlInitializeHeapManager((__int64)&v131);
  ApplicationKeyOption = v24;
  if ( (int)v24 < 0 )
    return (unsigned int)v24;
  if ( (((unsigned __int64)qword_18019C3B0 >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, 1, 0LL, 0LL);
  v36 = LdrpInitializeProcessHeap(Config, v138, v27);
  v37 = (__int64 *)v36;
  if ( !v36 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5421LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Creating the process heap failed\n");
    return 3221225495LL;
  }
  *(_QWORD *)(ProcessEnvironmentBlock + 48) = v36;
  RtlInitializeCriticalSection((__int64)&LdrpEnclaveListLock);
  qword_180187B88 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  RtlpInitializeThreadActivationContextStack((__int64)v139);
  LdrpHeap = (__int64)v37;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
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
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_1801814A0);
  EtwEventRegister((int)&PrivateLoggerNotificationGuid, 0LL, 0LL, (__int64)&g_hPrivLoggerNotificationProvider);
  EtwEventRegister(
    (int)&UserDiagnosticGuid,
    (__int64)UserDiagnosticProviderCallback,
    0LL,
    (__int64)&g_hUserDiagnosticProvider);
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_180181468);
  EtwEventRegister(
    (int)&WindowsHeapSnapshotProvider,
    (__int64)RtlpHpStackTraceEtwCallback,
    0LL,
    (__int64)&RtlpHpStackTraceProviderHandle);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_180181430);
  LODWORD(v24) = RtlpInitEnvironmentBlock();
  ApplicationKeyOption = v24;
  if ( (int)v24 < 0 )
    return (unsigned int)v24;
  inited = RtlpInitParameterBlock();
  v24 = (unsigned int)inited;
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)v24;
  v43 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v144 = v43;
  v135 = *(__m128i *)(v43 + 96);
  v133 = _mm_srli_si128(v135, 8).m128i_u64[0];
  v44 = v134;
  if ( v134 || v128 )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             (__int64)v128,
                             (__int64)v134,
                             (__int64)L"DebugProcessHeapOnly",
                             4u,
                             (__int64)&v126,
                             4,
                             v115,
                             0LL);
    v45 = 0;
    if ( (ApplicationKeyOption & 0x80000000) == 0 && dword_180181238 && v126 )
    {
      dword_180181238 = 0;
      *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  else
  {
    v45 = 0;
  }
  NtSystemRoot = RtlGetNtSystemRoot(v24, (__int64)v44, v41, v42);
  RtlInitUnicodeStringEx((__int64)&v141, NtSystemRoot);
  v47 = v141.Length + 40;
  Heap = RtlAllocateHeap((__int64)v37, 0, (unsigned int)v141.Length + 38 + 2LL);
  if ( !Heap )
    return 3221225495LL;
  LOWORD(v130) = 0;
  WORD1(v130) = v47;
  *((_QWORD *)&v130 + 1) = Heap;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v130, (const void **)&v141);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v130, &SlashSystem32SlashString);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) == 0 )
  {
    v49 = 48LL;
    v154 = 48;
    v155 = 0LL;
    v157 = 64;
    v156 = &v146;
    v158 = 0LL;
    LdrProtectMrdata(0);
    ApplicationKeyOption = ZwOpenDirectoryObject();
    LdrProtectMrdata(1);
    if ( (ApplicationKeyOption & 0x80000000) != 0 )
    {
      LODWORD(v115) = ApplicationKeyOption;
      v113 = &v146;
      v50 = 5693LL;
LABEL_116:
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        v50,
        (__int64)"LdrpInitializeProcess",
        0LL,
        "Failed to open %wZ with status 0x%08lx\n",
        v113,
        v115);
      return ApplicationKeyOption;
    }
    v154 = 48;
    v155 = LdrpKnownDllDirectoryHandle;
    v157 = 64;
    v156 = dword_180133D90;
    v158 = 0LL;
    v51 = ZwOpenSymbolicLinkObject();
    ApplicationKeyOption = v51;
    if ( v51 < 0 )
    {
      LODWORD(v115) = v51;
      v113 = dword_180133D90;
      v50 = 5716LL;
      goto LABEL_116;
    }
    while ( 1 )
    {
      v53 = RtlAllocateHeap((__int64)v37, 0, v49);
      if ( !v53 )
        return 3221225495LL;
      LdrpKnownDllPath = 0;
      word_180186F72 = v49;
      qword_180186F78 = v53;
      SymbolicLinkObject = NtQuerySymbolicLinkObject();
      ApplicationKeyOption = SymbolicLinkObject;
      if ( SymbolicLinkObject >= 0 )
        break;
      if ( SymbolicLinkObject != -1073741789 )
      {
        LODWORD(v112) = SymbolicLinkObject;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5751LL,
          (__int64)"LdrpInitializeProcess",
          0LL,
          "Querying the known DLL directory link object failed with status 0x%08lx\n",
          v112);
        return ApplicationKeyOption;
      }
      RtlFreeHeap((__int64)v37, 0, v53);
      v49 = v136;
    }
    NtClose((HANDLE)v145[1]);
    v45 = 0;
  }
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = v141;
  }
  else
  {
    v54 = *(__m128i *)(v43 + 56);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v43 + 56);
    v55 = (wchar_t *)_mm_srli_si128(v54, 8).m128i_u64[0];
    UnicodeString.Buffer = v55;
    if ( !v55 || !UnicodeString.Length || !*v55 )
    {
      v60 = (wchar_t *)RtlAllocateHeap((__int64)v37, 0, 8LL);
      UnicodeString.Buffer = v60;
      if ( !v60 )
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5798LL,
          (__int64)"LdrpInitializeProcess",
          0LL,
          "Allocating a buffer to hold the current working directory failed\n");
        return 3221225495LL;
      }
      v127 = 0;
      v61 = RtlGetNtSystemRoot(v57, v56, v58, v59);
      *(_DWORD *)v60 = *(_DWORD *)v61;
      v60[2] = *(_WORD *)(v61 + 4);
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  v62 = (unsigned __int16)v130;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    v45 = LdrpIncludeAlternateForwarders();
    v62 = 2 * v63 + 22;
    if ( v45 )
      v62 = v63 + 2 * v63 + 52;
  }
  v64 = v62;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v64 = v62 + 2 * (v141.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v43 + 80) = 0;
  }
  *((_QWORD *)&v124 + 1) = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v64);
  if ( !*((_QWORD *)&v124 + 1) )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5889LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Failed to allocate the system dirs string!\n");
    return 3221225495LL;
  }
  LOWORD(v124) = 0;
  WORD1(v124) = v64;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v124, (const void **)&v130);
  v65 = (unsigned __int16)v124;
  *(_WORD *)(*((_QWORD *)&v124 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v124 >> 1) - 2) = 59;
  RtlpSystem32Dirs = v124;
  LdrpSystem32 = v124;
  LOWORD(v65) = v65 - 2;
  LOWORD(LdrpSystem32) = v65;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    if ( v45 )
    {
      RtlAppendUnicodeStringToString((unsigned __int16 *)&v124, (const void **)&v130);
      RtlAppendUnicodeToString((unsigned __int16 *)&v124, L"forwarders\\alt;");
    }
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v124, (const void **)&v130);
    RtlAppendUnicodeToString((unsigned __int16 *)&v124, L"forwarders;");
  }
  if ( v64 > v62 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v124, (const void **)&v141);
    RtlAppendUnicodeToString((unsigned __int16 *)&v124, L"\\system;");
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v124, (const void **)&v141);
    RtlAppendUnicodeToString((unsigned __int16 *)&v124, L";");
    RtlpSystemDirs = v124;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&v135, v65);
  LODWORD(v24) = LdrpInitializeNtdllDataTableEntry(v122, &LdrpNtDllDataTableEntry, 0LL, 0LL, &v130);
  ApplicationKeyOption = v24;
  if ( (int)v24 < 0 )
    return (unsigned int)v24;
  v66 = 0LL;
  v67 = v135.m128i_i64[1] + v135.m128i_u16[0];
  v68 = (_WORD *)v67;
  if ( v67 && v67 > v135.m128i_i64[1] )
  {
    while ( 1 )
    {
      v69 = v68--;
      if ( *v68 == 92 )
        break;
      if ( (unsigned __int64)v68 <= v135.m128i_i64[1] )
        goto LABEL_158;
    }
    v66 = (__int64)v69;
  }
LABEL_158:
  if ( v66 )
  {
    v70 = v67 - v66;
    v142.m128i_i16[0] = v70;
    if ( v135.m128i_u16[1] - (unsigned __int64)v135.m128i_u16[0] >= 2 )
      v70 += 2;
    v142.m128i_i16[1] = v70;
    v142.m128i_i64[1] = v66;
  }
  else
  {
    v142 = v135;
  }
  v71 = LdrpNtdllHotPatchContext;
  if ( *(_WORD *)LdrpNtdllHotPatchContext )
  {
    LdrpLogEtwHotPatchStatus(
      (unsigned __int16 *)&v142,
      LdrpNtDllDataTableEntry,
      (unsigned __int16 *)LdrpNtdllHotPatchContext,
      *(_DWORD *)(LdrpNtdllHotPatchContext + 544),
      0);
    v71 = LdrpNtdllHotPatchContext;
  }
  if ( *(int *)(v71 + 544) < 0 )
    __fastfail(0x45u);
  v137 = 0LL;
  v72 = *(_QWORD *)(v71 + 536);
  if ( v72 )
  {
    LODWORD(v24) = LdrpInitializeNtdllDataTableEntry(v72, &v137, LdrpNtDllDataTableEntry, (unsigned __int16 *)v71, 0LL);
    ApplicationKeyOption = v24;
    if ( (int)v24 < 0 )
      return (unsigned int)v24;
  }
  RtlInitializeHistoryTable();
  v73 = (_QWORD *)(LdrpNtDllDataTableEntry + 32);
  v74 = qword_180187470;
  if ( *(__int64 **)(qword_180187470 + 8) != &qword_180187470 )
    goto LABEL_295;
  *v73 = qword_180187470;
  v73[1] = &qword_180187470;
  *(_QWORD *)(v74 + 8) = v73;
  qword_180187470 = (__int64)v73;
  if ( !v137 )
    goto LABEL_173;
  v75 = (_QWORD *)(v137 + 32);
  if ( (__int64 *)v73[1] != &qword_180187470 )
LABEL_295:
    __fastfail(3u);
  *v75 = v73;
  v75[1] = &qword_180187470;
  v73[1] = v75;
  qword_180187470 = (__int64)v75;
LABEL_173:
  v76 = LdrpInitParallelLoadingSupport();
  ApplicationKeyOption = v76;
  if ( v76 < 0 )
  {
    LODWORD(v112) = v76;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6126LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Failed to initialize Parallel loader, st = 0x%x\n",
      v112);
    return ApplicationKeyOption;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, v170);
  memset_thunk_772440563353939046(&v166, 0, 0xC8uLL);
  v167 = v170;
  v168 = 512;
  v166 = v135;
  p_ApplicationKeyOption = &ApplicationKeyOption;
  ModuleEntry = LdrpAllocateModuleEntry((__int64)&v166);
  if ( !ModuleEntry )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6147LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Allocating a data table entry for the executable failed\n");
    return 3221225495LL;
  }
  LdrpImageEntry = ModuleEntry;
  v78 = 2LL;
  do
  {
    v79 = LdrpImageEntry;
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v78;
  }
  while ( v78 );
  *(_WORD *)(**(_QWORD **)(v79 + 152) - 52LL) = -1;
  v80 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = v135;
  v81 = *(_DWORD *)(v80 + 104) | 4;
  *(_DWORD *)(v80 + 104) = v81;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x10) != 0 )
  {
    v81 |= 1u;
    *(_DWORD *)(v80 + 104) = v81;
  }
  v82 = v121;
  if ( UseCOR )
  {
    v83 = v81 | 0x400000;
    *(_DWORD *)(v80 + 104) = v83;
    if ( v82 )
      *(_DWORD *)(v80 + 104) = v83 | 0x1000000;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(v80 + 248) = 0LL;
  *(__m128i *)(v80 + 88) = v142;
  v84 = v138;
  if ( *(_QWORD *)(v138 + 48) != *(_QWORD *)(ProcessEnvironmentBlock + 16) && !v82 && !UseWOW64 )
  {
    LODWORD(v24) = LdrpProtectAndRelocateImage(*(const void **)(ProcessEnvironmentBlock + 16));
    ApplicationKeyOption = v24;
    if ( (int)v24 < 0 )
      return (unsigned int)v24;
    v80 = LdrpImageEntry;
  }
  *(_QWORD *)(v80 + 48) = *(_QWORD *)(ProcessEnvironmentBlock + 16);
  LdrpInsertDataTableEntry(v80);
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrinit.c",
    6234LL,
    (__int64)"LdrpInitializeProcess",
    2LL,
    "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
    LdrpImageEntry + 88,
    LdrpImageEntry + 72,
    &UnicodeString,
    &LdrpAppPackagesPath);
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpImageEntry, (_DWORD *)v84);
  LODWORD(v24) = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0);
  ApplicationKeyOption = v24;
  if ( (int)v24 < 0 )
    return (unsigned int)v24;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v85 = RtlpInitCurrentDir((__int64)&UnicodeString);
  ApplicationKeyOption = v85;
  if ( v85 < 0 )
  {
    LODWORD(v116) = v85;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6271LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
      &UnicodeString,
      v116);
  }
  if ( !v127 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v86 = LdrpAllocateModuleEntry(0LL);
    v87 = v86;
    if ( !v86 )
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6294LL,
        (__int64)"LdrpInitializeProcess",
        0LL,
        "Allocating a data table entry for the application verifier DLL failed\n");
      return 3221225495LL;
    }
    *(_DWORD *)(*(_QWORD *)(v86 + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(v86 + 152) - 52LL) = -1;
    v88 = v149;
    *(_DWORD *)(v86 + 104) |= *(_DWORD *)(v149 + 104);
    *(_QWORD *)(v86 + 248) = *(_QWORD *)(v88 + 248);
    *(_WORD *)(v86 + 110) = 0;
    *(_OWORD *)(v86 + 72) = *(_OWORD *)(v88 + 72);
    *(_OWORD *)(v86 + 88) = *(_OWORD *)(v88 + 88);
    *(_DWORD *)(v86 + 128) = *(_DWORD *)(v88 + 128);
    *(_DWORD *)(v86 + 288) = *(_DWORD *)(v88 + 288);
    *(_QWORD *)(v86 + 48) = *(_QWORD *)(v88 + 48);
    LdrpInsertDataTableEntry(v86);
    LdrpLogDllState(*(_QWORD *)(v87 + 48), v87 + 72, 0x14A5u);
    LODWORD(v24) = RtlImageNtHeaderEx(3, *(_QWORD *)(v87 + 48), 0LL, &v150);
    ApplicationKeyOption = v24;
    if ( (int)v24 < 0 )
      return (unsigned int)v24;
    LdrpInsertModuleToIndex(v87, v150);
    LODWORD(v24) = LdrpProcessMappedModule(v87, 0, 1);
    ApplicationKeyOption = v24;
    if ( (int)v24 < 0 )
      return (unsigned int)v24;
    *(_QWORD *)(v87 + 56) = *(_QWORD *)(v88 + 56);
    LdrpLogDllState(*(_QWORD *)(v87 + 48), v87 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v87 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
    {
      LODWORD(v24) = AVrfInitializeVerifier(0, 0, 0, 1, v122, 0LL);
      ApplicationKeyOption = v24;
      if ( (int)v24 >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v87 + 152) + 56LL) = 9;
        LODWORD(v24) = ApplicationKeyOption;
      }
    }
    else
    {
      v120[0] = 0;
      LODWORD(v24) = LdrpInitializeGraphRecurse(*(__int64 **)(v87 + 152), 0LL, v120);
      ApplicationKeyOption = v24;
    }
    if ( (int)v24 < 0 )
      return (unsigned int)v24;
  }
  LdrpDropLastInProgressCount();
  if ( UseWOW64 )
  {
    if ( v134 )
    {
      NtClose(v134);
      v134 = 0LL;
      if ( LdrpLargePageDllKeyHandle )
      {
        NtClose(LdrpLargePageDllKeyHandle);
        LdrpLargePageDllKeyHandle = 0LL;
      }
    }
    if ( v128 )
    {
      NtClose(v128);
      v128 = 0LL;
    }
    LODWORD(v24) = LdrpLoadWow64((const void **)&v130);
    ApplicationKeyOption = v24;
    if ( (int)v24 >= 0 )
    {
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        LdrpDoDebuggerBreak();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
      g_LdrpWow64LdrpInitialize(v140);
      goto LABEL_290;
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
    v89 = v121;
    if ( (_BYTE)v121 )
    {
      LODWORD(v24) = LdrpCorValidateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      ApplicationKeyOption = v24;
      if ( (int)v24 < 0 )
        return (unsigned int)v24;
    }
    if ( (v139->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v140 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  else
  {
    v89 = v121;
  }
  v90 = LdrpInitializeTls();
  ApplicationKeyOption = v90;
  if ( v90 < 0 )
  {
    LODWORD(v114) = v90;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6533LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Initializing TLS slots failed with status 0x%08lx\n",
      v114);
    return ApplicationKeyOption;
  }
  if ( ProcessInformation )
  {
    v119 = 0;
    v91 = LdrpInitializeGraphRecurse(ProcessInformation[19], 0LL, &v119);
    ApplicationKeyOption = v91;
    if ( v91 < 0 )
    {
      LODWORD(v114) = v91;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6552LL,
        (__int64)"LdrpInitializeProcess",
        0LL,
        "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
        v114);
      return ApplicationKeyOption;
    }
  }
  v92 = LdrpInitializeImportRedirection();
  ApplicationKeyOption = v92;
  if ( v92 < 0 )
  {
    LODWORD(v114) = v92;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6568LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Loading of import redirection module failed with status 0x%08x\n",
      v114);
    return ApplicationKeyOption;
  }
  ProcessInformation = 0LL;
  if ( (unsigned __int16)(*(_WORD *)(v84 + 92) - 2) <= 1u )
  {
    v93 = LdrLoadDll(16385LL, 0LL, (__int64)LdrpKernel32DllName, &v122);
    ApplicationKeyOption = v93;
    if ( v93 < 0 )
    {
      if ( v93 != -1073741515 )
      {
        LODWORD(v116) = v93;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6726LL,
          (__int64)"LdrpInitializeProcess",
          0LL,
          "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
          LdrpKernel32DllName,
          v116);
        return ApplicationKeyOption;
      }
      v97 = LdrLoadDll(16385LL, 0LL, (__int64)&LdrpKernelbaseDllName, &v122);
      ApplicationKeyOption = v97;
      if ( v97 < 0 )
      {
        LODWORD(v116) = v97;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6699LL,
          (__int64)"LdrpInitializeProcess",
          0LL,
          "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
          &LdrpKernelbaseDllName,
          v116);
        return ApplicationKeyOption;
      }
      v98 = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = v98;
      if ( (int)(v98 + 0x80000000) >= 0 && v98 != -1073741515 )
      {
        LODWORD(v114) = v98;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6715LL,
          (__int64)"LdrpInitializeProcess",
          0LL,
          "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
          v114);
        return ApplicationKeyOption;
      }
      ApplicationKeyOption = 0;
      v96 = v122;
    }
    else
    {
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                    v122,
                                    &qword_180133DA0,
                                    0,
                                    &Kernel32ThreadInitThunkFunction,
                                    0,
                                    retaddr);
      ApplicationKeyOption = ProcedureAddressForCaller;
      if ( ProcedureAddressForCaller < 0 )
      {
        LODWORD(v117) = ProcedureAddressForCaller;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6613LL,
          (__int64)"LdrpInitializeProcess",
          0LL,
          "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
          &qword_180133DA0,
          LdrpKernel32DllName,
          v117);
        return ApplicationKeyOption;
      }
      LdrGetProcedureAddressForCaller(v122, &qword_180133DC0, 0, &ProcessInformation, 0, retaddr);
      LODWORD(v24) = LdrpSnapKernelBaseExtensions();
      ApplicationKeyOption = v24;
      if ( (int)v24 < 0 )
        return (unsigned int)v24;
      LODWORD(v24) = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = v24;
      if ( (int)v24 < 0 )
        return (unsigned int)v24;
      LoadedDll = LdrpFindLoadedDll((__int64)&LdrpKernelbaseDllName, 0, &v151);
      ApplicationKeyOption = LoadedDll;
      if ( LoadedDll < 0 )
      {
        LODWORD(v116) = LoadedDll;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6681LL,
          (__int64)"LdrpInitializeProcess",
          0LL,
          "Finding \"%wZ\" failed with status 0x%08lx\n",
          &LdrpKernelbaseDllName,
          v116);
        return ApplicationKeyOption;
      }
      v96 = *(_QWORD *)(v151 + 48);
    }
    v99 = LdrGetProcedureAddressForCaller(v96, &qword_180133DE0, 0, &v152, 0, retaddr);
    ApplicationKeyOption = v99;
    if ( v99 < 0 )
    {
      LODWORD(v114) = v99;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6744LL,
        (__int64)"LdrpInitializeProcess",
        0LL,
        "Finding KernelbasePostInit failed with status 0x%08lx\n",
        v114);
      return ApplicationKeyOption;
    }
    v100 = v152();
    ApplicationKeyOption = v100;
    if ( v100 < 0 )
    {
      LODWORD(v114) = v100;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6752LL,
        (__int64)"LdrpInitializeProcess",
        0LL,
        "Calling KernelbasePostInit failed with status 0x%08lx\n",
        v114);
      return ApplicationKeyOption;
    }
    ApplicationKeyOption = 0;
  }
  LdrpDrainWorkQueue(0);
  SbObtainTraceHandle(0LL);
  v101 = v143;
  if ( v143 && *(_DWORD *)(v143 + 528) )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
    LdrpInitShimEngine(v101);
  }
  v102 = RtlpForceCSDebugInfoCreation;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v102 = 1;
  RtlpForceCSDebugInfoCreation = v102;
  v103 = v144;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
    *(_DWORD *)(v144 + 1036) = 1;
  LdrpEnableParallelLoading(*(_DWORD *)(v103 + 1036));
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  *p_ApplicationKeyOption = 0;
  if ( v89 )
  {
    v104 = LdrpCorProcessImports(LdrpImageEntry);
LABEL_267:
    ApplicationKeyOption = v104;
    v105 = v104;
    goto LABEL_268;
  }
  LdrpThreadTokenSetMainThreadToken();
  v168 |= 1u;
  LdrpMapAndSnapDependency((__int64)&v166);
  LdrpDrainWorkQueue(1);
  if ( LdrpMainThreadToken )
    LdrpThreadTokenUnsetMainThreadToken();
  v105 = ApplicationKeyOption;
  if ( (ApplicationKeyOption & 0x80000000) == 0 )
  {
    v104 = LdrpPrepareModuleForExecution(LdrpImageEntry, (__int64)p_ApplicationKeyOption);
    goto LABEL_267;
  }
LABEL_268:
  if ( v105 < 0 )
  {
    LODWORD(v114) = v105;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6969LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
      v114);
    return ApplicationKeyOption;
  }
  LdrInitState = 2;
  LODWORD(v24) = LdrpInitializePatchData();
  ApplicationKeyOption = v24;
  if ( (int)v24 < 0 )
    return (unsigned int)v24;
  if ( LdrpIsHotPatchingEnabled )
  {
    PatchImage = LdrpLoadPatchImage(*(const void **)(LdrpImageEntry + 48));
    ApplicationKeyOption = PatchImage;
    if ( PatchImage < 0 )
    {
      LODWORD(v116) = PatchImage;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        7001LL,
        (__int64)"LdrpInitializeProcess",
        0LL,
        "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
        LdrpImageEntry + 88,
        v116);
      return ApplicationKeyOption;
    }
  }
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    LdrpDoDebuggerBreak();
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
  LdrpProcessInitContextRecord = v140;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  v119 = 0;
  ApplicationKeyOption = LdrpInitializeGraphRecurse(
                           *(__int64 **)(LdrpImageEntry + 152),
                           (__int64)p_ApplicationKeyOption,
                           &v119);
  LdrpReleaseLoaderLock(v107, 9, ApplicationKeyOption);
  LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), (__int64)p_ApplicationKeyOption);
  LdrpDropLastInProgressCount();
  LdrpProcessInitContextRecord = 0LL;
  if ( v171 )
    RtlReleasePath(v170[0]);
  if ( (ApplicationKeyOption & 0x80000000) != 0 )
  {
    LODWORD(v114) = ApplicationKeyOption;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      7132LL,
      (__int64)"LdrpInitializeProcess",
      0LL,
      "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
      v114);
    return ApplicationKeyOption;
  }
  LdrpInitializeSmtDelayedSleep();
  if ( *(_WORD *)(LdrpImageEntry + 110) )
  {
    v160 = 72LL;
    v161 = 1;
    v162 = 0LL;
    v163 = 0LL;
    v164 = 0LL;
    v165 = 0LL;
    RtlActivateActivationContextUnsafeFast((__int64)&v160, *(_QWORD *)(LdrpImageEntry + 136));
    LdrpCallTlsInitializers(1u, LdrpImageEntry, v108, v109);
    RtlDeactivateActivationContextUnsafeFast((__int64)&v160);
  }
  if ( g_ShimsEnabled
    && !((unsigned __int8 (__fastcall *)(unsigned __int16 *, __int64))(__ROR8__(
                                                                         g_pfnSE_InstallAfterInit,
                                                                         64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
          &v131,
          v101) )
  {
    g_ShimsEnabled = 0;
    LdrUnloadDll(g_pShimEngineModule);
    g_pShimEngineModule = 0LL;
  }
  v110 = *(void (**)(void))(ProcessEnvironmentBlock + 560);
  if ( v110 )
    v110();
LABEL_290:
  if ( v134 )
    NtClose(v134);
  if ( v128 )
    NtClose(v128);
  return 0LL;
}
