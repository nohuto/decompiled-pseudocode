/*
 * XREFs of SeCaptureSubjectContextEx @ 0x140737CA0
 * Callers:
 *     NtSetInformationFile @ 0x1402A6BF0 (NtSetInformationFile.c)
 *     CmQueryLayeredKey @ 0x14035DC84 (CmQueryLayeredKey.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403B053C (ExCpuSetResourceManagerAccessCheck.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     SeCreateAccessStateEx @ 0x1406C2EA0 (SeCreateAccessStateEx.c)
 *     CmQueryKey @ 0x1406D71D0 (CmQueryKey.c)
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     PsOpenProcess @ 0x1406F3D00 (PsOpenProcess.c)
 *     AlpcpCheckConnectionSecurity @ 0x140715A00 (AlpcpCheckConnectionSecurity.c)
 *     ObOpenObjectByPointer @ 0x1407374D0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x140737B00 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x140737C70 (SeCaptureSubjectContext.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 *     EtwpCheckProviderLoggingAccess @ 0x140780F8C (EtwpCheckProviderLoggingAccess.c)
 *     CmpIsSystemEntity @ 0x1407BA4FC (CmpIsSystemEntity.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1407C8B08 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1407C8CB4 (ObpCaptureBoundaryDescriptor.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1407D037C (MiIsUserQueryVmCallerTrusted.c)
 *     ExCheckFullProcessInformationAccess @ 0x1407E0A68 (ExCheckFullProcessInformationAccess.c)
 *     ExpCheckWakeTimerAccess @ 0x1407EB8C8 (ExpCheckWakeTimerAccess.c)
 *     VfUtilIsLocalSystem @ 0x140AC2754 (VfUtilIsLocalSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402329C0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402B68C0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402BD860 (ExfReleasePushLockShared.c)
 */

void __stdcall SeCaptureSubjectContextEx(PETHREAD Thread, PEPROCESS Process, PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  void *v6; // rbp
  _QWORD *v7; // rax
  struct _KTHREAD *CurrentThread; // r12
  void *v9; // r14

  SubjectContext->ProcessAuditId = Process[1].Header.WaitListHead.Flink;
  if ( Thread )
  {
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v9 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v9, 0x75536553u);
        SubjectContext->ImpersonationLevel = *((_DWORD *)&Thread[1].0 + 1) & 3;
      }
      else
      {
        v9 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&Thread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v6 = v9;
    }
    else
    {
      v6 = 0LL;
    }
  }
  else
  {
    v6 = 0LL;
  }
  SubjectContext->ClientToken = v6;
  v7 = (_QWORD *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x75536553u);
  SubjectContext->PrimaryToken = v7;
  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
}
