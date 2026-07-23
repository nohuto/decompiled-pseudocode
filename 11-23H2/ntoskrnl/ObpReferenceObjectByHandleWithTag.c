/*
 * XREFs of ObpReferenceObjectByHandleWithTag @ 0x1406E6330
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x140681A70 (MmPrefetchVirtualMemory.c)
 *     NtTerminateProcess @ 0x1406837E0 (NtTerminateProcess.c)
 *     NtIsProcessInJob @ 0x14069EDD0 (NtIsProcessInJob.c)
 *     NtAssignProcessToJobObject @ 0x14069FE70 (NtAssignProcessToJobObject.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     NtCreateUserProcess @ 0x1406B8310 (NtCreateUserProcess.c)
 *     ObWaitForSingleObject @ 0x1406E3770 (ObWaitForSingleObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1406F6DC0 (MiAllocateVirtualMemoryPrepare.c)
 *     MmQueryVirtualMemory @ 0x1406F8560 (MmQueryVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1406F93E0 (NtProtectVirtualMemory.c)
 *     NtDuplicateObject @ 0x1406FB940 (NtDuplicateObject.c)
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14071349C (ExpWnfCaptureScopeInstanceId.c)
 *     NtUnmapViewOfSectionEx @ 0x14071F0F0 (NtUnmapViewOfSectionEx.c)
 *     MiMapViewOfSectionCommon @ 0x140721310 (MiMapViewOfSectionCommon.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140733390 (ObReferenceObjectByHandleWithTag.c)
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 *     NtOpenProcessTokenEx @ 0x1407378C0 (NtOpenProcessTokenEx.c)
 *     MmFreeVirtualMemory @ 0x1407452B0 (MmFreeVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140747A20 (NtResetWriteWatch.c)
 *     PsReferencePartitionByHandle @ 0x14076022C (PsReferencePartitionByHandle.c)
 *     NtTerminateThread @ 0x14076DAA0 (NtTerminateThread.c)
 *     NtCreateThreadEx @ 0x14076F5F0 (NtCreateThreadEx.c)
 *     PspCreateThread @ 0x140770F94 (PspCreateThread.c)
 *     PspBuildCreateProcessContext @ 0x140771358 (PspBuildCreateProcessContext.c)
 *     PsCreateSystemThreadEx @ 0x1407727F0 (PsCreateSystemThreadEx.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14077A258 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14077A9D8 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14077AF58 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14077B3C0 (VrpHandleIoctlCreateNamespaceNode.c)
 *     NtCreateWorkerFactory @ 0x140785D80 (NtCreateWorkerFactory.c)
 *     NtQueryInformationThread @ 0x14079F8C0 (NtQueryInformationThread.c)
 *     NtSetInformationVirtualMemory @ 0x1407A4210 (NtSetInformationVirtualMemory.c)
 *     PopPowerRequestActionInfo @ 0x1407A5EB4 (PopPowerRequestActionInfo.c)
 *     MiReadWriteVirtualMemory @ 0x1407AE6E0 (MiReadWriteVirtualMemory.c)
 *     NtFlushVirtualMemory @ 0x1407B43B0 (NtFlushVirtualMemory.c)
 *     MiLockUnlockCommon @ 0x1407B8560 (MiLockUnlockCommon.c)
 *     PopEtEnergyTrackerQuery @ 0x1407B86AC (PopEtEnergyTrackerQuery.c)
 *     PspQueryQuotaLimits @ 0x1407BCE64 (PspQueryQuotaLimits.c)
 *     NtResumeThread @ 0x1407C08F0 (NtResumeThread.c)
 *     NtGetNextProcess @ 0x1407D4930 (NtGetNextProcess.c)
 *     NtSuspendThread @ 0x1407DB890 (NtSuspendThread.c)
 *     NtGetNextThread @ 0x1407DF2E0 (NtGetNextThread.c)
 *     PspSetQuotaLimits @ 0x1407E3BE4 (PspSetQuotaLimits.c)
 *     PopCreateHiberFile @ 0x1408007B0 (PopCreateHiberFile.c)
 *     NtAcquireProcessActivityReference @ 0x140800EC0 (NtAcquireProcessActivityReference.c)
 *     PspAssignPrimaryToken @ 0x140840428 (PspAssignPrimaryToken.c)
 *     PopGetPolicyDeviceObject @ 0x14084D1C0 (PopGetPolicyDeviceObject.c)
 *     DbgkpCreateNotificationEvent @ 0x14085B5FC (DbgkpCreateNotificationEvent.c)
 *     PspCreateProcess @ 0x14085CA00 (PspCreateProcess.c)
 *     HalpAcquirePccInterface @ 0x140935A54 (HalpAcquirePccInterface.c)
 *     NtDebugActiveProcess @ 0x1409388C0 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140938CE0 (NtRemoveProcessDebug.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14093BD14 (DbgkpWerInitializeDeferredLiveDump.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x14097DE7C (PfpDeprioritizeOldPagesInWs.c)
 *     PfpSourceGetPrefetchSupport @ 0x14097F040 (PfpSourceGetPrefetchSupport.c)
 *     PfSnAppLaunchScenarioControl @ 0x14097F8E0 (PfSnAppLaunchScenarioControl.c)
 *     PfSnSetAltPrefetchParam @ 0x14097FBF8 (PfSnSetAltPrefetchParam.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140981BDC (PopPowerRequestSpecialRequestSet.c)
 *     PspConvertSiloToServerSilo @ 0x1409ACDE4 (PspConvertSiloToServerSilo.c)
 *     PspQueryPooledQuotaLimits @ 0x1409AF5A8 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1409AF754 (PspQueryWorkingSetWatch.c)
 *     NtChangeProcessState @ 0x1409AFEC0 (NtChangeProcessState.c)
 *     NtChangeThreadState @ 0x1409B00C0 (NtChangeThreadState.c)
 *     NtCreateProcessStateChange @ 0x1409B0300 (NtCreateProcessStateChange.c)
 *     NtCreateThreadStateChange @ 0x1409B0510 (NtCreateThreadStateChange.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1409B1834 (PspReferenceCpuPartitionByHandle.c)
 *     PspCreatePicoProcess @ 0x1409B56F0 (PspCreatePicoProcess.c)
 *     PspCreatePicoThread @ 0x1409B5990 (PspCreatePicoThread.c)
 *     NtAlertResumeThread @ 0x1409B5FE0 (NtAlertResumeThread.c)
 *     NtAlertThread @ 0x1409B6100 (NtAlertThread.c)
 *     NtResumeProcess @ 0x1409B6180 (NtResumeProcess.c)
 *     NtSuspendProcess @ 0x1409B6200 (NtSuspendProcess.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x1409B6468 (PsIumEnableOnDemandDebugWithResponse.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x1409B6500 (PsIumGetOnDemandDebugChallenge.c)
 *     ExpProfileCreate @ 0x140A03F08 (ExpProfileCreate.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A054A0 (NtPssCaptureVaSpaceBulk.c)
 *     NtCreateEnclave @ 0x140A3ED60 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x140A3F240 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x140A3F520 (NtLoadEnclaveData.c)
 *     MmProcessWorkingSetControl @ 0x140A437C4 (MmProcessWorkingSetControl.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140A7239C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140A7271C (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlModifyFlags @ 0x140A72ADC (VrpHandleIoctlModifyFlags.c)
 * Callees:
 *     ObpIncrPointerCountEx @ 0x140224768 (ObpIncrPointerCountEx.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14022EFA0 (ExSlowReplenishHandleTableEntry.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExGetHandlePointer @ 0x14022F830 (ExGetHandlePointer.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     ExFastReplenishHandleTableEntry @ 0x140363D68 (ExFastReplenishHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1404124A0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x140606F78 (ExHandleLogBadReference.c)
 *     ExpLookupHandleTableEntry @ 0x1406E6960 (ExpLookupHandleTableEntry.c)
 *     ObReferenceProcessHandleTable @ 0x140742830 (ObReferenceProcessHandleTable.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1407BA970 (ExpBlockOnLockedHandleEntry.c)
 *     ExpGetHandleExtraInfo @ 0x1408AB71A (ExpGetHandleExtraInfo.c)
 *     ObpAuditObjectAccess @ 0x14097C314 (ObpAuditObjectAccess.c)
 *     VfCheckUserHandle @ 0x140AD3D04 (VfCheckUserHandle.c)
 */

