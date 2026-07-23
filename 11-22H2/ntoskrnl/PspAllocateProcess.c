/*
 * XREFs of PspAllocateProcess @ 0x1406B442C
 * Callers:
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x140853DBC (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x14085CC20 (PspCreateProcess.c)
 * Callees:
 *     ExInitializePushLock @ 0x1402235B0 (ExInitializePushLock.c)
 *     KeQueryUnbiasedInterruptTime @ 0x1402235C0 (KeQueryUnbiasedInterruptTime.c)
 *     KeIsCoreIsolationMitigationPolicyEnforceable @ 0x140223CD0 (KeIsCoreIsolationMitigationPolicyEnforceable.c)
 *     KeIsUserCetAllowed @ 0x140223CE4 (KeIsUserCetAllowed.c)
 *     PspLockProcessExclusive @ 0x140223CF8 (PspLockProcessExclusive.c)
 *     KeStartIdealProcessorAssignmentBlock @ 0x140223D20 (KeStartIdealProcessorAssignmentBlock.c)
 *     KeInitializeIdealProcessorAssignmentBlock @ 0x1402246A8 (KeInitializeIdealProcessorAssignmentBlock.c)
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     KiCopyAffinityEx @ 0x1402544A0 (KiCopyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140257280 (KeAddProcessorAffinityEx.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     MiSectionControlArea @ 0x14029F760 (MiSectionControlArea.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     KeQuerySystemTimePrecise @ 0x1402BE500 (KeQuerySystemTimePrecise.c)
 *     KeQueryMaximumGroupCount @ 0x1402BE5F0 (KeQueryMaximumGroupCount.c)
 *     KeQuerySystemTimeUnsafe @ 0x1402BF7EC (KeQuerySystemTimeUnsafe.c)
 *     PoEnergyEstimationEnabled @ 0x1402C0B20 (PoEnergyEstimationEnabled.c)
 *     MmGetDefaultPagePriority @ 0x1402F5F64 (MmGetDefaultPagePriority.c)
 *     PsReferencePartitionSafe @ 0x1402F9C1C (PsReferencePartitionSafe.c)
 *     KeCopyXfdMaskToPeb @ 0x140329FB0 (KeCopyXfdMaskToPeb.c)
 *     KeQueryAffinityProcess @ 0x14034BB10 (KeQueryAffinityProcess.c)
 *     KeQueryActiveGroupCount @ 0x140361E20 (KeQueryActiveGroupCount.c)
 *     KeSelectGroupFromNode @ 0x140363E40 (KeSelectGroupFromNode.c)
 *     PspWow64PickBestNtdll @ 0x14036ACD4 (PspWow64PickBestNtdll.c)
 *     PspUnlockProcessExclusive @ 0x14036B8E8 (PspUnlockProcessExclusive.c)
 *     KeSetCpuSetsProcess @ 0x14039C834 (KeSetCpuSetsProcess.c)
 *     KeSelectNodeForAffinity @ 0x1403B4E28 (KeSelectNodeForAffinity.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     IoDiskIoAttributionReference @ 0x140463418 (IoDiskIoAttributionReference.c)
 *     KeSecureProcess @ 0x14056F7E0 (KeSecureProcess.c)
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x1406B2A9C (MmInitializeProcessAddressSpace.c)
 *     PspInitializeFullProcessImageName @ 0x1406B3468 (PspInitializeFullProcessImageName.c)
 *     ObInitProcess @ 0x1406B362C (ObInitProcess.c)
 *     PspApplyMitigationOptions @ 0x1406B3700 (PspApplyMitigationOptions.c)
 *     PspInheritMitigationAuditOptions @ 0x1406B4330 (PspInheritMitigationAuditOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1406B6070 (RtlQueryImageFileKeyOption.c)
 *     PspInheritMitigationOptions @ 0x1406B6248 (PspInheritMitigationOptions.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x1406B631C (MmGetSessionSchedulingGroupByProcess.c)
 *     ObCreateObject @ 0x1406B6350 (ObCreateObject.c)
 *     SmProcessCreateNotification @ 0x1406B639C (SmProcessCreateNotification.c)
 *     PspComputeQuantumAndPriority @ 0x1406B63FC (PspComputeQuantumAndPriority.c)
 *     PspInitializeProcessSecurity @ 0x1406B64F0 (PspInitializeProcessSecurity.c)
 *     KeInitializeProcess @ 0x1406B66E8 (KeInitializeProcess.c)
 *     ObRetagReferences @ 0x1406B69A0 (ObRetagReferences.c)
 *     PspReadIFEOMitigationOptions @ 0x1406B707C (PspReadIFEOMitigationOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x1406B7104 (PspReadIFEOMitigationAuditOptions.c)
 *     PspSelectMachineForProcess @ 0x1406B7B58 (PspSelectMachineForProcess.c)
 *     PspUpdateCreateInfo @ 0x1406B9974 (PspUpdateCreateInfo.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA488 (SeIsTokenAssignableToProcess.c)
 *     PspSelectNodeForProcess @ 0x140705E5C (PspSelectNodeForProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140705F00 (MmCreateProcessAddressSpace.c)
 *     SeQueryInformationToken @ 0x140719710 (SeQueryInformationToken.c)
 *     SeQuerySessionIdToken @ 0x14071A0D0 (SeQuerySessionIdToken.c)
 *     PsQueryProcessAttributes @ 0x14071DE84 (PsQueryProcessAttributes.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     ExCreateHandle @ 0x14073FD34 (ExCreateHandle.c)
 *     ObCloseHandle @ 0x14076BDA0 (ObCloseHandle.c)
 *     PspSetupUserProcessAddressSpace @ 0x1407A176C (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1407A19D8 (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x1407A1C50 (PsWow64GetProcessNtdllType.c)
 *     PspMapSiloSharedDataView @ 0x1407A1C6C (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1407A1CA4 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x1407A1DAC (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x1407A2C0C (PspWritePebAffinityInfo.c)
 *     MmIsSessionLeaderProcess @ 0x1407AA150 (MmIsSessionLeaderProcess.c)
 *     MmGetSectionInformation @ 0x1407BA640 (MmGetSectionInformation.c)
 *     MmSecureVirtualMemory @ 0x1407BAE20 (MmSecureVirtualMemory.c)
 *     PspAttachSession @ 0x1407C61A0 (PspAttachSession.c)
 *     PspDetachSession @ 0x1407C61FC (PspDetachSession.c)
 *     RtlAcquirePrivilege @ 0x1407D310C (RtlAcquirePrivilege.c)
 *     PspSetupReservedUserMappings @ 0x1407DF14C (PspSetupReservedUserMappings.c)
 *     RtlReleasePrivilege @ 0x1407DF4E0 (RtlReleasePrivilege.c)
 *     PspHardenMitigationOptions @ 0x1407E0368 (PspHardenMitigationOptions.c)
 *     PoEnergyContextInitialize @ 0x1407E04C0 (PoEnergyContextInitialize.c)
 *     RtlOpenImageFileOptionsKey @ 0x1407E3450 (RtlOpenImageFileOptionsKey.c)
 *     PspInheritQuota @ 0x1407E34BC (PspInheritQuota.c)
 *     PspSetProcessPriorityClass @ 0x1407E3DE0 (PspSetProcessPriorityClass.c)
 *     PspReadIFEONodeOptions @ 0x1407E5740 (PspReadIFEONodeOptions.c)
 *     PspAssignProcessQuotaBlock @ 0x1407F8B1C (PspAssignProcessQuotaBlock.c)
 *     MmInitializeHandBuiltProcess @ 0x14085D578 (MmInitializeHandBuiltProcess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140860EDC (MmInitializeHandBuiltProcess2.c)
 *     KeInitializeProcessUserCetLogging @ 0x140975654 (KeInitializeProcessUserCetLogging.c)
 *     PspSetProcessAffinitySafe @ 0x1409AF970 (PspSetProcessAffinitySafe.c)
 *     PspApplyIFEOPerfOptions @ 0x1409B0D38 (PspApplyIFEOPerfOptions.c)
 *     PspReadIFEOPerfOptions @ 0x1409B145C (PspReadIFEOPerfOptions.c)
 *     MmGetSectionStrongImageReference @ 0x140A4385C (MmGetSectionStrongImageReference.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspAllocateProcess(
        __int64 a1,
        KPROCESSOR_MODE a2,
        _QWORD *a3,
        char a4,
        char a5,
        char a6,
        void *a7,
        void *a8,
        int a9,
        char a10,
        __int64 a11,
        int a12,
        PVOID a13,
        __int64 a14,
        _QWORD *a15)
{
  int v16; // r14d
  __int64 v18; // r15
  unsigned int v19; // ebx
  _DWORD *v20; // r8
  unsigned int v21; // r13d
  unsigned int MaximumGroupCount; // eax
  int v23; // ecx
  int v24; // r9d
  unsigned int v25; // r12d
  __int64 result; // rax
  __int64 v27; // rdx
  char *v28; // r14
  __int16 v29; // r8
  char v30; // al
  __int16 v31; // cx
  int v32; // r8d
  __int64 Flink; // rax
  __int64 v34; // r12
  int v35; // eax
  int v36; // ecx
  int DefaultPagePriority; // edx
  __int64 v38; // r8
  PVOID v39; // rcx
  int v40; // r12d
  int IsTokenAssignableToProcess; // edi
  HANDLE *v42; // r12
  int v43; // eax
  __int16 v44; // r11
  ULONG v45; // edi
  KPROCESSOR_MODE v46; // al
  int v47; // ecx
  __int16 v48; // r12
  bool v49; // sf
  __int64 v50; // r12
  unsigned __int16 v51; // di
  ULONG v52; // edi
  char v53; // r13
  int v54; // r12d
  int v55; // eax
  int v56; // edx
  __int64 v57; // rdx
  int v58; // r8d
  __int64 SessionSchedulingGroupByProcess; // rax
  int v60; // ecx
  char v61; // r8
  _DWORD *v62; // rdi
  __int64 v63; // rcx
  __int64 v64; // r12
  __int64 v65; // r9
  int v66; // r8d
  int inited; // eax
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // r9
  int v71; // r12d
  _DWORD *v72; // rcx
  __int16 v73; // r11
  unsigned __int64 *v74; // r15
  __int64 v75; // rdx
  int v76; // ecx
  __int64 v77; // r11
  _DWORD *v78; // rax
  _DWORD *v79; // rax
  __int64 v80; // rdx
  PVOID v81; // r12
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rax
  unsigned __int8 v85; // r12
  __int64 v86; // rcx
  struct _KTHREAD *v87; // r13
  __int64 v88; // r12
  ULONGLONG UnbiasedInterruptTime; // rax
  _QWORD *v90; // rcx
  int ImageFileKeyOption; // eax
  __int64 Pool2; // r10
  int v93; // eax
  _QWORD *v94; // rax
  int IsSessionLeaderProcess; // eax
  volatile signed __int32 *v96; // rdx
  unsigned __int64 v97; // rdx
  char *v98; // rcx
  __int64 v99; // rcx
  void *v100; // rax
  __int64 v101; // rax
  bool v102; // zf
  __int64 v103; // rcx
  int v104; // edi
  int v105; // edi
  int SectionInformation; // eax
  _DWORD *v107; // rcx
  __int64 v108; // rax
  ULONG_PTR v109; // r12
  __int64 v110; // r12
  void *v111; // rax
  size_t v112; // r8
  __int64 v113; // r12
  unsigned __int64 **v114; // rdx
  char v115; // al
  unsigned int ProcessNtdllType; // eax
  __int64 v117; // rcx
  int *v118; // [rsp+20h] [rbp-808h]
  int v119; // [rsp+28h] [rbp-800h]
  int v120; // [rsp+30h] [rbp-7F8h]
  unsigned __int16 v122[2]; // [rsp+78h] [rbp-7B0h] BYREF
  char v123; // [rsp+7Ch] [rbp-7ACh] BYREF
  char v124; // [rsp+7Dh] [rbp-7ABh] BYREF
  char v125[2]; // [rsp+7Eh] [rbp-7AAh] BYREF
  __int16 v126; // [rsp+80h] [rbp-7A8h]
  __int64 v127; // [rsp+88h] [rbp-7A0h]
  __int64 v128; // [rsp+90h] [rbp-798h] BYREF
  int v129; // [rsp+98h] [rbp-790h]
  int v130; // [rsp+9Ch] [rbp-78Ch]
  __int16 v131; // [rsp+A0h] [rbp-788h]
  int v132; // [rsp+A4h] [rbp-784h]
  int v133; // [rsp+A8h] [rbp-780h]
  int v134; // [rsp+ACh] [rbp-77Ch]
  unsigned int v135; // [rsp+B0h] [rbp-778h]
  PVOID v136; // [rsp+B8h] [rbp-770h] BYREF
  int v137; // [rsp+C0h] [rbp-768h] BYREF
  int v138; // [rsp+C4h] [rbp-764h]
  PVOID TokenInformation; // [rsp+C8h] [rbp-760h] BYREF
  unsigned __int16 *v140; // [rsp+D0h] [rbp-758h]
  unsigned __int16 *v141; // [rsp+D8h] [rbp-750h] BYREF
  _DWORD *v142; // [rsp+E0h] [rbp-748h]
  ULONG SessionId; // [rsp+E8h] [rbp-740h] BYREF
  int v144; // [rsp+ECh] [rbp-73Ch]
  int v145; // [rsp+F0h] [rbp-738h]
  volatile signed __int32 *v146; // [rsp+F8h] [rbp-730h]
  _KPROCESS *Process; // [rsp+100h] [rbp-728h]
  unsigned int v148; // [rsp+108h] [rbp-720h]
  PVOID Object; // [rsp+110h] [rbp-718h]
  int v150; // [rsp+118h] [rbp-710h]
  int v151; // [rsp+11Ch] [rbp-70Ch]
  int v152; // [rsp+120h] [rbp-708h]
  int v153; // [rsp+124h] [rbp-704h]
  int v154; // [rsp+128h] [rbp-700h]
  __int64 v155; // [rsp+130h] [rbp-6F8h]
  __int64 v156; // [rsp+138h] [rbp-6F0h]
  PACCESS_TOKEN Token; // [rsp+140h] [rbp-6E8h]
  PVOID Address; // [rsp+148h] [rbp-6E0h]
  unsigned __int64 v159; // [rsp+150h] [rbp-6D8h]
  _QWORD *v160; // [rsp+158h] [rbp-6D0h]
  int v161; // [rsp+160h] [rbp-6C8h] BYREF
  HANDLE KeyHandle; // [rsp+168h] [rbp-6C0h] BYREF
  PVOID v163; // [rsp+170h] [rbp-6B8h]
  PVOID v164; // [rsp+178h] [rbp-6B0h] BYREF
  PVOID ReturnedState; // [rsp+180h] [rbp-6A8h] BYREF
  PVOID P; // [rsp+188h] [rbp-6A0h]
  HANDLE Handle; // [rsp+190h] [rbp-698h] BYREF
  __int128 v168; // [rsp+198h] [rbp-690h] BYREF
  unsigned __int64 *v169; // [rsp+1A8h] [rbp-680h]
  __int64 v170; // [rsp+1B0h] [rbp-678h]
  __int64 v171; // [rsp+1B8h] [rbp-670h]
  __int64 v172; // [rsp+1C0h] [rbp-668h]
  struct _KTHREAD *CurrentThread; // [rsp+1D0h] [rbp-658h]
  __int64 v174; // [rsp+1D8h] [rbp-650h] BYREF
  __int64 v175; // [rsp+1E0h] [rbp-648h]
  _QWORD *v176; // [rsp+1E8h] [rbp-640h]
  __int128 v177; // [rsp+1F0h] [rbp-638h] BYREF
  __int128 v178; // [rsp+200h] [rbp-628h] BYREF
  OBJECT_ATTRIBUTES v179; // [rsp+210h] [rbp-618h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+240h] [rbp-5E8h] BYREF
  __int128 v181; // [rsp+270h] [rbp-5B8h] BYREF
  __int64 v182; // [rsp+280h] [rbp-5A8h]
  __m128i v183; // [rsp+290h] [rbp-598h] BYREF
  unsigned __int64 v184; // [rsp+2A0h] [rbp-588h]
  __int128 v185; // [rsp+2B0h] [rbp-578h] BYREF
  __int64 v186; // [rsp+2C0h] [rbp-568h]
  __int128 v187; // [rsp+2D0h] [rbp-558h] BYREF
  unsigned __int64 v188; // [rsp+2E0h] [rbp-548h]
  __int128 v189; // [rsp+2F0h] [rbp-538h] BYREF
  __int64 v190; // [rsp+300h] [rbp-528h]
  __int128 v191; // [rsp+310h] [rbp-518h] BYREF
  __int64 v192; // [rsp+320h] [rbp-508h]
  __m128i v193; // [rsp+330h] [rbp-4F8h] BYREF
  unsigned __int64 v194; // [rsp+340h] [rbp-4E8h]
  __int128 v195; // [rsp+350h] [rbp-4D8h] BYREF
  unsigned __int64 v196; // [rsp+360h] [rbp-4C8h]
  _DWORD v197[20]; // [rsp+370h] [rbp-4B8h] BYREF
  __m128i v198; // [rsp+3C0h] [rbp-468h] BYREF
  unsigned __int64 v199; // [rsp+3D0h] [rbp-458h]
  __int128 v200; // [rsp+3D8h] [rbp-450h] BYREF
  unsigned __int64 v201; // [rsp+3E8h] [rbp-440h]
  __int128 v202; // [rsp+3F0h] [rbp-438h] BYREF
  __int128 v203; // [rsp+400h] [rbp-428h]
  __int64 v204; // [rsp+410h] [rbp-418h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v205; // [rsp+418h] [rbp-410h] BYREF
  _DWORD v206[68]; // [rsp+450h] [rbp-3D8h] BYREF
  _DWORD v207[136]; // [rsp+560h] [rbp-2C8h] BYREF
  ULONG Privilege[8]; // [rsp+780h] [rbp-A8h] BYREF
  _OWORD v209[4]; // [rsp+7A0h] [rbp-88h] BYREF

  v16 = (int)a3;
  v160 = a3;
  v127 = a1;
  v171 = a1;
  Object = a7;
  Token = a8;
  v18 = a11;
  v169 = (unsigned __int64 *)a11;
  v172 = a11;
  v163 = a13;
  v175 = a14;
  v176 = a15;
  v161 = 0;
  memset(&v205, 0, sizeof(v205));
  v207[131] = 0;
  memset(&v179, 0, 44);
  v178 = 0LL;
  Handle = 0LL;
  memset(&v206[2], 0, 0x100uLL);
  v19 = 0;
  v137 = 0;
  v198 = 0LL;
  v199 = 0LL;
  v200 = 0LL;
  v201 = 0LL;
  v125[0] = 0;
  memset(&ObjectAttributes, 0, 44);
  KeyHandle = 0LL;
  v136 = 0LL;
  v124 = 0;
  v131 = 0;
  v128 = 0LL;
  memset(v197, 0, 0x48uLL);
  LODWORD(TokenInformation) = 0;
  v174 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v140 = 0LL;
  v141 = 0LL;
  P = 0LL;
  v135 = 0;
  v130 = 0;
  v145 = 0;
  v144 = 0;
  v133 = 34404;
  v152 = 0;
  v134 = 0;
  v154 = 0;
  v138 = 0;
  Address = 0LL;
  v153 = 0;
  v170 = 0LL;
  v126 = 0;
  memset(v207, 0, 0x218uLL);
  v129 = a9;
  if ( (a9 & 0x800) != 0 )
  {
    v19 = 2;
    if ( (a9 & 0x2000) != 0 )
    {
      v19 = 6;
      if ( (a9 & 0x4000) != 0 )
        v19 = 14;
    }
  }
  else if ( !a7 )
  {
    v19 = a1 != 0 ? 4 : 1;
  }
  if ( (v19 & 4) != 0 )
  {
    if ( a12 && (v19 & 2) == 0 )
      return 3221225520LL;
    if ( (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
      return 3221225485LL;
  }
  else if ( (a9 & 0x1000) != 0 )
  {
    return 3221225520LL;
  }
  v156 = a1 & -(__int64)((a9 & 0x100) != 0);
  v20 = (_DWORD *)(a11 + 4);
  if ( a11 )
  {
    v142 = (_DWORD *)(a11 + 4);
    if ( (*v20 & 0x2000) != 0 )
    {
      if ( (a1 & -(__int64)((a9 & 0x100) != 0)) == 0 )
      {
        v140 = (unsigned __int16 *)KeNodeBlock[*(unsigned __int16 *)(a11 + 250)];
        v141 = v140;
        v156 = 0LL;
        goto LABEL_11;
      }
      return 3221225520LL;
    }
  }
  v142 = (_DWORD *)(a11 + 4);
  if ( a1 )
  {
    v156 = a1 & -(__int64)((a9 & 0x100) != 0);
    v142 = (_DWORD *)(a11 + 4);
    if ( (*(_DWORD *)(a1 + 1120) & 0x200000) != 0 )
    {
      v156 = a1;
      v130 = 0x200000;
      v142 = (_DWORD *)(a11 + 4);
    }
  }
LABEL_11:
  if ( a11 && (*v20 & 0x40000) != 0 )
  {
    v19 |= 0x10000u;
    *(_BYTE *)(a11 + 8) &= ~0x10u;
  }
  v202 = 0LL;
  v203 = 0LL;
  v204 = 0LL;
  ReturnedState = 0LL;
  v21 = 2944;
  LODWORD(v146) = 0;
  v155 = 0LL;
  if ( !PsDisableDiskCounters )
  {
    v21 = 2984;
    v19 |= 0x8000u;
    v155 = 2944LL;
  }
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    LODWORD(v146) = (v21 + 7) & 0xFFFFFFF8;
    v21 = (_DWORD)v146 + 480;
    v19 |= 0x20000u;
    v16 = (int)v160;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v148 = MaximumGroupCount;
  v25 = 0;
  if ( (unsigned __int16)MaximumGroupCount > 1u )
  {
    v25 = (v21 + 7) & 0xFFFFFFF8;
    v21 = 16 * (unsigned __int16)MaximumGroupCount + v25;
  }
  LOBYTE(v24) = a2;
  LOBYTE(v23) = a2;
  result = ObCreateObject(v23, (_DWORD)PsProcessType, v16, v24, 0, v21, 0, v21, (__int64)&v136);
  if ( (int)result >= 0 )
  {
    v28 = (char *)v136;
    ObRetagReferences(v136, v27, 1917023056LL);
    memset(v28, 0, v21);
    *((_OWORD *)v28 + 128) = 0LL;
    *((_OWORD *)v28 + 129) = 0LL;
    *((_QWORD *)v28 + 256) = 0LL;
    *((_QWORD *)v28 + 258) = v28 + 2056;
    *((_QWORD *)v28 + 257) = v28 + 2056;
    ExInitializePushLock((PEX_RUNDOWN_REF)v28 + 139);
    *((_QWORD *)v28 + 135) = 0LL;
    *((_QWORD *)v28 + 189) = v28 + 1504;
    *((_QWORD *)v28 + 188) = v28 + 1504;
    *((_QWORD *)v28 + 277) = v28 + 2208;
    *((_QWORD *)v28 + 276) = v28 + 2208;
    *((_QWORD *)v28 + 307) = v28 + 2448;
    *((_QWORD *)v28 + 306) = v28 + 2448;
    v28[2170] = a4;
    v28[2168] = a5;
    v28[2169] = a6;
    *((_QWORD *)v28 + 283) = 0LL;
    KeInitializeIdealProcessorAssignmentBlock((__int64)(v28 + 2560));
    *((_QWORD *)v28 + 356) = 0LL;
    *((_QWORD *)v28 + 355) = 0LL;
    *((_QWORD *)v28 + 358) = 0LL;
    *((_QWORD *)v28 + 357) = 0LL;
    *((_QWORD *)v28 + 360) = 0LL;
    if ( (v19 & 2) != 0 )
      *((_DWORD *)v28 + 543) |= 1u;
    v29 = v129;
    if ( (v129 & 0x8000) != 0 )
      *((_DWORD *)v28 + 543) |= 0x20u;
    if ( v25 )
    {
      *((_DWORD *)v28 + 543) |= 0x80u;
      v98 = &v28[v25];
      *((_QWORD *)v28 + 297) = v98;
      *((_QWORD *)v28 + 298) = &v98[8 * v148];
    }
    v30 = a10;
    if ( (a10 & 1) != 0 )
      *((_DWORD *)v28 + 543) |= 0x1000u;
    if ( (v30 & 4) != 0 )
      *((_DWORD *)v28 + 543) |= 0x800000u;
    if ( (v30 & 8) != 0 )
      *((_DWORD *)v28 + 543) |= 0x8000000u;
    if ( (v30 & 0x10) != 0 )
      *((_DWORD *)v28 + 543) |= 0x40000000u;
    v31 = v29;
    v32 = 512;
    Flink = (__int64)Process[1].Header.WaitListHead.Flink | 2;
    if ( (v31 & 0x200) != 0 )
      Flink = (__int64)Process[1].Header.WaitListHead.Flink;
    *((_QWORD *)v28 + 169) = Flink;
    if ( (v19 & 0x8000) != 0 )
      *((_QWORD *)v28 + 279) = &v28[v155];
    if ( v19 >= 0x20000 )
    {
      *((_QWORD *)v28 + 285) = &v28[(unsigned int)v146];
      PoEnergyContextInitialize();
    }
    if ( v18 && (v32 & *v142) != 0 )
    {
      v35 = *(_DWORD *)(v18 + 316);
      v34 = v127;
    }
    else
    {
      v34 = v127;
      if ( v127 )
        v35 = *(_DWORD *)(v127 + 1528);
      else
        v35 = 5;
    }
    *((_DWORD *)v28 + 382) = v35;
    *((_DWORD *)v28 + 501) = 259;
    if ( v34 )
    {
      v36 = (*(_DWORD *)(v34 + 1124) >> 27) & 7;
      DefaultPagePriority = (*(_DWORD *)(v34 + 1120) >> 12) & 7;
      *((_QWORD *)v28 + 168) = *(_QWORD *)(v34 + 1088);
    }
    else
    {
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    *((_DWORD *)v28 + 281) = *((_DWORD *)v28 + 281) & 0xC7FFFFFF | (v36 << 27);
    v146 = (volatile signed __int32 *)(v28 + 1120);
    *((_DWORD *)v28 + 280) = (DefaultPagePriority << 12) | *((_DWORD *)v28 + 280) & 0xFFFF8FFF;
    if ( v163 )
    {
      if ( !PsReferencePartitionSafe((__int64)v163) )
      {
        IsTokenAssignableToProcess = -1073740640;
        goto LABEL_321;
      }
    }
    else
    {
      v163 = PspSystemPartition;
      IoDiskIoAttributionReference((__int64)PspSystemPartition);
    }
    *((_QWORD *)v28 + 315) = v38;
    v39 = Object;
    if ( Object )
    {
      ObfReferenceObject(Object);
      v39 = Object;
    }
    if ( (v19 & 4) == 0 || (v133 = *(unsigned __int16 *)(v34 + 2412), (v19 & 2) != 0) )
    {
      v40 = 0;
    }
    else
    {
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v34 + 1112)) )
      {
        v100 = *(void **)(v34 + 1304);
        Object = v100;
        if ( v100 )
          ObfReferenceObject(v100);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v34 + 1112));
      }
      v39 = Object;
      if ( !Object )
      {
        IsTokenAssignableToProcess = -1073741558;
        goto LABEL_321;
      }
      v101 = *(_QWORD *)(v34 + 1408);
      if ( v101 )
      {
        v19 |= 0x40u;
        v152 = *(_DWORD *)(v101 + 8);
      }
      v102 = (*(_DWORD *)(v34 + 1124) & 0x20000) == 0;
      v40 = 0;
      if ( !v102 )
        v40 = 0x20000;
      HIDWORD(v128) = v40;
    }
    v160 = v28 + 1304;
    *((_QWORD *)v28 + 163) = v39;
    if ( !v18 )
    {
      if ( v39 )
      {
        SectionInformation = MmGetSectionInformation(v39, 4LL, v197);
        IsTokenAssignableToProcess = SectionInformation;
        if ( SectionInformation < 0 )
          goto LABEL_321;
        v19 |= (HIBYTE(v197[12]) & 4 | (4
                                      * (HIBYTE(v197[12]) & 2 | (32
                                                               * (v197[16] & 1 | (2
                                                                                * (v197[16] & 2 | (2 * (v197[16] & 0xFC))))))))) << 11;
        v126 = HIWORD(v197[11]);
        v145 = HIWORD(v197[9]);
        v144 = LOWORD(v197[9]);
        if ( (v19 & 4) != 0 )
        {
          HIDWORD(v128) = v40 | 8;
          v19 |= 0x18u;
        }
      }
      goto LABEL_67;
    }
    *((_QWORD *)v28 + 270) = *(_QWORD *)(v18 + 440);
    IsTokenAssignableToProcess = MmGetSectionInformation(v39, 4LL, v18 + 48);
    if ( IsTokenAssignableToProcess < 0 )
      goto LABEL_321;
    v19 |= (*(_BYTE *)(v18 + 99) & 4 | (4
                                      * (*(_BYTE *)(v18 + 99) & 2 | (32
                                                                   * (*(_DWORD *)(v18 + 112) & 1 | (2
                                                                                                  * (*(_DWORD *)(v18 + 112) & 2 | (2 * (*(_DWORD *)(v18 + 112) & 0xFC))))))))) << 11;
    v145 = *(unsigned __int16 *)(v18 + 86);
    v144 = *(unsigned __int16 *)(v18 + 84);
    if ( (*(_WORD *)(v18 + 92) & *(_WORD *)(v18 + 10)) == 0 )
    {
      if ( (v19 & 4) == 0 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(v18 + 176), 0x72437350u);
        *((_QWORD *)v28 + 180) = *(_QWORD *)(v18 + 176);
        v126 = *(_WORD *)(v18 + 94);
        v42 = (HANDLE *)(v18 + 192);
        v43 = RtlOpenImageFileOptionsKey(v18 + 232, 0LL, v18 + 192);
        if ( v43 < 0 )
        {
          if ( v43 == -1073741772 )
            *(_BYTE *)(v18 + 8) |= 0x40u;
          *v42 = 0LL;
        }
        IsTokenAssignableToProcess = PspSelectMachineForProcess(v127, v18, &v137);
        if ( IsTokenAssignableToProcess < 0 )
        {
          v103 = 4LL;
          goto LABEL_292;
        }
        v133 = (unsigned __int16)v137;
        if ( BYTE2(v137) )
          v19 |= 0x40u;
        if ( HIBYTE(v137) )
          HIDWORD(v128) |= 0x20000u;
        if ( !*v42 )
          goto LABEL_67;
        if ( *(char *)(v18 + 8) >= 0 )
        {
          if ( (ImageFileKeyOption = RtlQueryImageFileKeyOption(*v42, 2, (__int64)&v128),
                ImageFileKeyOption == -2147483643)
            || ImageFileKeyOption >= 0 && (_DWORD)v128 == 2 && v131
            || (v150 = 0, (int)RtlQueryImageFileKeyOption(*v42, 4, 0LL) >= 0) && v150 == 1 )
          {
            IsTokenAssignableToProcess = -1073741767;
            v103 = 5LL;
            goto LABEL_292;
          }
        }
        v132 = 0;
        if ( (int)RtlQueryImageFileKeyOption(*v42, 4, 0LL) >= 0 )
        {
          if ( v132 )
          {
            v104 = v129 | 0x10;
            v129 = v104;
            a9 = v104;
            if ( (v19 & 0x40) == 0 )
            {
              v179.Length = 48;
              v179.RootDirectory = *v42;
              v179.Attributes = 576;
              v179.ObjectName = (PUNICODE_STRING)&PspLargePageDLLKeyName;
              *(_OWORD *)&v179.SecurityDescriptor = 0LL;
              if ( ZwOpenKey(&Handle, 1u, &v179) >= 0 )
              {
                v132 = 0;
                if ( (int)RtlQueryImageFileKeyOption(Handle, 4, 0LL) >= 0 && v132 )
                {
                  v129 = v104 | 0x20;
                  a9 = v104 | 0x20;
                }
                ObCloseHandle(Handle, 0);
              }
            }
          }
        }
        if ( !v156 )
        {
          PspReadIFEONodeOptions(v28, *v42, &v141);
          v140 = v141;
        }
        v151 = 0;
        if ( (int)RtlQueryImageFileKeyOption(*v42, 4, 0LL) >= 0 && v151 )
          v130 |= 0x40u;
        if ( (unsigned int)RtlQueryImageFileKeyOption(*v42, 0, (__int64)&v128) == -2147483643 )
        {
          v105 = v128;
          if ( (unsigned int)v128 <= 0x100 && (v128 & 7) == 0 )
          {
            P = (PVOID)ExAllocatePool2(64LL, (unsigned int)v128, 1933800272LL);
            if ( !P )
              goto LABEL_314;
            if ( (int)RtlQueryImageFileKeyOption(*v42, v105, (__int64)&v128) >= 0 && (v128 & 7) == 0 )
            {
              v19 |= 0x200000u;
              v135 = (unsigned int)v128 >> 3;
            }
          }
        }
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = *v42;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
        {
          PspReadIFEOPerfOptions(KeyHandle);
          ObCloseHandle(KeyHandle, 0);
        }
      }
LABEL_67:
      if ( (v19 & 0x40) == 0 )
      {
        v44 = v133;
        goto LABEL_69;
      }
      Pool2 = ExAllocatePool2(64LL, 16LL, 1350004567LL);
      *((_QWORD *)v28 + 176) = Pool2;
      if ( Pool2 )
      {
        v93 = v152;
        v44 = v133;
        if ( !v152 )
          v93 = PspWow64PickBestNtdll(v18);
        *(_DWORD *)(Pool2 + 8) = v93;
        v94 = (_QWORD *)*((_QWORD *)v28 + 176);
        if ( v94 )
          *v94 = 1LL;
LABEL_69:
        v155 = (__int64)(v28 + 2412);
        *((_WORD *)v28 + 1206) = v44;
        IsTokenAssignableToProcess = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
        if ( IsTokenAssignableToProcess >= 0 )
        {
          v45 = 0;
          v46 = a2;
          if ( a2 )
          {
            if ( v18 && (*v142 & 0x100) != 0 && *(_BYTE *)(v18 + 248) == 4 )
            {
              Privilege[0] = 14;
              v45 = 1;
            }
            v47 = a12;
            if ( a12 )
              Privilege[v45++] = 3;
            v48 = v129;
            if ( (v129 & 0x30) != 0 )
              Privilege[v45++] = 4;
            if ( (v48 & 0x80u) != 0 )
            {
              IsSessionLeaderProcess = MmIsSessionLeaderProcess(Process);
              v47 = a12;
              if ( !IsSessionLeaderProcess )
                Privilege[v45++] = 10;
            }
            if ( (v48 & 0x8400) != 0 )
              Privilege[v45++] = 7;
            if ( v45 )
            {
              v49 = RtlAcquirePrivilege(Privilege, v45, v47 != 0, &ReturnedState) < 0;
              v46 = a2;
              if ( !v49 )
                v19 |= 0x400u;
            }
            else
            {
              v46 = a2;
            }
          }
          else
          {
            v48 = v129;
          }
          if ( (v48 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v46) )
            goto LABEL_318;
          v122[0] = -1;
          v206[0] = 2097153;
          memset(&v206[1], 0, 0x104uLL);
          if ( v156 )
          {
            KeQueryAffinityProcess(v156, (__int64)v206, 0LL, v209, v122);
            v140 = (unsigned __int16 *)KeNodeBlock[*((unsigned __int16 *)v209 + v122[0])];
            v141 = v140;
            goto LABEL_90;
          }
          v50 = (__int64)v140;
          if ( !v140 )
          {
            if ( !v127 )
            {
              v51 = 0;
              v122[0] = 0;
              KeAddProcessorAffinityEx((unsigned __int16 *)v206, 0);
LABEL_89:
              KiCopyAffinityEx((__int64)v206, HIWORD(v206[0]), (unsigned __int16 *)KeActiveProcessors);
              if ( !v50 )
              {
                v177 = 0LL;
                WORD4(v177) = v51;
                if ( v51 >= LOWORD(v206[0]) )
                  v99 = 0LL;
                else
                  v99 = *(_QWORD *)&v206[2 * v51 + 2];
                *(_QWORD *)&v177 = v99;
                v140 = (unsigned __int16 *)KeSelectNodeForAffinity((__int64)&v177);
                v141 = v140;
              }
LABEL_90:
              *((_DWORD *)v28 + 281) |= HIDWORD(v128);
              *v146 |= v130;
              if ( v127 )
              {
                v164 = 0LL;
                v52 = 0;
                SessionId = 0;
                v53 = 0;
                v123 = 0;
                if ( a12 )
                {
                  if ( SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, a2) )
                    v19 |= 0x200u;
                  IsTokenAssignableToProcess = SeIsTokenAssignableToProcess(Token, &v123);
                  if ( IsTokenAssignableToProcess < 0 )
                    goto LABEL_319;
                  v54 = (v19 >> 9) & 1;
                  v53 = v123;
                  if ( !v123 && !v54 )
                    goto LABEL_318;
                  IsTokenAssignableToProcess = SeQuerySessionIdToken(Token, &SessionId);
                  if ( IsTokenAssignableToProcess < 0 )
                    goto LABEL_319;
                  v55 = MmGetSessionIdEx((__int64)Process);
                  v52 = SessionId;
                  if ( SessionId != v55 )
                  {
                    if ( !v54 )
                    {
LABEL_318:
                      IsTokenAssignableToProcess = -1073741727;
                      goto LABEL_319;
                    }
                    if ( (v129 & 0x80u) != 0 )
                    {
                      IsTokenAssignableToProcess = -1073741811;
                      goto LABEL_319;
                    }
                    v19 |= 0x20u;
                  }
                }
                else if ( (v19 & 4) != 0 )
                {
                  v52 = MmGetSessionIdEx(v127);
                  SessionId = v52;
                  v19 |= (unsigned int)MmGetSessionIdEx((__int64)Process) != v52 ? 0x20 : 0;
                }
                if ( (v19 & 0x20) != 0 )
                {
                  IsTokenAssignableToProcess = PspAttachSession(v52, &v205, &v164);
                  if ( IsTokenAssignableToProcess < 0 )
                  {
                    LOWORD(v19) = v19 & 0xFFDF;
                    goto LABEL_319;
                  }
                  *v146 |= 0x80u;
                }
                if ( !a12 || v53 )
                {
                  v57 = v127;
                  if ( v53 )
                    v57 = (__int64)Process;
                  PspInheritQuota(v28, v57);
                }
                else
                {
                  IsTokenAssignableToProcess = PspAssignProcessQuotaBlock(0LL, v28, Token);
                  if ( IsTokenAssignableToProcess < 0 )
                  {
                    if ( (v19 & 0x20) != 0 )
                      PspDetachSession(v164);
                    goto LABEL_319;
                  }
                }
                v58 = PspMaximumWorkingSet;
                if ( (BYTE4(v202) & 1) != 0 )
                  v58 = DWORD2(v203);
                v19 |= (MmCreateProcessAddressSpace(
                          (_DWORD)v163,
                          v56,
                          v58,
                          BYTE4(v202) & 1,
                          (unsigned int)*v140 + 1,
                          (__int64)v28) & 1) << 11;
                if ( (v19 & 0x20) != 0 )
                  PspDetachSession(v164);
                if ( (v19 & 0x800) == 0 )
                  goto LABEL_331;
              }
              else
              {
                PspInheritQuota(v28, 0LL);
                v28[912] = 1;
                IsTokenAssignableToProcess = MmInitializeHandBuiltProcess();
                if ( IsTokenAssignableToProcess < 0 )
                  goto LABEL_319;
              }
              _InterlockedOr((volatile signed __int32 *)v28 + 281, 0x40000u);
              v28 = (char *)v136;
              SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess(v136);
              IsTokenAssignableToProcess = KeInitializeProcess(
                                             v60,
                                             8,
                                             v122[0],
                                             (unsigned int)v206,
                                             (__int64)v141,
                                             SessionSchedulingGroupByProcess,
                                             v61);
              if ( IsTokenAssignableToProcess < 0 )
                goto LABEL_319;
              if ( v18 )
              {
                v134 = *(_DWORD *)(v18 + 392);
                v154 = *(_DWORD *)(v18 + 396);
                Address = *(PVOID *)(v18 + 416);
                v153 = *(_DWORD *)(v18 + 424);
                v170 = *(_QWORD *)(v18 + 208);
                v62 = *(_DWORD **)(v18 + 400);
                v138 = *(_DWORD *)(v18 + 408);
                v63 = *(_QWORD *)(v18 + 176);
                if ( v63 && qword_140C37A80 && (int)qword_140C37A80(v63, v207) >= 0 )
                {
                  if ( !v207[0] && v62 && v138 == 524 )
                  {
                    v107 = v207;
                    v108 = 4LL;
                    do
                    {
                      *(_OWORD *)v107 = *(_OWORD *)v62;
                      *((_OWORD *)v107 + 1) = *((_OWORD *)v62 + 1);
                      *((_OWORD *)v107 + 2) = *((_OWORD *)v62 + 2);
                      *((_OWORD *)v107 + 3) = *((_OWORD *)v62 + 3);
                      *((_OWORD *)v107 + 4) = *((_OWORD *)v62 + 4);
                      *((_OWORD *)v107 + 5) = *((_OWORD *)v62 + 5);
                      *((_OWORD *)v107 + 6) = *((_OWORD *)v62 + 6);
                      v107 += 32;
                      *((_OWORD *)v107 - 1) = *((_OWORD *)v62 + 7);
                      v62 += 32;
                      --v108;
                    }
                    while ( v108 );
                    *(_QWORD *)v107 = *(_QWORD *)v62;
                    v107[2] = v62[2];
                  }
                  v62 = v207;
                  v138 = 536;
                }
              }
              else
              {
                v62 = 0LL;
              }
              v64 = v127;
              IsTokenAssignableToProcess = PspInitializeProcessSecurity(
                                             v127,
                                             (_DWORD)v28,
                                             (_DWORD)Token,
                                             a12,
                                             v134,
                                             (v19 >> 4) & 1,
                                             HIWORD(v19) & 1,
                                             v154,
                                             (__int64)v62,
                                             v138,
                                             (__int64)Address,
                                             v153,
                                             v170,
                                             v175);
              if ( IsTokenAssignableToProcess < 0 )
                goto LABEL_319;
              v28[1463] = 2;
              if ( v64 )
              {
                if ( ((*(_BYTE *)(v64 + 1463) - 1) & 0xFB) == 0 )
                  v28[1463] = *(_BYTE *)(v64 + 1463);
                if ( v18 )
                  v65 = *(_QWORD *)(v18 + 296);
                else
                  LODWORD(v65) = 0;
                v66 = v18 ? *(_DWORD *)(v18 + 292) : 0;
                inited = ObInitProcess(
                           (struct _EX_RUNDOWN_REF *)(v64 & -(__int64)((a9 & 4) != 0)),
                           (__int64)v28,
                           v66,
                           v65);
              }
              else
              {
                *((_QWORD *)v28 + 174) = Process[1].Affinity.StaticBitmap[28];
                inited = MmInitializeHandBuiltProcess2((ULONG_PTR)v28);
              }
              IsTokenAssignableToProcess = inited;
              if ( inited < 0 )
                goto LABEL_319;
              if ( (v202 & 7) != 0 )
              {
                LOBYTE(v68) = a2;
                PspApplyIFEOPerfOptions(v28, &v202, v68);
              }
              if ( (v19 & 0x200000) != 0 )
                KeSetCpuSetsProcess((__int64)v28, v135, (__int64)P);
              KeStartIdealProcessorAssignmentBlock(
                (__int64)(v28 + 2560),
                (__int64)v28,
                (unsigned int *)((unsigned __int64)&v204 & -(__int64)((BYTE4(v202) & 2) != 0)));
              if ( v18 )
              {
                if ( (*v142 & 0x100) != 0 )
                {
                  LOBYTE(v70) = a2;
                  LOBYTE(v69) = *(_BYTE *)(v18 + 248);
                  IsTokenAssignableToProcess = PspSetProcessPriorityClass(v28, v69, 0LL, v70);
                  if ( IsTokenAssignableToProcess < 0 )
                    goto LABEL_319;
                }
              }
              v28[640] = PspComputeQuantumAndPriority((_DWORD)v28, 0, (unsigned int)&v124, 0, 0LL);
              v28[641] = v124;
              IsTokenAssignableToProcess = 0;
              v134 = 0;
              PspReadIFEOMitigationOptions(v18, &v198);
              v183 = v198;
              v184 = v199;
              v185 = PspSystemMitigationOptions;
              v186 = qword_140D1EFD8;
              PspInheritMitigationOptions(&v185, &v183, &v198);
              PspReadIFEOMitigationAuditOptions(v18, &v200);
              v187 = v200;
              v188 = v201;
              v189 = PspSystemMitigationAuditOptions;
              v190 = qword_140D1F258;
              PspInheritMitigationAuditOptions(&v189, &v187, (__int64)&v200);
              v71 = (HIWORD(v198.m128i_i64[0]) & 3) << 16;
              v72 = v142;
              if ( v18 )
              {
                if ( (*v142 & 0x10000) != 0 )
                {
                  v191 = *(_OWORD *)(v18 + 336);
                  v192 = *(_QWORD *)(v18 + 352);
                  v193 = v198;
                  v194 = v199;
                  PspInheritMitigationOptions(&v193, &v191, &v198);
                  v72 = v142;
                }
                if ( (*v72 & 0x8000000) != 0 )
                {
                  v181 = *(_OWORD *)(v18 + 464);
                  v182 = *(_QWORD *)(v18 + 480);
                  v195 = v200;
                  v196 = v201;
                  PspInheritMitigationAuditOptions(&v195, &v181, (__int64)&v200);
                }
              }
              if ( (_DWORD)TokenInformation )
                LOWORD(v71) = v71 | 4;
              v73 = v71 | 0x100;
              if ( (v71 & 4) == 0 )
                v73 = v71;
              if ( (v73 & 0xFF00) != 0 )
                PspHardenMitigationOptions(&v198);
              if ( !KeIsUserCetAllowed() )
                v198.m128i_i64[1] = v198.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
              if ( (v19 & 2) != 0 )
              {
                v198.m128i_i64[0] = v198.m128i_i64[0] & 0xFFFFFCFFFFFFFFFFuLL | 0x20000000000LL;
                v198.m128i_i64[1] = v198.m128i_i64[1] & 0xCFFFFFFFFFFFFFFCuLL | 0x2000000000000002LL;
                if ( (a10 & 2) != 0 )
                  v97 = v198.m128i_i64[0] & 0xFFFFFFFFFFCCFFFFuLL | 0x220000;
                else
                  v97 = v198.m128i_i64[0] & 0xFFFFFFFFFFCCFFFFuLL | 0x110000;
                v198.m128i_i64[0] = v97;
              }
              v74 = v169;
              if ( (v19 & 4) != 0 && (*(_DWORD *)(v127 + 2516) & 0x4000) == 0 )
                v198.m128i_i64[1] = v198.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
              if ( (v19 & 0x40) != 0 )
                v198.m128i_i64[1] = v198.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
              v199 = v199 & 0xFFFFFFFFFFFFCFFFuLL | 0x2000;
              if ( !KeIsCoreIsolationMitigationPolicyEnforceable() )
                v199 = v75 & 0xFFFFFFFFFCFFFFFFuLL | 0x2000000;
              v120 = v144;
              v119 = v145;
              PspApplyMitigationOptions((__int64)v28, v77, &v198, &v200, v76);
              if ( v74 )
              {
                v78 = (_DWORD *)v74[56];
                if ( v78 )
                {
                  v96 = (volatile signed __int32 *)(v28 + 2512);
                  if ( (*v78 & 1) != 0 )
                  {
                    _InterlockedOr(v96, 0x4000u);
                    v28 = (char *)v136;
                  }
                  if ( (*(_DWORD *)v74[56] & 2) != 0 )
                  {
                    _InterlockedOr(v96, 0x8000u);
                    v28 = (char *)v136;
                  }
                  *((_DWORD *)v28 + 602) = *(_DWORD *)(v74[56] + 4);
                }
                v79 = (_DWORD *)v74[57];
                if ( v79 )
                  *((_DWORD *)v28 + 718) = *v79;
                *((__m128i *)v74 + 21) = v198;
                v74[44] = v199;
                *((_OWORD *)v74 + 29) = v200;
                v74[60] = v201;
              }
              PsQueryProcessAttributes(v28, 0LL, v125);
              v80 = ((_DWORD)TokenInformation != 0) | 2u;
              if ( (a9 & 0x20000) == 0 )
                v80 = (_DWORD)TokenInformation != 0;
              SmProcessCreateNotification(v28, v80);
              if ( (*((_DWORD *)v28 + 629) & 0x4000) != 0 )
              {
                IsTokenAssignableToProcess = KeInitializeProcessUserCetLogging(v28);
                if ( IsTokenAssignableToProcess < 0 )
                  goto LABEL_319;
              }
              if ( (a9 & 0x80u) != 0
                && !(unsigned int)MmIsSessionLeaderProcess(Process)
                && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
              {
                goto LABEL_318;
              }
              if ( (v19 & 1) != 0 )
              {
LABEL_177:
                if ( (v19 & 0x400) != 0 )
                  RtlReleasePrivilege(ReturnedState);
                if ( *(_WORD *)v155 == 332 )
                  *((_DWORD *)v28 + 158) |= 1u;
                v135 = v19 & 0x80;
                if ( (v19 & 0x80) != 0 )
                {
                  if ( v74 )
                  {
                    IsTokenAssignableToProcess = PspSetupReservedUserMappings(v28, &v205, v74);
                    if ( IsTokenAssignableToProcess < 0 )
                      goto LABEL_321;
                  }
                }
                v148 = v19 & 0x100;
                if ( (v19 & 0x100) != 0 )
                {
                  *(_QWORD *)&v168 = 0LL;
                  *((_QWORD *)&v168 + 1) = -1LL;
                  v85 = (4 * (((v28[2170] & 7) != 1 ? 0 : 0x10) | ((v19 & 0x2000) != 0))) & 0xCF | ((v28[2170] & 7) != 0
                                                                                                  ? 2
                                                                                                  : 0) | ((v19 & 0x1000) != 0) | (16 * (((_DWORD)TokenInformation != 0 ? 2 : 0) | v125[0] & 1));
                  *(_DWORD *)((char *)&v168 + 3) = v85;
                  if ( (v19 & 4) != 0 )
                  {
                    v86 = v127;
                    Address = *(PVOID *)(v127 + 1360);
                    *((_QWORD *)v28 + 170) = Address;
                    if ( (v19 & 0x10) != 0 )
                      goto LABEL_190;
                    LOBYTE(v168) = 1;
                    KiStackAttachProcess((_KPROCESS *)v28, 0, (__int64)&v205);
                    if ( MmSecureVirtualMemory(Address, 0x7D0uLL, 4u) )
                      *(_OWORD *)Address = v168;
                    else
                      IsTokenAssignableToProcess = -1073741503;
                    if ( IsTokenAssignableToProcess >= 0 )
                    {
                      v114 = (unsigned __int64 **)*((_QWORD *)v28 + 176);
                      if ( v114 )
                      {
                        if ( *(_WORD *)v155 == 332 || (v115 = 0, *(_WORD *)v155 == 452) )
                          v115 = 1;
                        if ( v115 )
                        {
                          v169 = *v114;
                          if ( MmSecureVirtualMemory(v169, 0x488uLL, 4u) )
                          {
                            v159 = 0xFFFFFFFF00000001uLL;
                            BYTE3(v159) = v85;
                            *v169 = v159;
                          }
                          else
                          {
                            IsTokenAssignableToProcess = -1073741503;
                          }
                        }
                      }
                    }
                    KiUnstackDetachProcess(&v205);
                    if ( IsTokenAssignableToProcess < 0 )
                      goto LABEL_321;
                  }
                  else
                  {
                    IsTokenAssignableToProcess = MmCreatePeb(v28, &v168, v28 + 1360, &v178);
                    if ( IsTokenAssignableToProcess < 0 )
                    {
                      *((_QWORD *)v28 + 170) = 0LL;
                      goto LABEL_321;
                    }
                    if ( (_QWORD)v178 )
                    {
                      _InterlockedAnd(v146, 0xFFCFFFFF);
                      v118 = &v161;
                      v28 = (char *)v136;
                      PspSetProcessAffinitySafe(v136, 1LL, 0LL);
                    }
                  }
                }
                v86 = v127;
LABEL_190:
                if ( (v19 & 0x80) != 0 && v74 )
                {
                  IsTokenAssignableToProcess = PspSetupUserProcessAddressSpace(v86, v28, &v205, v74, v118, v119, v120);
                }
                else if ( v148 && (v19 & 0x10) == 0 )
                {
                  IsTokenAssignableToProcess = 0;
                  KiStackAttachProcess((_KPROCESS *)v28, 0, (__int64)&v205);
                  KeCopyXfdMaskToPeb(v28);
                  PspWritePebAffinityInfo(CurrentThread, v28);
                  if ( (v19 & 0x80) != 0 )
                  {
                    IsTokenAssignableToProcess = MmMapApiSetView(v28);
                    if ( IsTokenAssignableToProcess >= 0 )
                    {
                      IsTokenAssignableToProcess = PspMapSiloSharedDataView(v28);
                      if ( IsTokenAssignableToProcess >= 0 )
                      {
                        IsTokenAssignableToProcess = PspPrepareSystemDllInitBlock(0LL, 0LL);
                        if ( IsTokenAssignableToProcess >= 0 )
                        {
                          if ( *((_QWORD *)v28 + 176) )
                          {
                            ProcessNtdllType = PsWow64GetProcessNtdllType(v28);
                            IsTokenAssignableToProcess = PspPrepareSystemDllInitBlock(ProcessNtdllType, 0LL);
                          }
                        }
                      }
                    }
                  }
                  KiUnstackDetachProcess(&v205);
                }
                if ( IsTokenAssignableToProcess < 0 )
                  goto LABEL_321;
                v87 = CurrentThread;
                PspLockProcessExclusive((__int64)v28, (__int64)CurrentThread);
                v88 = ExCreateHandle(PspCidTable, v28);
                if ( !v88 )
                {
                  PspUnlockProcessExclusive((__int64)v28, (__int64)v87);
                  IsTokenAssignableToProcess = -1073741670;
                  goto LABEL_321;
                }
                if ( (v19 & 0x10000) == 0 )
                {
LABEL_196:
                  if ( KeQuerySystemTimeUnsafe() )
                  {
                    KeQuerySystemTimePrecise((_QWORD *)v28 + 141);
                  }
                  else
                  {
                    v28 = (char *)v136;
                    *((_QWORD *)v136 + 141) = MEMORY[0xFFFFF78000000014];
                  }
                  *((_QWORD *)v28 + 136) = v88;
                  *((_QWORD *)v28 + 288) = MEMORY[0xFFFFF78000000008];
                  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
                  v90 = v136;
                  *((_QWORD *)v136 + 289) = UnbiasedInterruptTime;
                  v90[291] = *((_QWORD *)v28 + 288);
                  *v176 = v90;
                  IsTokenAssignableToProcess = v134;
                  goto LABEL_199;
                }
                IsTokenAssignableToProcess = MmGetSectionStrongImageReference(0LL, 0LL, *v160, &v174);
                v117 = (__int64)v28;
                if ( IsTokenAssignableToProcess >= 0 )
                {
                  IsTokenAssignableToProcess = KeSecureProcess(
                                                 (_KPROCESS *)v28,
                                                 *((_QWORD *)v28 + 170),
                                                 v88,
                                                 v74[23],
                                                 v174,
                                                 (struct _MDL *)v74[46],
                                                 *((unsigned int *)v74 + 96));
                  if ( IsTokenAssignableToProcess >= 0 )
                    goto LABEL_196;
                  v117 = (__int64)v28;
                }
                PspUnlockProcessExclusive(v117, (__int64)v87);
                goto LABEL_321;
              }
              if ( (v19 & 4) == 0 )
              {
                IsTokenAssignableToProcess = PspInitializeFullProcessImageName((__int64)v74, (__int64)v28);
                if ( IsTokenAssignableToProcess >= 0 )
                {
                  v81 = Object;
                  v82 = MmInitializeProcessAddressSpace((ULONG_PTR)v28, 0LL, (__int64)Object, &a9, 0);
                  IsTokenAssignableToProcess = v82;
                  if ( v82 >= 0 )
                  {
                    v134 = v82;
                    if ( v74 )
                    {
                      v83 = *(_QWORD *)(*(_QWORD *)MiSectionControlArea((__int64)v81) + 32LL);
                      v84 = *((_QWORD *)v28 + 164);
                      if ( v83 != v84 )
                        v74[6] += v84 - v83;
                    }
                    v19 |= 0x80u;
LABEL_174:
                    if ( (v19 & 1) == 0 )
                    {
                      v19 |= (a9 & 0x10) << 8;
                      if ( (v19 & 2) == 0 )
                        v19 |= 0x100u;
                    }
                    goto LABEL_177;
                  }
                }
LABEL_319:
                if ( (v19 & 0x400) != 0 )
                  RtlReleasePrivilege(ReturnedState);
                goto LABEL_321;
              }
              v109 = v127;
              *((_QWORD *)v28 + 164) = *(_QWORD *)(v127 + 1312);
              IsTokenAssignableToProcess = MmInitializeProcessAddressSpace(
                                             (ULONG_PTR)v28,
                                             v109,
                                             0LL,
                                             &a9,
                                             (v19 & 8) != 0);
              if ( IsTokenAssignableToProcess < 0 )
                goto LABEL_319;
              v110 = *(unsigned __int16 *)(*(_QWORD *)(v109 + 1472) + 2LL);
              v111 = (void *)ExAllocatePool2(64LL, v110 + 16, 1632658771LL);
              *((_QWORD *)v28 + 184) = v111;
              if ( v111 )
              {
                v112 = v110 + 16;
                v113 = v127;
                memmove(v111, *(const void **)(v127 + 1472), v112);
                *(_QWORD *)(*((_QWORD *)v28 + 184) + 8LL) = *((_QWORD *)v28 + 184) + 16LL;
                *((_DWORD *)v28 + 330) = *(_DWORD *)(v113 + 1320);
                if ( (*(_DWORD *)(v113 + 1120) & 0x1000000) != 0 )
                  *v146 |= 0x1000000u;
                if ( (a9 & 0x1000) != 0 )
                {
                  *v160 = 0LL;
                  ObfDereferenceObject(Object);
                }
                goto LABEL_174;
              }
LABEL_331:
              IsTokenAssignableToProcess = -1073741670;
              goto LABEL_319;
            }
            if ( (*(_DWORD *)(v127 + 1120) & 0x100000) == 0 )
            {
              v50 = PspSelectNodeForProcess();
              v140 = (unsigned __int16 *)v50;
              v141 = (unsigned __int16 *)v50;
              v51 = KeSelectGroupFromNode(v50);
              v122[0] = v51;
              if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v51 )
              {
                v50 = 0LL;
                v140 = 0LL;
                v141 = 0LL;
                v51 = 1;
                v122[0] = 1;
              }
              goto LABEL_89;
            }
            v130 |= 0x100000u;
            v50 = KeNodeBlock[*(unsigned __int16 *)(v127 + 836)];
            v140 = (unsigned __int16 *)v50;
            v141 = (unsigned __int16 *)v50;
          }
          v122[0] = KeSelectGroupFromNode(v50);
          v51 = v122[0];
          goto LABEL_89;
        }
LABEL_321:
        PspRundownSingleProcess((__int64)v28, 0);
        ObfDereferenceObjectWithTag(v28, 0x72437350u);
LABEL_199:
        if ( P )
          ExFreePoolWithTag(P, 0x73437350u);
        if ( qword_140C37A88 )
          qword_140C37A88(v207);
        return (unsigned int)IsTokenAssignableToProcess;
      }
LABEL_314:
      IsTokenAssignableToProcess = -1073741801;
      goto LABEL_321;
    }
    IsTokenAssignableToProcess = -1073741701;
    v103 = 3LL;
LABEL_292:
    PspUpdateCreateInfo(v103, v18, 0LL);
    goto LABEL_321;
  }
  return result;
}
