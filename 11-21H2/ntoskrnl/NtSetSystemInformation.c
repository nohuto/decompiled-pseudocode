/*
 * XREFs of NtSetSystemInformation @ 0x1407D6120
 * Callers:
 *     WmipRegisterFirmwareProviders @ 0x140B30770 (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     KeSetSystemAllowedCpuSets @ 0x14020E0AC (KeSetSystemAllowedCpuSets.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140258040 (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCheckTokenMembership @ 0x1402E0C80 (RtlCheckTokenMembership.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExpUpdateTimerConfiguration @ 0x14035C7A4 (ExpUpdateTimerConfiguration.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14036D62C (MmAdjustWorkingSetSizeEx.c)
 *     MiGetThreadPartition @ 0x140372620 (MiGetThreadPartition.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     ZwLoadDriver @ 0x14041D8C0 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x14041EE00 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x14041F1A0 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     VslProvisionDumpEncryption @ 0x14054EE08 (VslProvisionDumpEncryption.c)
 *     IoConfigureCrashDump @ 0x140551D58 (IoConfigureCrashDump.c)
 *     IoProvisionCrashDumpKey @ 0x140552A60 (IoProvisionCrashDumpKey.c)
 *     KdUpdateTimeSlipEvent @ 0x1405657F8 (KdUpdateTimeSlipEvent.c)
 *     KeUpdateDpcWatchdogConfiguration @ 0x1405685CC (KeUpdateDpcWatchdogConfiguration.c)
 *     KeProcessorProfileControlArea @ 0x14056A228 (KeProcessorProfileControlArea.c)
 *     KeSetTagCpuSets @ 0x140572EC0 (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x140578074 (KeIntSteerAssignCpuSetForGsiv.c)
 *     PsSetCpuQuotaInformation @ 0x1405E00E4 (PsSetCpuQuotaInformation.c)
 *     PsSetExeModerationState @ 0x1405E050C (PsSetExeModerationState.c)
 *     ExpSetBootLoaderMetadata @ 0x140638B98 (ExpSetBootLoaderMetadata.c)
 *     ExpSetSoftRebootFlags @ 0x140638DC8 (ExpSetSoftRebootFlags.c)
 *     ExPoolSetLimit @ 0x14063AFCC (ExPoolSetLimit.c)
 *     PsLookupProcessThreadByCid @ 0x140663880 (PsLookupProcessThreadByCid.c)
 *     PsChangeQuantumTable @ 0x14068F5DC (PsChangeQuantumTable.c)
 *     PfSetSuperfetchInformation @ 0x1406AD6BC (PfSetSuperfetchInformation.c)
 *     ExHandleSPCall2 @ 0x1406B6054 (ExHandleSPCall2.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406C3EEC (KeSynchronizeWithDynamicProcessors.c)
 *     SmSetStoreInformation @ 0x1406E5AA0 (SmSetStoreInformation.c)
 *     ExpInitializeSessionDriver @ 0x1406EB324 (ExpInitializeSessionDriver.c)
 *     PsInvokeWin32Callout @ 0x1406F83A0 (PsInvokeWin32Callout.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     MmLoadSystemImage @ 0x14075FC00 (MmLoadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 *     ExAcquireTimeRefreshLock @ 0x1407D6F54 (ExAcquireTimeRefreshLock.c)
 *     PfSnSetPrefetcherInformation @ 0x1407D7634 (PfSnSetPrefetcherInformation.c)
 *     MiCombineIdenticalPages @ 0x1407F8CF0 (MiCombineIdenticalPages.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14085B59C (ExpRegisterFirmwareTableInformationHandler.c)
 *     KeInitializeEntropySystem @ 0x140862300 (KeInitializeEntropySystem.c)
 *     MmIssueMemoryListCommand @ 0x140862398 (MmIssueMemoryListCommand.c)
 *     WheaCrashDumpInitializationComplete @ 0x1408642EC (WheaCrashDumpInitializationComplete.c)
 *     CmUpdateFeatureConfiguration @ 0x1409113B4 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140911544 (CmUpdateFeatureUsageSubscription.c)
 *     CmSetRegistryQuotaInformation @ 0x1409118AC (CmSetRegistryQuotaInformation.c)
 *     CmReconcileAndValidateAllHives @ 0x1409190E8 (CmReconcileAndValidateAllHives.c)
 *     DbgkRegisterErrorPort @ 0x140929940 (DbgkRegisterErrorPort.c)
 *     VslRelaxQuotas @ 0x140932A4C (VslRelaxQuotas.c)
 *     MmAddVerifierThunks @ 0x14096A0D0 (MmAddVerifierThunks.c)
 *     MmCreateMirror @ 0x14096BA60 (MmCreateMirror.c)
 *     MmScrubMemory @ 0x140983C8C (MmScrubMemory.c)
 *     ObSetRefTraceInformation @ 0x1409858C0 (ObSetRefTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DEFB8 (EtwSetPerformanceTraceInformation.c)
 *     ExpQueryElamCertInfo @ 0x1409F6C5C (ExpQueryElamCertInfo.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x1409F7694 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1409F76FC (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x1409F7B3C (ExpUpdateComPlusPackage.c)
 *     ExSetLeapSecondEnabled @ 0x1409F7BE8 (ExSetLeapSecondEnabled.c)
 *     ExpCapabilityCheck @ 0x1409FB924 (ExpCapabilityCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovResetInformation @ 0x140A03DA4 (ExpCovResetInformation.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     VfFreeCapturedUnicodeString @ 0x140A81724 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140A818B0 (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140A818E8 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfFaultsSetParameters @ 0x140A96CA8 (VfFaultsSetParameters.c)
 *     VfAddVerifierEntry @ 0x140A9C668 (VfAddVerifierEntry.c)
 *     VfRemoveVerifierEntry @ 0x140A9C7F8 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140A9C820 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140A9C958 (VfSetVerifierInformationEx.c)
 *     VfVolatileApplyDifVerification @ 0x140A9CA48 (VfVolatileApplyDifVerification.c)
 *     VfVolatileClearDifRuleClass @ 0x140A9CAB4 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileRemoveDifVerification @ 0x140A9CB44 (VfVolatileRemoveDifVerification.c)
 *     VfVolatileSetDifRuleClass @ 0x140A9CBF8 (VfVolatileSetDifRuleClass.c)
 *     VfPtGenerateTraceInformation @ 0x140A9D738 (VfPtGenerateTraceInformation.c)
 *     BgkSetBootGraphicsInformation @ 0x140AB07F4 (BgkSetBootGraphicsInformation.c)
 */

