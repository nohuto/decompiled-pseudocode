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

int __fastcall LdrpInitializeProcess(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  int v4; // r15d
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r13d
  struct _TEB *v9; // rdi
  __int64 ProcessEnvironmentBlock; // rsi
  int v11; // eax
  bool v12; // cc
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  _WORD *v16; // rcx
  unsigned __int16 v17; // r8
  __int64 v18; // r14
  __int64 v19; // rcx
  int result; // eax
  _QWORD *v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  char v25; // al
  int v26; // eax
  int WowTebOffset; // ecx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r13
  unsigned int *Config; // r15
  unsigned int v32; // eax
  char v33; // al
  _QWORD *v34; // r8
  __int64 v35; // r9
  int v36; // ecx
  char v37; // al
  unsigned int v38; // eax
  int v39; // ecx
  unsigned __int64 v40; // r14
  __int64 v41; // rax
  __int64 *v42; // r15
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // rdx
  int v49; // r14d
  __int64 v50; // r13
  bool v51; // r12
  __int64 NtSystemRoot; // rax
  __int16 v53; // r14
  __int64 Heap; // rax
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r8
  unsigned __int64 v57; // r9
  __int64 v58; // r14
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // r8
  unsigned __int64 v61; // r9
  int v62; // edx
  int v63; // eax
  int SymbolicLinkObject; // eax
  __int64 v65; // r12
  __m128i v66; // xmm0
  wchar_t *v67; // xmm0_8
  wchar_t *v68; // r14
  __int64 v69; // rax
  unsigned __int64 v70; // r14
  __int64 v71; // rdx
  unsigned __int64 v72; // r15
  __int64 v73; // rdx
  unsigned __int64 v74; // r9
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // rdx
  _WORD *v77; // rax
  __int64 v78; // rax
  unsigned __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  _QWORD *v82; // rax
  __int64 v83; // rcx
  _QWORD *v84; // rcx
  int inited; // eax
  __int64 ModuleEntry; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  int v89; // eax
  char v90; // r8
  int v91; // eax
  const void *v92; // rax
  const void *v93; // rdx
  __int64 v94; // r13
  unsigned __int64 v95; // r8
  unsigned __int64 v96; // r9
  int v97; // eax
  __int64 v98; // rax
  __int64 v99; // r14
  __int64 v100; // r15
  unsigned __int64 v101; // r8
  unsigned __int64 v102; // r9
  char v103; // r12
  int v104; // eax
  int v105; // eax
  int v106; // eax
  int Dll; // eax
  int ProcedureAddressForCaller; // eax
  int LoadedDll; // eax
  unsigned __int64 v110; // rcx
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  __int64 v115; // r14
  char v116; // al
  unsigned int v117; // ecx
  int v118; // eax
  int PatchImage; // eax
  __int64 v120; // r9
  __int64 v121; // rcx
  unsigned __int64 v122; // rdx
  unsigned __int64 v123; // r8
  unsigned __int64 v124; // r9
  void (*v125)(void); // rax
  __int64 v126; // [rsp+28h] [rbp-390h]
  __int64 v127; // [rsp+28h] [rbp-390h]
  int *v128; // [rsp+28h] [rbp-390h]
  __int64 v129; // [rsp+28h] [rbp-390h]
  __int64 v130; // [rsp+30h] [rbp-388h]
  __int64 v131; // [rsp+30h] [rbp-388h]
  __int64 v132; // [rsp+38h] [rbp-380h]
  int ApplicationKeyOption; // [rsp+50h] [rbp-368h] BYREF
  char v134; // [rsp+54h] [rbp-364h] BYREF
  _BYTE v135[3]; // [rsp+55h] [rbp-363h] BYREF
  int v136; // [rsp+58h] [rbp-360h]
  __int64 v137; // [rsp+60h] [rbp-358h] BYREF
  __int64 **ProcessInformation; // [rsp+68h] [rbp-350h] BYREF
  __int128 v139; // [rsp+70h] [rbp-348h] BYREF
  int v140; // [rsp+80h] [rbp-338h] BYREF
  int v141; // [rsp+84h] [rbp-334h] BYREF
  int v142; // [rsp+88h] [rbp-330h]
  HANDLE v143; // [rsp+90h] [rbp-328h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-318h] BYREF
  __int128 v145; // [rsp+B0h] [rbp-308h] BYREF
  unsigned __int16 v146; // [rsp+C0h] [rbp-2F8h] BYREF
  __int16 v147; // [rsp+C2h] [rbp-2F6h]
  unsigned __int64 v148; // [rsp+C8h] [rbp-2F0h]
  HANDLE v149; // [rsp+D0h] [rbp-2E8h] BYREF
  __m128i v150; // [rsp+E0h] [rbp-2D8h] BYREF
  unsigned int v151; // [rsp+F0h] [rbp-2C8h]
  __int64 v152; // [rsp+F8h] [rbp-2C0h] BYREF
  struct _TEB *v153; // [rsp+100h] [rbp-2B8h]
  __int64 v154; // [rsp+108h] [rbp-2B0h]
  UNICODE_STRING v155; // [rsp+110h] [rbp-2A8h] BYREF
  __m128i v156; // [rsp+120h] [rbp-298h] BYREF
  HANDLE Handle; // [rsp+130h] [rbp-288h]
  _QWORD *v158; // [rsp+138h] [rbp-280h] BYREF
  __int64 v159; // [rsp+140h] [rbp-278h]
  __int64 v160; // [rsp+148h] [rbp-270h]
  __int64 v161; // [rsp+150h] [rbp-268h] BYREF
  int v162; // [rsp+158h] [rbp-260h] BYREF
  const WCHAR *v163; // [rsp+160h] [rbp-258h]
  __int64 SystemInformation; // [rsp+168h] [rbp-250h] BYREF
  __int64 v165; // [rsp+170h] [rbp-248h] BYREF
  _DWORD *v166; // [rsp+178h] [rbp-240h] BYREF
  __int64 v167; // [rsp+180h] [rbp-238h] BYREF
  __int64 (*v168)(void); // [rsp+188h] [rbp-230h] BYREF
  int v169; // [rsp+190h] [rbp-228h] BYREF
  int v170; // [rsp+198h] [rbp-220h]
  __int64 v171; // [rsp+1A0h] [rbp-218h]
  int *v172; // [rsp+1A8h] [rbp-210h]
  int v173; // [rsp+1B0h] [rbp-208h]
  __int128 v174; // [rsp+1B8h] [rbp-200h]
  _QWORD v175[3]; // [rsp+1C8h] [rbp-1F0h] BYREF
  __int64 v176; // [rsp+1E0h] [rbp-1D8h] BYREF
  int v177; // [rsp+1E8h] [rbp-1D0h]
  __int128 v178; // [rsp+1F0h] [rbp-1C8h]
  __int128 v179; // [rsp+200h] [rbp-1B8h]
  __int128 v180; // [rsp+210h] [rbp-1A8h]
  __int64 v181; // [rsp+220h] [rbp-198h]
  _OWORD v182[13]; // [rsp+230h] [rbp-188h] BYREF
  __int64 v183[15]; // [rsp+300h] [rbp-B8h] BYREF
  char v184; // [rsp+37Ch] [rbp-3Ch]
  unsigned __int64 retaddr; // [rsp+3B8h] [rbp+0h]

  v137 = a2;
  v154 = a1;
  v162 = 1441812;
  v163 = L"\\KnownDlls";
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
      RtlRaiseStatus(v5, v6, v7);
    v3 = (unsigned int)ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = (int)ProcessInformation;
  }
  v8 = 63;
  RtlpUnhandledExceptionFilter = __ROR8__(v3, v3 & 0x3F);
  v9 = NtCurrentTeb();
  v153 = v9;
  ProcessEnvironmentBlock = (__int64)v9->ProcessEnvironmentBlock;
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
  v11 = 0;
  v12 = *(_DWORD *)(ProcessEnvironmentBlock + 184) <= 1u;
  if ( *(_DWORD *)(ProcessEnvironmentBlock + 184) > 1u )
    v11 = 10240;
  SRWLockSpinCycleCount = v11;
  v13 = 0;
  if ( !v12 )
    v13 = 10240;
  ConditionVariableSpinCycleCount = v13;
  v14 = 0;
  if ( !v12 )
    v14 = 10240;
  RtlpWaitOnAddressSpinCycleCount = v14;
  memset(&RtlpFcProcessManager, 0, 0xE8uLL);
  memset(&unk_180178B80, 0, 0xA0uLL);
  memset(qword_180178B68, 0, 0xA8uLL);
  qword_180178C20 = 0LL;
  qword_180178C30 = 0LL;
  qword_180178C40 = (__int64)&qword_180178C38;
  qword_180178C38 = (__int64)&qword_180178C38;
  RtlpInitializeNonVolatileFlush();
  v15 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v16 = (_WORD *)(*(_QWORD *)(v15 + 104) + v15);
  if ( (*(_BYTE *)(v15 + 8) & 1) != 0 )
    v16 = *(_WORD **)(v15 + 104);
  v148 = (unsigned __int64)v16;
  v146 = *(_WORD *)(v15 + 96);
  v17 = v146;
  v147 = v146 + 2;
  if ( v146 >= 8u && *v16 == 92 && v16[1] == 63 && v16[2] == 63 && v16[3] == 92 )
  {
    v146 -= 8;
    v147 = v17 - 6;
    v148 = (unsigned __int64)(v16 + 4);
    *(_WORD *)(v15 + 96) -= 8;
    *(_WORD *)(v15 + 98) -= 8;
    *(_QWORD *)(v15 + 104) += 8LL;
  }
  v142 = 1;
  UseCOR = 0;
  LOBYTE(v8) = 0;
  v136 = v8;
  v141 = 0;
  RtlImageNtHeaderEx(3, *(_QWORD *)(ProcessEnvironmentBlock + 16), 0LL, &v152);
  v18 = v152;
  LdrpAppHeaders = v152;
  v19 = 32LL;
  if ( LdrpIsSecureProcess && (*(_BYTE *)(v152 + 22) & 0x20) == 0 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4800,
      (__int64)"LdrpInitializeProcess",
      0,
      "Secure processes must be large address aware\n");
    return -1073741637;
  }
  v21 = &LdrpHashTable;
  do
  {
    v21[1] = v21;
    *v21 = v21;
    v21 += 2;
    --v19;
  }
  while ( v19 );
  LdrpInitializeExceptionTable(a2);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1, v22, v23, v24);
  if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  v25 = ((unsigned __int64)qword_18018F398 >> 4) & 3;
  LdrpEnforceIntegrityContinuity = v25 == 1;
  LdrpAuditIntegrityContinuity = ((v25 - 1) & 0xFD) == 0;
  v26 = LdrpInitializeExecutionOptions(&v146, ProcessEnvironmentBlock, a2, &v149, &v143, (__int64)&v165);
  ApplicationKeyOption = v26;
  if ( v26 < 0 )
  {
    LODWORD(v126) = v9->ClientId.UniqueProcess;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4946,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      v126,
      v26);
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
    v9->ClientId.UniqueProcess);
  v159 = 0LL;
  WowTebOffset = v153->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( v18 )
  {
    if ( *(_WORD *)(v18 + 24) == 267 && WowTebOffset <= 0 )
    {
      UseCOR = 1;
      LOBYTE(v8) = 1;
      v136 = v8;
      v4 = 1;
      result = LdrpCorFixupImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
    }
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v28 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v169, (__int64)&v161);
    v29 = v161;
    if ( v28 < 0 )
      v29 = 0LL;
    v161 = v29;
    if ( v29 )
    {
      UseCOR = 1;
      v8 = (unsigned __int8)v8;
      if ( (*(_BYTE *)(v29 + 16) & 1) != 0 )
        v8 = 1;
      v136 = v8;
    }
  }
  LdrpSystemDllBase = v137;
  if ( !UseWOW64 )
    v159 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(_QWORD *)(ProcessEnvironmentBlock + 192);
  v30 = RtlNormalizeProcessParams(*(_QWORD *)(ProcessEnvironmentBlock + 32));
  if ( UseWOW64 || UseCOR && v4 )
    Config = 0LL;
  else
    Config = LdrImageDirectoryEntryToLoadConfig(*(_QWORD *)(ProcessEnvironmentBlock + 16));
  if ( Config )
  {
    v32 = *Config;
    if ( *Config >= 0x10 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) &= ~Config[3];
      v32 = *Config;
    }
    if ( v32 >= 0x14 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) |= Config[4];
      v32 = *Config;
    }
    if ( v32 >= 0x18 && Config[5] )
      RtlpTimeout = -10000LL * (int)Config[5];
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  v33 = RtlpTimeoutDisable;
  if ( RtlpTimeout < -36000000000LL )
    v33 = 1;
  RtlpTimeoutDisable = v33;
  RtlFailedCriticalDebugAllocations = 0;
  RtlInitializeSListHead(&RtlCriticalSectionDebugSList);
  v34 = &RtlpStaticDebugInfo;
  do
  {
    *v34 = v34 + 6;
    v34 += 6;
  }
  while ( v34 <= qword_180178FC0 );
  *v34 = 0LL;
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
    RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  v36 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
  if ( (v36 & 0x1000) != 0 || (v37 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v38 = 24;
    v140 = 24;
    if ( LdrpIsSecureProcess )
    {
      v39 = -1073741772;
    }
    else
    {
      LOBYTE(v130) = 0;
      v39 = RtlQueryImageFileExecutionOptions(&v146, (__int64)L"StackTraceDatabaseSizeInMb", 4u, (__int64)&v140, 4, 0LL);
      v38 = v140;
    }
    if ( v39 < 0 || v38 < 0x18 )
    {
      v40 = 25165824LL;
    }
    else if ( v38 <= 0x80 )
    {
      v40 = v38 << 20;
    }
    else
    {
      v40 = 0x8000000LL;
    }
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5241,
      (__int64)"LdrpInitializeProcess",
      2u,
      "Stack trace database size is %Id Mb\n",
      v40 >> 20);
    v175[0] = 0LL;
    v175[1] = 0LL;
    v175[2] = v40;
    RtlControlStackTraceDataBase(0LL, 24LL, v175);
    v36 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
    v37 = LdrpShouldCreateStackTraceDb;
  }
  if ( (v36 & 0x1000) != 0 || v37 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    RtlpForceCSDebugInfoCreation = 1;
    RtlpForceCSToUseEvents = 1;
  }
  result = RtlInitializeCriticalSectionEx((__int64)&FastPebLock, 0LL, 0LL, v35);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &FastPebLock;
  result = RtlInitializeHeapManager((__int64)&v146);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  if ( (((unsigned __int64)qword_18018F390 >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, 1, 0LL, 0LL);
  v41 = LdrpInitializeProcessHeap(Config, v152, v30);
  v42 = (__int64 *)v41;
  if ( !v41 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5313,
      (__int64)"LdrpInitializeProcess",
      0,
      "Creating the process heap failed\n");
    return -1073741801;
  }
  *(_QWORD *)(ProcessEnvironmentBlock + 48) = v41;
  RtlInitializeCriticalSection((__int64)&LdrpEnclaveListLock);
  qword_18017A888 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  RtlpInitializeThreadActivationContextStack((__int64)v153);
  LdrpHeap = (__int64)v42;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646, v43, v44);
  EtwpFreeRegistrationList = 0LL;
  PrivateLoggerNotificationEntry = 0LL;
  ApplicationKeyOption = NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &SystemInformation, 8u, 0LL);
  v45 = RtlpHypervisorSharedUserVa;
  if ( ApplicationKeyOption >= 0 )
    v45 = SystemInformation;
  RtlpHypervisorSharedUserVa = v45;
  NtdllBaseTag = RtlCreateTagHeap(v42, 0, (__int64)L"NTDLL!", L"!Process");
  result = TpInitializePackage();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  v48 = *(unsigned int *)(v30 + 1080);
  if ( (_DWORD)v48 )
    TpSetDefaultPoolCpuSets(*(void **)(v30 + 1072));
  v49 = *(_DWORD *)(v30 + 1084);
  if ( v49 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpGlobalPoolLock, v48, v46, v47);
    TppPoolpGlobalPoolMaxThreadsOverride = v49;
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  EtwEventRegister((int)&PrivateLoggerNotificationGuid, 0LL, 0LL, (__int64)&g_hPrivLoggerNotificationProvider);
  EtwEventRegister(
    (int)&UserDiagnosticGuid,
    (__int64)UserDiagnosticProviderCallback,
    0LL,
    (__int64)&g_hUserDiagnosticProvider);
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_180174468);
  EtwEventRegister(
    (int)&WindowsHeapSnapshotProvider,
    (__int64)RtlpHpStackTraceEtwCallback,
    0LL,
    (__int64)&RtlpHpStackTraceProviderHandle);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_180174430);
  result = RtlpInitEnvironmentBlock();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  result = RtlpInitParameterBlock();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  v50 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v160 = v50;
  v150 = *(__m128i *)(v50 + 96);
  v148 = _mm_srli_si128(v150, 8).m128i_u64[0];
  if ( v149 || v143 )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             (__int64)v143,
                             (__int64)v149,
                             (__int64)L"DebugProcessHeapOnly",
                             4u,
                             (__int64)&v141,
                             4,
                             v130,
                             0LL);
    v51 = 0;
    if ( ApplicationKeyOption >= 0 && dword_180174238 && v141 )
    {
      dword_180174238 = 0;
      *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  else
  {
    v51 = 0;
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx((__int64)&v155, NtSystemRoot);
  v53 = v155.Length + 40;
  Heap = RtlAllocateHeap((__int64)v42, 0, (unsigned int)v155.Length + 38 + 2LL);
  if ( !Heap )
    return -1073741801;
  LOWORD(v145) = 0;
  WORD1(v145) = v53;
  *((_QWORD *)&v145 + 1) = Heap;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v145, (const void **)&v155);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v145, (const void **)SlashSystem32SlashString);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) == 0 )
  {
    v58 = 48LL;
    v170 = 48;
    v171 = 0LL;
    v173 = 64;
    v172 = &v162;
    v174 = 0LL;
    LdrProtectMrdata(0, v55, v56, v57);
    ApplicationKeyOption = ZwOpenDirectoryObject();
    LdrProtectMrdata(1, v59, v60, v61);
    if ( ApplicationKeyOption < 0 )
    {
      LODWORD(v130) = ApplicationKeyOption;
      v128 = &v162;
      v62 = 5583;
LABEL_115:
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        v62,
        (__int64)"LdrpInitializeProcess",
        0,
        "Failed to open %wZ with status 0x%08lx\n",
        v128,
        v130);
      return ApplicationKeyOption;
    }
    v170 = 48;
    v171 = LdrpKnownDllDirectoryHandle;
    v173 = 64;
    v172 = (int *)&unk_18012CD60;
    v174 = 0LL;
    v63 = ZwOpenSymbolicLinkObject();
    ApplicationKeyOption = v63;
    if ( v63 < 0 )
    {
      LODWORD(v130) = v63;
      v128 = (int *)&unk_18012CD60;
      v62 = 5606;
      goto LABEL_115;
    }
    while ( 1 )
    {
      v65 = RtlAllocateHeap((__int64)v42, 0, v58);
      if ( !v65 )
        return -1073741801;
      LdrpKnownDllPath = 0;
      word_180179C52 = v58;
      qword_180179C58 = v65;
      SymbolicLinkObject = NtQuerySymbolicLinkObject();
      ApplicationKeyOption = SymbolicLinkObject;
      if ( SymbolicLinkObject >= 0 )
        break;
      if ( SymbolicLinkObject != -1073741789 )
      {
        LODWORD(v127) = SymbolicLinkObject;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5641,
          (__int64)"LdrpInitializeProcess",
          0,
          "Querying the known DLL directory link object failed with status 0x%08lx\n",
          v127);
        return ApplicationKeyOption;
      }
      RtlFreeHeap((__int64)v42, 0, v65);
      v58 = v151;
    }
    NtClose(Handle);
    v51 = 0;
  }
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = v155;
  }
  else
  {
    v66 = *(__m128i *)(v50 + 56);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v50 + 56);
    v67 = (wchar_t *)_mm_srli_si128(v66, 8).m128i_u64[0];
    UnicodeString.Buffer = v67;
    if ( !v67 || !UnicodeString.Length || !*v67 )
    {
      v68 = (wchar_t *)RtlAllocateHeap((__int64)v42, 0, 8LL);
      UnicodeString.Buffer = v68;
      if ( !v68 )
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5688,
          (__int64)"LdrpInitializeProcess",
          0,
          "Allocating a buffer to hold the current working directory failed\n");
        return -1073741801;
      }
      v142 = 0;
      v69 = RtlGetNtSystemRoot();
      *(_DWORD *)v68 = *(_DWORD *)v69;
      v68[2] = *(_WORD *)(v69 + 4);
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  v70 = (unsigned __int16)v145;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    v51 = LdrpIncludeAlternateForwarders();
    v70 = 2 * v71 + 22;
    if ( v51 )
      v70 = v71 + 2 * v71 + 52;
  }
  v72 = v70;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v72 = v70 + 2 * (v155.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v50 + 80) = 0;
  }
  *((_QWORD *)&v139 + 1) = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v72);
  if ( !*((_QWORD *)&v139 + 1) )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5779,
      (__int64)"LdrpInitializeProcess",
      0,
      "Failed to allocate the system dirs string!\n");
    return -1073741801;
  }
  LOWORD(v139) = 0;
  WORD1(v139) = v72;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v139, (const void **)&v145);
  v73 = (unsigned __int16)v139;
  *(_WORD *)(*((_QWORD *)&v139 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v139 >> 1) - 2) = 59;
  RtlpSystem32Dirs = v139;
  LdrpSystem32 = v139;
  LOWORD(v73) = v73 - 2;
  LOWORD(LdrpSystem32) = v73;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    if ( v51 )
    {
      RtlAppendUnicodeStringToString((unsigned __int16 *)&v139, (const void **)&v145);
      RtlAppendUnicodeToString((unsigned __int16 *)&v139, L"forwarders\\alt;");
    }
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v139, (const void **)&v145);
    RtlAppendUnicodeToString((unsigned __int16 *)&v139, L"forwarders;");
  }
  if ( v72 > v70 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v139, (const void **)&v155);
    RtlAppendUnicodeToString((unsigned __int16 *)&v139, L"\\system;");
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v139, (const void **)&v155);
    RtlAppendUnicodeToString((unsigned __int16 *)&v139, L";");
    RtlpSystemDirs = v139;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType((__int128 *)v150.m128i_i8, v73);
  result = LdrpInitializeNtdllDataTableEntry(v137, &LdrpNtDllDataTableEntry, 0LL, 0LL, &v145);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  v75 = 0LL;
  v76 = v150.m128i_i64[1] + v150.m128i_u16[0];
  v77 = (_WORD *)v76;
  if ( v76 && v76 > v150.m128i_i64[1] )
  {
    while ( 1 )
    {
      v74 = (unsigned __int64)v77--;
      if ( *v77 == 92 )
        break;
      if ( (unsigned __int64)v77 <= v150.m128i_i64[1] )
        goto LABEL_157;
    }
    v75 = v74;
  }
