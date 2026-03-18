/*
 * XREFs of SeCaptureSubjectContextEx @ 0x1407380F0
 * Callers:
 *     NtSetInformationFile @ 0x1402A6AD0 (NtSetInformationFile.c)
 *     CmQueryLayeredKey @ 0x14035D634 (CmQueryLayeredKey.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403AFEAC (ExCpuSetResourceManagerAccessCheck.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     SeCreateAccessStateEx @ 0x1406C2F50 (SeCreateAccessStateEx.c)
 *     CmQueryKey @ 0x1406D7280 (CmQueryKey.c)
 *     IopXxxControlFile @ 0x1406E5590 (IopXxxControlFile.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     PsOpenProcess @ 0x1406F3DB0 (PsOpenProcess.c)
 *     AlpcpCheckConnectionSecurity @ 0x140715A70 (AlpcpCheckConnectionSecurity.c)
 *     ObOpenObjectByPointer @ 0x1407379D0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x1407380C0 (SeCaptureSubjectContext.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 *     EtwpCheckProviderLoggingAccess @ 0x14078149C (EtwpCheckProviderLoggingAccess.c)
 *     CmpIsSystemEntity @ 0x1407BAAAC (CmpIsSystemEntity.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1407C9098 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1407C9244 (ObpCaptureBoundaryDescriptor.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1407D08DC (MiIsUserQueryVmCallerTrusted.c)
 *     ExCheckFullProcessInformationAccess @ 0x1407E0FE8 (ExCheckFullProcessInformationAccess.c)
 *     ExpCheckWakeTimerAccess @ 0x1407EBE48 (ExpCheckWakeTimerAccess.c)
 *     VfUtilIsLocalSystem @ 0x140AC3724 (VfUtilIsLocalSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402329A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
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