__int64 __fastcall NtSetSystemInformation(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  size_t v3; // r15
  unsigned __int64 v4; // r14
  int v5; // esi
  __int64 v6; // rbx
  unsigned int v7; // r13d
  __int64 v8; // r9
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v10; // rax
  ULONG updated; // edi
  __int64 v12; // rcx
  char v13; // cl
  unsigned __int64 v14; // r9
  int v15; // esi
  int v16; // esi
  int v17; // esi
  __int64 result; // rax
  int v20; // esi
  PVOID v21; // rsi
  void *v22; // rcx
  int v23; // esi
  int v24; // esi
  __int64 ThreadPartition; // rax
  __int64 v26; // rcx
  unsigned int v27; // r15d
  int v28; // r8d
  char *v29; // rdx
  int SystemImage; // eax
  int v31; // edx
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  PVOID v36; // rbx
  int v37; // esi
  int v38; // esi
  int v39; // esi
  int v40; // esi
  int v41; // esi
  struct _KTHREAD *CurrentThread; // rax
  int v43; // esi
  int v44; // esi
  int v45; // esi
  int v46; // ecx
  int v47; // ecx
  int v48; // esi
  int v49; // esi
  unsigned int v50; // r15d
  unsigned __int64 v51; // rsi
  ULONG ActiveProcessorCount; // eax
  __int64 *v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rcx
  PVOID v57; // rcx
  int v58; // esi
  ULONG v59; // eax
  __int64 v60; // rsi
  __int64 v61; // rcx
  int v62; // edi
  HANDLE v63; // rax
  int v64; // esi
  int v65; // esi
  int v66; // esi
  int v67; // esi
  int v68; // esi
  int v69; // esi
  int v70; // esi
  int v71; // esi
  unsigned int v72; // edi
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r8
  __int64 v76; // r9
  UNICODE_STRING *p_Buffer; // rcx
  _KPROCESS *v78; // rcx
  __int16 v79; // ax
  int v80; // esi
  __int64 v81; // rcx
  int v82; // r15d
  char v83; // di
  __m128i v84; // xmm1
  unsigned __int16 v85; // di
  char *v86; // rcx
  PVOID PoolWithTag; // rax
  PVOID v88; // r15
  __int64 v89; // rcx
  _KPROCESS *Process; // rbx
  unsigned int v91; // r15d
  __int64 v92; // rsi
  int v93; // esi
  __int64 v94; // rcx
  _BYTE v95[9]; // [rsp+40h] [rbp-578h] BYREF
  char v96[23]; // [rsp+49h] [rbp-56Fh] BYREF
  void *Buf1[2]; // [rsp+60h] [rbp-558h] BYREF
  __int64 v99; // [rsp+78h] [rbp-540h] BYREF
  LUID PrivilegeValue; // [rsp+80h] [rbp-538h]
  PVOID v101[2]; // [rsp+88h] [rbp-530h] BYREF
  int v102; // [rsp+98h] [rbp-520h]
  unsigned __int64 v103; // [rsp+A0h] [rbp-518h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp-510h] BYREF
  int v105; // [rsp+B0h] [rbp-508h]
  PVOID Object; // [rsp+B8h] [rbp-500h] BYREF
  __int64 v107; // [rsp+C0h] [rbp-4F8h] BYREF
  __int64 v108; // [rsp+C8h] [rbp-4F0h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+D0h] [rbp-4E8h] BYREF
  __int128 v110; // [rsp+E0h] [rbp-4D8h]
  int v111; // [rsp+F0h] [rbp-4C8h]
  HANDLE v112; // [rsp+158h] [rbp-460h]
  __int64 v113; // [rsp+1E0h] [rbp-3D8h]
  int v114; // [rsp+1F8h] [rbp-3C0h]
  void *Src[2]; // [rsp+200h] [rbp-3B8h]
  HANDLE v116; // [rsp+218h] [rbp-3A0h]
  __int64 v117; // [rsp+220h] [rbp-398h]
  UNICODE_STRING v118; // [rsp+240h] [rbp-378h] BYREF
  __int128 v119; // [rsp+250h] [rbp-368h] BYREF
  __int128 v120; // [rsp+260h] [rbp-358h]
  _BYTE v121[256]; // [rsp+270h] [rbp-348h] BYREF
  char v122[256]; // [rsp+370h] [rbp-248h] BYREF
  _BYTE v123[256]; // [rsp+470h] [rbp-148h] BYREF

  v3 = (unsigned int)a3;
  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  v95[0] = 0;
  *(_OWORD *)Buf1 = 0LL;
  v99 = 0LL;
  v7 = 1;
  v8 = 1LL;
  v107 = 0LL;
  v108 = 0LL;
  BugCheckParameter2 = 0LL;
  Object = 0LL;
  v103 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = 1LL;
    if ( (_DWORD)a1 != 89 )
      v10 = 3LL;
    if ( (_DWORD)a3 )
    {
      if ( (v10 & a2) != 0 )
        ExRaiseDatatypeMisalignment();
      a1 = a2 + (unsigned int)a3;
      if ( a1 > 0x7FFFFFFF0000LL || a1 < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  updated = 0;
  if ( v5 > 106 )
  {
    if ( v5 > 170 )
    {
      if ( v5 > 210 )
      {
        if ( v5 <= 223 )
        {
          switch ( v5 )
          {
            case 223:
              return (ULONG)ExPoolSetLimit((void *)a2, (unsigned int)a3, PreviousMode);
            case 212:
              return (ULONG)CmUpdateFeatureUsageSubscription((void *)a2, (unsigned int)a3, PreviousMode);
            case 217:
              if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
                return 3221225506LL;
              return (ULONG)VfVolatileSetDifRuleClass(v4, (unsigned int)v3);
            case 218:
              if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
                return 3221225506LL;
              return (ULONG)VfVolatileClearDifRuleClass();
          }
          if ( (unsigned int)(v5 - 219) > 1 )
            return (ULONG)-1073741821;
          if ( (_DWORD)a3 != 16 )
            return 3221225476LL;
          if ( !PreviousMode )
            goto LABEL_424;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return 3221225569LL;
          result = VfProbeAndCaptureUnicodeString(Buf1, v4, 1LL);
          if ( (int)result < 0 )
            return result;
          v4 = (unsigned __int64)Buf1;
          if ( LOWORD(Buf1[0]) )
          {
LABEL_424:
            v93 = v5 - 219;
            if ( !v93 )
            {
              v59 = VfVolatileApplyDifVerification(v4, a2, a3, v8);
              goto LABEL_431;
            }
            if ( v93 == 1 )
            {
              v59 = VfVolatileRemoveDifVerification(v4, a2, a3, v8);
              goto LABEL_431;
            }
            goto LABEL_429;
          }
          return 3221225711LL;
        }
        if ( v5 != 224 && v5 != 225 )
        {
          if ( v5 != 226 )
          {
            if ( (unsigned int)(v5 - 228) <= 1 )
            {
              v95[1] = 0;
              RtlCheckTokenMembership(0LL, SeAliasAdminsSid);
              return 3221225569LL;
            }
            return (ULONG)-1073741821;
          }
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return 3221225569LL;
          LOBYTE(v94) = (_DWORD)v3 == 0;
          return (ULONG)VfPtGenerateTraceInformation(v94);
        }
        goto LABEL_449;
      }
      if ( v5 == 210 )
        return (ULONG)CmUpdateFeatureConfiguration((void *)a2, (unsigned int)a3, PreviousMode);
      if ( v5 <= 194 )
      {
        switch ( v5 )
        {
          case 194:
            if ( !(_DWORD)a3 )
            {
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                return 3221225569LL;
              updated = VslProvisionDumpEncryption();
              if ( (updated & 0x80000000) != 0 )
                return updated;
              return (ULONG)IoProvisionCrashDumpKey();
            }
            break;
          case 176:
            if ( (unsigned int)a3 < 8 )
              return 3221225476LL;
            v91 = a3 - 8;
            if ( (((_BYTE)a3 - 8) & 7) != 0 || v91 > 0x100 )
              return 3221225476LL;
            v92 = *(_QWORD *)a2;
            v117 = *(_QWORD *)a2;
            memmove(v122, (const void *)(a2 + 8), v91);
            updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
            if ( (updated & 0x80000000) != 0 )
              return updated;
            return (ULONG)KeSetTagCpuSets(v91 >> 3, v122, v92);
          case 177:
            if ( (_DWORD)a3 != 8 )
            {
              if ( (_DWORD)a3 )
                return 3221225476LL;
              updated = 0;
              Process = KeGetCurrentThread()->ApcState.Process;
              LODWORD(v101[0]) = MmGetSessionIdEx((__int64)Process);
              if ( LODWORD(v101[0]) == -1 )
                return updated;
              return (ULONG)PsInvokeWin32Callout(32, (__int64)Process, 1, (unsigned int *)v101);
            }
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return 3221225569LL;
            v116 = *(HANDLE *)v4;
            v101[0] = 0LL;
            updated = ObReferenceObjectByHandle(v116, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, v101, 0LL);
            if ( (updated & 0x80000000) != 0 )
              return updated;
            v36 = v101[0];
            LODWORD(v101[0]) = MmGetSessionIdEx((__int64)v101[0]);
            if ( LODWORD(v101[0]) != -1 )
              updated = PsInvokeWin32Callout(32, (__int64)v36, 1, (unsigned int *)v101);
            v22 = v36;
            goto LABEL_65;
          case 187:
            if ( (_DWORD)a3 != 24 )
              return 3221225476LL;
            v118 = *(UNICODE_STRING *)a2;
            *(_QWORD *)&v119 = *(_QWORD *)(a2 + 16);
            result = VfProbeAndCaptureUnicodeStringBuffer(&v118, 1LL, a3, 1LL);
            if ( (int)result < 0 )
              return result;
            updated = PsSetExeModerationState((__int64)&v118, v119, DWORD1(v119));
            p_Buffer = &v118;
            goto LABEL_434;
          default:
            v89 = (unsigned int)(v5 - 190);
            if ( v5 == 190 )
              goto LABEL_449;
            if ( v5 != 191 )
              return (ULONG)-1073741821;
            if ( !(_DWORD)a3 )
            {
              if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
                return 3221225569LL;
              return (ULONG)VslRelaxQuotas(v89, a2, a3, v8);
            }
            break;
        }
        return (ULONG)-1073741811;
      }
      if ( v5 != 199 )
      {
        if ( v5 != 204 )
        {
          if ( v5 != 206 )
          {
            if ( v5 != 207 )
              return (ULONG)-1073741821;
            if ( (_DWORD)a3 != 4 )
              return 3221225476LL;
            if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return 3221225506LL;
            v102 = 0;
            if ( (*(_DWORD *)v4 & 4) == 0 )
            {
              NtGlobalFlag2 = NtGlobalFlag2 & 4 | *(_DWORD *)v4;
              *(_DWORD *)v4 = NtGlobalFlag2;
              return updated;
            }
            return 3221225485LL;
          }
          if ( (_DWORD)a3 != 8 )
            return 3221225476LL;
          if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
            return 3221225569LL;
          if ( PsIsCurrentThreadInServerSilo() )
            return 3221225506LL;
          v95[0] = (unsigned __int8)*(_QWORD *)v4 != 0;
          result = ExSetLeapSecondEnabled();
          updated = result;
          if ( (int)result >= 0 )
          {
            *(_BYTE *)ExLeapSecondData = v95[0];
            return updated;
          }
          return result;
        }
        v113 = 0LL;
        if ( (unsigned int)a3 < 8 )
          return 3221225476LL;
        v50 = a3 - 8;
        if ( (((_BYTE)a3 - 8) & 7) != 0 || v50 > 0x100 )
          return 3221225476LL;
        v51 = *(_QWORD *)a2;
        memmove(v123, (const void *)(a2 + 8), v50);
        if ( v51 >= 2 )
          return 3221225485LL;
        updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( (updated & 0x80000000) != 0 )
          return updated;
        v27 = v50 >> 3;
        v28 = v51;
        v29 = v123;
        return (ULONG)KeSetSystemAllowedCpuSets(v27, v29, v28);
      }
    }
    else
    {
      if ( v5 == 170 )
      {
        v110 = 0LL;
        if ( (_DWORD)a3 != 16 )
          return 3221225476LL;
        if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
          return 3221225569LL;
        return (ULONG)KeIntSteerAssignCpuSetForGsiv(*(_OWORD *)v4, WORD2(*(_QWORD *)v4), *(_QWORD *)(v4 + 8));
      }
      if ( v5 <= 134 )
      {
        if ( v5 == 134 )
        {
          if ( (_DWORD)a3 != 32 )
            return 3221225476LL;
          return (ULONG)ExHandleSPCall2(a1, a2);
        }
        else if ( v5 > 127 )
        {
          v23 = v5 - 129;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( !v24 )
            {
              if ( (((_DWORD)a3 - 16) & 0xFFFFFFE7) == 0 && (_DWORD)a3 != 40 )
              {
                if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
                {
                  memmove(&v118, (const void *)v4, v3);
                  if ( (_DWORD)v3 == 32 )
                    v6 = *((_QWORD *)&v119 + 1);
                  ThreadPartition = MiGetThreadPartition((__int64)KeGetCurrentThread());
                  updated = MiCombineIdenticalPages(
                              ThreadPartition,
                              *(_QWORD *)&v118.Length,
                              (unsigned int)v119,
                              v6,
                              KeGetCurrentThread()->PreviousMode,
                              &v108);
                  PrivilegeValue.LowPart = updated;
                  *(_QWORD *)(v4 + 8) = v108;
                  return updated;
                }
                return 3221225569LL;
              }
              return 3221225476LL;
            }
            v41 = v24 - 1;
            if ( v41 )
            {
              if ( v41 != 1 )
                return (ULONG)-1073741821;
              if ( (_DWORD)a3 != 4 )
                return 3221225476LL;
              *(_QWORD *)&DriverServiceName.Length = 7733364LL;
              DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
              if ( *(_BYTE *)a2 & 1 )
              {
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpConDrvLoadLock, 0LL);
                updated = ZwLoadDriver(&DriverServiceName);
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpConDrvLoadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(&ExpConDrvLoadLock);
                KeAbPostRelease((ULONG_PTR)&ExpConDrvLoadLock);
                goto LABEL_30;
              }
              if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
                return 3221225569LL;
              return (ULONG)ZwUnloadDriver(&DriverServiceName);
            }
            else
            {
              if ( PreviousMode )
                return 3221225506LL;
              if ( (_DWORD)a3 != 24 )
                return 3221225476LL;
              return (ULONG)KeInitializeEntropySystem(*(_QWORD *)a2, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), 1LL);
            }
          }
          else
          {
            return (ULONG)KeProcessorProfileControlArea(a2, a3, PreviousMode);
          }
        }
        else
        {
          if ( v5 == 127 )
          {
            if ( (_DWORD)a3 == 16 )
            {
              if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
              {
                v112 = *(HANDLE *)v4;
                updated = MmScrubMemory(v81, v112, &v107);
                PrivilegeValue.LowPart = updated;
                *(_QWORD *)(v4 + 8) = v107;
                return updated;
              }
              return 3221225569LL;
            }
            return 3221225476LL;
          }
          v20 = v5 - 109;
          if ( v20 )
          {
            v48 = v20 - 1;
            if ( !v48 )
              return (ULONG)-1073741822;
            v49 = v48 - 1;
            if ( !v49 )
            {
              if ( (_DWORD)a3 != 4 )
                return 3221225476LL;
              if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
                return 3221225506LL;
              MEMORY[0xFFFFF78000000248] = *(_DWORD *)v4;
              return 0;
            }
            v80 = v49 - 2;
            if ( v80 )
            {
              if ( v80 != 13 )
                return (ULONG)-1073741821;
              if ( PreviousMode )
                return 3221225569LL;
              if ( (_DWORD)a3 != 32 )
                return (ULONG)-1073741820;
              return (ULONG)BgkSetBootGraphicsInformation(a1, a2, a3, 1LL);
            }
            else
            {
              return (ULONG)PsSetCpuQuotaInformation(a2, a3, PreviousMode);
            }
          }
          else
          {
            return (ULONG)SmSetStoreInformation(a1, (__int128 *)a2, a3, PreviousMode);
          }
        }
      }
      switch ( v5 )
      {
        case 142:
          *(_OWORD *)Src = 0LL;
          if ( (_DWORD)a3 != 48 )
            return 3221225476LL;
          if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
            return 3221225569LL;
          if ( CriticalProcessExceptionData )
            return 0LL;
          v118 = *(UNICODE_STRING *)v4;
          v84 = *(__m128i *)(v4 + 16);
          v120 = *(_OWORD *)(v4 + 32);
          *(__m128i *)Src = v84;
          v119 = 0LL;
          v85 = _mm_cvtsi128_si32(v84);
          if ( v85 && (v85 & 1) == 0 )
          {
            if ( ((__int64)Src[1] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v86 = (char *)Src[1] + v85;
            if ( (unsigned __int64)v86 > 0x7FFFFFFF0000LL || v86 < Src[1] )
              MEMORY[0x7FFFFFFF0000] = 0;
            PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)9, v85, 0x50535845u);
            v88 = PoolWithTag;
            if ( PoolWithTag )
            {
              memmove(PoolWithTag, Src[1], v85);
              *((_QWORD *)&v119 + 1) = v88;
              LOWORD(v119) = v85;
              WORD1(v119) = v85;
            }
          }
          *(UNICODE_STRING *)&CriticalProcessExceptionData = v118;
          xmmword_140C15CB0 = v119;
          xmmword_140C15CC0 = v120;
          return 0;
        case 150:
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return 3221225569LL;
          return (ULONG)ExpSetBootLoaderMetadata((void *)v4, (unsigned int)v3);
        case 151:
          PrivilegeValue = (LUID)19LL;
          if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
            return 3221225569LL;
          v82 = v3 - 1;
          if ( v82 )
          {
            if ( v82 != 3 )
              return 3221225476LL;
            v7 = *(_DWORD *)v4;
            v114 = *(_DWORD *)v4;
          }
          else
          {
            v83 = *(_BYTE *)v4;
            if ( *(_BYTE *)v4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return 3221225569LL;
            if ( !v83 )
              v7 = 5;
          }
          return (ULONG)ExpSetSoftRebootFlags(v7);
        case 152:
          if ( (_DWORD)a3 != 8 )
            return 3221225476LL;
          if ( PreviousMode )
            return (ULONG)ExpQueryElamCertInfo(*(_QWORD *)a2, a2, a3, 1LL);
          return 3221225485LL;
        case 155:
          return (ULONG)CmReconcileAndValidateAllHives(0LL, a2, a3, 1LL);
        case 159:
          return (ULONG)-1073741637;
        case 161:
          if ( PreviousMode )
            return 3221225506LL;
          if ( (_DWORD)a3 != 8 )
            return 3221225476LL;
          return (ULONG)KdInitialize(3LL, a2, &KdpContext, 1LL);
      }
      if ( v5 != 164 )
      {
        if ( v5 != 168 )
          return (ULONG)-1073741821;
        if ( (a3 & 7) != 0 || (unsigned int)a3 > 0x100 )
          return 3221225476LL;
        memmove(v121, (const void *)a2, (unsigned int)a3);
        result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( (int)result < 0 )
          return result;
        v27 = (unsigned int)v3 >> 3;
        v28 = 0;
        v29 = v121;
        return (ULONG)KeSetSystemAllowedCpuSets(v27, v29, v28);
      }
    }
LABEL_449:
    if ( qword_140C1B948 )
      return (ULONG)qword_140C1B948((unsigned int)v5, a2, (unsigned int)a3, 1LL);
    return (ULONG)-1073741637;
  }
  if ( v5 == 106 )
    return (ULONG)-1073741821;
  if ( v5 > 59 )
  {
    if ( v5 <= 87 )
    {
      if ( v5 == 87 )
      {
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return (ULONG)-1073741790;
        if ( (_DWORD)v3 == 8 )
        {
          v63 = *(HANDLE *)v4;
          MmSpecialPoolTag = *(_QWORD *)v4;
          MmSpecialPoolCatchOverruns = BYTE4(v63) & 1;
          return updated;
        }
        return (ULONG)-1073741820;
      }
      if ( v5 <= 79 )
      {
        if ( v5 == 79 )
          return (ULONG)PfSetSuperfetchInformation(a1, (__int128 *)a2, a3, PreviousMode);
        v37 = v5 - 69;
        if ( v37 )
        {
          v38 = v37 - 2;
          if ( !v38 )
            return 3221225659LL;
          v39 = v38 - 1;
          if ( v39 )
          {
            v40 = v39 - 2;
            if ( v40 )
            {
              if ( v40 != 1 )
                return (ULONG)-1073741821;
              LOBYTE(a3) = PreviousMode;
              return (ULONG)ExpRegisterFirmwareTableInformationHandler(a2, (unsigned int)v3, a3, 1LL);
            }
            return 3221225474LL;
          }
          if ( PreviousMode || !a2 || (_DWORD)a3 != 8 )
            return 3221225485LL;
          if ( *(_DWORD *)a2 )
          {
            switch ( *(_DWORD *)a2 )
            {
              case 1:
                ((void (__fastcall *)(_QWORD, unsigned __int64, __int64, __int64))off_140C01F10[0])(
                  (unsigned int)(*(_DWORD *)a2 - 1),
                  a2,
                  a3,
                  1LL);
                return 0;
              case 2:
                ((void (__fastcall *)(_QWORD, unsigned __int64, __int64, __int64))off_140C01F18[0])(
                  (unsigned int)(*(_DWORD *)a2 - 2),
                  a2,
                  a3,
                  1LL);
                return 0;
              case 3:
                ((void (__fastcall *)(_QWORD, unsigned __int64, __int64, __int64))off_140C01F08[0])(
                  (unsigned int)(*(_DWORD *)a2 - 3),
                  a2,
                  a3,
                  1LL);
                return 0;
            }
            if ( *(_DWORD *)a2 != 4 )
            {
              v61 = (unsigned int)(*(_DWORD *)a2 - 6);
              if ( *(_DWORD *)a2 == 6 )
              {
                LODWORD(v61) = 1;
                return ((ULONG (__fastcall *)(__int64, unsigned __int64, __int64, __int64))off_140C01F28[0])(
                         v61,
                         a2,
                         a3,
                         1LL);
              }
              if ( *(_DWORD *)a2 == 7 )
              {
                updated = 0;
                if ( off_140C01F28[0] == xKdEnumerateDebuggingDevices )
                  return (ULONG)-1073741822;
                return updated;
              }
              return (ULONG)-1073741811;
            }
          }
        }
        return (ULONG)-1073741637;
      }
      if ( v5 == 80 )
      {
        LOBYTE(a3) = PreviousMode;
        return (ULONG)MmIssueMemoryListCommand(a2, (unsigned int)v3, a3, 1LL);
      }
      if ( v5 == 81 )
        goto LABEL_263;
      if ( v5 != 82 )
      {
        if ( v5 != 86 )
          return (ULONG)-1073741821;
        return (ULONG)ObSetRefTraceInformation(a2, (unsigned int)a3, a3, 1LL);
      }
      if ( (unsigned int)a3 < 0x18 )
        return 3221225476LL;
      if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
        return 3221225569LL;
      if ( PreviousMode )
      {
        v118 = *(UNICODE_STRING *)v4;
        *(_QWORD *)&v119 = *(_QWORD *)(v4 + 16);
        v4 = (unsigned __int64)&v118;
      }
      if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 1) > 0x1E )
        return 3221225485LL;
      *(_OWORD *)v101 = *(_OWORD *)v4;
      updated = PsLookupProcessThreadByCid((__int64)v101, 0LL, &Object);
      if ( (updated & 0x80000000) != 0 )
        return updated;
      v21 = Object;
      if ( *((_BYTE *)Object + 4) )
      {
        updated = -1073741749;
      }
      else
      {
        KeSetActualBasePriorityThread((ULONG_PTR)Object, *(_DWORD *)(v4 + 16));
        updated = 259;
      }
      v22 = v21;
LABEL_65:
      ObfDereferenceObject(v22);
      return updated;
    }
    v64 = v5 - 89;
    if ( !v64 )
    {
      if ( PreviousMode == 1 )
      {
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
          return (ULONG)-1073741727;
        v78 = KeGetCurrentThread()->ApcState.Process;
        if ( !v78[1].Affinity.StaticBitmap[30] )
          return (ULONG)DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
        v79 = WORD2(v78[2].Affinity.StaticBitmap[20]);
        if ( v79 != 332 && v79 != 452 )
          LOBYTE(v7) = 0;
        if ( !(_BYTE)v7 )
          return (ULONG)DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
      }
      return (ULONG)-1073741637;
    }
    v65 = v64 - 2;
    if ( !v65 )
    {
      if ( !PreviousMode )
      {
        if ( (_DWORD)a3 )
          return (ULONG)-1073741584;
        else
          return HvlHypervisorConnected == 0 ? 0xC0351000 : 0;
      }
      return (ULONG)-1073741790;
    }
    v66 = v65 - 1;
    if ( !v66 )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return 3221225506LL;
      if ( (_DWORD)v3 != 40 )
        return 3221225476LL;
      return (ULONG)VfSetVerifierInformationEx(v4);
    }
    v67 = v66 - 1;
    if ( !v67 )
    {
      v72 = 172;
      goto LABEL_287;
    }
    v68 = v67 - 1;
    if ( !v68 )
    {
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return (ULONG)-1073741790;
      if ( (_DWORD)v3 == 8 )
      {
        *(_QWORD *)&v118.Length = *(_QWORD *)v4;
        _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, *(unsigned int *)&v118.Length);
        _InterlockedAnd((volatile signed __int32 *)0xFFFFF780000003A0LL, ~*(_DWORD *)(&v118.MaximumLength + 1));
        return updated;
      }
      return (ULONG)-1073741820;
    }
    v69 = v68 - 1;
    if ( !v69 )
    {
      if ( !PreviousMode || !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return 3221225506LL;
      if ( (unsigned int)v3 < 0x18 )
        return 3221225476LL;
      return (ULONG)ExpCovResetInformation(v4, (unsigned int)v3);
    }
    v70 = v69 - 2;
    if ( v70 )
    {
      v71 = v70 - 5;
      if ( v71 )
      {
        if ( v71 != 2 )
          return (ULONG)-1073741821;
        LOBYTE(a3) = PreviousMode;
        return (ULONG)ExpSetProcessorMicrocodeUpdateInformation(a2, (unsigned int)v3, a3, 1LL);
      }
      v72 = 432;
LABEL_287:
      if ( (_DWORD)a3 != v72 )
        return 3221225476LL;
      if ( PreviousMode
        && !(unsigned __int8)ExpCapabilityCheck(&TimeZoneCapability)
        && !SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
      {
        return 3221225569LL;
      }
      return (ULONG)ExpSetTimeZoneInformation(v4, v72, a3, v8);
    }
    if ( (_DWORD)a3 != 40 )
      return 3221225476LL;
    if ( PreviousMode )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return 3221225569LL;
      v118 = *(UNICODE_STRING *)v4;
      v119 = *(_OWORD *)(v4 + 16);
      *(_QWORD *)&v120 = *(_QWORD *)(v4 + 32);
      result = VfProbeAndCaptureUnicodeStringBuffer(&v118.Buffer, 1LL, v73, v74);
      if ( (int)result < 0 )
        return result;
      updated = VfProbeAndCaptureUnicodeStringBuffer((char *)&v119 + 8, 1LL, v75, v76);
      if ( (updated & 0x80000000) != 0 )
      {
        p_Buffer = (UNICODE_STRING *)&v118.Buffer;
        goto LABEL_434;
      }
      v4 = (unsigned __int64)&v118;
    }
    updated = VfFaultsSetParameters(v4, a2, a3, v8);
    if ( !PreviousMode )
      return updated;
    VfFreeCapturedUnicodeString(v4 + 8);
    p_Buffer = (UNICODE_STRING *)(v4 + 24);
LABEL_434:
    VfFreeCapturedUnicodeString(p_Buffer);
    return updated;
  }
  if ( v5 == 59 )
  {
    if ( (_DWORD)a3 == 4 )
    {
      v60 = *(unsigned int *)a2;
      updated = ExpUpdateComPlusPackage(v60, a2, a3, 1LL);
      if ( (updated & 0x80000000) == 0 )
        MEMORY[0xFFFFF780000002E0] = v60;
      return updated;
    }
    return 3221225476LL;
  }
  if ( v5 > 38 )
  {
    if ( v5 > 48 )
    {
      v15 = v5 - 51;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 2;
          if ( !v17 )
          {
            LODWORD(v8) = 0;
            goto LABEL_100;
          }
          if ( v17 != 2 )
            return (ULONG)-1073741821;
          LOBYTE(v8) = PreviousMode;
          return (ULONG)PfSnSetPrefetcherInformation(a1, a2, (unsigned int)a3, v8);
        }
        else
        {
          if ( PreviousMode )
            return 3221225569LL;
          return (ULONG)MmAddVerifierThunks((PVOID)a2, a3);
        }
      }
      else
      {
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return 3221225506LL;
        return (ULONG)VfSetVerifierInformation(v4, (unsigned int)v3, 0LL);
      }
    }
    if ( v5 != 48 )
    {
      if ( v5 == 39 )
      {
        if ( (_DWORD)a3 != 4 )
          return 3221225476LL;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return 3221225569LL;
        PsChangeQuantumTable(1, *(_DWORD *)v4);
        return 0;
      }
      if ( v5 > 41 )
      {
        if ( v5 == 46 )
        {
          if ( (_DWORD)a3 == 8 )
          {
            if ( !PreviousMode || SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
            {
              if ( !PsIsCurrentThreadInServerSilo() )
              {
                v112 = *(HANDLE *)v4;
                if ( v112 )
                {
                  v101[0] = 0LL;
                  updated = ObReferenceObjectByHandle(
                              v112,
                              2u,
                              (POBJECT_TYPE)ExEventObjectType,
                              PreviousMode,
                              v101,
                              0LL);
                  v57 = v101[0];
                  if ( (updated & 0x80000000) != 0 )
                    return updated;
                }
                else
                {
                  v57 = 0LL;
                  updated = 0;
                }
                KdUpdateTimeSlipEvent(v57);
                return updated;
              }
              return 3221225506LL;
            }
            return 3221225569LL;
          }
          return 3221225476LL;
        }
        if ( v5 != 47 )
          return (ULONG)-1073741821;
        return 3221225474LL;
      }
      if ( (_DWORD)a3 != 16 )
        return 3221225476LL;
      if ( !PreviousMode )
        goto LABEL_230;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return 3221225569LL;
      result = VfProbeAndCaptureUnicodeString(Buf1, v4, 1LL);
      if ( (int)result < 0 )
        return result;
      v4 = (unsigned __int64)Buf1;
      if ( LOWORD(Buf1[0]) )
      {
LABEL_230:
        v58 = v5 - 40;
        if ( !v58 )
        {
          v59 = VfAddVerifierEntry((PCUNICODE_STRING)v4);
          goto LABEL_431;
        }
        if ( v58 == 1 )
        {
          v59 = VfRemoveVerifierEntry(v4, a2, a3, v8);
LABEL_431:
          updated = v59;
          goto LABEL_432;
        }
LABEL_429:
        updated = -1073741821;
LABEL_432:
        if ( !PreviousMode )
          return updated;
        p_Buffer = (UNICODE_STRING *)v4;
        goto LABEL_434;
      }
      return 3221225711LL;
    }
    return 3221225474LL;
  }
  if ( v5 != 38 )
  {
    if ( v5 <= 28 )
    {
      if ( v5 == 28 )
      {
        if ( (((_DWORD)a3 - 8) & 0xFFFFFFF7) == 0 )
        {
          if ( !PreviousMode || SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
          {
            if ( !PsIsCurrentThreadInServerSilo() )
            {
              if ( (_DWORD)v3 == 16 )
              {
                v13 = *(_BYTE *)(v4 + 8);
                v95[0] = v13;
                v103 = *(_QWORD *)v4;
              }
              else
              {
                v13 = *(_BYTE *)(v4 + 4);
                v95[0] = v13;
                v14 = *(unsigned int *)v4;
                v103 = v14;
                if ( v14 )
                  v103 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)(unsigned int)KeMaximumIncrement / v14;
              }
              if ( v13 )
                v103 = MEMORY[0xFFFFF78000000300];
              LOBYTE(v12) = 1;
              ExAcquireTimeRefreshLock(v12);
              updated = ExpUpdateTimerConfiguration(0LL, (__int64)&v103, (__int64)v95);
              ExReleaseResourceLite(&ExpTimeRefreshLock);
LABEL_30:
              KeLeaveCriticalRegion();
              return updated;
            }
            return 3221225506LL;
          }
          return 3221225569LL;
        }
        return 3221225476LL;
      }
      if ( v5 != 9 )
      {
        if ( v5 != 21 )
        {
          if ( v5 == 24 )
          {
            if ( (_DWORD)a3 == 20 )
            {
              if ( !PreviousMode || SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
              {
                v118 = *(UNICODE_STRING *)v4;
                LODWORD(v119) = *(_DWORD *)(v4 + 16);
                KiMinimumDpcRate = (int)v118.Buffer;
                KiMaximumDpcQueueDepth = *(_DWORD *)(&v118.MaximumLength + 1);
                KiAdjustDpcThreshold = HIDWORD(v118.Buffer);
                KiIdealDpcRate = v119;
                KeSynchronizeWithDynamicProcessors();
                ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
                if ( ActiveProcessorCount )
                {
                  v53 = KiProcessorBlock;
                  v54 = ActiveProcessorCount;
                  do
                  {
                    v55 = *v53;
                    *(_DWORD *)(v55 + 13224) = KiMaximumDpcQueueDepth;
                    *(_DWORD *)(v55 + 13232) = KiMinimumDpcRate;
                    ++v53;
                    --v54;
                  }
                  while ( v54 );
                }
                return updated;
              }
              return 3221225569LL;
            }
            return 3221225476LL;
          }
          if ( v5 != 26 )
          {
            if ( v5 == 27 )
            {
              if ( (_DWORD)a3 != 8 )
                return 3221225476LL;
              if ( PreviousMode )
                return 3221225569LL;
              MmUnloadSystemImage(*(_QWORD *)a2);
              return 0;
            }
            return (ULONG)-1073741821;
          }
LABEL_100:
          if ( (_DWORD)a3 == 56 )
          {
            if ( !PreviousMode )
            {
              *(_OWORD *)Buf1 = *(_OWORD *)a2;
              SystemImage = MmLoadSystemImage((int)Buf1, 0, 0, v8, (__int64)&BugCheckParameter2, (__int64)&v99);
              updated = SystemImage;
              if ( SystemImage < 0 )
              {
                if ( SystemImage == -1073741411 )
                  return (ULONG)-1073741554;
              }
              else
              {
                LOBYTE(v31) = 1;
                v32 = RtlImageDirectoryEntryToData(v99, v31, 0, (int)v101);
                v33 = RtlImageNtHeader(v99);
                *(_QWORD *)(v4 + 40) = v32;
                v34 = v99 + *(unsigned int *)(v33 + 40);
                *(_QWORD *)(v4 + 16) = v99;
                *(_QWORD *)(v4 + 24) = BugCheckParameter2;
                *(_QWORD *)(v4 + 32) = v34;
                *(_DWORD *)(v4 + 48) = *(_DWORD *)(v33 + 80);
              }
              return updated;
            }
            return 3221225569LL;
          }
          return 3221225476LL;
        }
LABEL_263:
        v96[0] = 0;
        if ( (unsigned int)a3 >= 0x40 )
        {
          if ( v5 == 21 )
          {
            v62 = 0;
            v105 = 0;
          }
          else
          {
            v105 = *(_DWORD *)(a2 + 60);
            v62 = v105;
            if ( (v105 & 0xFFFFFFF0) != 0 || (v105 & 0xC) == 0xC || (v105 & 3) == 3 )
              return 3221225712LL;
          }
          if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
            return MmAdjustWorkingSetSizeEx(*(_QWORD *)(v4 + 24), *(_QWORD *)(v4 + 32), 2, 1, v62, v96);
          return 3221225506LL;
        }
        return 3221225476LL;
      }
      if ( (_DWORD)a3 == 4 )
      {
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        {
          NtGlobalFlag = *(_DWORD *)v4 ^ (NtGlobalFlag ^ *(_DWORD *)v4) & 0x6DCE640F;
          *(_DWORD *)v4 = NtGlobalFlag;
          return updated;
        }
        return (ULONG)-1073741790;
      }
      return (ULONG)-1073741820;
    }
    v43 = v5 - 30;
    if ( !v43 )
      return (ULONG)MmCreateMirror();
    v44 = v43 - 1;
    if ( !v44 )
      return (ULONG)EtwSetPerformanceTraceInformation((volatile void *)a2, (unsigned int)a3, PreviousMode);
    v45 = v44 - 3;
    if ( !v45 )
    {
      if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) || PsIsCurrentThreadInServerSilo() )
        return 3221225569LL;
      if ( (_DWORD)v3 == 4 )
      {
        if ( PreviousMode )
        {
          if ( (v4 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v4 + 4 > 0x7FFFFFFF0000LL || v4 + 4 < v4 )
            MEMORY[0x7FFFFFFF0000] = 0;
          v46 = *(_DWORD *)v4;
          v111 = *(_DWORD *)v4;
        }
        else
        {
          v46 = *(_DWORD *)v4;
        }
        if ( !v46 )
        {
          v56 = 0LL;
          return (ULONG)IoConfigureCrashDump(v56, 0);
        }
        v47 = v46 - 1;
        if ( v47 )
        {
          if ( v47 == 1 )
            return (ULONG)WheaCrashDumpInitializationComplete();
          return 3221225485LL;
        }
      }
      v56 = 1LL;
      return (ULONG)IoConfigureCrashDump(v56, 0);
    }
    if ( v45 != 3 )
      return (ULONG)-1073741821;
    if ( (_DWORD)a3 != 16 )
      return 3221225476LL;
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
      return 3221225569LL;
    return (ULONG)CmSetRegistryQuotaInformation(v4, a2, a3, v8);
  }
  if ( (_DWORD)a3 != 16 )
    return 3221225476LL;
  if ( PreviousMode )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[30] & 0x100) == 0
      || !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, 1) )
    {
      return 3221225569LL;
    }
    v26 = 0x7FFFFFFF0000LL;
    if ( v4 < 0x7FFFFFFF0000LL )
      v26 = v4;
    LODWORD(Buf1[0]) = *(_DWORD *)v26;
    Buf1[1] = *(void **)(v26 + 8);
    if ( LOWORD(Buf1[0]) == 62 )
    {
      if ( !memcmp(Buf1[1], L"\\SystemRoot\\System32\\win32k.sys", 0x3EuLL) )
      {
        Buf1[1] = L"\\SystemRoot\\System32\\win32k.sys";
        WORD1(Buf1[0]) = 62;
        return ZwSetSystemInformation(38LL, (__int64)Buf1);
      }
      else
      {
        return 3221225569LL;
      }
    }
    else
    {
      return 3221225569LL;
    }
  }
  else
  {
    *(_OWORD *)Buf1 = *(_OWORD *)a2;
    if ( !memcmp(
            (const void *)_mm_srli_si128(*(__m128i *)Buf1, 8).m128i_i64[0],
            L"\\SystemRoot\\System32\\win32k.sys",
            0x3EuLL) )
      v7 = -2147483643;
    result = MmLoadSystemImageEx((__int64)Buf1, 0LL, 0LL, 0LL, v7, &BugCheckParameter2, (unsigned __int64 *)&v99);
    if ( (int)result >= 0 )
    {
      v35 = RtlImageNtHeader(v99);
      if ( !v35 )
      {
        MmUnloadSystemImage(BugCheckParameter2);
        return 3221225595LL;
      }
      updated = ExpInitializeSessionDriver(
                  (__int64 (__fastcall *)(_QWORD *, _QWORD))(v99 + *(unsigned int *)(v35 + 40)),
                  v99);
      if ( (updated & 0x80000000) != 0 )
        MmUnloadSystemImage(BugCheckParameter2);
      return updated;
    }
    if ( (_DWORD)result == -1073741411 )
      return 3221225742LL;
  }
  return result;
}