LABEL_157:
  if ( v75 )
  {
    LOWORD(v76) = v76 - v75;
    v156.m128i_i16[0] = v76;
    if ( v150.m128i_u16[1] - (unsigned __int64)v150.m128i_u16[0] >= 2 )
      LOWORD(v76) = v76 + 2;
    v156.m128i_i16[1] = v76;
    v156.m128i_i64[1] = v75;
  }
  else
  {
    v156 = v150;
  }
  v78 = LdrpNtdllHotPatchContext;
  if ( *(_WORD *)LdrpNtdllHotPatchContext )
  {
    LdrpLogEtwHotPatchStatus(
      (unsigned __int16 *)&v156,
      LdrpNtDllDataTableEntry,
      (unsigned __int16 *)LdrpNtdllHotPatchContext,
      *(_DWORD *)(LdrpNtdllHotPatchContext + 544),
      0);
    v78 = LdrpNtdllHotPatchContext;
  }
  if ( *(int *)(v78 + 544) < 0 )
    __fastfail(0x45u);
  v158 = 0LL;
  v79 = *(_QWORD *)(v78 + 536);
  if ( v79 )
  {
    result = LdrpInitializeNtdllDataTableEntry(
               v79,
               (__int64 *)&v158,
               LdrpNtDllDataTableEntry,
               (unsigned __int16 *)v78,
               0LL);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
  }
  RtlInitializeHistoryTable(v79, v76, v75, v74);
  v82 = (_QWORD *)(LdrpNtDllDataTableEntry + 32);
  v83 = qword_18017A170;
  if ( *(__int64 **)(qword_18017A170 + 8) != &qword_18017A170 )
    goto LABEL_293;
  *v82 = qword_18017A170;
  v82[1] = &qword_18017A170;
  *(_QWORD *)(v83 + 8) = v82;
  qword_18017A170 = (__int64)v82;
  v84 = v158;
  if ( !v158 )
    goto LABEL_171;
  v84 = v158 + 4;
  if ( (__int64 *)v82[1] != &qword_18017A170 )
