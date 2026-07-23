/*
 * XREFs of NtSetInformationProcess @ 0x140774A50
 * Callers:
 *     <none>
 * Callees:
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     PsSetIoPriorityThread @ 0x140207824 (PsSetIoPriorityThread.c)
 *     RtlInterlockedSetClearBits @ 0x14020CA60 (RtlInterlockedSetClearBits.c)
 *     MmSetMemoryPriorityProcess @ 0x1402235F0 (MmSetMemoryPriorityProcess.c)
 *     KeIsCoreIsolationMitigationPolicyEnforceable @ 0x140223CD0 (KeIsCoreIsolationMitigationPolicyEnforceable.c)
 *     KeIsUserCetAllowed @ 0x140223CE4 (KeIsUserCetAllowed.c)
 *     PspLockProcessExclusive @ 0x140223CF8 (PspLockProcessExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140289A20 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14028B210 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     KeInitializeGate @ 0x140293114 (KeInitializeGate.c)
 *     MmGetSessionId @ 0x1402A3B20 (MmGetSessionId.c)
 *     PsIsSystemProcess @ 0x1402A66D0 (PsIsSystemProcess.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     PsSetPagePriorityThread @ 0x1402C1718 (PsSetPagePriorityThread.c)
 *     MmGetDefaultPagePriority @ 0x1402F5F64 (MmGetDefaultPagePriority.c)
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402FA470 (ExReleaseExtensionTable.c)
 *     MmGetMinWsPagePriority @ 0x1402FBDA0 (MmGetMinWsPagePriority.c)
 *     KeEnterCriticalRegionThread @ 0x140302E20 (KeEnterCriticalRegionThread.c)
 *     PsGetCurrentProcess @ 0x140317590 (PsGetCurrentProcess.c)
 *     IoBoostThreadIoPriority @ 0x14031B140 (IoBoostThreadIoPriority.c)
 *     KeVerifyGroupAffinity @ 0x140321194 (KeVerifyGroupAffinity.c)
 *     RtlStringCbCopyA @ 0x140347B88 (RtlStringCbCopyA.c)
 *     RtlInsertDynamicFunctionTable @ 0x1403483C4 (RtlInsertDynamicFunctionTable.c)
 *     KeStackAttachProcess @ 0x14034D950 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x14034E780 (KeUnstackDetachProcess.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14034FB90 (KeSetPriorityAndQuantumProcess.c)
 *     RtlRemoveDynamicFunctionTable @ 0x140354648 (RtlRemoveDynamicFunctionTable.c)
 *     PspWriteProcessSecurityDomain @ 0x140356368 (PspWriteProcessSecurityDomain.c)
 *     KeSynchronizeSecurityDomain @ 0x140356384 (KeSynchronizeSecurityDomain.c)
 *     PspLockUnlockProcessExclusive @ 0x1403613D8 (PspLockUnlockProcessExclusive.c)
 *     KeQueryPrimaryGroupProcess @ 0x1403656C8 (KeQueryPrimaryGroupProcess.c)
 *     PtrToUlong @ 0x14036AD50 (PtrToUlong.c)
 *     KeSetExecuteOptions @ 0x14036AD84 (KeSetExecuteOptions.c)
 *     PspUnlockProcessExclusive @ 0x14036B8E8 (PspUnlockProcessExclusive.c)
 *     MmRemoveExecuteGrants @ 0x14036DA1C (MmRemoveExecuteGrants.c)
 *     KeSetCpuSetsProcess @ 0x14039C834 (KeSetCpuSetsProcess.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403AFEAC (ExCpuSetResourceManagerAccessCheck.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403B6620 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     Feature_FsctlProcessMitigation__private_IsEnabledNoReporting @ 0x14040F5E4 (Feature_FsctlProcessMitigation__private_IsEnabledNoReporting.c)
 *     MmGetMaximumUserAddress @ 0x1404199D8 (MmGetMaximumUserAddress.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     IoRevokeHandlesForProcess @ 0x140558380 (IoRevokeHandlesForProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405752F4 (KeRecomputeCpuSetAffinityProcess.c)
 *     EtwTraceProcessSetInPrivateMode @ 0x1405FD40C (EtwTraceProcessSetInPrivateMode.c)
 *     MmReleaseCommitForMemResetPages @ 0x1406198B8 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x140619ADC (MmSetCommitReleaseEligibility.c)
 *     PsSetProcessFaultInformation @ 0x140683030 (PsSetProcessFaultInformation.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     PsReferencePrimaryToken @ 0x1406EF4D0 (PsReferencePrimaryToken.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1407336A0 (ObReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContextEx @ 0x1407380F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     ObReferenceProcessHandleTable @ 0x140742B50 (ObReferenceProcessHandleTable.c)
 *     PsGetNextProcessThread @ 0x140742FC0 (PsGetNextProcessThread.c)
 *     LpcRequestPort @ 0x14076F070 (LpcRequestPort.c)
 *     MmAllocateUserStack @ 0x1407748A4 (MmAllocateUserStack.c)
 *     KeSetAutoAlignmentProcess @ 0x14077496C (KeSetAutoAlignmentProcess.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x140774994 (PspSetProcessDefaultHardErrorMode.c)
 *     PspWritePebAffinityInfo @ 0x1407A2C0C (PspWritePebAffinityInfo.c)
 *     PoSetProcessEnergyTrackingState @ 0x1407B1054 (PoSetProcessEnergyTrackingState.c)
 *     PsSetProcessPriorityByClass @ 0x1407C08B0 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x1407C08E0 (PspSetProcessForegroundBackgroundRequest.c)
 *     PspCombineSecurityDomains @ 0x1407C729C (PspCombineSecurityDomains.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1407D5314 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     ExEnableHandleExceptions @ 0x1407DC544 (ExEnableHandleExceptions.c)
 *     PspSetRedirectionTrustPolicy @ 0x1407DDAA4 (PspSetRedirectionTrustPolicy.c)
 *     PspGetRedirectionTrustPolicy @ 0x1407DE628 (PspGetRedirectionTrustPolicy.c)
 *     SeCheckPrivilegedObject @ 0x1407E05E4 (SeCheckPrivilegedObject.c)
 *     PspSetProcessPriorityClass @ 0x1407E3DE0 (PspSetProcessPriorityClass.c)
 *     PspSetQuotaLimits @ 0x1407E3E94 (PspSetQuotaLimits.c)
 *     PsIsSystemWideMitigationOptionSet @ 0x1407E87B8 (PsIsSystemWideMitigationOptionSet.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1407E8AF0 (PspSetNoChildProcessRestrictedPolicy.c)
 *     SeCompareSigningLevels @ 0x1407E9DF0 (SeCompareSigningLevels.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1407EA400 (PspGetNoChildProcessRestrictedPolicy.c)
 *     KeSetDisableBoostThread @ 0x1407EB3F4 (KeSetDisableBoostThread.c)
 *     RtlIsSandboxedToken @ 0x1407F3D10 (RtlIsSandboxedToken.c)
 *     EtwCheckSecurityLoggerAccess @ 0x1407FC82C (EtwCheckSecurityLoggerAccess.c)
 *     PspAssignPrimaryToken @ 0x140841EB8 (PspAssignPrimaryToken.c)
 *     ExSystemExceptionFilter @ 0x140865F70 (ExSystemExceptionFilter.c)
 *     EtwSetProcessTelemetryCoverage @ 0x140874338 (EtwSetProcessTelemetryCoverage.c)
 *     KeSetCheckStackExtentsProcess @ 0x140974454 (KeSetCheckStackExtentsProcess.c)
 *     KeSetDisableBoostProcess @ 0x14097447C (KeSetDisableBoostProcess.c)
 *     ObSetProcessDeviceMap @ 0x14097C4DC (ObSetProcessDeviceMap.c)
 *     PfSnSetAltPrefetchParam @ 0x14097FAA8 (PfSnSetAltPrefetchParam.c)
 *     PsIsGuiThread @ 0x1409AE6E4 (PsIsGuiThread.c)
 *     PsSetProcessHandleTracingInformation @ 0x1409AE6F4 (PsSetProcessHandleTracingInformation.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AE9B8 (PspEnableProcessOptionalXStateFeatures.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x1409AEDCC (PspProcessDynamicEHContinuationTargets.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1409AF098 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspSetProcessAffinitySafe @ 0x1409AF970 (PspSetProcessAffinitySafe.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1409AFAC8 (PspSetProcessAffinityUpdateMode.c)
 *     PspApplyCoreIsolationPolicy @ 0x1409B0CAC (PspApplyCoreIsolationPolicy.c)
 *     PspAssignCpuPartitionsToProcess @ 0x1409B0E14 (PspAssignCpuPartitionsToProcess.c)
 *     PspFreeUserFiberShadowStack @ 0x1409B1208 (PspFreeUserFiberShadowStack.c)
 *     PspSetupUserFiberShadowStack @ 0x1409B1AE0 (PspSetupUserFiberShadowStack.c)
 *     PspSyscallProviderOptIn @ 0x1409B4F7C (PspSyscallProviderOptIn.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x1409B6318 (PsIumEnableOnDemandDebugWithResponse.c)
 *     SeCodeIntegritySetInformationProcess @ 0x1409C8C90 (SeCodeIntegritySetInformationProcess.c)
 *     SeSetVirtualizationToken @ 0x1409C989C (SeSetVirtualizationToken.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     MmProcessWorkingSetControl @ 0x140A43584 (MmProcessWorkingSetControl.c)
 *     MmValidateUserCallTarget @ 0x140A43DB8 (MmValidateUserCallTarget.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  size_t v4; // rdi
  _QWORD *v5; // rbx
  unsigned int v7; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 PreviousMode; // r15
  int v10; // eax
  NTSTATUS result; // eax
  NTSTATUS v12; // esi
  __int64 Pool2; // rax
  void *v14; // rbx
  PVOID v15; // rcx
  int v16; // ebx
  unsigned int v17; // eax
  char v18; // di
  PVOID v19; // rcx
  char v20; // al
  __int16 v21; // bx
  NTSTATUS v22; // edi
  bool v23; // zf
  PVOID v24; // rcx
  unsigned int v25; // ebx
  char v26; // bl
  int v27; // edi
  _QWORD *i; // rbx
  void *v29; // r12
  unsigned __int64 v30; // r12
  int v31; // esi
  signed __int64 v32; // rdx
  signed __int64 *v33; // roff
  signed __int64 v34; // r15
  signed __int64 v35; // rax
  void *v36; // r15
  int v37; // eax
  NTSTATUS v38; // eax
  NTSTATUS v39; // ebx
  PVOID v40; // rcx
  unsigned __int8 v41; // bl
  __int64 v42; // r13
  __int16 v43; // r8
  unsigned int v44; // ebx
  bool v45; // zf
  __int64 v46; // rcx
  __int64 v47; // r13
  signed __int64 *v48; // rbx
  _BOOL8 v49; // rdi
  __int64 v50; // r13
  PVOID v51; // rcx
  _QWORD *j; // rbx
  __int64 v53; // rbx
  unsigned int v54; // ebx
  unsigned int v55; // ebx
  unsigned int v56; // ecx
  unsigned int v57; // eax
  unsigned __int64 v58; // r12
  volatile signed __int32 *v59; // r8
  signed __int32 v60; // eax
  signed int v61; // r9d
  signed __int32 v62; // edx
  volatile signed __int64 *v63; // rbx
  signed int v64; // r14d
  int v65; // ebx
  _KPROCESS *CurrentProcess; // rax
  unsigned int v67; // ebx
  unsigned int v68; // ebx
  volatile signed __int32 *v69; // r8
  signed __int32 v70; // eax
  signed __int32 v71; // edx
  _QWORD *v72; // rdi
  int v73; // ebx
  unsigned __int64 v74; // rbx
  _KPROCESS *v75; // rdi
  BOOLEAN v76; // al
  BOOLEAN v77; // al
  struct _EX_RUNDOWN_REF *v78; // rcx
  __int16 v79; // r8
  bool v80; // r9
  unsigned __int64 v81; // r8
  __int16 v82; // r8
  __int64 v83; // r13
  PVOID v84; // r8
  volatile signed __int32 *v85; // rcx
  __int16 v86; // r8
  __int64 v87; // rcx
  __int64 *v88; // rdx
  unsigned int v89; // ebx
  unsigned int v90; // edi
  PACCESS_TOKEN v91; // rbx
  unsigned __int64 v92; // rbx
  _KPROCESS *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // r8
  volatile signed __int32 *p_Lock; // r9
  __int64 v97; // rcx
  int v98; // edx
  int v99; // ecx
  unsigned __int64 v100; // rax
  unsigned int v101; // ebx
  int v102; // edi
  char IsGuiThread; // al
  unsigned int v104; // ebx
  int v105; // edi
  char v106; // r12
  _KPROCESS *v107; // rax
  int v108; // eax
  char IsSandboxedToken; // si
  BOOLEAN v110; // al
  int v111; // r8d
  int v112; // edi
  int v113; // r10d
  unsigned int v114; // ebx
  int v115; // edx
  int v116; // eax
  bool v117; // zf
  int v118; // r8d
  int v119; // ecx
  int v120; // ebx
  int v121; // eax
  unsigned int v122; // ebx
  int v123; // r12d
  int v124; // edi
  __int64 Flink_low; // rdx
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // rcx
  int v129; // r8d
  int v130; // edx
  unsigned int v131; // ecx
  int v132; // edi
  int v133; // r8d
  int v134; // edx
  int v135; // ebx
  int v136; // r11d
  int v137; // ecx
  int v138; // eax
  int v139; // edx
  unsigned int v140; // ebx
  unsigned int NoChildProcessRestrictedPolicy; // eax
  __int64 v142; // r9
  __int64 v143; // r8
  int v144; // edx
  int v145; // eax
  int v146; // ebx
  int v147; // ebx
  bool IsCoreIsolationMitigationPolicyEnforceable; // al
  unsigned int v149; // ecx
  int v150; // r8d
  int v151; // ebx
  int v152; // edx
  int v153; // edi
  int v154; // esi
  int v155; // r15d
  int v156; // r12d
  int v157; // ecx
  unsigned int v158; // ebx
  int RedirectionTrustPolicy; // eax
  __int64 v160; // r8
  __int64 v161; // r9
  int v162; // ecx
  int v163; // ebx
  __int64 v164; // rdx
  unsigned int v165; // ebx
  unsigned __int64 v166; // rax
  void *v167; // rdi
  __int64 v168; // rax
  int v169; // edx
  void *v170; // rcx
  unsigned __int64 v171; // rdx
  void *v172; // rax
  _BOOL8 v173; // rdi
  unsigned int v174; // edi
  char v175; // bl
  unsigned int v176; // ebx
  unsigned __int64 v177; // rax
  char v178; // bl
  int v179; // ecx
  unsigned __int64 ExtensionTable; // rbx
  int v181; // edi
  NTSTATUS v182; // ebx
  NTSTATUS v183; // ebx
  __int128 v184; // xmm1
  const char *v185; // r8
  _KPROCESS *v186; // rax
  int v187; // eax
  int v188; // r8d
  int v189; // edx
  unsigned int v190; // ecx
  unsigned int v191; // ecx
  unsigned int v192; // ebx
  __int64 v193; // r8
  PVOID v194; // rbx
  PVOID v195; // rbx
  _KPROCESS *v196; // rax
  unsigned __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 *v199; // r8
  int v200; // ebx
  int v201; // eax
  unsigned int v202; // eax
  int v203; // eax
  unsigned int v204; // eax
  _DWORD *v205; // r12
  unsigned int v206; // eax
  const void *v207; // rbx
  size_t v208; // rdi
  _KPROCESS *v209; // rax
  PVOID v210; // rcx
  _DWORD *v211; // rax
  unsigned int v212; // ecx
  const void *v213; // rbx
  size_t v214; // rdi
  _KPROCESS *v215; // rax
  _DWORD *v216; // rax
  unsigned __int64 v217; // rbx
  _KPROCESS *v218; // rax
  _DWORD *v219; // rax
  _DWORD *v220; // r12
  __int64 v221; // r8
  unsigned int v222; // ecx
  _DWORD *v223; // rdx
  _KPROCESS *v224; // rax
  __int16 v225; // cx
  __int64 v226; // rcx
  _QWORD *v227; // rdx
  PVOID k; // rcx
  __int64 v229; // rdi
  _QWORD *v230; // rbx
  _DWORD *v231; // rax
  char *v232; // rbx
  char *v233; // rax
  char *v234; // r15
  __int64 v235; // rdx
  __int64 v236; // r13
  volatile void **v237; // rdi
  _QWORD *v238; // rdi
  unsigned int v239; // eax
  __int64 v240; // r8
  _QWORD *v241; // rdi
  _DWORD *v242; // rbx
  unsigned int *v243; // r13
  __int64 v244; // rax
  unsigned __int64 v245; // rax
  _DWORD *v246; // rax
  _DWORD *v247; // r15
  unsigned int v248; // eax
  unsigned __int64 v249; // r8
  unsigned __int64 v250; // rax
  unsigned __int64 v251; // rdx
  char *v252; // rsi
  int v253; // r9d
  unsigned int v254; // ebx
  signed __int32 v255[8]; // [rsp+0h] [rbp-4D8h] BYREF
  ULONG Tag[2]; // [rsp+20h] [rbp-4B8h]
  PVOID Object; // [rsp+40h] [rbp-498h] BYREF
  unsigned int v258; // [rsp+48h] [rbp-490h]
  NTSTATUS v259; // [rsp+4Ch] [rbp-48Ch]
  __int64 v260; // [rsp+50h] [rbp-488h]
  PROCESSINFOCLASS v261; // [rsp+58h] [rbp-480h]
  unsigned __int16 v262; // [rsp+5Ch] [rbp-47Ch] BYREF
  __int64 v263; // [rsp+60h] [rbp-478h] BYREF
  struct _KTHREAD *v264; // [rsp+68h] [rbp-470h]
  __int16 v265; // [rsp+70h] [rbp-468h]
  unsigned int v266; // [rsp+74h] [rbp-464h]
  PVOID v267; // [rsp+78h] [rbp-460h]
  ULONG Alignment; // [rsp+80h] [rbp-458h]
  PVOID NextProcessThread; // [rsp+88h] [rbp-450h]
  char v270; // [rsp+90h] [rbp-448h]
  char v271; // [rsp+91h] [rbp-447h]
  char v272; // [rsp+92h] [rbp-446h]
  unsigned int v273; // [rsp+94h] [rbp-444h]
  signed int v274; // [rsp+98h] [rbp-440h]
  char v275; // [rsp+9Ch] [rbp-43Ch]
  char *v276; // [rsp+A0h] [rbp-438h]
  unsigned int *v277; // [rsp+A8h] [rbp-430h]
  _DWORD *v278; // [rsp+B0h] [rbp-428h]
  unsigned int v279; // [rsp+B8h] [rbp-420h]
  int v280; // [rsp+BCh] [rbp-41Ch] BYREF
  _DWORD *v281; // [rsp+C0h] [rbp-418h]
  _QWORD *v282; // [rsp+C8h] [rbp-410h]
  __int128 v283; // [rsp+D0h] [rbp-408h]
  int v284; // [rsp+E0h] [rbp-3F8h]
  unsigned int v285; // [rsp+E4h] [rbp-3F4h]
  _QWORD *v286; // [rsp+E8h] [rbp-3F0h]
  PVOID v287; // [rsp+F0h] [rbp-3E8h]
  PVOID v288; // [rsp+F8h] [rbp-3E0h] BYREF
  __int64 v289; // [rsp+100h] [rbp-3D8h]
  void *Src[2]; // [rsp+108h] [rbp-3D0h] BYREF
  PVOID P; // [rsp+118h] [rbp-3C0h]
  PVOID v292; // [rsp+120h] [rbp-3B8h] BYREF
  __int64 v293; // [rsp+128h] [rbp-3B0h]
  PVOID v294; // [rsp+130h] [rbp-3A8h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+138h] [rbp-3A0h]
  NTSTRSAFE_PCSTR pszSrc[2]; // [rsp+140h] [rbp-398h] BYREF
  __int64 v297; // [rsp+150h] [rbp-388h]
  int v298; // [rsp+158h] [rbp-380h]
  unsigned int v299; // [rsp+15Ch] [rbp-37Ch]
  unsigned int v300; // [rsp+160h] [rbp-378h]
  BOOL v301; // [rsp+164h] [rbp-374h]
  unsigned int v302; // [rsp+168h] [rbp-370h]
  unsigned int v303; // [rsp+16Ch] [rbp-36Ch]
  unsigned int v304; // [rsp+170h] [rbp-368h]
  unsigned int v305; // [rsp+174h] [rbp-364h]
  unsigned int *v306; // [rsp+178h] [rbp-360h]
  unsigned __int64 v307; // [rsp+180h] [rbp-358h]
  unsigned int v308; // [rsp+188h] [rbp-350h]
  unsigned int *v309; // [rsp+190h] [rbp-348h]
  _DWORD *v310; // [rsp+198h] [rbp-340h]
  int v311; // [rsp+1A0h] [rbp-338h]
  unsigned int v312; // [rsp+1A4h] [rbp-334h]
  unsigned int v313; // [rsp+1A8h] [rbp-330h]
  unsigned int v314; // [rsp+1ACh] [rbp-32Ch]
  unsigned int v315; // [rsp+1B0h] [rbp-328h]
  unsigned __int64 v316; // [rsp+1C0h] [rbp-318h]
  void **v317; // [rsp+1C8h] [rbp-310h]
  PVOID v318; // [rsp+1D0h] [rbp-308h]
  unsigned __int64 v319; // [rsp+1D8h] [rbp-300h]
  __int64 v320; // [rsp+1E0h] [rbp-2F8h]
  __int64 v321; // [rsp+1E8h] [rbp-2F0h]
  PVOID v322; // [rsp+1F0h] [rbp-2E8h] BYREF
  int v323; // [rsp+1F8h] [rbp-2E0h]
  _BYTE SubjectContext[40]; // [rsp+200h] [rbp-2D8h] BYREF
  __int64 v325; // [rsp+228h] [rbp-2B0h]
  __int128 v326; // [rsp+230h] [rbp-2A8h] BYREF
  __int128 v327; // [rsp+240h] [rbp-298h]
  struct _KAPC_STATE ApcState; // [rsp+250h] [rbp-288h] BYREF
  _OWORD v329[2]; // [rsp+280h] [rbp-258h] BYREF
  __int64 v330; // [rsp+2A0h] [rbp-238h]
  _OWORD v331[9]; // [rsp+2B0h] [rbp-228h] BYREF
  char v332[256]; // [rsp+340h] [rbp-198h] BYREF
  char pszDest[16]; // [rsp+440h] [rbp-98h] BYREF
  __int128 v334; // [rsp+450h] [rbp-88h]
  __int128 v335; // [rsp+460h] [rbp-78h]
  __int128 v336; // [rsp+470h] [rbp-68h]
  char v337; // [rsp+480h] [rbp-58h]

  v4 = ProcessInformationLength;
  v5 = ProcessInformation;
  v261 = ProcessInformationClass;
  v278 = ProcessInformation;
  Alignment = ProcessInformationLength;
  v7 = 0;
  Object = 0LL;
  v326 = 0LL;
  v258 = 0;
  v265 = 0;
  v273 = 0;
  v287 = 0LL;
  v288 = 0LL;
  v307 = 0LL;
  v280 = 0;
  v327 = 0LL;
  v262 = 0;
  CurrentThread = KeGetCurrentThread();
  v264 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    switch ( ProcessInformationClass )
    {
      case ProcessBasePriority:
        v10 = 4;
        break;
      case ProcessEnableAlignmentFaultFixup:
        v10 = 1;
        break;
      case ProcessForegroundInformation:
        v10 = 1;
        break;
      case ProcessPriorityClass:
        v10 = 1;
        break;
      case ProcessPriorityClassEx:
        v10 = 2;
        break;
      case ProcessAffinityMask:
        v10 = 8;
        break;
      case ProcessIoPriority:
        v10 = 4;
        break;
      case ProcessPagePriority:
        v10 = 4;
        break;
      case ProcessTlsInformation:
        v10 = 8;
        break;
      case ProcessExceptionPort:
        v10 = 8;
        break;
      case ProcessInstrumentationCallback:
        v10 = 8;
        break;
      case ProcessThreadStackAllocation:
        v10 = 8;
        break;
      case ProcessFiberShadowStackAllocation:
        v10 = 8;
        break;
      case ProcessFreeFiberShadowStackAllocation:
        v10 = 8;
        break;
      case ProcessAffinityUpdateMode:
        v10 = 4;
        break;
      case ProcessMemoryAllocationMode:
        v10 = 4;
        break;
      case ProcessConsoleHostProcess:
        v10 = 8;
        break;
      case ProcessDynamicFunctionTableInformation:
        v10 = 8;
        break;
      case ProcessRevokeFileHandles:
        v10 = 8;
        break;
      case ProcessMemoryExhaustion:
        v10 = 8;
        break;
      case ProcessCommitReleaseInformation:
        v10 = 8;
        break;
      case ProcessInPrivate:
        v10 = 1;
        break;
      case ProcessHighGraphicsPriorityInformation:
        v10 = 1;
        break;
      case ProcessManageWritesToExecutableMemory:
        v10 = 8;
        break;
      case ProcessDebugAuthInformation:
        v10 = 1;
        break;
      case ProcessSystemResourceManagement:
        v10 = 4;
        break;
      case ProcessCombineSecurityDomainsInformation:
        v10 = 8;
        break;
      case ProcessEnableReadWriteVmLogging:
        v10 = 1;
        break;
      case ProcessAltSystemCallInformation:
        v10 = 4;
        break;
      case ProcessDynamicEHContinuationTargets:
        v10 = 8;
        break;
      case ProcessDynamicEnforcedCetCompatibleRanges:
        v10 = 8;
        break;
      case ProcessEnableOptionalXStateFeatures:
        v10 = 8;
        break;
      default:
        v10 = 4;
        if ( ProcessInformationClass == ProcessAssignCpuPartitions )
          v10 = 8;
        break;
    }
    if ( ProcessInformationLength )
    {
      if ( ((v10 - 1) & (unsigned int)ProcessInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ProcessInformation + ProcessInformationLength > 0x7FFFFFFF0000LL
        || (char *)ProcessInformation + ProcessInformationLength < ProcessInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
      CurrentThread = v264;
    }
  }
  if ( ProcessInformationClass == ProcessDefaultHardErrorMode )
  {
    if ( ProcessInformationLength == 4 )
    {
      v254 = *(_DWORD *)ProcessInformation;
      v302 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        PspSetProcessDefaultHardErrorMode((__int64)Object, (__int64)v264, v254);
LABEL_95:
        v15 = Object;
LABEL_96:
        ObfDereferenceObjectWithTag(v15, 0x79517350u);
        return 0;
      }
      return result;
    }
    return -1073741820;
  }
  if ( ProcessInformationClass == ProcessThreadStackAllocation )
  {
    memset(SubjectContext, 0, sizeof(SubjectContext));
    if ( ProcessHandle != (HANDLE)-1LL )
      return -1073741811;
    v252 = 0LL;
    if ( ProcessInformationLength == 40 )
    {
      if ( PreviousMode )
      {
        *(_OWORD *)SubjectContext = *(_OWORD *)ProcessInformation;
        *(_OWORD *)&SubjectContext[16] = *((_OWORD *)ProcessInformation + 1);
        *(_QWORD *)&SubjectContext[32] = *((_QWORD *)ProcessInformation + 4);
        v252 = (char *)ProcessInformation + 32;
        v5 = SubjectContext;
      }
      v253 = *(_DWORD *)v5;
      if ( *(_DWORD *)v5 > 0x40u || *((_DWORD *)v5 + 1) | *((_DWORD *)v5 + 2) | *((_DWORD *)v5 + 3) )
        return -1073741811;
      v5 += 2;
      goto LABEL_1035;
    }
    if ( ProcessInformationLength == 24 )
    {
      v253 = 0;
      if ( PreviousMode )
      {
        *(_QWORD *)&SubjectContext[16] = *(_QWORD *)ProcessInformation;
        *(_QWORD *)&SubjectContext[24] = *((_QWORD *)ProcessInformation + 1);
        v252 = (char *)ProcessInformation + 16;
        v5 = &SubjectContext[16];
      }
LABEL_1035:
      if ( *v5 )
      {
        v322 = (PVOID)*v5;
        v5[2] = 0LL;
        result = MmAllocateUserStack(v5 + 2, v5[1], (__int64 *)&v322, v253, 0);
        if ( result >= 0 && PreviousMode )
          *(_QWORD *)v252 = v5[2];
        return result;
      }
      return -1073741811;
    }
    return -1073741820;
  }
  if ( ProcessInformationClass != ProcessTlsInformation )
  {
    switch ( ProcessInformationClass )
    {
      case ProcessQuotaLimits:
        return PspSetQuotaLimits((ULONG_PTR)ProcessHandle);
      case ProcessBasePriority:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v16 = *(_DWORD *)ProcessInformation;
        v311 = v16;
        v17 = v16 & 0x80000000;
        if ( v16 < 0 )
          v16 &= ~0x80000000;
        v18 = v17 != 0 ? 2 : 0;
        if ( (unsigned int)(v16 - 1) > 0x1E )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v19 = Object;
        if ( v16 > *((char *)Object + 640) )
        {
          v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                  SeIncreaseBasePriorityPrivilege,
                  ProcessHandle,
                  512LL,
                  PreviousMode);
          v19 = Object;
          if ( !v20 )
            goto LABEL_104;
        }
        KeSetPriorityAndQuantumProcess((__int64)v19, (unsigned int)v16, 0, 0, 0);
        MmSetMemoryPriorityProcess((__int64)Object, v18);
        goto LABEL_95;
      case ProcessRaisePriority:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v27 = *(_DWORD *)ProcessInformation;
        v312 = *(_DWORD *)ProcessInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v12 = result;
        if ( result < 0 )
          return result;
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
          goto LABEL_133;
        for ( i = PsGetNextProcessThread((__int64)Object, 0LL); i; i = PsGetNextProcessThread((__int64)Object, i) )
          KeBoostPriorityThread((__int64)i, v27);
        goto LABEL_132;
      case ProcessExceptionPort:
        if ( ProcessInformationLength == 8 )
        {
          v279 = 0;
          v29 = *(void **)ProcessInformation;
          v306 = *(unsigned int **)ProcessInformation;
        }
        else
        {
          if ( ProcessInformationLength != 16 )
            return -1073741820;
          v277 = *(unsigned int **)ProcessInformation;
          v306 = v277;
          v279 = *((_DWORD *)ProcessInformation + 2);
          if ( (v279 & 0xFFFFFFF8) != 0 )
            return -1073741811;
          v29 = v277;
        }
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        v294 = 0LL;
        result = ObReferenceObjectByHandle(v29, 0, LpcPortObjectType, PreviousMode, &v294, 0LL);
        v30 = (unsigned __int64)v294;
        v277 = (unsigned int *)v294;
        if ( result < 0 )
          return result;
        v31 = ObReferenceObjectByHandleWithTag(
                ProcessHandle,
                0x800u,
                (POBJECT_TYPE)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL);
        if ( v31 < 0 )
        {
          ObfDereferenceObject((PVOID)v30);
          return v31;
        }
        v32 = v30 | v279;
        v282 = (_QWORD *)v32;
        v33 = (signed __int64 *)((char *)Object + 1200);
        _m_prefetchw((char *)Object + 1200);
        v34 = *v33;
        do
        {
          NextProcessThread = (PVOID)v34;
          if ( (_DWORD)v4 == 16 )
          {
            *((_DWORD *)v5 + 2) = v34 & 7;
          }
          else if ( (v34 & 7) != 0 )
          {
            ObfDereferenceObject((PVOID)v30);
            goto LABEL_149;
          }
          v35 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 150, v32, v34);
          v23 = v34 == v35;
          v34 = v35;
        }
        while ( !v23 );
        if ( v35 )
        {
          v36 = (void *)(v35 & 0xFFFFFFFFFFFFFFF8uLL);
          *(_DWORD *)&SubjectContext[2] = 852016;
          strcpy(SubjectContext, "\b");
          memset(&SubjectContext[6], 0, 34);
          v325 = *((_QWORD *)Object + 136);
          while ( 1 )
          {
            v37 = LpcRequestPort((__int64)v36, (__m256i *)SubjectContext);
            if ( v37 != -1073741801 && v37 != -1073741670 )
              break;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
          }
          PspLockUnlockProcessExclusive((__int64)Object, (__int64)v264);
          ObfDereferenceObject(v36);
        }
        goto LABEL_157;
      case ProcessAccessToken:
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v320 = *(_QWORD *)ProcessInformation;
        return PspAssignPrimaryToken(CurrentThread, PreviousMode, ProcessHandle);
      case ProcessLdtInformation:
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x220u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result >= 0 )
          goto LABEL_161;
        return result;
      case ProcessLdtSize:
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x220u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result >= 0 )
          goto LABEL_161;
        return result;
      case ProcessIoPortHandlers:
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
LABEL_161:
        v38 = xKdEnumerateDebuggingDevices();
        goto LABEL_162;
      case ProcessWorkingSetWatch:
      case ProcessWorkingSetWatchEx:
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v12 = PsChargeProcessNonPagedPoolQuota((struct _KPROCESS *)Object, 0x6028uLL);
        if ( v12 < 0 )
          goto LABEL_86;
        Pool2 = ExAllocatePool2(64LL, 24616LL, 1935110992LL);
        v14 = (void *)Pool2;
        if ( !Pool2 )
        {
          v12 = -1073741801;
LABEL_85:
          PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)Object, 24616LL);
          goto LABEL_86;
        }
        PsWatchEnabled = 1;
        *(_DWORD *)Pool2 = 0;
        *(_QWORD *)(Pool2 + 8) = 0LL;
        KeInitializeGate(Pool2 + 16, 0);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 166, (signed __int64)v14, 0LL) )
        {
          ExFreePoolWithTag(v14, 0);
          v12 = -1073741752;
          goto LABEL_85;
        }
LABEL_157:
        v12 = 0;
        goto LABEL_86;
      case ProcessUserModeIOPL:
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741822;
      case ProcessEnableAlignmentFaultFixup:
        if ( ProcessInformationLength != 1 )
          return -1073741820;
        v41 = *(_BYTE *)ProcessInformation;
        v270 = *(_BYTE *)ProcessInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v42 = (__int64)v264;
        PspLockProcessExclusive((__int64)Object, (__int64)v264);
        if ( v41 )
          *((_DWORD *)Object + 382) |= 4u;
        else
          *((_DWORD *)Object + 382) &= ~4u;
        if ( *((_QWORD *)Object + 176) )
        {
          v43 = *((_WORD *)Object + 1206);
          if ( v43 == 332 || v43 == 452 )
            v41 = 1;
        }
        KeSetAutoAlignmentProcess((__int64)Object, v41);
        PspUnlockProcessExclusive((__int64)Object, v42);
        goto LABEL_95;
      case ProcessPriorityClass:
        if ( ProcessInformationLength != 2 )
          return -1073741820;
        v21 = *(_WORD *)ProcessInformation;
        v265 = *(_WORD *)ProcessInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v22 = PspSetProcessPriorityClass(Object, HIBYTE(v265), ProcessHandle, PreviousMode);
        if ( v22 < 0 )
          goto LABEL_112;
        v23 = (_BYTE)v21 == 0;
        v24 = Object;
        goto LABEL_111;
      case ProcessWx86Information:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v44 = *(_DWORD *)ProcessInformation;
        v313 = *(_DWORD *)ProcessInformation;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        v12 = ObReferenceObjectByHandleWithTag(
                ProcessHandle,
                0x200u,
                (POBJECT_TYPE)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL);
        if ( v12 < 0 )
          return v12;
        if ( *((_QWORD *)Object + 280) )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741790;
        }
        if ( v44 )
          _InterlockedOr((volatile signed __int32 *)Object + 281, 0x1000000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFEFFFFFF);
        goto LABEL_86;
      case ProcessAffinityMask:
        if ( ProcessInformationLength == 8 )
        {
          *(_QWORD *)&v326 = *(_QWORD *)ProcessInformation;
          v45 = (_QWORD)v326 == 0LL;
        }
        else
        {
          if ( ProcessInformationLength != 16 )
            return -1073741820;
          v326 = *(_OWORD *)ProcessInformation;
          v45 = !KeVerifyGroupAffinity((__int64)&v326, 0);
        }
        if ( v45 )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( (*((_DWORD *)Object + 158) & 0x1000) != 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741811;
        }
        KeQueryPrimaryGroupProcess((__int64)Object, &v262);
        if ( (_DWORD)v4 == 8 )
        {
          v46 = v326 & qword_140D1EFE8[v262];
          if ( v46 != (_QWORD)v326 )
          {
LABEL_149:
            v12 = -1073741811;
            goto LABEL_86;
          }
          WORD4(v326) = v262;
          *(_QWORD *)&v326 = v46;
        }
        v47 = (__int64)v264;
        KeEnterCriticalRegionThread((__int64)v264);
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        {
          ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1080, 0LL);
          *(_QWORD *)Tag = &v280;
          v12 = PspSetProcessAffinitySafe(Object, 0LL, 0LL);
          v48 = (signed __int64 *)Object;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 135, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v48 + 135);
          KeAbPostRelease((ULONG_PTR)(v48 + 135));
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
          if ( v12 >= 0 )
          {
            if ( v280 )
              PspWritePebAffinityInfo(v47, Object);
            _InterlockedOr((volatile signed __int32 *)Object + 280, 0x200000u);
            KeLeaveCriticalRegionThread(v47);
LABEL_86:
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v12;
          }
        }
        else
        {
          v12 = -1073741558;
        }
        KeLeaveCriticalRegionThread(v47);
        goto LABEL_86;
      case ProcessPriorityBoost:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v314 = *(_DWORD *)ProcessInformation;
        v49 = v314 != 0;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v12 = result;
        if ( result < 0 )
          return result;
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
          goto LABEL_133;
        v50 = (__int64)v264;
        PspLockProcessExclusive((__int64)Object, (__int64)v264);
        KeSetDisableBoostProcess(Object, v49);
        v51 = Object;
        for ( j = (_QWORD *)*((_QWORD *)Object + 188); j != (_QWORD *)((char *)Object + 1504); v51 = Object )
        {
          KeSetDisableBoostThread(j - 167, v49);
          j = (_QWORD *)*j;
        }
        goto LABEL_284;
      case ProcessDeviceMap:
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        v53 = *(_QWORD *)ProcessInformation;
        v321 = *(_QWORD *)ProcessInformation;
        if ( (unsigned __int8)RtlIsSandboxedToken(0LL) )
          return -1073741790;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v38 = ObSetProcessDeviceMap(Object, v53, PreviousMode);
        goto LABEL_162;
      case ProcessSessionInformation:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v54 = *(_DWORD *)ProcessInformation;
        v308 = *(_DWORD *)ProcessInformation;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x204u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v54 != (unsigned int)MmGetSessionId((__int64)Object) )
          v7 = -1073741790;
        goto LABEL_233;
      case ProcessForegroundInformation:
        if ( ProcessInformationLength != 1 )
          return -1073741820;
        v26 = *(_BYTE *)ProcessInformation;
        v275 = *(_BYTE *)ProcessInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x2000u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        LOBYTE(v7) = v26 != 0;
        PsSetProcessPriorityByClass(Object, v7);
        goto LABEL_95;
      case ProcessBreakOnTermination:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v55 = *(_DWORD *)ProcessInformation;
        v315 = *(_DWORD *)ProcessInformation;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741727;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v55 )
          _InterlockedOr((volatile signed __int32 *)Object + 281, 0x2000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFDFFF);
        goto LABEL_95;
      case ProcessDebugFlags:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v12 = result;
        if ( result < 0 )
          return result;
        v284 = *(_DWORD *)v5;
        if ( (v284 & 0xFFFFFFFE) != 0 )
          goto LABEL_149;
        if ( (v284 & 1) != 0 )
          _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFFFFD);
        else
          _InterlockedOr((volatile signed __int32 *)Object + 281, 2u);
        goto LABEL_86;
      case ProcessHandleTracing:
        v263 = 0LL;
        if ( !ProcessInformationLength )
          goto LABEL_247;
        if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        v56 = *(_DWORD *)ProcessInformation;
        LODWORD(v263) = *(_DWORD *)ProcessInformation;
        if ( ProcessInformationLength == 8 )
          HIDWORD(v263) = *((_DWORD *)ProcessInformation + 1);
        else
          HIDWORD(v263) = 0;
        if ( v56 )
          return -1073741811;
LABEL_247:
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( (_DWORD)v4 )
          v38 = PsSetProcessHandleTracingInformation(Object, &v263);
        else
          v38 = PsSetProcessHandleTracingInformation(Object, 0LL);
        goto LABEL_162;
      case ProcessIoPriority:
        if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        if ( ProcessInformationLength == 4 )
        {
          v57 = *(_DWORD *)ProcessInformation;
          v274 = *(_DWORD *)ProcessInformation;
          LOBYTE(v58) = 0;
        }
        else
        {
          v307 = *(_QWORD *)ProcessInformation;
          v57 = v307;
          v58 = HIDWORD(v307);
          v274 = v307;
        }
        if ( v57 >= 4 )
          return -1073741811;
        if ( v57 >= 3
          && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 ProcessHandle,
                                 512LL,
                                 PreviousMode) )
        {
          return -1073741727;
        }
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v12 = result;
        if ( result < 0 )
          return result;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        {
          v50 = (__int64)v264;
          PspLockProcessExclusive((__int64)Object, (__int64)v264);
          v59 = (volatile signed __int32 *)Object;
          v60 = *((_DWORD *)Object + 281);
          v61 = v274 << 27;
          do
          {
            v62 = v60;
            v60 = _InterlockedCompareExchange(v59 + 281, v61 | v60 & 0xC7FFFFFF, v60);
          }
          while ( v60 != v62 );
          v51 = Object;
          v63 = (volatile signed __int64 *)*((_QWORD *)Object + 188);
          if ( v63 != (volatile signed __int64 *)((char *)Object + 1504) )
          {
            v64 = v274;
            do
            {
              if ( (_BYTE)v58 == 1 && ((*((_DWORD *)v63 + 10) >> 9) & 7) < v64 )
                IoBoostThreadIoPriority(v63 - 167, v64, 0);
              PsSetIoPriorityThread((__int64)(v63 - 167), v64);
              v63 = (volatile signed __int64 *)*v63;
              v51 = Object;
            }
            while ( v63 != (volatile signed __int64 *)((char *)Object + 1504) );
          }
LABEL_284:
          PspUnlockProcessExclusive((__int64)v51, v50);
LABEL_132:
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
        }
        else
        {
LABEL_133:
          v12 = -1073741558;
        }
        goto LABEL_86;
      case ProcessExecuteFlags:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        if ( ProcessHandle != (HANDLE)-1LL )
          return -1073741811;
        v65 = *(_DWORD *)ProcessInformation;
        v298 = v65;
        CurrentProcess = PsGetCurrentProcess();
        v22 = KeSetExecuteOptions((__int64)CurrentProcess, v65);
        if ( v22 < 0 || (v65 & 3) != 1 )
          return v22;
        MmRemoveExecuteGrants();
        return v22;
      case ProcessPagePriority:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v67 = *(_DWORD *)ProcessInformation;
        v285 = v67;
        if ( v67 > (unsigned int)MmGetDefaultPagePriority() || v67 < (unsigned int)MmGetMinWsPagePriority() )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v12 = result;
        if ( result < 0 )
          return result;
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
          goto LABEL_133;
        v50 = (__int64)v264;
        PspLockProcessExclusive((__int64)Object, (__int64)v264);
        v68 = v67 << 12;
        v69 = (volatile signed __int32 *)Object;
        v70 = *((_DWORD *)Object + 280);
        do
        {
          v71 = v70;
          v70 = _InterlockedCompareExchange(v69 + 280, v68 | v70 & 0xFFFF8FFF, v70);
        }
        while ( v70 != v71 );
        v51 = Object;
        v72 = (_QWORD *)*((_QWORD *)Object + 188);
        if ( v72 != (_QWORD *)((char *)Object + 1504) )
        {
          v73 = v285;
          do
          {
            PsSetPagePriorityThread((__int64)(v72 - 167), v73);
            v72 = (_QWORD *)*v72;
            v51 = Object;
          }
          while ( v72 != (_QWORD *)((char *)Object + 1504) );
        }
        goto LABEL_284;
      case ProcessInstrumentationCallback:
        memset(&ApcState, 0, sizeof(ApcState));
        if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
          return -1073741820;
        if ( ProcessInformationLength == 8 )
        {
          *(_QWORD *)&v283 = 0LL;
          v74 = *(_QWORD *)ProcessInformation;
          *((_QWORD *)&v283 + 1) = *(_QWORD *)ProcessInformation;
        }
        else
        {
          v283 = *(_OWORD *)ProcessInformation;
          v74 = *((_QWORD *)&v283 + 1);
        }
        if ( DWORD1(v283) )
          return -1073741811;
        if ( (_DWORD)v283 != DWORD1(v283) )
          return -1073741736;
        if ( v74 != (__int64)(v74 << 16) >> 16 )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v75 = PsGetCurrentProcess();
        v76 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode);
        v19 = Object;
        if ( v76 || Object == v75 )
        {
          v77 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
          v78 = (struct _EX_RUNDOWN_REF *)Object;
          if ( !v77 )
          {
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return -1073741558;
          }
          v80 = 0;
          if ( *((_QWORD *)Object + 176) )
          {
            v79 = *((_WORD *)Object + 1206);
            if ( v79 == 332 || v79 == 452 )
              v80 = 1;
          }
          v81 = v75[1].Affinity.StaticBitmap[30];
          if ( v80 )
          {
            if ( v81 )
            {
              v86 = WORD2(v75[2].Affinity.StaticBitmap[20]);
              if ( v86 == 332 || v86 == 452 )
              {
                KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
                if ( v74 < MmGetMaximumUserAddress() && (unsigned int)MmValidateUserCallTarget(v74, 1LL) )
                {
                  v87 = 0LL;
                  v88 = (__int64 *)*((_QWORD *)Object + 176);
                  if ( v88 )
                    v87 = *v88;
                  *(_DWORD *)(v87 + 1168) = DWORD2(v283);
                  KeUnstackDetachProcess(&ApcState);
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
                }
                else
                {
                  v7 = -1073741811;
                  KeUnstackDetachProcess(&ApcState);
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
                }
LABEL_233:
                ObfDereferenceObjectWithTag(Object, 0x79517350u);
                return v7;
              }
            }
          }
          else if ( !v81 || (v82 = WORD2(v75[2].Affinity.StaticBitmap[20]), v82 != 332) && v82 != 452 )
          {
            KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
            if ( !(unsigned int)MmValidateUserCallTarget(v74, 0LL) )
              v7 = -1073741811;
            KeUnstackDetachProcess(&ApcState);
            v78 = (struct _EX_RUNDOWN_REF *)Object;
            if ( (v7 & 0x80000000) == 0 )
            {
              v83 = (__int64)v264;
              PspLockProcessExclusive((__int64)Object, (__int64)v264);
              *((_QWORD *)Object + 123) = v74;
              v84 = Object;
              v85 = (volatile signed __int32 *)*((_QWORD *)Object + 188);
              if ( v85 != (volatile signed __int32 *)((char *)Object + 1504) )
              {
                while ( 1 )
                {
                  if ( v74 )
                    _interlockedbittestandset(v85 - 334, 0x19u);
                  else
                    _interlockedbittestandreset(v85 - 334, 0x19u);
                  v85 = *(volatile signed __int32 **)v85;
                  v84 = Object;
                  if ( v85 == (volatile signed __int32 *)((char *)Object + 1504) )
                    break;
                  v74 = *((_QWORD *)&v283 + 1);
                }
              }
              PspUnlockProcessExclusive((__int64)v84, v83);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
              goto LABEL_233;
            }
LABEL_327:
            ExReleaseRundownProtection_0(v78 + 139);
            goto LABEL_233;
          }
          v7 = -1073741637;
          goto LABEL_327;
        }
LABEL_104:
        ObfDereferenceObjectWithTag(v19, 0x79517350u);
        return -1073741727;
      case ProcessAffinityUpdateMode:
        if ( ProcessHandle != (HANDLE)-1LL )
          return -1073741811;
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        LODWORD(v263) = *(_DWORD *)ProcessInformation;
        if ( (v263 & 0xFFFFFFFC) != 0 )
          return -1073741811;
        return PspSetProcessAffinityUpdateMode(CurrentThread, &v263);
      case ProcessMemoryAllocationMode:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v89 = *(_DWORD *)ProcessInformation;
        v299 = v89;
        if ( (v89 & 0xFFFFFFFE) != 0 )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( (v89 & 1) != 0 )
          _InterlockedOr((volatile signed __int32 *)Object + 281, 0x200000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFDFFFFF);
        goto LABEL_95;
      case ProcessTokenVirtualizationEnabled:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v90 = *(_DWORD *)ProcessInformation;
        v300 = *(_DWORD *)ProcessInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v91 = PsReferencePrimaryToken((PEPROCESS)Object);
        SeSetVirtualizationToken(v91, v90);
        ObfDereferenceObject(v91);
        goto LABEL_95;
      case ProcessConsoleHostProcess:
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        if ( ProcessHandle != (HANDLE)-1LL )
          return -1073741811;
        v92 = *(_QWORD *)ProcessInformation;
        v316 = v92;
        if ( (v92 & 3) != 1 )
          return -1073741811;
        PsGetCurrentProcess()[1].Affinity.StaticBitmap[23] = v92;
        return 0;
      case ProcessMitigationPolicy:
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        v260 = *(_QWORD *)ProcessInformation;
        if ( ProcessHandle != (HANDLE)-1LL && (_DWORD)v260 != 2 )
          return -1073741811;
        v93 = PsGetCurrentProcess();
        p_Lock = &v93->Header.Lock;
        Object = v93;
        if ( (_DWORD)v260 != 16 )
        {
          v97 = (int)v260 - 1;
          switch ( (int)v260 )
          {
            case 1:
              if ( (v260 & 0xFFFFFFF000000000uLL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              v98 = (HIDWORD(v260) >> 1) & 1;
              if ( !v98 && ((__int64)v93[2].ReadyListHead.Blink & 0x10) != 0 )
                goto LABEL_370;
              if ( (v260 & 0x100000000LL) == 0 && ((__int64)v93[2].ReadyListHead.Blink & 0x40) == 0 )
                goto LABEL_370;
              v99 = (HIDWORD(v260) >> 3) & 1;
              if ( !v99 && ((__int64)v93[2].ReadyListHead.Blink & 8) != 0 )
                goto LABEL_370;
              if ( v99 )
              {
                if ( !v98 )
                {
                  v12 = -1073741776;
                  goto LABEL_739;
                }
              }
              else if ( !v98 )
              {
                goto LABEL_376;
              }
              _InterlockedOr((volatile signed __int32 *)&v93[2].ReadyListHead.Blink, 0x10u);
              p_Lock = (volatile signed __int32 *)Object;
LABEL_376:
              if ( (v260 & 0x100000000LL) != 0 )
              {
                _InterlockedAnd(p_Lock + 628, 0xFFFFFFBF);
                p_Lock = (volatile signed __int32 *)Object;
              }
              if ( !v99 )
                goto LABEL_738;
              _InterlockedOr(p_Lock + 628, 8u);
              goto LABEL_737;
            case 2:
              v104 = HIDWORD(v260);
              if ( (v260 & 0xFFFFFFF000000000uLL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( (v260 & 0x100000000LL) != 0 && (v260 & 0x800000000LL) != 0 )
                v104 = HIDWORD(v260) & 0xFFFFFFF7;
              v105 = v104 & 1;
              if ( (v104 & 1) == 0 && ((v104 & 2) != 0 || (v104 & 4) != 0) )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( (unsigned int)PsIsSystemWideMitigationOptionSet(9LL) )
              {
                v12 = -1073741637;
                p_Lock = (volatile signed __int32 *)Object;
                goto LABEL_739;
              }
              if ( ProcessHandle == (HANDLE)-1LL )
              {
                p_Lock = (volatile signed __int32 *)Object;
                v106 = 0;
              }
              else
              {
                v12 = ObReferenceObjectByHandleWithTag(
                        ProcessHandle,
                        0x200u,
                        (POBJECT_TYPE)PsProcessType,
                        PreviousMode,
                        0x79517350u,
                        &Object,
                        0LL);
                if ( v12 < 0 )
                  goto LABEL_390;
                v106 = 1;
                v107 = PsGetCurrentProcess();
                p_Lock = (volatile signed __int32 *)Object;
                if ( Object != v107 )
                {
                  v108 = *((_DWORD *)Object + 628);
                  if ( (v108 & 0x100) != 0 )
                  {
                    memset(SubjectContext, 0, 32);
                    SeCaptureSubjectContextEx(0LL, (PEPROCESS)Object, (PSECURITY_SUBJECT_CONTEXT)SubjectContext);
                    IsSandboxedToken = RtlIsSandboxedToken((PSECURITY_SUBJECT_CONTEXT)SubjectContext);
                    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)SubjectContext);
                    if ( !(unsigned __int8)RtlIsSandboxedToken(0LL) )
                    {
                      if ( IsSandboxedToken )
                      {
                        p_Lock = (volatile signed __int32 *)Object;
                        if ( (*((_DWORD *)Object + 628) & 0x400) != 0 )
                          goto LABEL_454;
                      }
                    }
                    v110 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode);
                    p_Lock = (volatile signed __int32 *)Object;
                    if ( v110 )
                      goto LABEL_454;
                  }
                  else if ( (v104 & 8) != 0 || (v104 & 1) != 0 || (v108 & 0x800) == 0 )
                  {
LABEL_454:
                    v111 = 0;
                    if ( (v104 & 1) == 0 )
                      v111 = 2304;
                    v112 = -v105;
                    v113 = (v112 != 0 ? 0x100 : 0) | 0x800;
                    if ( (v104 & 8) == 0 )
                      v113 = v112 != 0 ? 0x900 : 0;
                    if ( (v104 & 2) != 0 )
                      v113 |= 0x200u;
                    else
                      v111 |= 0x200u;
                    v114 = v104 >> 2;
                    v115 = v113 | 0x400;
                    if ( (v114 & 1) == 0 )
                      v115 = v113;
                    v116 = v111 | 0x400;
                    v117 = (v114 & 1) == 0;
LABEL_491:
                    if ( v117 )
                      v111 = v116;
                    RtlInterlockedSetClearBits(p_Lock + 628, v115, v111);
                    v12 = 0;
                    p_Lock = (volatile signed __int32 *)Object;
LABEL_740:
                    if ( v106 == 1 )
                    {
                      ObfDereferenceObjectWithTag((PVOID)p_Lock, 0x79517350u);
                      return v12;
                    }
                    return v12;
                  }
                  v12 = -1073741790;
                  goto LABEL_740;
                }
              }
              if ( (v104 & 1) == 0 && (p_Lock[628] & 0x100) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_740;
              }
              v118 = (v104 >> 3) & 1;
              if ( !v118 && (v104 & 1) == 0 && (p_Lock[628] & 0x800) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_740;
              }
              v119 = (v104 >> 1) & 1;
              if ( v119 && (p_Lock[628] & 0x300) == 0x100 )
              {
                v12 = -1073741790;
                goto LABEL_740;
              }
              v120 = (v104 >> 2) & 1;
              if ( v120 && (p_Lock[628] & 0x500) == 0x100 )
              {
                v12 = -1073741790;
                goto LABEL_740;
              }
              if ( v105 )
              {
                v121 = 2304;
              }
              else
              {
                v121 = 0;
                if ( v118 )
                  v121 = 2048;
              }
              v111 = (v119 ^ 1) << 9;
              v115 = v121 | 0x200;
              if ( !v119 )
                v115 = v121;
              if ( v120 )
                v115 |= 0x400u;
              v116 = v111 | 0x400;
              v117 = v120 == 0;
              goto LABEL_491;
            case 3:
              if ( (v260 & 0xFFFFFFFC00000000uLL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( ((HIDWORD(v260) >> 1) & 1) == 0 && (v260 & 0x100000000LL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( ((HIDWORD(v260) >> 1) & 1) != 0 && (v260 & 0x100000000LL) == 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              v100 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v93);
              if ( !v100 )
              {
                v12 = -1073741558;
                goto LABEL_390;
              }
              v12 = -1073741790;
              if ( (unsigned __int8)ExEnableHandleExceptions(v100, BYTE4(v260) & 1) )
                v12 = 0;
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
              p_Lock = (volatile signed __int32 *)Object;
              goto LABEL_739;
            case 4:
              v101 = HIDWORD(v260);
              if ( (v260 & 0xFFFFFFF000000000uLL) != 0 )
              {
                v12 = -1073741811;
LABEL_739:
                v106 = 0;
                goto LABEL_740;
              }
              if ( (v260 & 0x100000000LL) != 0 && (v260 & 0x200000000LL) != 0 )
              {
                v101 = HIDWORD(v260) & 0xFFFFFFFD;
                HIDWORD(v260) &= ~2u;
              }
              if ( (unsigned int)Feature_FsctlProcessMitigation__private_IsEnabledNoReporting()
                && (v101 & 4) != 0
                && (v101 & 8) != 0 )
              {
                v101 &= ~8u;
                HIDWORD(v260) = v101;
              }
              if ( (v101 & 1) == 0 )
              {
                p_Lock = (volatile signed __int32 *)Object;
                if ( (*((_DWORD *)Object + 628) & 0x1000) != 0 )
                {
                  v12 = -1073741790;
                  goto LABEL_739;
                }
              }
              if ( !(unsigned int)Feature_FsctlProcessMitigation__private_IsEnabledNoReporting() || (v101 & 4) != 0 )
              {
                p_Lock = (volatile signed __int32 *)Object;
              }
              else
              {
                p_Lock = (volatile signed __int32 *)Object;
                if ( (*((_DWORD *)Object + 732) & 2) != 0 )
                {
                  v12 = -1073741790;
                  goto LABEL_739;
                }
              }
              v102 = (v101 >> 1) & 1;
              if ( !v102 && (v101 & 1) == 0 && (p_Lock[628] & 0x2000) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              if ( !(unsigned int)Feature_FsctlProcessMitigation__private_IsEnabledNoReporting()
                || (v101 & 8) != 0
                || (v101 & 4) != 0 )
              {
                p_Lock = (volatile signed __int32 *)Object;
              }
              else
              {
                p_Lock = (volatile signed __int32 *)Object;
                if ( (*((_DWORD *)Object + 732) & 4) != 0 )
                {
                  v12 = -1073741790;
                  goto LABEL_739;
                }
              }
              if ( (v101 & 1) != 0 || v102 )
              {
                IsGuiThread = PsIsGuiThread(v264);
                p_Lock = (volatile signed __int32 *)Object;
                if ( IsGuiThread )
                {
                  v12 = -1073741431;
                  goto LABEL_739;
                }
              }
              v12 = 0;
              if ( (v101 & 1) != 0 )
              {
                _InterlockedOr(p_Lock + 628, 0x3000u);
              }
              else
              {
                if ( !v102 )
                  goto LABEL_430;
                _InterlockedOr(p_Lock + 628, 0x2000u);
              }
              LOBYTE(v101) = BYTE4(v260);
LABEL_430:
              LOBYTE(v7) = (unsigned int)Feature_FsctlProcessMitigation__private_IsEnabledNoReporting() != 0;
              if ( v7 )
              {
                if ( (v101 & 4) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)Object + 732, 6u);
                  p_Lock = (volatile signed __int32 *)Object;
                  goto LABEL_739;
                }
                if ( (v101 & 8) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)Object + 732, 4u);
                  p_Lock = (volatile signed __int32 *)Object;
                  goto LABEL_739;
                }
              }
LABEL_390:
              p_Lock = (volatile signed __int32 *)Object;
              goto LABEL_739;
            case 6:
              if ( (v260 & 0xFFFFFFFE00000000uLL) != 0 )
              {
                v12 = -1073741811;
              }
              else if ( (v260 & 0x100000000LL) != 0 || (LODWORD(v93[2].ReadyListHead.Blink) & 0x80u) == 0 )
              {
                v12 = 0;
                if ( (v260 & 0x100000000LL) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)&v93[2].ReadyListHead.Blink, 0x80u);
                  p_Lock = (volatile signed __int32 *)Object;
                }
              }
              else
              {
                v12 = -1073741790;
              }
              goto LABEL_739;
            case 7:
              if ( (v260 & 0xFFFFFFE000000000uLL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( ((HIDWORD(v260) >> 3) & 1) != 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x2000000) == 0 )
                goto LABEL_370;
              if ( ((HIDWORD(v260) >> 3) & 1) == 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x2000000) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              if ( ((HIDWORD(v260) >> 4) & 1) != 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x4000000) == 0 )
                goto LABEL_370;
              if ( ((HIDWORD(v260) >> 4) & 1) == 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x4000000) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              if ( ((__int64)v93[2].ReadyListHead.Blink & 1) == 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              if ( (v260 & 0x400000000LL) == 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              _InterlockedOr((volatile signed __int32 *)&v93[2].ReadyListHead.Blink, 4u);
              goto LABEL_737;
            case 8:
              v122 = HIDWORD(v260);
              if ( (v260 & 0xFFFFFFE000000000uLL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( (v260 & 0x100000000LL) != 0 && ((v260 & 0x800000000LL) != 0 || (v260 & 0x1000000000LL) != 0) )
                v122 = HIDWORD(v260) & 0xFFFFFFE7;
              if ( (v122 & 2) != 0 && (v122 & 0x10) != 0 )
                v122 &= ~0x10u;
              v123 = (v122 >> 3) & 1;
              if ( v123 && (v122 & 0x10) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              v124 = (v122 >> 1) & 1;
              if ( v124 + (v122 & 1) > 1 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( (v122 & 1) != 0 )
                goto LABEL_544;
              Flink_low = LOBYTE(v93[2].Header.WaitListHead.Flink);
              if ( (_BYTE)Flink_low == 8 )
                goto LABEL_536;
              LOBYTE(v97) = 8;
              if ( (unsigned int)SeCompareSigningLevels(v97, Flink_low) )
                goto LABEL_539;
              p_Lock = (volatile signed __int32 *)Object;
LABEL_536:
              v126 = *((unsigned __int8 *)p_Lock + 2169);
              if ( (_BYTE)v126 == 8 )
                goto LABEL_370;
              LOBYTE(v97) = 8;
              if ( !(unsigned int)SeCompareSigningLevels(v97, v126) )
              {
                p_Lock = (volatile signed __int32 *)Object;
                v12 = -1073741790;
                goto LABEL_739;
              }
LABEL_539:
              p_Lock = (volatile signed __int32 *)Object;
              if ( v124 )
                goto LABEL_544;
              LOBYTE(v94) = 6;
              if ( (unsigned int)SeCompareSigningLevels(*((unsigned __int8 *)Object + 2168), v94) )
              {
                LOBYTE(v94) = 6;
                if ( (unsigned int)SeCompareSigningLevels(*((unsigned __int8 *)Object + 2169), v94) )
                {
                  v12 = -1073741790;
                  p_Lock = (volatile signed __int32 *)Object;
                  goto LABEL_739;
                }
              }
              p_Lock = (volatile signed __int32 *)Object;
LABEL_544:
              if ( (p_Lock[628] & 0x3000000) != 0 && (v122 & 0x10) == 0 && !v124 && !v123 && (v122 & 1) == 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              v12 = 0;
              if ( (v122 & 1) != 0 )
              {
                LOBYTE(v97) = 8;
                if ( (unsigned int)SeCompareSigningLevels(v97, *((unsigned __int8 *)p_Lock + 2168)) )
                  *((_BYTE *)Object + 2168) = 8;
                LOBYTE(v127) = 8;
                if ( (unsigned int)SeCompareSigningLevels(v127, *((unsigned __int8 *)Object + 2169)) )
                  *((_BYTE *)Object + 2169) = 8;
              }
              else
              {
                if ( !v124 )
                  goto LABEL_561;
                LOBYTE(v94) = 6;
                if ( !(unsigned int)SeCompareSigningLevels(*((unsigned __int8 *)p_Lock + 2168), v94) )
                {
                  v12 = -1073741790;
                  p_Lock = (volatile signed __int32 *)Object;
                  goto LABEL_739;
                }
                LOBYTE(v128) = 6;
                if ( (unsigned int)SeCompareSigningLevels(v128, *((unsigned __int8 *)Object + 2169)) )
                  *((_BYTE *)Object + 2169) = 6;
              }
              p_Lock = (volatile signed __int32 *)Object;
LABEL_561:
              if ( v122 )
                v7 = 0x800000;
              v129 = ((v122 & 8) == 0) << 24;
              v130 = v7 | 0x1000000;
              if ( !v123 )
                v130 = v7;
              if ( ((v122 >> 4) & 1) != 0 )
                v130 |= 0x2000000u;
              else
                v129 |= 0x2000000u;
              RtlInterlockedSetClearBits(p_Lock + 628, v130, v129);
              p_Lock = (volatile signed __int32 *)Object;
              goto LABEL_739;
            case 9:
              if ( (v260 & 0xFFFFFFFC00000000uLL) != 0 )
              {
                v12 = -1073741811;
              }
              else if ( (v260 & 0x100000000LL) != 0 || ((__int64)v93[2].ReadyListHead.Blink & 0x10000) == 0 )
              {
                if ( (v260 & 0x100000000LL) != 0
                  || (v260 & 0x200000000LL) != 0
                  || ((__int64)v93[2].ReadyListHead.Blink & 0x20000) == 0 )
                {
                  v12 = 0;
                  if ( (v260 & 0x100000000LL) != 0 )
                  {
                    RtlInterlockedSetClearBits((volatile signed __int32 *)&v93[2].ReadyListHead.Blink, 0x10000, 0x20000);
                    p_Lock = (volatile signed __int32 *)Object;
                  }
                  else if ( (v260 & 0x200000000LL) != 0 )
                  {
                    RtlInterlockedSetClearBits((volatile signed __int32 *)&v93[2].ReadyListHead.Blink, 0x20000, 0x10000);
                    p_Lock = (volatile signed __int32 *)Object;
                  }
                }
                else
                {
                  v12 = -1073741790;
                }
              }
              else
              {
                v12 = -1073741790;
              }
              goto LABEL_739;
            case 10:
              v131 = HIDWORD(v260);
              if ( (v260 & 0xFFFFFFE000000000uLL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( (v260 & 0x100000000LL) != 0 && (v260 & 0x800000000LL) != 0 )
                v131 = HIDWORD(v260) & 0xFFFFFFF7;
              if ( (v131 & 2) != 0 && (v131 & 0x10) != 0 )
                v131 &= ~0x10u;
              v132 = v131 & 1;
              v133 = 0x80000;
              if ( (v131 & 1) == 0 && ((__int64)v93[2].ReadyListHead.Blink & 0x80000) != 0 )
                goto LABEL_370;
              v134 = (v131 >> 1) & 1;
              if ( !v134 && ((__int64)v93[2].ReadyListHead.Blink & 0x200000) != 0 )
                goto LABEL_370;
              v135 = (v131 >> 2) & 1;
              if ( !v135 && ((__int64)v93[2].ReadyListHead.Blink & 0x40000) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              v136 = (v131 >> 3) & 1;
              if ( !v136 && (v131 & 1) == 0 && ((__int64)v93[2].ReadyListHead.Blink & 0x100000) != 0 )
                goto LABEL_370;
              v137 = (v131 >> 4) & 1;
              if ( !v137 && !v134 && ((__int64)v93[2].ReadyListHead.Blink & 0x400000) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              v138 = 0;
              if ( v132 )
              {
                v138 = 0x100000;
              }
              else
              {
                v133 = 0;
                if ( v136 )
                  v133 = 0x100000;
              }
              if ( v134 )
              {
                v133 |= 0x200000u;
                v138 |= 0x400000u;
              }
              else if ( v137 )
              {
                v133 |= 0x400000u;
              }
              v139 = v133 | 0x40000;
              if ( !v135 )
                v139 = v133;
              RtlInterlockedSetClearBits(p_Lock + 628, v139, v138);
              goto LABEL_737;
            case 13:
              v140 = HIDWORD(v260);
              if ( (v260 & 0xFFFFFFF800000000uLL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( (v260 & 0x100000000LL) == 0 && (v260 & 0x400000000LL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( (v260 & 0x100000000LL) != 0 && (v260 & 0x200000000LL) != 0 )
                v140 = HIDWORD(v260) & 0xFFFFFFFD;
              NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v93);
              v143 = NoChildProcessRestrictedPolicy;
              v144 = v140 & 1;
              if ( (v140 & 1) == 0 && NoChildProcessRestrictedPolicy - 1 <= 1 )
              {
                v12 = -1073741790;
                p_Lock = (volatile signed __int32 *)Object;
                goto LABEL_739;
              }
              v145 = (v140 >> 2) & 1;
              if ( v145 && (_DWORD)v143 == 1 )
              {
                v12 = -1073741790;
                p_Lock = (volatile signed __int32 *)Object;
                goto LABEL_739;
              }
              v146 = (v140 >> 1) & 1;
              if ( v146 )
                goto LABEL_633;
              if ( v144 )
                goto LABEL_634;
              if ( (_DWORD)v143 == 3 )
              {
                v12 = -1073741790;
                p_Lock = (volatile signed __int32 *)Object;
                goto LABEL_739;
              }
LABEL_633:
              if ( v144 )
              {
LABEL_634:
                if ( v145 )
                  PspSetNoChildProcessRestrictedPolicy(Object, 2LL, v143, v142);
                else
                  PspSetNoChildProcessRestrictedPolicy(Object, 1LL, v143, v142);
              }
              else if ( v146 )
              {
                PspSetNoChildProcessRestrictedPolicy(Object, 3LL, v143, v142);
              }
              goto LABEL_737;
            case 14:
              if ( (v260 & 0xFFFFFFE000000000uLL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( (v260 & 0x100000000LL) == 0 && ((__int64)v93[2].ReadyListHead.Blink & 0x40000000) != 0
                || ((HIDWORD(v260) >> 1) & 1) == 0 && SLODWORD(v93[2].ReadyListHead.Blink) < 0
                || ((HIDWORD(v260) >> 3) & 1) == 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x2000) != 0
                || ((HIDWORD(v260) >> 2) & 1) == 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x1000) != 0 )
              {
                goto LABEL_370;
              }
              v147 = (HIDWORD(v260) >> 4) & 1;
              if ( !v147 && (*(_DWORD *)&v93[2].IdealProcessor[30] & 1) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              if ( v147 )
              {
                IsCoreIsolationMitigationPolicyEnforceable = KeIsCoreIsolationMitigationPolicyEnforceable();
                p_Lock = (volatile signed __int32 *)Object;
                if ( !IsCoreIsolationMitigationPolicyEnforceable )
                {
LABEL_654:
                  v12 = -1073741637;
                  goto LABEL_739;
                }
              }
              if ( (v260 & 0x100000000LL) != 0 )
              {
                _InterlockedOr(p_Lock + 628, 0x40000000u);
                p_Lock = (volatile signed __int32 *)Object;
              }
              if ( ((HIDWORD(v260) >> 1) & 1) != 0 )
              {
                _InterlockedOr(p_Lock + 628, 0x80000000);
                _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200000u);
                PspWriteProcessSecurityDomain((__int64)Object, _InterlockedIncrement64(&PsNextSecurityDomain), 1);
                KeSynchronizeSecurityDomain((_KPROCESS *)Object);
                p_Lock = (volatile signed __int32 *)Object;
              }
              if ( ((HIDWORD(v260) >> 2) & 1) != 0 )
              {
                _InterlockedOr(p_Lock + 629, 0x1000u);
                p_Lock = (volatile signed __int32 *)Object;
              }
              if ( ((HIDWORD(v260) >> 3) & 1) != 0 )
              {
                _InterlockedOr(p_Lock + 629, 0x2000u);
                p_Lock = (volatile signed __int32 *)Object;
              }
              if ( !v147 )
                goto LABEL_738;
              PspApplyCoreIsolationPolicy(p_Lock);
              goto LABEL_737;
            case 15:
              v149 = HIDWORD(v260);
              if ( (v260 & 0xFFFFFC0000000000uLL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( (v260 & 0x1000000000LL) != 0 )
              {
                v149 = HIDWORD(v260) | 1;
                HIDWORD(v260) |= 1u;
              }
              if ( (v149 & 0x200) != 0 )
              {
                v149 |= 4u;
                HIDWORD(v260) = v149;
              }
              if ( (v149 & 0x40) != 0 )
              {
                v149 |= 0x20u;
                HIDWORD(v260) = v149;
              }
              v150 = (v149 >> 4) & 1;
              if ( !v150 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x100000) != 0
                || (v149 & 1) == 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x4000) != 0 )
              {
                goto LABEL_370;
              }
              if ( (v149 & 1) != 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x4000) == 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              v151 = (v149 >> 9) & 1;
              if ( v151 )
              {
                if ( SHIDWORD(v93[2].ReadyListHead.Blink) >= 0 )
                  goto LABEL_370;
              }
              v152 = (v149 >> 2) & 1;
              if ( !v152 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x20000) != 0 )
                goto LABEL_370;
              if ( v152 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x20000) == 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              v153 = (v149 >> 6) & 1;
              if ( !v153 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x400000) != 0 )
                goto LABEL_370;
              v154 = (v149 >> 5) & 1;
              if ( !v154 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x200000) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              v155 = (v149 >> 8) & 1;
              if ( !v155 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x40000000) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              if ( (v156 = (v149 >> 1) & 1) != 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x8000) == 0
                || ((v149 >> 3) & 1) == 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x40000) != 0
                || ((v149 >> 3) & 1) != 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x40000) == 0
                || (v157 = (v149 >> 7) & 1) == 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x800000) != 0 )
              {
LABEL_370:
                v12 = -1073741790;
                goto LABEL_739;
              }
              if ( v157 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x800000) == 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              if ( v150 )
              {
                _InterlockedOr((volatile signed __int32 *)&v93[2].ReadyListHead.Blink + 1, 0x100000u);
                p_Lock = (volatile signed __int32 *)Object;
              }
              if ( !v151 && v152 )
              {
                _InterlockedAnd(p_Lock + 629, 0x7FFFFFFFu);
                p_Lock = (volatile signed __int32 *)Object;
              }
              if ( v153 )
              {
                _InterlockedOr(p_Lock + 629, 0x200000u);
                _InterlockedOr((volatile signed __int32 *)Object + 629, 0x400000u);
              }
              else
              {
                if ( !v154 )
                {
LABEL_716:
                  if ( v155 )
                  {
                    _InterlockedOr(p_Lock + 629, 0x40000000u);
                    p_Lock = (volatile signed __int32 *)Object;
                  }
                  if ( v156 )
                    goto LABEL_738;
                  _InterlockedAnd(p_Lock + 629, 0xFFFF7FFF);
LABEL_737:
                  p_Lock = (volatile signed __int32 *)Object;
LABEL_738:
                  v12 = 0;
                  goto LABEL_739;
                }
                _InterlockedOr(p_Lock + 629, 0x200000u);
              }
              p_Lock = (volatile signed __int32 *)Object;
              goto LABEL_716;
            default:
              goto LABEL_654;
          }
        }
        v158 = HIDWORD(v260);
        if ( (v260 & 0xFFFFFFFC00000000uLL) != 0 )
        {
          v12 = -1073741811;
          goto LABEL_739;
        }
        if ( (v260 & 0x100000000LL) != 0 && (v260 & 0x200000000LL) != 0 )
          v158 = HIDWORD(v260) & 0xFFFFFFFD;
        RedirectionTrustPolicy = PspGetRedirectionTrustPolicy(v93, v94, v95, v93);
        v162 = v158 & 1;
        if ( (v158 & 1) == 0 && RedirectionTrustPolicy == 1 )
        {
          v12 = -1073741790;
          p_Lock = (volatile signed __int32 *)Object;
          goto LABEL_739;
        }
        v163 = (v158 >> 1) & 1;
        if ( v163 )
          goto LABEL_732;
        if ( v162 )
          goto LABEL_733;
        if ( RedirectionTrustPolicy == 2 )
        {
          v12 = -1073741790;
          p_Lock = (volatile signed __int32 *)Object;
          goto LABEL_739;
        }
LABEL_732:
        if ( v162 )
        {
LABEL_733:
          v164 = 1LL;
        }
        else
        {
          if ( !v163 )
            goto LABEL_737;
          v164 = 2LL;
        }
        PspSetRedirectionTrustPolicy(Object, v164, v160, v161);
        goto LABEL_737;
      case ProcessDynamicFunctionTableInformation:
        if ( ProcessHandle != (HANDLE)-1LL )
          return -1073741811;
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        *(_OWORD *)SubjectContext = *(_OWORD *)ProcessInformation;
        if ( SubjectContext[8] )
          return RtlRemoveDynamicFunctionTable(*(__int64 *)SubjectContext);
        else
          return RtlInsertDynamicFunctionTable(*(__int64 *)SubjectContext);
      case ProcessHandleCheckingMode:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v165 = *(_DWORD *)ProcessInformation;
        v304 = v165;
        if ( (v165 & 0xFFFFFFFE) != 0 )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v166 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        if ( v166 )
        {
          ExEnableHandleExceptions(v166, v165 & 1);
LABEL_752:
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
        }
        else
        {
LABEL_753:
          v7 = -1073741558;
        }
        goto LABEL_233;
      case ProcessRevokeFileHandles:
        *(_OWORD *)Src = 0LL;
        v167 = 0LL;
        P = 0LL;
        if ( PreviousMode != 1 )
          goto LABEL_766;
        v168 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)ProcessInformation < 0x7FFFFFFF0000LL )
          v168 = (__int64)ProcessInformation;
        v169 = *(_DWORD *)v168;
        LODWORD(Src[0]) = v169;
        v170 = *(void **)(v168 + 8);
        Src[1] = v170;
        if ( !(_WORD)v169 )
          return -1073741811;
        if ( ((unsigned __int8)v170 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v171 = (unsigned __int64)v170 + (unsigned __int16)v169;
        if ( v171 > 0x7FFFFFFF0000LL || v171 < (unsigned __int64)v170 )
          MEMORY[0x7FFFFFFF0000] = 0;
        v172 = (void *)ExAllocatePool2(64LL, LOWORD(Src[0]), 1850307408LL);
        v167 = v172;
        P = v172;
        if ( !v172 )
          return -1073741670;
        memmove(v172, Src[1], LOWORD(Src[0]));
        Src[1] = v167;
        v5 = Src;
        v317 = Src;
LABEL_766:
        v12 = ObReferenceObjectByHandleWithTag(
                ProcessHandle,
                0x2000u,
                (POBJECT_TYPE)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL);
        if ( v12 >= 0 )
        {
          v39 = IoRevokeHandlesForProcess((__int64)v5, Object);
          if ( v167 )
            ExFreePoolWithTag(v167, 0);
          goto LABEL_163;
        }
        if ( !v167 )
          return v12;
        ExFreePoolWithTag(v167, 0);
        return v12;
      case ProcessWorkingSetControl:
        return MmProcessWorkingSetControl((ULONG_PTR)ProcessHandle);
      case ProcessCheckStackExtentsMode:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v173 = *(_DWORD *)v5 != 0;
        v301 = *(_DWORD *)v5 != 0;
        if ( PsGetCurrentProcess() == Object )
        {
          v12 = -1073741790;
        }
        else if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        {
          v12 = 0;
          KeSetCheckStackExtentsProcess(Object, v173);
          if ( !v173 && (*((_DWORD *)Object + 280) & 0x20000) != 0 )
            _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xFFFDFFFF);
        }
        else
        {
          v12 = -1073741727;
        }
        goto LABEL_86;
      case ProcessMemoryExhaustion:
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v327 = *(_OWORD *)ProcessInformation;
        if ( (_WORD)v327 != 1 || DWORD1(v327) )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( *((_QWORD *)&v327 + 1) )
          _InterlockedOr((volatile signed __int32 *)Object + 281, 0x100u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFFEFF);
        goto LABEL_95;
      case ProcessFaultInformation:
        v263 = 0LL;
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v263 = *v5;
        v38 = PsSetProcessFaultInformation((ULONG_PTR)Object, &v263);
        goto LABEL_162;
      case ProcessCommitReleaseInformation:
        if ( ProcessInformationLength != 32 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x2001u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        *(_OWORD *)SubjectContext = *(_OWORD *)v5;
        *(_OWORD *)&SubjectContext[16] = *((_OWORD *)v5 + 1);
        if ( *(_DWORD *)SubjectContext != 3 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741735;
        }
        if ( (*(_DWORD *)&SubjectContext[4] & 0xFFFFFFF8) != 0
          || *(_QWORD *)&SubjectContext[8]
          || *(_QWORD *)&SubjectContext[16]
          || (((*(_DWORD *)&SubjectContext[4] >> 1) & 1) != 0 || (SubjectContext[4] & 4) != 0)
          && (SubjectContext[4] & 1) == 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741811;
        }
        if ( ((*(_DWORD *)&SubjectContext[4] >> 1) & 1) != 0 || (SubjectContext[4] & 4) != 0 )
          v38 = MmReleaseCommitForMemResetPages((_KPROCESS *)Object, (*(_DWORD *)&SubjectContext[4] >> 2) & 1);
        else
          v38 = MmSetCommitReleaseEligibility((__int64)Object, SubjectContext[4] & 1);
LABEL_162:
        v39 = v38;
LABEL_163:
        v40 = Object;
LABEL_164:
        ObfDereferenceObjectWithTag(v40, 0x79517350u);
        return v39;
      case ProcessDefaultCpuSetsInformation:
      case ProcessAllowedCpuSetsInformation:
        if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0x100 )
          return -1073741820;
        memmove(v332, ProcessInformation, ProcessInformationLength);
        v174 = (unsigned int)v4 >> 3;
        if ( v261 == ProcessAllowedCpuSetsInformation )
        {
          result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          if ( result < 0 )
            return result;
        }
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x2000u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v38 = KeSetCpuSetsProcess((__int64)Object, v174, (__int64)v332);
        goto LABEL_162;
      case ProcessSubsystemProcess:
        if ( (PsGetCurrentProcess()[1].IdealProcessor[30] & 0x100) == 0 )
          return -1073741727;
        v292 = 0LL;
        v39 = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v292, 0LL);
        Object = v292;
        if ( v39 < 0 )
          return v39;
        _InterlockedOr((volatile signed __int32 *)v292 + 543, 0x40u);
        ObfDereferenceObject(Object);
        return v39;
      case ProcessInPrivate:
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        EtwTraceProcessSetInPrivateMode((__int64)Object);
        _InterlockedOr((volatile signed __int32 *)Object + 280, 0x80000000);
        goto LABEL_95;
      case ProcessRaiseUMExceptionOnInvalidHandleClose:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v176 = *(_DWORD *)ProcessInformation;
        v305 = *(_DWORD *)ProcessInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v177 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        if ( !v177 )
          goto LABEL_753;
        ExEnableRaiseUMExceptionOnInvalidHandleClose(v177, v176);
        goto LABEL_752;
      case ProcessIumChallengeResponse:
        return PsIumEnableOnDemandDebugWithResponse(ProcessHandle, ProcessInformation, ProcessInformationLength);
      case ProcessHighGraphicsPriorityInformation:
        if ( ProcessInformationLength != 1 )
          return -1073741820;
        v178 = *(_BYTE *)ProcessInformation;
        v272 = *(_BYTE *)ProcessInformation;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x2000u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v178 )
          _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 543, 0xFFFFFDFF);
        goto LABEL_95;
      case ProcessPowerThrottlingState:
        v322 = 0LL;
        v323 = 0;
        if ( ProcessInformationLength != 12 )
          return -1073741820;
        v322 = *(PVOID *)ProcessInformation;
        v179 = *((_DWORD *)ProcessInformation + 2);
        v323 = v179;
        if ( (_DWORD)v322 != 1 || (HIDWORD(v322) & 0xFFFFFFF8) != 0 || (~HIDWORD(v322) & v179) != 0 )
          return -1073741811;
        ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        if ( !ExtensionTable )
          return -1073741822;
        v181 = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
        if ( v181 >= 0 )
        {
          v182 = (*(__int64 (__fastcall **)(PVOID, PVOID *))(ExtensionTable + 8))(Object, &v322);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
          return v182;
        }
        else
        {
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
          return v181;
        }
      case ProcessDisableSystemAllowedCpuSets:
        result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( result < 0 )
          return result;
        if ( (_DWORD)v4 != 1 )
          return -1073741820;
        v175 = *(_BYTE *)v5;
        v271 = v175;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x2000u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v175 )
          _InterlockedOr((volatile signed __int32 *)Object + 280, 0x8000000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xF7FFFFFF);
        KeRecomputeCpuSetAffinityProcess((__int64)Object);
        goto LABEL_95;
      case ProcessEnergyTrackingState:
        if ( ProcessInformationLength < 8 )
          return -1073741820;
        memset(v331, 0, sizeof(v331));
        if ( ProcessInformationLength >= 0x90 )
          LODWORD(v4) = 144;
        memmove(v331, ProcessInformation, (unsigned int)v4);
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v183 = PoSetProcessEnergyTrackingState(Object, v331);
        v15 = Object;
        if ( v183 >= 0 )
          goto LABEL_96;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v183;
      case ProcessManageWritesToExecutableMemory:
        return -1073741637;
      case ProcessTelemetryCoverage:
        if ( ProcessInformationLength != 24 )
          return -1073741820;
        *(_OWORD *)pszDest = 0LL;
        v334 = 0LL;
        v335 = 0LL;
        v336 = 0LL;
        v337 = 0;
        v184 = *(_OWORD *)ProcessInformation;
        *(_OWORD *)pszSrc = v184;
        v297 = *((_QWORD *)ProcessInformation + 2);
        v185 = (const char *)v184;
        if ( (unsigned __int64)(v184 + 65) > 0x7FFFFFFF0000LL || (__int64)v184 + 65 < (unsigned __int64)v184 )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          v185 = pszSrc[0];
        }
        RtlStringCbCopyA(pszDest, 0x41uLL, v185);
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x220u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        pszSrc[0] = pszDest;
        v337 = 0;
        v22 = EtwSetProcessTelemetryCoverage(Object, pszSrc);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *((_DWORD *)v5 + 3) = HIDWORD(pszSrc[1]);
        *((_DWORD *)v5 + 4) = v297;
        return v22;
      case ProcessEnableReadWriteVmLogging:
      case ProcessEnableLogging:
        if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging && !ProcessInformationLength
          || ProcessInformationClass == ProcessEnableLogging && ProcessInformationLength < 4 )
        {
          return -1073741820;
        }
        v186 = PsGetCurrentProcess();
        result = EtwCheckSecurityLoggerAccess(v186, PreviousMode);
        if ( result < 0 )
          return result;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode)
          && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          return -1073741727;
        }
        v266 = 0;
        if ( v261 == ProcessEnableReadWriteVmLogging )
          v187 = (*(_BYTE *)v5 & 1 ^ *(_BYTE *)v5) & 2 ^ *(_BYTE *)v5 & 1;
        else
          v187 = *(_DWORD *)v5;
        v266 = v187;
        if ( (v187 & 0xFFFFFFC0) != 0 )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x2000u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        _InterlockedAnd((volatile signed __int32 *)Object + 543, 0xFFE7FFFF);
        v188 = (((v266 >> 2) & 1) << 19) | 0x100000;
        if ( (v266 & 8) == 0 )
          v188 = ((v266 >> 2) & 1) << 19;
        v189 = v188 | 0x20000000;
        if ( (v266 & 0x10) == 0 )
          v189 = v188;
        v190 = v189 | 0x10000000;
        if ( (v266 & 0x20) == 0 )
          v190 = v189;
        _InterlockedOr((volatile signed __int32 *)Object + 543, v190);
        _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xFCFFFFFF);
        v191 = ((v266 & 1) << 24) | 0x2000000;
        if ( (v266 & 2) == 0 )
          v191 = (v266 & 1) << 24;
        _InterlockedOr((volatile signed __int32 *)Object + 280, v191);
        goto LABEL_95;
      case ProcessDebugAuthInformation:
        return SeCodeIntegritySetInformationProcess(
                 ProcessHandle,
                 (unsigned int)ProcessInformationClass,
                 ProcessInformation,
                 ProcessInformationLength);
      case ProcessSystemResourceManagement:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v192 = *(_DWORD *)ProcessInformation;
        v303 = v192;
        if ( (v192 & 0xFFFFFFFE) != 0 )
          return -1073741811;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x2000u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        LOBYTE(v193) = 1;
        PspSetProcessForegroundBackgroundRequest(Object, v192 & 1, v193);
        goto LABEL_95;
      case ProcessCombineSecurityDomainsInformation:
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        v194 = *(PVOID *)ProcessInformation;
        v318 = *(PVOID *)ProcessInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x2000u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v39 = ObReferenceObjectByHandleWithTag(
                v194,
                0x1000u,
                (POBJECT_TYPE)PsProcessType,
                PreviousMode,
                0x79517350u,
                &v288,
                0LL);
        v40 = Object;
        if ( v39 < 0 )
          goto LABEL_164;
        v39 = PspCombineSecurityDomains(Object, v288);
        ObfDereferenceObjectWithTag(v288, 0x79517350u);
        goto LABEL_163;
      case ProcessLeapSecondInformation:
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        v195 = *(PVOID *)ProcessInformation;
        v287 = v195;
        if ( ((unsigned int)v195 & 0xFFFFFFFE) != 0 || ProcessHandle != (HANDLE)-1LL )
          return -1073741811;
        v196 = PsGetCurrentProcess();
        Object = v196;
        v197 = v196[1].Affinity.StaticBitmap[24];
        if ( !v197 )
          return -1073741790;
        v198 = 0LL;
        v199 = (__int64 *)v196[1].Affinity.StaticBitmap[30];
        if ( v199 )
          v198 = *v199;
        v200 = (unsigned __int8)v195 & 1;
        v201 = *(_DWORD *)(v197 + 1984);
        if ( v200 )
          v202 = v201 | 1;
        else
          v202 = v201 & 0xFFFFFFFE;
        *(_DWORD *)(v197 + 1984) = v202;
        if ( v198 )
        {
          v203 = *(_DWORD *)(v198 + 1140);
          if ( v200 )
            v204 = v203 | 1;
          else
            v204 = v203 & 0xFFFFFFFE;
          *(_DWORD *)(v198 + 1140) = v204;
        }
        return v7;
      case ProcessFiberShadowStackAllocation:
        if ( ProcessHandle != (HANDLE)-1LL )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741823;
        if ( ProcessInformationLength != 32 )
          return -1073741820;
        if ( !KeIsUserCetAllowed() || !_bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x14u) )
          return -1073741637;
        return PspSetupUserFiberShadowStack(*v5, v5[1], (unsigned int)*((_OWORD *)v5 + 1), v5 + 3);
      case ProcessFreeFiberShadowStackAllocation:
        if ( ProcessHandle != (HANDLE)-1LL )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741823;
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        if ( !KeIsUserCetAllowed() || !_bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x14u) )
          return -1073741637;
        return PspFreeUserFiberShadowStack((PVOID)*v5);
      case ProcessAltSystemCallInformation:
        memset(SubjectContext, 0, 20);
        if ( ProcessInformationLength != 20 )
          return -1073741820;
        *(_OWORD *)SubjectContext = *(_OWORD *)ProcessInformation;
        *(_DWORD *)&SubjectContext[16] = *((_DWORD *)ProcessInformation + 4);
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x20u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v38 = PspSyscallProviderOptIn(Object, SubjectContext);
        goto LABEL_162;
      case ProcessDynamicEHContinuationTargets:
        LODWORD(v263) = 0;
        v205 = 0LL;
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        *(_OWORD *)SubjectContext = *(_OWORD *)ProcessInformation;
        v206 = 16 * *(unsigned __int16 *)SubjectContext;
        if ( !v206 )
          return -1073741811;
        v207 = *(const void **)&SubjectContext[8];
        if ( !*(_QWORD *)&SubjectContext[8] )
          return -1073741811;
        v208 = v206;
        ProbeForWrite(*(volatile void **)&SubjectContext[8], v206, 8u);
        if ( *(_WORD *)&SubjectContext[2] || *(_DWORD *)&SubjectContext[4] )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741790;
        v322 = 0LL;
        result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v322, 0LL);
        Object = v322;
        if ( result < 0 )
          return result;
        v209 = PsGetCurrentProcess();
        v210 = Object;
        if ( Object == v209 && (*((_DWORD *)Object + 629) & 0x40000000) != 0 )
        {
          v12 = -1073741790;
        }
        else if ( (*((_DWORD *)Object + 629) & 0x4000) != 0 )
        {
          v211 = (_DWORD *)ExAllocatePool2(257LL, v208, 1313359172LL);
          v205 = v211;
          v322 = v211;
          if ( v211 )
          {
            memmove(v211, v207, v208);
            v12 = PspProcessDynamicEHContinuationTargets((ULONG_PTR)Object);
            v259 = v12;
            v258 = 0;
          }
          else
          {
            v12 = -1073741801;
          }
          v210 = Object;
        }
        else
        {
          v12 = -1073741637;
        }
        goto LABEL_914;
      case ProcessDynamicEnforcedCetCompatibleRanges:
        LODWORD(v263) = 0;
        v205 = 0LL;
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        *(_OWORD *)SubjectContext = *(_OWORD *)ProcessInformation;
        v212 = 24 * *(unsigned __int16 *)SubjectContext;
        if ( !v212 )
          return -1073741811;
        v213 = *(const void **)&SubjectContext[8];
        if ( !*(_QWORD *)&SubjectContext[8] )
          return -1073741811;
        v214 = v212;
        ProbeForWrite(*(volatile void **)&SubjectContext[8], v212, 8u);
        if ( *(_WORD *)&SubjectContext[2] || *(_DWORD *)&SubjectContext[4] )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741790;
        v322 = 0LL;
        result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v322, 0LL);
        Object = v322;
        if ( result < 0 )
          return result;
        v215 = PsGetCurrentProcess();
        v210 = Object;
        if ( Object == v215 && (*((_DWORD *)Object + 629) & 0x40000000) != 0 )
        {
          v12 = -1073741790;
        }
        else if ( (*((_DWORD *)Object + 629) & 0x4000) != 0 )
        {
          v216 = (_DWORD *)ExAllocatePool2(257LL, v214, 1380009284LL);
          v205 = v216;
          v322 = v216;
          if ( v216 )
          {
            memmove(v216, v213, v214);
            v12 = PspProcessDynamicEnforcedAddressRanges((ULONG_PTR)Object, (__int64)&v263);
            v259 = v12;
            while ( 1 )
            {
              v258 = v7;
              if ( v7 >= (unsigned int)v263 )
                break;
              *((_DWORD *)v213 + 6 * v7 + 4) = v205[6 * v7 + 4];
              ++v7;
            }
          }
          else
          {
            v12 = -1073741801;
          }
          v210 = Object;
        }
        else
        {
          v12 = -1073741637;
        }
LABEL_914:
        if ( v210 )
          ObfDereferenceObject(v210);
        if ( !v205 )
          return v12;
        ExFreePoolWithTag(v205, 0);
        return v12;
      case ProcessEnableOptionalXStateFeatures:
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        v217 = *(_QWORD *)ProcessInformation;
        v319 = v217;
        if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & v217) != 0 )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741790;
        if ( ProcessHandle == (HANDLE)-1LL )
          goto LABEL_943;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   1,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( Object != PsGetCurrentProcess() )
          return -1073741811;
LABEL_943:
        v218 = PsGetCurrentProcess();
        Object = v218;
        if ( v218[1].Affinity.StaticBitmap[30] )
          return -1073741811;
        if ( PsIsSystemProcess((__int64)v218) )
          return -1073741637;
        else
          return PspEnableProcessOptionalXStateFeatures(Object, v217);
      case ProcessAltPrefetchParam:
        return PfSnSetAltPrefetchParam((ULONG_PTR)ProcessHandle);
      case ProcessAssignCpuPartitions:
        if ( ProcessInformationLength < 0x10 || (ProcessInformationLength & 7) != 0 )
          return -1073741820;
        v219 = (_DWORD *)ExAllocatePool2(257LL, ProcessInformationLength, 1349546832LL);
        v220 = v219;
        v287 = v219;
        if ( v219 )
        {
          memmove(v219, v5, v4);
          if ( (unsigned int)(v4 - 8) >> 3 < v220[1] || (*v220 & 0xFFFFFFFE) != 0 )
          {
            v39 = -1073741811;
          }
          else
          {
            v322 = 0LL;
            v39 = ObReferenceObjectByHandle(
                    ProcessHandle,
                    0x200u,
                    (POBJECT_TYPE)PsProcessType,
                    PreviousMode,
                    &v322,
                    0LL);
            Object = v322;
            if ( v39 >= 0 )
              v39 = PspAssignCpuPartitionsToProcess(
                      (_DWORD)v322,
                      PreviousMode,
                      (int)v220 + 8,
                      v220[1],
                      *(_BYTE *)v220 & 1);
          }
        }
        else
        {
          v39 = -1073741670;
        }
        if ( v220 )
          ExFreePoolWithTag(v220, 0);
        if ( !Object )
          return v39;
        ObfDereferenceObject(Object);
        return v39;
      case ProcessPriorityClassEx:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v25 = *(_DWORD *)ProcessInformation;
        v273 = v25;
        if ( !(_WORD)v25 || (v25 & 0xFFFC) != 0 )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v22 = result;
        if ( result >= 0 )
        {
          if ( (v25 & 2) != 0 )
            v22 = PspSetProcessPriorityClass(Object, BYTE2(v273), ProcessHandle, PreviousMode);
          if ( v22 >= 0 )
          {
            v24 = Object;
            if ( (v25 & 1) != 0 )
            {
              v23 = HIBYTE(v273) == 0;
LABEL_111:
              LOBYTE(v7) = !v23;
              PsSetProcessPriorityByClass(v24, v7);
            }
            else
            {
              KeSetPriorityAndQuantumProcess(
                (__int64)Object,
                *(unsigned int *)&PspPriorityTable[2 * *((unsigned __int8 *)Object + 1463)],
                0,
                0,
                0);
            }
          }
LABEL_112:
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return v22;
        }
        return result;
      default:
        return -1073741821;
    }
  }
  memset(v329, 0, sizeof(v329));
  v330 = 0LL;
  v276 = 0LL;
  v281 = 0LL;
  if ( ProcessHandle != (HANDLE)-1LL )
    return -1073741811;
  if ( PreviousMode != 1 )
    return -1073741823;
  if ( ProcessInformationLength < 0x28
    || ProcessInformationLength - 16 != 24 * ((ProcessInformationLength - 16) / 0x18uLL) )
  {
    return -1073741820;
  }
  if ( ProcessInformationLength == 40 )
  {
    v267 = v329;
  }
  else
  {
    v267 = (PVOID)ExAllocatePool2(257LL, ProcessInformationLength, 1936479312LL);
    if ( !v267 )
      return -1073741670;
  }
  v277 = (unsigned int *)v267;
  memmove(v267, v5, v4);
  v310 = (char *)v267 + 4;
  if ( *((_DWORD *)v267 + 1) < 2u
    && (*(_DWORD *)v267 & 0xFFFFFFFE) == 0
    && (v309 = (unsigned int *)((char *)v267 + 8), v221 = *((unsigned int *)v267 + 2), (_DWORD)v221)
    && (unsigned int)(v4 - 16) / 0x18uLL == v221 )
  {
    v222 = 0;
    v258 = 0;
    v223 = (char *)v267 + 16;
    do
    {
      if ( *v223 )
        goto LABEL_1021;
      v258 = ++v222;
      v223 += 6;
    }
    while ( v222 < (unsigned int)v221 );
    v224 = PsGetCurrentProcess();
    Object = v224;
    v261 = ProcessBasicInformation;
    if ( (*(_DWORD *)v267 & 1) != 0 )
    {
      if ( !v224[1].Affinity.StaticBitmap[30]
        || (v225 = WORD2(v224[2].Affinity.StaticBitmap[20]), v225 != 332) && v225 != 452 )
      {
LABEL_1021:
        v12 = -1073741811;
        goto LABEL_1023;
      }
      v261 = ProcessQuotaLimits;
    }
    v226 = v261 ^ 1u;
    Alignment = 4 * v226 + 4;
    v293 = 4 * v226 + 4;
    v282 = v5;
    v258 = 0;
    v12 = 0;
    v259 = 0;
    v227 = 0LL;
    for ( k = v224; ; k = Object )
    {
      NextProcessThread = PsGetNextProcessThread((__int64)k, v227);
      v229 = v258;
      LODWORD(v264) = v258;
      v230 = NextProcessThread;
      if ( !NextProcessThread || v258 >= *v309 )
        break;
      if ( (*((_DWORD *)NextProcessThread + 29) & 0x400) == 0 )
      {
        RunRef = (PEX_RUNDOWN_REF)((char *)NextProcessThread + 1352);
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)NextProcessThread + 169) )
        {
          v231 = (_DWORD *)v230[30];
          v278 = v231;
          if ( v261 )
          {
            v232 = (char *)(v231 + 2059);
            v281 = v231 + 2059;
            LODWORD(v233) = PtrToUlong((const void *)(unsigned int)v231[2059]);
            v234 = v233;
            v276 = v233;
          }
          else
          {
            v232 = (char *)(v231 + 22);
            v281 = v231 + 22;
            v234 = (char *)*((_QWORD *)v231 + 11);
            v276 = v234;
          }
          if ( v234 )
          {
            if ( *v310 == 1 )
            {
              if ( v234 == v232 )
              {
                v276 = 0LL;
                v236 = v229;
              }
              else
              {
                v235 = v293 * *((unsigned int *)v267 + 3);
                if ( v235 )
                {
                  if ( ((Alignment - 1) & (unsigned int)v234) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( (unsigned __int64)&v234[v235] > 0x7FFFFFFF0000LL || &v234[v235] < v234 )
                    MEMORY[0x7FFFFFFF0000] = 0;
                }
                v236 = v258;
                v237 = (volatile void **)((char *)v267 + 24 * v258 + 24);
                ProbeForWrite(*v237, v293 * *((unsigned int *)v267 + 3), Alignment);
                memmove((void *)*v237, v234, v293 * *((unsigned int *)v267 + 3));
                _InterlockedOr(v255, 0);
              }
              v238 = &v282[3 * v236];
              v286 = v238;
              v289 = (__int64)(v238 + 2);
              *((_DWORD *)v238 + 4) |= 1u;
              if ( v261 )
              {
                v239 = PtrToUlong(*(const void **)&v277[6 * (unsigned int)v264 + 6]);
                v278[2059] = v239;
              }
              else
              {
                *((_QWORD *)v278 + 11) = *(_QWORD *)&v277[6 * (unsigned int)v264 + 6];
              }
              v238[4] = *((_QWORD *)NextProcessThread + 154);
              v238[3] = v276;
              *((_DWORD *)v238 + 4) ^= 3u;
              ++v258;
            }
            else
            {
              v240 = 6LL * v258;
              v289 = v240 * 4;
              v241 = &v282[(unsigned __int64)v240 / 2];
              v286 = &v282[(unsigned __int64)v240 / 2];
              v242 = &v282[(unsigned __int64)v240 / 2 + 2];
              v278 = v242;
              *v242 |= 1u;
              v243 = v277;
              v244 = v277[3];
              if ( v261 )
              {
                v245 = (unsigned __int64)&v234[4 * v244];
                if ( v245 >= 0x7FFFFFFF0000LL )
                  v245 = 0x7FFFFFFF0000LL;
                LODWORD(v246) = PtrToUlong((const void *)*(unsigned int *)v245);
                v247 = v246;
                v281 = v246;
                v248 = PtrToUlong(*(const void **)((char *)v243 + v289 + 24));
                v249 = (unsigned __int64)&v276[4 * v243[3]];
                if ( v249 >= 0x7FFFFFFF0000LL )
                  v249 = 0x7FFFFFFF0000LL;
                *(_DWORD *)v249 = v248;
              }
              else
              {
                v250 = (unsigned __int64)&v234[8 * v244];
                if ( v250 >= 0x7FFFFFFF0000LL )
                  v250 = 0x7FFFFFFF0000LL;
                v247 = *(_DWORD **)v250;
                v281 = *(_DWORD **)v250;
                v251 = (unsigned __int64)&v276[8 * v277[3]];
                if ( v251 >= 0x7FFFFFFF0000LL )
                  v251 = 0x7FFFFFFF0000LL;
                *(_QWORD *)v251 = *(_QWORD *)&v277[v240 + 6];
              }
              v241[3] = v247;
              *v242 ^= 3u;
              ++v258;
            }
          }
          ExReleaseRundownProtection_0(RunRef);
        }
      }
      v227 = NextProcessThread;
    }
    if ( NextProcessThread )
      ObfDereferenceObjectWithTag(NextProcessThread, 0x6E457350u);
  }
  else
  {
    v12 = -1073741820;
  }
LABEL_1023:
  if ( v267 == v329 )
    return v12;
  ExFreePoolWithTag(v267, 0);
  return v12;
}