__int64 __fastcall ObpReferenceObjectByHandleWithTag(
        ULONG_PTR BugCheckParameter1,
        int a2,
        __int64 a3,
        char a4,
        ULONG Tag,
        _QWORD *a6,
        _DWORD *a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v11; // ecx
  _KPROCESS *Process; // rdi
  ULONG_PTR v14; // rbx
  signed __int64 *v15; // rax
  signed __int64 *v16; // rsi
  signed __int64 v17; // rbp
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int128 v20; // rt0
  unsigned __int8 v21; // tt
  unsigned __int64 HandlePointer; // rbx
  PVOID v23; // r8
  unsigned __int8 v24; // al
  int v25; // r11d
  int v26; // ebp
  unsigned __int64 v27; // rcx
  __int64 v28; // rdi
  char v29; // r10
  int v30; // eax
  int v32; // edi
  unsigned int v33; // edi
  signed __int64 v34; // r8
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  signed __int64 v37; // rbx
  ULONG_PTR v38; // rdi
  signed __int64 BugCheckParameter4; // rbx
  int v40; // ecx
  _QWORD *HandleExtraInfo; // rax
  signed __int32 v42[8]; // [rsp+0h] [rbp-88h] BYREF
  signed __int64 v43[3]; // [rsp+30h] [rbp-58h] BYREF
  struct _EX_RUNDOWN_REF *v44; // [rsp+90h] [rbp+8h]
  char v48; // [rsp+B8h] [rbp+30h]
  __int64 v49; // [rsp+C8h] [rbp+40h]

  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  v48 = 0;
  Process = CurrentThread->ApcState.Process;
  v44 = (struct _EX_RUNDOWN_REF *)Process;
  *a6 = 0LL;
  if ( a8 )
    *a8 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL )
  {
    if ( BugCheckParameter1 == -1LL )
    {
      if ( (POBJECT_TYPE *)a3 != PsProcessType && a3 )
        return 3221225508LL;
      v38 = (ULONG_PTR)CurrentThread->ApcState.Process;
      if ( (a2 & 0xFFE00000) != 0 && a4 )
      {
        return (unsigned int)-1073741790;
      }
      else
      {
        if ( a7 )
        {
          a7[1] = 0x1FFFFF;
          *a7 = 0;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v38 - 48, 1, 1u, Tag);
          v11 = 0;
        }
        BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v38 - 48));
        if ( BugCheckParameter4 <= 1 )
          KeBugCheckEx(0x18u, 0LL, v38, 0x10uLL, BugCheckParameter4);
        *a6 = v38;
      }
      return v11;
    }
    if ( BugCheckParameter1 == -2LL )
    {
      if ( (POBJECT_TYPE *)a3 == PsThreadType || !a3 )
      {
        if ( (a2 & 0xFFE00000) != 0 && a4 )
        {
          return (unsigned int)-1073741790;
        }
        else
        {
          if ( a7 )
          {
            a7[1] = 0x1FFFFF;
            *a7 = 0;
          }
          if ( ObpTraceFlags )
          {
            ObpPushStackInfo((__int64)&CurrentThread[-1].SystemAffinityTokenListHead, 1, 1u, Tag);
            v11 = 0;
          }
          v37 = _InterlockedIncrement64((volatile signed __int64 *)&CurrentThread[-1].SystemAffinityTokenListHead);
          if ( v37 <= 1 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, v37);
          *a6 = CurrentThread;
        }
      }
      else
      {
        return (unsigned int)-1073741788;
      }
      return v11;
    }
    if ( a4 )
      return 3221225480LL;
    v14 = ObpKernelHandleTable;
    BugCheckParameter1 ^= 0xFFFFFFFF80000000uLL;
    --CurrentThread->KernelApcDisable;
    v49 = v14;
    goto LABEL_10;
  }
  if ( (MmVerifierData & 0x100) != 0 && !a4 )
    VfCheckUserHandle(BugCheckParameter1);
  --CurrentThread->KernelApcDisable;
  if ( Process == CurrentThread->Process )
  {
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) == 0 )
    {
LABEL_111:
      v33 = -1073741816;
      goto LABEL_80;
    }
    v14 = Process[1].Affinity.StaticBitmap[28];
  }
  else
  {
    v14 = ObReferenceProcessHandleTable(Process);
    v48 = 1;
  }
  v49 = v14;
  if ( !v14 )
    goto LABEL_111;
  if ( v14 == ObpKernelHandleTable )
  {
LABEL_83:
    v33 = -1073741816;
    goto LABEL_78;
  }