LABEL_293:
    __fastfail(3u);
  *v84 = v82;
  v84[1] = &qword_18017A170;
  v82[1] = v84;
  qword_18017A170 = (__int64)v84;
LABEL_171:
  inited = LdrpInitParallelLoadingSupport((__int64)v84, (__int64)&qword_18017A170, v80, v81);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    LODWORD(v127) = inited;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6016,
      (__int64)"LdrpInitializeProcess",
      0,
      "Failed to initialize Parallel loader, st = 0x%x\n",
      v127);
    return ApplicationKeyOption;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, v183);
  memset(v182, 0, 0xC8uLL);
  *(_QWORD *)&v182[1] = v183;
  LODWORD(v182[2]) = 512;
  v182[0] = v150;
  *((_QWORD *)&v182[2] + 1) = &ApplicationKeyOption;
  ModuleEntry = LdrpAllocateModuleEntry((__int64)v182);
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
  LdrpImageEntry = ModuleEntry;
  v87 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v87;
  }
  while ( v87 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v88 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = v150;
  v89 = *(_DWORD *)(v88 + 104) | 4;
  *(_DWORD *)(v88 + 104) = v89;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x10) != 0 )
  {
    v89 |= 1u;
    *(_DWORD *)(v88 + 104) = v89;
  }
  v90 = v136;
  if ( UseCOR )
  {
    v91 = v89 | 0x400000;
    *(_DWORD *)(v88 + 104) = v91;
    if ( v90 )
      *(_DWORD *)(v88 + 104) = v91 | 0x1000000;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(v88 + 248) = 0LL;
  *(__m128i *)(v88 + 88) = v156;
  v92 = *(const void **)(ProcessEnvironmentBlock + 16);
  v93 = v92;
  v94 = v152;
  if ( *(const void **)(v152 + 48) != v92 && !v90 && !UseWOW64 )
  {
    result = LdrpProtectAndRelocateImage(v92);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    v93 = *(const void **)(ProcessEnvironmentBlock + 16);
    v88 = LdrpImageEntry;
  }
  *(_QWORD *)(v88 + 48) = v93;
  LdrpInsertDataTableEntry(v88);
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
  LdrpInsertModuleToIndex(LdrpImageEntry, (_DWORD *)v94, v95, v96);
  result = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v97 = RtlpInitCurrentDir((__int64)&UnicodeString);
  ApplicationKeyOption = v97;
  if ( v97 < 0 )
  {
    LODWORD(v131) = v97;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6161,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
      &UnicodeString,
      v131);
  }
  if ( !v142 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v98 = LdrpAllocateModuleEntry(0LL);
    v99 = v98;
    if ( !v98 )
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6184,
        (__int64)"LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the application verifier DLL failed\n");
      return -1073741801;
    }
    *(_DWORD *)(*(_QWORD *)(v98 + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(v98 + 152) - 52LL) = -1;
    v100 = v165;
    *(_DWORD *)(v98 + 104) |= *(_DWORD *)(v165 + 104);
    *(_QWORD *)(v98 + 248) = *(_QWORD *)(v100 + 248);
    *(_WORD *)(v98 + 110) = 0;
    *(_OWORD *)(v98 + 72) = *(_OWORD *)(v100 + 72);
    *(_OWORD *)(v98 + 88) = *(_OWORD *)(v100 + 88);
    *(_DWORD *)(v98 + 128) = *(_DWORD *)(v100 + 128);
    *(_DWORD *)(v98 + 288) = *(_DWORD *)(v100 + 288);
    *(_QWORD *)(v98 + 48) = *(_QWORD *)(v100 + 48);
    LdrpInsertDataTableEntry(v98);
    LdrpLogDllState(*(_QWORD *)(v99 + 48), v99 + 72, 0x14A5u);
    result = RtlImageNtHeaderEx(3, *(_QWORD *)(v99 + 48), 0LL, &v166);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    LdrpInsertModuleToIndex(v99, v166, v101, v102);
    result = LdrpProcessMappedModule(v99, 0, 1);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    *(_QWORD *)(v99 + 56) = *(_QWORD *)(v100 + 56);
    LdrpLogDllState(*(_QWORD *)(v99 + 48), v99 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v99 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
    {
      result = AVrfInitializeVerifier(0, 0, 0, 1, v137, 0LL);
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
      if ( (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v99 + 152) + 56LL) = 9;
        result = ApplicationKeyOption;
      }
    }
    else
    {
      v135[0] = 0;
      result = LdrpInitializeGraphRecurse(*(__int64 **)(v99 + 152), 0LL, v135);
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
      result = LdrpCorInitialize(&ProcessInformation);
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
      v103 = v136;
      if ( (_BYTE)v136 )
      {
        result = LdrpCorValidateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
        ApplicationKeyOption = result;
        if ( result < 0 )
          return result;
      }
      if ( (v153->SameTebFlags & 0x400) != 0 )
        *(_QWORD *)(v154 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
    }
    else
    {
      v103 = v136;
    }
    v104 = LdrpInitializeTls();
    ApplicationKeyOption = v104;
    if ( v104 < 0 )
    {
      LODWORD(v129) = v104;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6423,
        (__int64)"LdrpInitializeProcess",
        0,
        "Initializing TLS slots failed with status 0x%08lx\n",
        v129);
      return ApplicationKeyOption;
    }
    if ( ProcessInformation )
    {
      v134 = 0;
      v105 = LdrpInitializeGraphRecurse(ProcessInformation[19], 0LL, &v134);
      ApplicationKeyOption = v105;
      if ( v105 < 0 )
      {
        LODWORD(v129) = v105;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6442,
          (__int64)"LdrpInitializeProcess",
          0,
          "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
          v129);
        return ApplicationKeyOption;
      }
    }
    v106 = LdrpInitializeImportRedirection();
    ApplicationKeyOption = v106;
    if ( v106 < 0 )
    {
      LODWORD(v129) = v106;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6458,
        (__int64)"LdrpInitializeProcess",
        0,
        "Loading of import redirection module failed with status 0x%08x\n",
        v129);
      return ApplicationKeyOption;
    }
    ProcessInformation = 0LL;
    if ( (unsigned __int16)(*(_WORD *)(v94 + 92) - 2) <= 1u )
    {
      Dll = LdrLoadDll(16385LL, 0LL, (__int64)LdrpKernel32DllName, (unsigned __int64 *)&v137);
      ApplicationKeyOption = Dll;
      if ( Dll < 0 )
      {
        if ( Dll != -1073741515 )
        {
          LODWORD(v131) = Dll;
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            6616,
            (__int64)"LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            LdrpKernel32DllName,
            v131);
          return ApplicationKeyOption;
        }
        v111 = LdrLoadDll(16385LL, 0LL, (__int64)LdrpKernelbaseDllName, (unsigned __int64 *)&v137);
        ApplicationKeyOption = v111;
        if ( v111 < 0 )
        {
          LODWORD(v131) = v111;
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            6589,
            (__int64)"LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            LdrpKernelbaseDllName,
            v131);
          return ApplicationKeyOption;
        }
        v112 = LdrpCodeAuthzInitialize();
        ApplicationKeyOption = v112;
        if ( (int)(v112 + 0x80000000) >= 0 && v112 != -1073741515 )
        {
          LODWORD(v129) = v112;
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            6605,
            (__int64)"LdrpInitializeProcess",
            0,
            "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
            v129);
          return ApplicationKeyOption;
        }
        ApplicationKeyOption = 0;
        v110 = v137;
      }
      else
      {
        ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                      v137,
                                      &qword_18012CD70,
                                      0LL,
                                      (volatile signed __int32 *)&Kernel32ThreadInitThunkFunction,
                                      0,
                                      retaddr);
        ApplicationKeyOption = ProcedureAddressForCaller;
        if ( ProcedureAddressForCaller < 0 )
        {
          LODWORD(v132) = ProcedureAddressForCaller;
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            6503,
            (__int64)"LdrpInitializeProcess",
            0,
            "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &qword_18012CD70,
            LdrpKernel32DllName,
            v132);
          return ApplicationKeyOption;
        }
        LdrGetProcedureAddressForCaller(
          v137,
          &qword_18012CD80,
          0LL,
          (volatile signed __int32 *)&ProcessInformation,
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
        LoadedDll = LdrpFindLoadedDll(LdrpKernelbaseDllName, 0, &v167);
        ApplicationKeyOption = LoadedDll;
        if ( LoadedDll < 0 )
        {
          LODWORD(v131) = LoadedDll;
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            6571,
            (__int64)"LdrpInitializeProcess",
            0,
            "Finding \"%wZ\" failed with status 0x%08lx\n",
            LdrpKernelbaseDllName,
            v131);
          return ApplicationKeyOption;
        }
        v110 = *(_QWORD *)(v167 + 48);
      }
      v113 = LdrGetProcedureAddressForCaller(v110, &qword_18012CDA0, 0LL, (volatile signed __int32 *)&v168, 0, retaddr);
      ApplicationKeyOption = v113;
      if ( v113 < 0 )
      {
        LODWORD(v129) = v113;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6634,
          (__int64)"LdrpInitializeProcess",
          0,
          "Finding KernelbasePostInit failed with status 0x%08lx\n",
          v129);
        return ApplicationKeyOption;
      }
      v114 = v168();
      ApplicationKeyOption = v114;
      if ( v114 < 0 )
      {
        LODWORD(v129) = v114;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6642,
          (__int64)"LdrpInitializeProcess",
          0,
          "Calling KernelbasePostInit failed with status 0x%08lx\n",
          v129);
        return ApplicationKeyOption;
      }
      ApplicationKeyOption = 0;
    }
    LdrpDrainWorkQueue(0);
    SbObtainTraceHandle(0LL);
    v115 = v159;
    if ( v159 && *(_DWORD *)(v159 + 528) )
    {
      *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
      LdrpInitShimEngine(v115);
    }
    v116 = RtlpForceCSDebugInfoCreation;
    if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
      v116 = 1;
    RtlpForceCSDebugInfoCreation = v116;
    if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
    {
      *(_DWORD *)(v160 + 1036) = 1;
      v117 = 1;
    }
    else
    {
      v117 = *(_DWORD *)(v160 + 1036);
    }
    LdrpEnableParallelLoading(v117);
    LdrInitState = 1;
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
    **((_DWORD **)&v182[2] + 1) = 0;
    if ( v103 )
    {
      v118 = LdrpCorProcessImports(LdrpImageEntry);
    }
    else
    {
      LdrpThreadTokenSetMainThreadToken();
      LODWORD(v182[2]) |= 1u;
      LdrpMapAndSnapDependency((__int64)v182);
      LdrpDrainWorkQueue(1);
      if ( LdrpMainThreadToken )
        LdrpThreadTokenUnsetMainThreadToken();
      v118 = ApplicationKeyOption;
      if ( ApplicationKeyOption < 0 )
        goto LABEL_289;
      v118 = LdrpPrepareModuleForExecution(LdrpImageEntry, *((__int64 *)&v182[2] + 1));
    }
    ApplicationKeyOption = v118;
    if ( v118 >= 0 )
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
        LODWORD(v131) = PatchImage;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6891,
          (__int64)"LdrpInitializeProcess",
          0,
          "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
          LdrpImageEntry + 88,
          v131);
      }
      else
      {
        if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
          LdrpDoDebuggerBreak();
        LdrpDropLastInProgressCount();
        if ( Kernel32ThreadInitThunkFunction )
        {
          result = Kernel32ThreadInitThunkFunction(1LL, 0LL, 0LL, v120);
          ApplicationKeyOption = result;
          if ( result < 0 )
            return result;
          result = LdrpInitializePerUserWindowsDirectory((__int64 (__fastcall *)(_BYTE *, __int64))ProcessInformation);
          ApplicationKeyOption = result;
          if ( result < 0 )
            return result;
        }
        LdrpProcessInitContextRecord = v154;
        LdrpDrainWorkQueue(0);
        LdrpAcquireLoaderLock();
        v134 = 0;
        ApplicationKeyOption = LdrpInitializeGraphRecurse(
                                 *(__int64 **)(LdrpImageEntry + 152),
                                 *((__int64 *)&v182[2] + 1),
                                 &v134);
        LdrpReleaseLoaderLock(v121, 9, ApplicationKeyOption);
        LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *((__int64 *)&v182[2] + 1));
        LdrpDropLastInProgressCount();
        LdrpProcessInitContextRecord = 0LL;
        if ( v184 )
          RtlReleasePath(v183[0], v122, v123, v124);
        if ( ApplicationKeyOption >= 0 )
        {
          LdrpInitializeSmtDelayedSleep();
          if ( *(_WORD *)(LdrpImageEntry + 110) )
          {
            v176 = 72LL;
            v177 = 1;
            v178 = 0LL;
            v179 = 0LL;
            v180 = 0LL;
            v181 = 0LL;
            RtlActivateActivationContextUnsafeFast((__int64)&v176, *(_QWORD *)(LdrpImageEntry + 136));
            LdrpCallTlsInitializers(1u, LdrpImageEntry);
            RtlDeactivateActivationContextUnsafeFast((__int64)&v176);
          }
          if ( g_ShimsEnabled
            && !((unsigned __int8 (__fastcall *)(unsigned __int16 *, __int64))(__ROR8__(
                                                                                 g_pfnSE_InstallAfterInit,
                                                                                 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
                  &v146,
                  v115) )
          {
            g_ShimsEnabled = 0;
            LdrUnloadDll(g_pShimEngineModule);
            g_pShimEngineModule = 0LL;
          }
          v125 = *(void (**)(void))(ProcessEnvironmentBlock + 560);
          if ( v125 )
            v125();
          goto LABEL_283;
        }
        LODWORD(v129) = ApplicationKeyOption;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          7022,
          (__int64)"LdrpInitializeProcess",
          0,
          "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          v129);
      }
      return ApplicationKeyOption;
    }
LABEL_289:
    LODWORD(v129) = v118;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6859,
      (__int64)"LdrpInitializeProcess",
      0,
      "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
      v129);
    return ApplicationKeyOption;
  }
  if ( v149 )
  {
    NtClose(v149);
    v149 = 0LL;
    if ( LdrpLargePageDllKeyHandle )
    {
      NtClose(LdrpLargePageDllKeyHandle);
      LdrpLargePageDllKeyHandle = 0LL;
    }
  }
  if ( v143 )
  {
    NtClose(v143);
    v143 = 0LL;
  }
  result = LdrpLoadWow64((const void **)&v145);
  ApplicationKeyOption = result;
  if ( result >= 0 )
  {
    if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
      LdrpDoDebuggerBreak();
    LdrInitState = 3;
    _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
    g_LdrpWow64LdrpInitialize(v154);
LABEL_283:
    if ( v149 )
      NtClose(v149);
    if ( v143 )
      NtClose(v143);
    return 0;
  }
  return result;
}
