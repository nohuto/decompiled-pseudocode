/*
 * XREFs of NtSetSystemInformation @ 0x14075F020
 * Callers:
 *     WmipRegisterFirmwareProviders @ 0x140B39608 (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     KeQueryActiveProcessorCountEx @ 0x140222050 (KeQueryActiveProcessorCountEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     KeSetActualBasePriorityThread @ 0x1402B98F0 (KeSetActualBasePriorityThread.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9F08 (MmAdjustWorkingSetSizeEx.c)
 *     MiGetThreadPartition @ 0x14036F3B8 (MiGetThreadPartition.c)
 *     RtlCheckTokenMembership @ 0x140370230 (RtlCheckTokenMembership.c)
 *     KeModifySystemAllowedCpuSets @ 0x14039D644 (KeModifySystemAllowedCpuSets.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403B071C (ExCpuSetResourceManagerAccessCheck.c)
 *     ExpUpdateTimerConfiguration @ 0x1403C3158 (ExpUpdateTimerConfiguration.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memcmp @ 0x1403DA530 (memcmp.c)
 *     ZwLoadDriver @ 0x14041D270 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x14041E810 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x14041EBB0 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     VslProvisionDumpEncryption @ 0x14054C4C8 (VslProvisionDumpEncryption.c)
 *     IoConfigureCrashDump @ 0x140550024 (IoConfigureCrashDump.c)
 *     IoProvisionCrashDumpKey @ 0x140550FC4 (IoProvisionCrashDumpKey.c)
 *     KdUpdateTimeSlipEvent @ 0x140568088 (KdUpdateTimeSlipEvent.c)
 *     KeUpdateDpcWatchdogConfiguration @ 0x14056B670 (KeUpdateDpcWatchdogConfiguration.c)
 *     KeProcessorProfileControlArea @ 0x14056CC4C (KeProcessorProfileControlArea.c)
 *     KeSetTagCpuSets @ 0x1405769A4 (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x14057A200 (KeIntSteerAssignCpuSetForGsiv.c)
 *     PsSetCpuQuotaInformation @ 0x1405A3E74 (PsSetCpuQuotaInformation.c)
 *     PsSetExeModerationState @ 0x1405A42DC (PsSetExeModerationState.c)
 *     ExpSetBootLoaderMetadata @ 0x140605DF0 (ExpSetBootLoaderMetadata.c)
 *     ExpSetSoftRebootFlags @ 0x140605F20 (ExpSetSoftRebootFlags.c)
 *     ExPoolSetLimit @ 0x140607C54 (ExPoolSetLimit.c)
 *     MmUnloadSystemImage @ 0x140696020 (MmUnloadSystemImage.c)
 *     PsInvokeWin32Callout @ 0x1406AF880 (PsInvokeWin32Callout.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     MmLoadSystemImage @ 0x1407036A0 (MmLoadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     PfSnSetPrefetcherInformation @ 0x14074D774 (PfSnSetPrefetcherInformation.c)
 *     ExAcquireTimeRefreshLock @ 0x14075FB44 (ExAcquireTimeRefreshLock.c)
 *     PfSetSuperfetchInformation @ 0x14075FB84 (PfSetSuperfetchInformation.c)
 *     ExHandleSPCall2 @ 0x1407BB5C0 (ExHandleSPCall2.c)
 *     PsLookupProcessThreadByCid @ 0x1407BBE80 (PsLookupProcessThreadByCid.c)
 *     PsChangeQuantumTable @ 0x1407C0714 (PsChangeQuantumTable.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1407D5F5C (KeSynchronizeWithDynamicProcessors.c)
 *     SmSetStoreInformation @ 0x1407E8044 (SmSetStoreInformation.c)
 *     ExpInitializeSessionDriver @ 0x1407EA218 (ExpInitializeSessionDriver.c)
 *     MiCombineIdenticalPages @ 0x1407EB7E4 (MiCombineIdenticalPages.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14085BF54 (ExpRegisterFirmwareTableInformationHandler.c)
 *     MmIssueMemoryListCommand @ 0x140862338 (MmIssueMemoryListCommand.c)
 *     KeInitializeEntropySystem @ 0x1408624BC (KeInitializeEntropySystem.c)
 *     WheaCrashDumpInitializationComplete @ 0x140864C9C (WheaCrashDumpInitializationComplete.c)
 *     DbgkRegisterErrorPort @ 0x140939B14 (DbgkRegisterErrorPort.c)
 *     HvlQuerySetBootPagesInfo @ 0x140941174 (HvlQuerySetBootPagesInfo.c)
 *     VslRelaxQuotas @ 0x140943008 (VslRelaxQuotas.c)
 *     PnpIommuBlockUnblockDevice @ 0x14096F158 (PnpIommuBlockUnblockDevice.c)
 *     ObSetRefTraceInformation @ 0x14097CAA0 (ObSetRefTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E2114 (EtwSetPerformanceTraceInformation.c)
 *     ExpQueryElamCertInfo @ 0x1409F6D30 (ExpQueryElamCertInfo.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x1409F7854 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1409F78BC (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x1409F7D08 (ExpUpdateComPlusPackage.c)
 *     ExSetLeapSecondEnabled @ 0x1409F7DB4 (ExSetLeapSecondEnabled.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovResetInformation @ 0x140A072E4 (ExpCovResetInformation.c)
 *     CmSetRegistryQuotaInformation @ 0x140A0FD08 (CmSetRegistryQuotaInformation.c)
 *     CmUpdateFeatureConfiguration @ 0x140A120DC (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140A123EC (CmUpdateFeatureUsageSubscription.c)
 *     CmReconcileAndValidateAllHives @ 0x140A13528 (CmReconcileAndValidateAllHives.c)
 *     MmAddVerifierThunks @ 0x140A2D7F0 (MmAddVerifierThunks.c)
 *     MmCreateMirror @ 0x140A2F3F0 (MmCreateMirror.c)
 *     MmScrubMemory @ 0x140A46D74 (MmScrubMemory.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     VfFreeCapturedUnicodeString @ 0x140AC20E4 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140AC2260 (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140AC229C (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfFaultsSetParameters @ 0x140AD6168 (VfFaultsSetParameters.c)
 *     VfAddVerifierEntry @ 0x140ADD650 (VfAddVerifierEntry.c)
 *     VfRemoveVerifierEntry @ 0x140ADD7E0 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140ADD808 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140ADD940 (VfSetVerifierInformationEx.c)
 *     VfVolatileApplyDifVerification @ 0x140ADDA30 (VfVolatileApplyDifVerification.c)
 *     VfVolatileClearDifRuleClass @ 0x140ADDA9C (VfVolatileClearDifRuleClass.c)
 *     VfVolatileRemoveDifVerification @ 0x140ADDB58 (VfVolatileRemoveDifVerification.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADDC0C (VfVolatileSetDifRuleClass.c)
 *     VfPtGenerateTraceInformation @ 0x140ADE7F8 (VfPtGenerateTraceInformation.c)
 *     BgkSetBootGraphicsInformation @ 0x140AF1104 (BgkSetBootGraphicsInformation.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  size_t v3; // r15
  unsigned __int64 v4; // r14
  SYSTEM_INFORMATION_CLASS v5; // ebx
  __int64 v6; // rsi
  unsigned int v7; // r13d
  __int64 v8; // r9
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v10; // rax
  int updated; // edi
  __int64 v12; // rcx
  char v13; // cl
  unsigned __int64 v14; // r9
  NTSTATUS result; // eax
  __int32 v16; // ebx
  __int32 v17; // ebx
  __int32 v18; // ebx
  int v19; // ebx
  void *v21; // rbx
  __int64 ThreadPartition; // rax
  __int32 v23; // ebx
  __int32 v24; // ebx
  __int32 v25; // ebx
  int v26; // ebx
  __int64 v27; // rcx
  int SystemImage; // eax
  PVOID v29; // rbx
  PIMAGE_NT_HEADERS v30; // rax
  char *v31; // rdx
  __int64 v32; // rcx
  PIMAGE_NT_HEADERS v33; // rax
  __int32 v34; // ebx
  __int64 v35; // r8
  unsigned int v36; // r15d
  int v37; // r9d
  _BYTE *v38; // rdx
  __int32 v39; // ebx
  __int32 v40; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v42; // ecx
  int v43; // ecx
  __int32 v44; // ebx
  __int64 v45; // rcx
  ULONG v46; // r15d
  unsigned __int64 v47; // rbx
  ULONG ActiveProcessorCount; // eax
  __int64 *v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rcx
  void *v53; // rcx
  __int32 v54; // ebx
  int v55; // eax
  __int64 v56; // rbx
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // ebx
  _KPROCESS *v60; // rcx
  __int16 v61; // ax
  __int32 v62; // ebx
  __int32 v63; // ebx
  __int32 v64; // ebx
  int v65; // ebx
  unsigned int v66; // ebx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r8
  __int64 v70; // r9
  NTSTATUS v71; // ebx
  UNICODE_STRING *v72; // rcx
  __int32 v73; // ebx
  __int32 v74; // ebx
  int v75; // ebx
  __int64 v76; // rcx
  __int32 v77; // ebx
  __m128i v78; // xmm1
  unsigned __int16 v79; // bx
  char *v80; // rcx
  void *Pool2; // rax
  void *v82; // r14
  __int32 v83; // ebx
  __int32 v84; // ebx
  __int32 v85; // ebx
  int v86; // ebx
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  int v90; // r15d
  char v91; // bl
  __int32 v92; // ebx
  __int32 v93; // ebx
  _KPROCESS *Process; // rbx
  ULONG v95; // r15d
  __int64 v96; // rbx
  __int32 v97; // ebx
  __int32 v98; // ebx
  __int32 v99; // ebx
  __int32 v100; // ebx
  __int64 v101; // rcx
  bool v102; // [rsp+40h] [rbp-588h] BYREF
  BOOLEAN IsMember[9]; // [rsp+41h] [rbp-587h] BYREF
  char v104[22]; // [rsp+4Ah] [rbp-57Eh] BYREF
  ULONG Size[2]; // [rsp+60h] [rbp-568h] BYREF
  void *Buf1[2]; // [rsp+68h] [rbp-560h] BYREF
  PVOID BaseOfImage; // [rsp+80h] [rbp-548h] BYREF
  LUID PrivilegeValue; // [rsp+88h] [rbp-540h]
  int v110; // [rsp+90h] [rbp-538h]
  unsigned __int64 v111; // [rsp+98h] [rbp-530h] BYREF
  ULONG_PTR v112; // [rsp+A0h] [rbp-528h] BYREF
  int v113; // [rsp+A8h] [rbp-520h]
  PVOID Object; // [rsp+B0h] [rbp-518h] BYREF
  __int64 v115; // [rsp+B8h] [rbp-510h] BYREF
  __int64 v116; // [rsp+C0h] [rbp-508h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+C8h] [rbp-500h] BYREF
  __int128 v118; // [rsp+D8h] [rbp-4F0h]
  int v119; // [rsp+E8h] [rbp-4E0h]
  int v120; // [rsp+ECh] [rbp-4DCh]
  HANDLE v121; // [rsp+148h] [rbp-480h]
  __int64 v122; // [rsp+1C0h] [rbp-408h]
  int v123; // [rsp+1ECh] [rbp-3DCh]
  UNICODE_STRING v124; // [rsp+1F8h] [rbp-3D0h] BYREF
  void *Src[2]; // [rsp+208h] [rbp-3C0h]
  HANDLE v126; // [rsp+220h] [rbp-3A8h]
  __int64 v127; // [rsp+228h] [rbp-3A0h]
  UNICODE_STRING v128; // [rsp+248h] [rbp-380h] BYREF
  __int128 v129; // [rsp+258h] [rbp-370h] BYREF
  __int128 v130; // [rsp+268h] [rbp-360h]
  char v131[256]; // [rsp+280h] [rbp-348h] BYREF
  _BYTE v132[256]; // [rsp+380h] [rbp-248h] BYREF
  _BYTE v133[256]; // [rsp+480h] [rbp-148h] BYREF

  v3 = SystemInformationLength;
  v4 = (unsigned __int64)SystemInformation;
  v5 = SystemInformationClass;
  v124 = 0LL;
  v6 = 0LL;
  v102 = 0;
  *(_OWORD *)Buf1 = 0LL;
  BaseOfImage = 0LL;
  v7 = 1;
  v8 = 1LL;
  v115 = 0LL;
  v116 = 0LL;
  v112 = 0LL;
  Object = 0LL;
  v111 = 0LL;
  v128 = 0LL;
  v129 = 0LL;
  v130 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( SystemInformationClass == SystemErrorPortInformation )
    {
      v10 = 1LL;
    }
    else if ( SystemInformationClass != SystemSoftRebootInformation || (v10 = 0LL, SystemInformationLength != 1) )
    {
      v10 = 3LL;
    }
    if ( SystemInformationLength )
    {
      if ( (v10 & (unsigned __int64)SystemInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_QWORD *)&SystemInformationClass = (char *)SystemInformation + SystemInformationLength;
      if ( *(_QWORD *)&SystemInformationClass > 0x7FFFFFFF0000uLL
        || *(_QWORD *)&SystemInformationClass < (unsigned __int64)SystemInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  updated = 0;
  if ( v5 > SystemRegistryAppendString )
  {
    if ( v5 <= SystemActivityModerationExeState )
    {
      if ( v5 == SystemActivityModerationExeState )
      {
        if ( SystemInformationLength != 24 )
          return -1073741820;
        v128 = *(UNICODE_STRING *)SystemInformation;
        *(_QWORD *)&v129 = *((_QWORD *)SystemInformation + 2);
        result = VfProbeAndCaptureUnicodeStringBuffer(&v128, 1LL, 24, 1LL);
        if ( result < 0 )
          return result;
        updated = PsSetExeModerationState((__int64)&v128, v129, DWORD1(v129));
        v72 = &v128;
        goto LABEL_450;
      }
      if ( v5 <= SystemBootMetadataInformation )
      {
        if ( v5 == SystemBootMetadataInformation )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741727;
          return ExpSetBootLoaderMetadata((void *)v4, (unsigned int)v3);
        }
        if ( v5 > SystemCombinePhysicalMemoryInformation )
        {
          v39 = v5 - 131;
          if ( v39 )
          {
            v40 = v39 - 1;
            if ( v40 )
            {
              v77 = v40 - 2;
              if ( v77 )
              {
                if ( v77 == 8 )
                {
                  *(_OWORD *)Src = 0LL;
                  if ( SystemInformationLength != 48 )
                    return -1073741820;
                  if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
                    return -1073741727;
                  if ( CriticalProcessExceptionData )
                    return 0;
                  v128 = *(UNICODE_STRING *)v4;
                  v78 = *(__m128i *)(v4 + 16);
                  v130 = *(_OWORD *)(v4 + 32);
                  *(__m128i *)Src = v78;
                  v129 = 0LL;
                  v79 = _mm_cvtsi128_si32(v78);
                  if ( v79 && (v79 & 1) == 0 )
                  {
                    if ( ((__int64)Src[1] & 1) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v80 = (char *)Src[1] + v79;
                    if ( (unsigned __int64)v80 > 0x7FFFFFFF0000LL || v80 < Src[1] )
                      MEMORY[0x7FFFFFFF0000] = 0;
                    Pool2 = (void *)ExAllocatePool2(257LL, v79, 1347639365LL);
                    v82 = Pool2;
                    if ( Pool2 )
                    {
                      memmove(Pool2, Src[1], v79);
                      *((_QWORD *)&v129 + 1) = v82;
                      LOWORD(v129) = v79;
                      WORD1(v129) = v79;
                    }
                  }
                  *(UNICODE_STRING *)&CriticalProcessExceptionData = v128;
                  xmmword_140C31AF0 = v129;
                  xmmword_140C31B00 = v130;
                  return 0;
                }
                return -1073741821;
              }
              if ( SystemInformationLength != 32 )
                return -1073741820;
              return ExHandleSPCall2(*(_QWORD *)&SystemInformationClass, SystemInformation, 32, 1LL);
            }
            else
            {
              if ( SystemInformationLength != 4 )
                return -1073741820;
              *(_QWORD *)&DriverServiceName.Length = 7733364LL;
              DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
              if ( *(_BYTE *)SystemInformation & 1 )
              {
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpConDrvLoadLock, 0LL);
                updated = ZwLoadDriver(&DriverServiceName);
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpConDrvLoadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)&ExpConDrvLoadLock);
                KeAbPostRelease((ULONG_PTR)&ExpConDrvLoadLock);
                goto LABEL_31;
              }
              if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
                return -1073741727;
              return ZwUnloadDriver(&DriverServiceName);
            }
          }
          else
          {
            if ( PreviousMode )
              return -1073741790;
            if ( SystemInformationLength != 24 )
              return -1073741820;
            return KeInitializeEntropySystem(
                     *(_QWORD *)SystemInformation,
                     *((_QWORD *)SystemInformation + 1),
                     *((_QWORD *)SystemInformation + 2),
                     1LL);
          }
        }
        else
        {
          if ( v5 == SystemCombinePhysicalMemoryInformation )
          {
            if ( ((SystemInformationLength - 16) & 0xFFFFFFE7) == 0 && SystemInformationLength != 40 )
            {
              if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
              {
                memmove(&v128, (const void *)v4, v3);
                if ( (_DWORD)v3 == 32 )
                  v6 = *((_QWORD *)&v129 + 1);
                ThreadPartition = MiGetThreadPartition((__int64)KeGetCurrentThread());
                updated = MiCombineIdenticalPages(
                            ThreadPartition,
                            *(_QWORD *)&v128.Length,
                            (unsigned int)v129,
                            v6,
                            KeGetCurrentThread()->PreviousMode,
                            &v116);
                PrivilegeValue.LowPart = updated;
                *(_QWORD *)(v4 + 8) = v116;
                return updated;
              }
              return -1073741727;
            }
            return -1073741820;
          }
          v44 = v5 - 111;
          if ( !v44 )
          {
            if ( SystemInformationLength != 4 )
              return -1073741820;
            if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
              return -1073741790;
            *(_DWORD *)(MmWriteableSharedUserData + 584) = *(_DWORD *)v4;
            return 0;
          }
          v73 = v44 - 2;
          if ( v73 )
          {
            v74 = v73 - 13;
            if ( v74 )
            {
              v75 = v74 - 1;
              if ( !v75 )
              {
                if ( SystemInformationLength == 16 )
                {
                  if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
                  {
                    v121 = *(HANDLE *)v4;
                    updated = MmScrubMemory(v76, v121, &v115);
                    PrivilegeValue.LowPart = updated;
                    *(_QWORD *)(v4 + 8) = v115;
                    return updated;
                  }
                  return -1073741727;
                }
                return -1073741820;
              }
              if ( v75 != 2 )
                return -1073741821;
              return KeProcessorProfileControlArea((__int64)SystemInformation, SystemInformationLength, PreviousMode);
            }
            else
            {
              if ( PreviousMode )
                return -1073741727;
              if ( SystemInformationLength != 32 )
                return -1073741820;
              return BgkSetBootGraphicsInformation(*(_QWORD *)&SystemInformationClass, SystemInformation, 32, 1LL);
            }
          }
          else
          {
            return PsSetCpuQuotaInformation((unsigned __int64)SystemInformation, SystemInformationLength, PreviousMode);
          }
        }
      }
      if ( v5 > SystemCodeIntegrityPolicyInformation )
      {
        v34 = v5 - 168;
        if ( v34 )
        {
          v92 = v34 - 2;
          if ( !v92 )
          {
            v118 = 0LL;
            if ( SystemInformationLength != 16 )
              return -1073741820;
            if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
              return -1073741727;
            return KeIntSteerAssignCpuSetForGsiv(*(_OWORD *)v4, WORD2(*(_QWORD *)v4), *(_QWORD *)(v4 + 8));
          }
          v93 = v92 - 6;
          if ( !v93 )
          {
            if ( SystemInformationLength < 8 )
              return -1073741820;
            v95 = SystemInformationLength - 8;
            if ( (((_BYTE)SystemInformationLength - 8) & 7) != 0 || v95 > 0x100 )
              return -1073741820;
            v96 = *(_QWORD *)SystemInformation;
            v127 = *(_QWORD *)SystemInformation;
            memmove(v131, (char *)SystemInformation + 8, v95);
            updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
            if ( updated < 0 )
              return updated;
            return KeSetTagCpuSets(v95 >> 3, v131, v96);
          }
          if ( v93 != 1 )
            return -1073741821;
          if ( SystemInformationLength != 8 )
          {
            if ( SystemInformationLength )
              return -1073741820;
            updated = 0;
            Process = KeGetCurrentThread()->ApcState.Process;
            Size[0] = MmGetSessionIdEx((__int64)Process);
            if ( Size[0] == -1 )
              return updated;
            return PsInvokeWin32Callout(32, (__int64)Process, 1, (__int64)Size);
          }
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741727;
          v126 = *(HANDLE *)v4;
          *(_QWORD *)Size = 0LL;
          updated = ObReferenceObjectByHandle(
                      v126,
                      0x1000u,
                      (POBJECT_TYPE)PsProcessType,
                      PreviousMode,
                      (PVOID *)Size,
                      0LL);
          if ( updated < 0 )
            return updated;
          v21 = *(void **)Size;
          Size[0] = MmGetSessionIdEx(*(__int64 *)Size);
          if ( Size[0] != -1 )
            updated = PsInvokeWin32Callout(32, (__int64)v21, 1, (__int64)Size);
          goto LABEL_58;
        }
        if ( (SystemInformationLength & 7) != 0 || SystemInformationLength > 0x100 )
          return -1073741820;
        memmove(v132, SystemInformation, SystemInformationLength);
        result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( result < 0 )
          return result;
        v36 = (unsigned int)v3 >> 3;
        v37 = 0;
        v38 = v132;
        return KeModifySystemAllowedCpuSets(v36, (int)v38, v35, v37);
      }
      if ( v5 != SystemCodeIntegrityPolicyInformation )
      {
        v83 = v5 - 151;
        if ( !v83 )
        {
          PrivilegeValue = (LUID)19LL;
          if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
            return -1073741727;
          v90 = v3 - 1;
          if ( v90 )
          {
            if ( v90 != 3 )
              return -1073741820;
            v7 = *(_DWORD *)v4;
            v123 = *(_DWORD *)v4;
          }
          else
          {
            v91 = *(_BYTE *)v4;
            if ( *(_BYTE *)v4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return -1073741727;
            if ( !v91 )
              v7 = 5;
          }
          return ExpSetSoftRebootFlags(v7, v87, v88, v89);
        }
        v84 = v83 - 1;
        if ( !v84 )
        {
          if ( SystemInformationLength != 8 )
            return -1073741820;
          if ( PreviousMode )
            return ExpQueryElamCertInfo(*(_QWORD *)SystemInformation, SystemInformation, SystemInformationLength, 1LL);
          return -1073741811;
        }
        v85 = v84 - 3;
        if ( !v85 )
          return CmReconcileAndValidateAllHives(
                   *(_QWORD *)&SystemInformationClass,
                   SystemInformation,
                   SystemInformationLength,
                   1LL);
        v86 = v85 - 4;
        if ( v86 )
        {
          if ( v86 != 2 )
            return -1073741821;
          if ( PreviousMode )
            return -1073741790;
          if ( SystemInformationLength != 8 )
            return -1073741820;
          return KdInitialize(3LL, SystemInformation, &KdpContext, 1LL);
        }
        return -1073741637;
      }
      goto LABEL_432;
    }
    if ( v5 > SystemDifClearRuleClassInformation )
    {
      if ( v5 > SystemDifPoolTrackingInformation )
      {
        switch ( v5 )
        {
          case SystemDpcWatchdogInformation:
          case SystemDpcWatchdogInformation2:
            IsMember[0] = 0;
            if ( RtlCheckTokenMembership(0LL, SeAliasAdminsSid, IsMember) < 0 || !IsMember[0] )
              return -1073741727;
            return KeUpdateDpcWatchdogConfiguration((void *)v4, (unsigned int)v3);
          case SystemIommuStateInformation:
            return PnpIommuBlockUnblockDevice(SystemInformation, SystemInformationLength, SystemInformationLength, 1LL);
          case SystemHypervisorBootPagesInformation:
            return HvlQuerySetBootPagesInfo(SystemInformation, 0LL);
          default:
            return -1073741821;
        }
      }
      switch ( v5 )
      {
        case SystemDifPoolTrackingInformation:
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741727;
          LOBYTE(v101) = (_DWORD)v3 == 0;
          return VfPtGenerateTraceInformation(v101);
        case SystemDifApplyPluginVerificationOnDriver:
        case SystemDifRemovePluginVerificationOnDriver:
          if ( SystemInformationLength != 16 )
            return -1073741820;
          if ( !PreviousMode )
            goto LABEL_440;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741727;
          result = VfProbeAndCaptureUnicodeString(Buf1, v4, 1LL);
          if ( result < 0 )
            return result;
          v4 = (unsigned __int64)Buf1;
          if ( LOWORD(Buf1[0]) )
          {
LABEL_440:
            v100 = v5 - 219;
            if ( !v100 )
            {
              v55 = VfVolatileApplyDifVerification(v4, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
              goto LABEL_447;
            }
            if ( v100 == 1 )
            {
              v55 = VfVolatileRemoveDifVerification(v4, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
              goto LABEL_447;
            }
            goto LABEL_445;
          }
          return -1073741585;
        case SystemPoolLimitInformation:
          return ExPoolSetLimit(SystemInformation, SystemInformationLength, PreviousMode);
      }
      if ( (unsigned int)(v5 - 224) > 1 )
        return -1073741821;
      goto LABEL_432;
    }
    if ( v5 == SystemDifClearRuleClassInformation )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741790;
      return VfVolatileClearDifRuleClass();
    }
    if ( v5 > SystemLeapSecondInformation )
    {
      v97 = v5 - 207;
      if ( !v97 )
      {
        if ( SystemInformationLength != 4 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741790;
        v110 = 0;
        if ( (*(_DWORD *)v4 & 4) == 0 )
        {
          NtGlobalFlag2 = NtGlobalFlag2 & 4 | *(_DWORD *)v4;
          *(_DWORD *)v4 = NtGlobalFlag2;
          return updated;
        }
        return -1073741811;
      }
      v98 = v97 - 3;
      if ( !v98 )
        return CmUpdateFeatureConfiguration(SystemInformation, SystemInformationLength, PreviousMode);
      v99 = v98 - 2;
      if ( !v99 )
        return CmUpdateFeatureUsageSubscription(SystemInformation, SystemInformationLength, PreviousMode);
      if ( v99 != 5 )
        return -1073741821;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741790;
      return VfVolatileSetDifRuleClass((void *)v4, (unsigned int)v3);
    }
    if ( v5 == SystemLeapSecondInformation )
    {
      if ( SystemInformationLength != 8 )
        return -1073741820;
      if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
        return -1073741727;
      if ( PsIsCurrentThreadInServerSilo() )
        return -1073741790;
      v102 = (unsigned __int8)*(_QWORD *)v4 != 0;
      result = ExSetLeapSecondEnabled();
      updated = result;
      if ( result >= 0 )
      {
        *(_BYTE *)ExLeapSecondData = v102;
        return updated;
      }
      return result;
    }
    if ( v5 != SystemCodeIntegrityUnlockInformation )
    {
      v45 = (unsigned int)(v5 - 191);
      switch ( v5 )
      {
        case SystemIntegrityQuotaInformation:
          if ( !SystemInformationLength )
          {
            if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return -1073741727;
            return VslRelaxQuotas(v45, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
          }
          break;
        case SystemSecureDumpEncryptionInformation:
          if ( !SystemInformationLength )
          {
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return -1073741727;
            updated = VslProvisionDumpEncryption();
            if ( updated < 0 )
              return updated;
            return IoProvisionCrashDumpKey();
          }
          break;
        case SystemCodeIntegrityVerificationInformation:
          goto LABEL_432;
        case SystemWorkloadAllowedCpuSetsInformation:
          v122 = 0LL;
          if ( SystemInformationLength < 8 )
            return -1073741820;
          v46 = SystemInformationLength - 8;
          if ( (((_BYTE)SystemInformationLength - 8) & 7) != 0 || v46 > 0x100 )
            return -1073741820;
          v47 = *(_QWORD *)SystemInformation;
          memmove(v133, (char *)SystemInformation + 8, v46);
          if ( v47 >= 2 )
            return -1073741811;
          updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          if ( updated < 0 )
            return updated;
          v36 = v46 >> 3;
          v37 = v47;
          v38 = v133;
          return KeModifySystemAllowedCpuSets(v36, (int)v38, v35, v37);
        default:
          return -1073741821;
      }
      return -1073741811;
    }
LABEL_432:
    if ( qword_140C379E0 )
      return qword_140C379E0((unsigned int)v5, SystemInformation, SystemInformationLength, 1LL);
    return -1073741637;
  }
  if ( v5 == SystemRegistryAppendString )
    return -1073741822;
  if ( v5 > SystemHotpatchInformation )
  {
    if ( v5 <= SystemErrorPortInformation )
    {
      if ( v5 == SystemErrorPortInformation )
      {
        if ( PreviousMode == 1 )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
            return -1073741727;
          v60 = KeGetCurrentThread()->ApcState.Process;
          if ( !v60[1].Affinity.StaticBitmap[30] )
            return DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
          v61 = WORD2(v60[2].Affinity.StaticBitmap[20]);
          if ( v61 != 332 && v61 != 452 )
            LOBYTE(v7) = 0;
          if ( !(_BYTE)v7 )
            return DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
        }
        return -1073741637;
      }
      if ( v5 <= SystemMemoryListInformation )
      {
        if ( v5 == SystemMemoryListInformation )
        {
          LOBYTE(SystemInformationLength) = PreviousMode;
          return MmIssueMemoryListCommand(SystemInformation, (unsigned int)v3, SystemInformationLength, 1LL);
        }
        v16 = v5 - 71;
        if ( !v16 )
          return -1073741637;
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 2;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              if ( v19 != 4 )
                return -1073741821;
              LOBYTE(v8) = PreviousMode;
              return PfSetSuperfetchInformation(
                       *(_QWORD *)&SystemInformationClass,
                       SystemInformation,
                       SystemInformationLength,
                       v8);
            }
            else
            {
              LOBYTE(SystemInformationLength) = PreviousMode;
              return ExpRegisterFirmwareTableInformationHandler(
                       SystemInformation,
                       (unsigned int)v3,
                       SystemInformationLength,
                       1LL);
            }
          }
          return -1073741822;
        }
        if ( PreviousMode || !SystemInformation || SystemInformationLength != 8 )
          return -1073741811;
        if ( *(_DWORD *)SystemInformation )
        {
          switch ( *(_DWORD *)SystemInformation )
          {
            case 1:
              ((void (__fastcall *)(_QWORD, PVOID, ULONG, __int64))off_140C01CD0[0])(
                (unsigned int)(*(_DWORD *)SystemInformation - 1),
                SystemInformation,
                SystemInformationLength,
                1LL);
              return 0;
            case 2:
              ((void (__fastcall *)(_QWORD, PVOID, ULONG, __int64))off_140C01CD8[0])(
                (unsigned int)(*(_DWORD *)SystemInformation - 2),
                SystemInformation,
                SystemInformationLength,
                1LL);
              return 0;
            case 3:
              ((void (__fastcall *)(_QWORD, PVOID, ULONG, __int64))off_140C01CC8[0])(
                (unsigned int)(*(_DWORD *)SystemInformation - 3),
                SystemInformation,
                SystemInformationLength,
                1LL);
              return 0;
          }
          if ( *(_DWORD *)SystemInformation != 4 )
          {
            v57 = (unsigned int)(*(_DWORD *)SystemInformation - 6);
            if ( *(_DWORD *)SystemInformation == 6 )
            {
              LODWORD(v57) = 1;
              return ((__int64 (__fastcall *)(__int64, PVOID, ULONG, __int64))off_140C01CE8[0])(
                       v57,
                       SystemInformation,
                       SystemInformationLength,
                       1LL);
            }
            if ( *(_DWORD *)SystemInformation == 7 )
            {
              updated = 0;
              if ( off_140C01CE8[0] == xKdEnumerateDebuggingDevices )
                return -1073741822;
              return updated;
            }
            return -1073741811;
          }
        }
        return -1073741637;
      }
      if ( v5 == SystemFileCacheInformationEx )
        goto LABEL_259;
      if ( v5 == SystemThreadPriorityClientIdInformation )
      {
        if ( SystemInformationLength < 0x18 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
          return -1073741727;
        if ( PreviousMode )
        {
          v128 = *(UNICODE_STRING *)v4;
          *(_QWORD *)&v129 = *(_QWORD *)(v4 + 16);
          v4 = (unsigned __int64)&v128;
        }
        if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 1) > 0x1E )
          return -1073741811;
        v124 = *(UNICODE_STRING *)v4;
        updated = PsLookupProcessThreadByCid(&v124, 0LL, &Object);
        if ( updated < 0 )
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
LABEL_58:
        ObfDereferenceObject(v21);
        return updated;
      }
      if ( v5 != SystemRefTraceInformation )
      {
        if ( v5 != SystemSpecialPoolInformation )
          return -1073741821;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741790;
        if ( (_DWORD)v3 == 8 )
        {
          v58 = *(_QWORD *)v4;
          MmSpecialPoolTag = *(_QWORD *)v4;
          MmSpecialPoolCatchOverruns = BYTE4(v58) & 1;
          return updated;
        }
        return -1073741820;
      }
      return ObSetRefTraceInformation(SystemInformation, SystemInformationLength, SystemInformationLength, 1LL);
    }
    if ( v5 > SystemVerifierFaultsInformation )
    {
      if ( v5 != SystemDynamicTimeZoneInformation )
      {
        if ( v5 == SystemProcessorMicrocodeUpdateInformation )
        {
          LOBYTE(SystemInformationLength) = PreviousMode;
          return ExpSetProcessorMicrocodeUpdateInformation(
                   SystemInformation,
                   (unsigned int)v3,
                   SystemInformationLength,
                   1LL);
        }
        else
        {
          if ( v5 != SystemStoreInformation )
            return -1073741821;
          LOBYTE(v8) = PreviousMode;
          return SmSetStoreInformation(
                   *(_QWORD *)&SystemInformationClass,
                   SystemInformation,
                   SystemInformationLength,
                   v8);
        }
      }
      v66 = 432;
      goto LABEL_292;
    }
    if ( v5 != SystemVerifierFaultsInformation )
    {
      v62 = v5 - 91;
      if ( !v62 )
      {
        if ( !PreviousMode )
        {
          if ( SystemInformationLength )
            return -1073741584;
          else
            return HvlHypervisorConnected == 0 ? 0xC0351000 : 0;
        }
        return -1073741790;
      }
      v63 = v62 - 1;
      if ( !v63 )
      {
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741790;
        if ( (_DWORD)v3 != 40 )
          return -1073741820;
        return VfSetVerifierInformationEx(v4);
      }
      v64 = v63 - 1;
      if ( v64 )
      {
        v65 = v64 - 1;
        if ( !v65 )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741790;
          if ( (_DWORD)v3 == 8 )
          {
            *(_QWORD *)&v128.Length = *(_QWORD *)v4;
            _InterlockedOr((volatile signed __int32 *)(MmWriteableSharedUserData + 928), *(unsigned int *)&v128.Length);
            _InterlockedAnd(
              (volatile signed __int32 *)(MmWriteableSharedUserData + 928),
              ~*(_DWORD *)(&v128.MaximumLength + 1));
            return updated;
          }
          return -1073741820;
        }
        if ( v65 != 1 )
          return -1073741821;
        if ( !PreviousMode || !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741790;
        if ( (unsigned int)v3 < 0x18 )
          return -1073741820;
        return ExpCovResetInformation(v4, (unsigned int)v3);
      }
      v66 = 172;
LABEL_292:
      if ( SystemInformationLength != v66 )
        return -1073741820;
      if ( PreviousMode && !SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
        return -1073741727;
      return ExpSetTimeZoneInformation(v4, v66, *(_QWORD *)&SystemInformationLength, v8);
    }
    if ( SystemInformationLength != 40 )
      return -1073741820;
    if ( PreviousMode )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741727;
      v128 = *(UNICODE_STRING *)v4;
      v129 = *(_OWORD *)(v4 + 16);
      *(_QWORD *)&v130 = *(_QWORD *)(v4 + 32);
      result = VfProbeAndCaptureUnicodeStringBuffer(&v128.Buffer, 1LL, v67, v68);
      if ( result < 0 )
        return result;
      v71 = VfProbeAndCaptureUnicodeStringBuffer((char *)&v129 + 8, 1LL, v69, v70);
      if ( v71 < 0 )
      {
        VfFreeCapturedUnicodeString(&v128.Buffer);
        return v71;
      }
      v4 = (unsigned __int64)&v128;
    }
    updated = VfFaultsSetParameters(v4, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
    if ( !PreviousMode )
      return updated;
    VfFreeCapturedUnicodeString(v4 + 8);
    v72 = (UNICODE_STRING *)(v4 + 24);
LABEL_450:
    VfFreeCapturedUnicodeString(v72);
    return updated;
  }
  if ( v5 == SystemHotpatchInformation )
    return -1073741637;
  if ( v5 > SystemPrioritySeperation )
  {
    if ( v5 > SystemVerifierInformation )
    {
      if ( v5 == SystemPrefetcherInformation )
        return PfSnSetPrefetcherInformation(
                 *(__int64 *)&SystemInformationClass,
                 (__m256i *)SystemInformation,
                 SystemInformationLength,
                 PreviousMode);
      if ( v5 == SystemLoadGdiDriverInSystemSpace )
      {
        LODWORD(v8) = 0;
        goto LABEL_94;
      }
      if ( v5 != SystemVerifierThunkExtend )
      {
        if ( v5 == SystemComPlusPackage )
        {
          if ( SystemInformationLength == 4 )
          {
            v56 = *(unsigned int *)SystemInformation;
            updated = ExpUpdateComPlusPackage(v56, SystemInformation, 4, 1LL);
            if ( updated >= 0 )
              *(_DWORD *)(MmWriteableSharedUserData + 736) = v56;
            return updated;
          }
          return -1073741820;
        }
        return -1073741821;
      }
      if ( PreviousMode )
        return -1073741727;
      return MmAddVerifierThunks(SystemInformation, SystemInformationLength);
    }
    if ( v5 == SystemVerifierInformation )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741790;
      return VfSetVerifierInformation(v4, (unsigned int)v3, 0LL);
    }
    if ( v5 != SystemVerifierAddDriverInformation && v5 != SystemVerifierRemoveDriverInformation )
    {
      if ( v5 == SystemTimeSlipNotification )
      {
        if ( SystemInformationLength == 8 )
        {
          if ( !PreviousMode || SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
          {
            if ( !PsIsCurrentThreadInServerSilo() )
            {
              v121 = *(HANDLE *)v4;
              if ( v121 )
              {
                *(_QWORD *)Size = 0LL;
                updated = ObReferenceObjectByHandle(
                            v121,
                            2u,
                            (POBJECT_TYPE)ExEventObjectType,
                            PreviousMode,
                            (PVOID *)Size,
                            0LL);
                v53 = *(void **)Size;
                if ( updated < 0 )
                  return updated;
              }
              else
              {
                v53 = 0LL;
                updated = 0;
              }
              KdUpdateTimeSlipEvent(v53);
              return updated;
            }
            return -1073741790;
          }
          return -1073741727;
        }
        return -1073741820;
      }
      if ( (unsigned int)(v5 - 47) > 1 )
        return -1073741821;
      return -1073741822;
    }
    if ( SystemInformationLength != 16 )
      return -1073741820;
    if ( !PreviousMode )
      goto LABEL_220;
    if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
      return -1073741727;
    result = VfProbeAndCaptureUnicodeString(Buf1, v4, 1LL);
    if ( result < 0 )
      return result;
    v4 = (unsigned __int64)Buf1;
    if ( LOWORD(Buf1[0]) )
    {
LABEL_220:
      v54 = v5 - 40;
      if ( !v54 )
      {
        v55 = VfAddVerifierEntry((PCUNICODE_STRING)v4);
        goto LABEL_447;
      }
      if ( v54 == 1 )
      {
        v55 = VfRemoveVerifierEntry(v4, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
LABEL_447:
        updated = v55;
        goto LABEL_448;
      }
LABEL_445:
      updated = -1073741821;
LABEL_448:
      if ( !PreviousMode )
        return updated;
      v72 = (UNICODE_STRING *)v4;
      goto LABEL_450;
    }
    return -1073741585;
  }
  if ( v5 == SystemPrioritySeperation )
  {
    if ( SystemInformationLength != 4 )
      return -1073741820;
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      return -1073741727;
    v120 = *(_DWORD *)v4;
    LOBYTE(v32) = 1;
    PsChangeQuantumTable(v32);
    return 0;
  }
  if ( v5 <= SystemTimeAdjustmentInformation )
  {
    if ( v5 == SystemTimeAdjustmentInformation )
    {
      if ( ((SystemInformationLength - 8) & 0xFFFFFFF7) == 0 )
      {
        if ( !PreviousMode || SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
        {
          if ( !PsIsCurrentThreadInServerSilo() )
          {
            if ( (_DWORD)v3 == 16 )
            {
              v13 = *(_BYTE *)(v4 + 8);
              v102 = v13;
              v111 = *(_QWORD *)v4;
            }
            else
            {
              v13 = *(_BYTE *)(v4 + 4);
              v102 = v13;
              v14 = *(unsigned int *)v4;
              v111 = v14;
              if ( v14 )
                v111 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v14;
            }
            if ( v13 )
              v111 = MEMORY[0xFFFFF78000000300];
            LOBYTE(v12) = 1;
            ExAcquireTimeRefreshLock(v12);
            updated = ExpUpdateTimerConfiguration(0LL, (__int64)&v111, (__int64)&v102);
            ExReleaseResourceLite(&ExpTimeRefreshLock);
LABEL_31:
            KeLeaveCriticalRegion();
            return updated;
          }
          return -1073741790;
        }
        return -1073741727;
      }
      return -1073741820;
    }
    if ( v5 != SystemFlagsInformation )
    {
      if ( v5 != SystemFileCacheInformation )
      {
        if ( v5 == SystemDpcBehaviorInformation )
        {
          if ( SystemInformationLength == 20 )
          {
            if ( !PreviousMode || SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
            {
              v128 = *(UNICODE_STRING *)v4;
              LODWORD(v129) = *(_DWORD *)(v4 + 16);
              KiMinimumDpcRate = (int)v128.Buffer;
              KiMaximumDpcQueueDepth = *(_DWORD *)(&v128.MaximumLength + 1);
              KiAdjustDpcThreshold = HIDWORD(v128.Buffer);
              KiIdealDpcRate = v129;
              KeSynchronizeWithDynamicProcessors(
                (unsigned int)v129,
                SystemInformation,
                *(_QWORD *)&SystemInformationLength,
                v8);
              ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
              if ( ActiveProcessorCount )
              {
                v49 = KiProcessorBlock;
                v50 = ActiveProcessorCount;
                do
                {
                  v51 = *v49;
                  *(_DWORD *)(v51 + 13224) = KiMaximumDpcQueueDepth;
                  *(_DWORD *)(v51 + 13232) = KiMinimumDpcRate;
                  ++v49;
                  --v50;
                }
                while ( v50 );
              }
              return updated;
            }
            return -1073741727;
          }
          return -1073741820;
        }
        if ( v5 != SystemLoadGdiDriverInformation )
        {
          if ( v5 == SystemUnloadGdiDriverInformation )
          {
            if ( SystemInformationLength != 8 )
              return -1073741820;
            if ( PreviousMode )
              return -1073741727;
            MmUnloadSystemImage(*(_QWORD *)SystemInformation);
            return 0;
          }
          return -1073741821;
        }
LABEL_94:
        if ( SystemInformationLength == 56 )
        {
          if ( !PreviousMode )
          {
            *(_OWORD *)Buf1 = *(_OWORD *)SystemInformation;
            SystemImage = MmLoadSystemImage((int)Buf1, 0, 0, v8, (__int64)&v112, (__int64)&BaseOfImage);
            updated = SystemImage;
            if ( SystemImage < 0 )
            {
              if ( SystemImage == -1073741411 )
                return -1073741554;
            }
            else
            {
              v29 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0, Size);
              v30 = RtlImageNtHeader(BaseOfImage);
              *(_QWORD *)(v4 + 40) = v29;
              v31 = (char *)BaseOfImage + v30->OptionalHeader.AddressOfEntryPoint;
              *(_QWORD *)(v4 + 16) = BaseOfImage;
              *(_QWORD *)(v4 + 24) = v112;
              *(_QWORD *)(v4 + 32) = v31;
              *(_DWORD *)(v4 + 48) = v30->OptionalHeader.SizeOfImage;
            }
            return updated;
          }
          return -1073741727;
        }
        return -1073741820;
      }
LABEL_259:
      v104[0] = 0;
      if ( SystemInformationLength >= 0x40 )
      {
        if ( v5 == SystemFileCacheInformation )
        {
          v59 = 0;
          v113 = 0;
        }
        else
        {
          v113 = *((_DWORD *)SystemInformation + 15);
          v59 = v113;
          if ( (v113 & 0xFFFFFFF0) != 0 || (v113 & 0xC) == 0xC || (v113 & 3) == 3 )
            return -1073741584;
        }
        if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
          return MmAdjustWorkingSetSizeEx(*(_QWORD *)(v4 + 24), *(_QWORD *)(v4 + 32), 2, 1, v59, v104);
        return -1073741790;
      }
      return -1073741820;
    }
    if ( SystemInformationLength == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
      {
        NtGlobalFlag = *(_DWORD *)v4 ^ (NtGlobalFlag ^ *(_DWORD *)v4) & 0x6DCE640F;
        *(_DWORD *)v4 = NtGlobalFlag;
        return updated;
      }
      return -1073741790;
    }
    return -1073741820;
  }
  v23 = v5 - 30;
  if ( !v23 )
    return MmCreateMirror();
  v24 = v23 - 1;
  if ( !v24 )
    return EtwSetPerformanceTraceInformation(SystemInformation, SystemInformationLength, PreviousMode);
  v25 = v24 - 3;
  if ( !v25 )
  {
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) || PsIsCurrentThreadInServerSilo() )
      return -1073741727;
    if ( (_DWORD)v3 == 4 )
    {
      if ( PreviousMode )
      {
        if ( (v4 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v4 + 4 > 0x7FFFFFFF0000LL || v4 + 4 < v4 )
          MEMORY[0x7FFFFFFF0000] = 0;
        v42 = *(_DWORD *)v4;
        v119 = *(_DWORD *)v4;
      }
      else
      {
        v42 = *(_DWORD *)v4;
      }
      if ( !v42 )
      {
        v52 = 0LL;
        return IoConfigureCrashDump(v52, 0);
      }
      v43 = v42 - 1;
      if ( v43 )
      {
        if ( v43 == 1 )
          return WheaCrashDumpInitializationComplete();
        return -1073741811;
      }
    }
    v52 = 1LL;
    return IoConfigureCrashDump(v52, 0);
  }
  v26 = v25 - 3;
  if ( !v26 )
  {
    if ( SystemInformationLength != 16 )
      return -1073741820;
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
      return -1073741727;
    return CmSetRegistryQuotaInformation(v4, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
  }
  if ( v26 != 1 )
    return -1073741821;
  if ( SystemInformationLength != 16 )
    return -1073741820;
  if ( PreviousMode )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[30] & 0x100) == 0
      || !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, 1) )
    {
      return -1073741727;
    }
    v27 = 0x7FFFFFFF0000LL;
    if ( v4 < 0x7FFFFFFF0000LL )
      v27 = v4;
    LODWORD(Buf1[0]) = *(_DWORD *)v27;
    Buf1[1] = *(void **)(v27 + 8);
    if ( LOWORD(Buf1[0]) == 62 )
    {
      if ( !memcmp(Buf1[1], L"\\SystemRoot\\System32\\win32k.sys", 0x3EuLL) )
      {
        Buf1[1] = L"\\SystemRoot\\System32\\win32k.sys";
        WORD1(Buf1[0]) = 62;
        return ZwSetSystemInformation(SystemExtendServiceTableInformation, Buf1, 0x10u);
      }
      else
      {
        return -1073741727;
      }
    }
    else
    {
      return -1073741727;
    }
  }
  else
  {
    *(_OWORD *)Buf1 = *(_OWORD *)SystemInformation;
    if ( !memcmp(
            (const void *)_mm_srli_si128(*(__m128i *)Buf1, 8).m128i_i64[0],
            L"\\SystemRoot\\System32\\win32k.sys",
            0x3EuLL) )
      v7 = -2147483643;
    result = MmLoadSystemImageEx((__int64)Buf1, 0LL, 0LL, 0LL, v7, &v112, &BaseOfImage);
    if ( result >= 0 )
    {
      v33 = RtlImageNtHeader(BaseOfImage);
      if ( !v33 )
      {
        MmUnloadSystemImage(v112);
        return -1073741701;
      }
      updated = ExpInitializeSessionDriver((char *)BaseOfImage + v33->OptionalHeader.AddressOfEntryPoint);
      if ( updated < 0 )
        MmUnloadSystemImage(v112);
      return updated;
    }
    if ( result == -1073741411 )
      return -1073741554;
  }
  return result;
}