LABEL_10:
  if ( (BugCheckParameter1 & 0x3FC) == 0
    || (v15 = (signed __int64 *)ExpLookupHandleTableEntry(v14, BugCheckParameter1), (v16 = v15) == 0LL) )
  {
LABEL_81:
    if ( BugCheckParameter1 )
      ExHandleLogBadReference(v14, BugCheckParameter1, KeGetCurrentThread()->PreviousMode);
    goto LABEL_83;
  }
  _m_prefetchw(v15);
  v17 = v15[1];
  v43[0] = *v15;
  v18 = v43[0];
  v43[1] = v17;
  if ( (v43[0] & 0x1FFFE) == 0 )
    goto LABEL_45;
  while ( 1 )
  {
    if ( (v18 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v14, v16, v18);
      _m_prefetchw(v16);
      v17 = v16[1];
      v43[0] = *v16;
      v18 = v43[0];
      v43[1] = v17;
      goto LABEL_72;
    }
    *(_QWORD *)&v20 = v18;
    *((_QWORD *)&v20 + 1) = v17;
    v21 = _InterlockedCompareExchange128(v16, v17, v18 - 2, (signed __int64 *)&v20);
    v19 = v20;
    v18 = v20;
    *(_OWORD *)v43 = v20;
    v17 = *((_QWORD *)&v20 + 1);
    if ( v21 )
      break;
    v14 = v49;
LABEL_72:
    if ( (v18 & 0x1FFFE) == 0 )
    {
      do
      {
LABEL_45:
        while ( 1 )
        {
          _m_prefetchw(v16);
          v34 = *v16;
          if ( (*v16 & 1) != 0 )
            break;
          if ( !v34 )
            goto LABEL_81;
          ExpBlockOnLockedHandleEntry(v14, v16, v34);
        }
      }
      while ( v34 != _InterlockedCompareExchange64(v16, v34 - 1, v34) );
      HandlePointer = ExGetHandlePointer(v16);
      *(_OWORD *)v43 = *(_OWORD *)v16;
      v35 = (int)(ExSlowReplenishHandleTableEntry((unsigned __int64 *)v16) + 1);
      v36 = _InterlockedExchangeAdd64((volatile signed __int64 *)HandlePointer, v35);
      if ( v36 <= 0 )
        KeBugCheckEx(0x18u, 0LL, HandlePointer + 48, 0x10uLL, v35 + v36);
      _InterlockedExchangeAdd64(v16, 1uLL);
      _InterlockedOr(v42, 0);
      if ( *(_QWORD *)(v49 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v49 + 48), 0LL);
      goto LABEL_50;
    }
  }
  if ( (unsigned __int16)(v19 >> 1) != 16 )
  {
    HandlePointer = ExGetHandlePointer(v43);
    goto LABEL_17;
  }
  v43[0] = ((unsigned int)v18 ^ (2 * (unsigned int)(v19 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v18;
  HandlePointer = ExGetHandlePointer(v43);
  ObpIncrPointerCountEx((volatile signed __int64 *)HandlePointer, 32752);
  v40 = ExFastReplenishHandleTableEntry(v16, v43, 32752);
  if ( v40 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)HandlePointer, -v40);
LABEL_50:
  LODWORD(v17) = v43[1];
  v18 = v43[0];
LABEL_17:
  if ( ObpTraceFlags )
    ObpPushStackInfo(HandlePointer, 1, 1u, Tag);
  v24 = ObHeaderCookie ^ *(_BYTE *)(HandlePointer + 24) ^ BYTE1(HandlePointer);
  if ( !a3 || *(_BYTE *)(a3 + 40) != v24 )
  {
    v23 = (PVOID)ObTypeIndexTable[v24];
    if ( !v23 || v23 == MmBadPointer )
      KeBugCheckEx(0x189u, HandlePointer, (ULONG_PTR)v23, 0LL, 0LL);
    if ( a3 )
    {
      v33 = -1073741788;
      goto LABEL_77;
    }
  }
  v25 = a2;
  v26 = v17 & 0x1FFFFFF;
  if ( !a4 )
    goto LABEL_27;
  if ( (~v26 & a2) != 0 )
  {
    v33 = -1073741790;
    goto LABEL_77;
  }
  if ( (*(_BYTE *)(HandlePointer + 26) & 0x40) == 0
    || (v27 = HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 0x7F],
        !*(_BYTE *)(*(_QWORD *)v27 + 24LL)) )
  {
LABEL_27:
    v28 = v18 >> 17;
    if ( a7 )
    {
      v32 = v28 & 7;
      a7[1] = v26;
      *a7 = v32;
      if ( (v32 & 4) == 0 )
        goto LABEL_29;
    }
    else if ( (v28 & 4) == 0 )
    {
LABEL_29:
      v29 = 0;
      goto LABEL_30;
    }
    v29 = 1;
LABEL_30:
    v30 = v49;
    if ( a8 && *(_DWORD *)(v49 + 4) )
    {
      HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(v49, BugCheckParameter1, v23, 0x140000000uLL);
      if ( HandleExtraInfo )
        *a8 = *HandleExtraInfo;
      v30 = v49;
    }
    if ( v29 && v25 && !(unsigned __int8)ObpAuditObjectAccess(v30, BugCheckParameter1, (_DWORD)v16, HandlePointer, v25) )
    {
      v33 = -1073741816;
      goto LABEL_77;
    }
    *a6 = HandlePointer + 48;
    if ( v48 )
      ExReleaseRundownProtection_0(v44 + 139);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return 0LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)v27 + 16LL) != 1LL )
  {
    v18 = v43[0];
    goto LABEL_27;
  }
  v33 = -1073700858;
LABEL_77:
  ObfDereferenceObjectWithTag((PVOID)(HandlePointer + 48), Tag);
LABEL_78:
  if ( v48 )
    ExReleaseRundownProtection_0(v44 + 139);
LABEL_80:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v33;
}
