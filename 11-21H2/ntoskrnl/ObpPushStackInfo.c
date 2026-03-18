/*
 * XREFs of ObpPushStackInfo @ 0x1405C5EC8
 * Callers:
 *     IopQueueIrpToFileObject @ 0x140211BD0 (IopQueueIrpToFileObject.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14021A7D0 (ExpSetResourceOwnerPointerEx.c)
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     ObReferenceObjectExWithTag @ 0x140229FF0 (ObReferenceObjectExWithTag.c)
 *     MiCapturePfnVm @ 0x14026AEB0 (MiCapturePfnVm.c)
 *     ObFastReferenceObject @ 0x14027A950 (ObFastReferenceObject.c)
 *     MiReferenceControlAreaFile @ 0x140281750 (MiReferenceControlAreaFile.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1402A48C0 (ObReferenceObjectByPointerWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1402D4530 (NtSetInformationWorkerFactory.c)
 *     ObReferenceObjectByPointer @ 0x1402E0270 (ObReferenceObjectByPointer.c)
 *     IopCallDriverReference @ 0x1402F8AE0 (IopCallDriverReference.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     PsImpersonateContainerOfThread @ 0x14030F330 (PsImpersonateContainerOfThread.c)
 *     IoGetAttachedDeviceReference @ 0x1403109B0 (IoGetAttachedDeviceReference.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     MiLogPageAccess @ 0x140333040 (MiLogPageAccess.c)
 *     MiMakeSystemCacheRangeValid @ 0x140333AC0 (MiMakeSystemCacheRangeValid.c)
 *     MiEmptyPageAccessLog @ 0x140334400 (MiEmptyPageAccessLog.c)
 *     ExpApplyPriorityBoost @ 0x140343010 (ExpApplyPriorityBoost.c)
 *     IopQueueWorkItemProlog @ 0x1403467F0 (IopQueueWorkItemProlog.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140347B50 (ObpTraceObjectDereferenceIfActive.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     NtCancelTimer @ 0x140356F50 (NtCancelTimer.c)
 *     ObRetagReferences @ 0x14070F37C (ObRetagReferences.c)
 *     ObReferenceFileObjectForWrite @ 0x14071E230 (ObReferenceFileObjectForWrite.c)
 *     SepCreateClientSecurityEx @ 0x140727350 (SepCreateClientSecurityEx.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 *     IopAllocRealFileObject @ 0x14072DDC0 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x14072E210 (CmpCreateKeyBody.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407A2680 (ObpReferenceProcessObjectByHandle.c)
 *     PspReferenceCidTableEntry @ 0x1407A8900 (PspReferenceCidTableEntry.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 *     SepDuplicateToken @ 0x1407CDED0 (SepDuplicateToken.c)
 *     SepUpdateSiloInClientSecurity @ 0x1409CC028 (SepUpdateSiloInClientSecurity.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140244120 (ObGetCurrentIrql.c)
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 *     MmCanThreadFault @ 0x140297EF0 (MmCanThreadFault.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObpDeferPushRefDerefInfo @ 0x1405C5DC8 (ObpDeferPushRefDerefInfo.c)
 *     EtwTraceObjectOperation @ 0x14062DD68 (EtwTraceObjectOperation.c)
 *     ObpPushRefDerefInfo @ 0x140986190 (ObpPushRefDerefInfo.c)
 */

void __fastcall ObpPushStackInfo(__int64 a1, char a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rcx
  USHORT v9; // ax
  signed __int32 v10; // ebx
  BOOL CanThreadFault; // eax
  int v12; // r9d
  int v13; // edx
  PVOID BackTrace[16]; // [rsp+30h] [rbp-88h] BYREF

  memset(BackTrace, 0, sizeof(BackTrace));
  if ( (xmmword_140D06910 & 0x80u) != 0LL )
  {
    LOWORD(v8) = 4403 - (a2 != 0);
    EtwTraceObjectOperation(v8, a1, a3, a4);
  }
  if ( (ObpTraceFlags & 0x73) != 0 && (*(_BYTE *)(a1 + 25) & 1) != 0 && ObGetCurrentIrql() <= 2u )
  {
    v9 = RtlCaptureStackBackTrace(1u, 0x10u, BackTrace, 0LL);
    if ( v9 )
    {
      if ( v9 < 0x10u )
        memset(&BackTrace[v9], 0, 8LL * (16 - (unsigned int)v9));
      v10 = _InterlockedExchangeAdd(&ObpStackSequence, 1u);
      CanThreadFault = MmCanThreadFault();
      v12 = v10 + 1;
      LOBYTE(v13) = a2;
      if ( CanThreadFault )
        ObpPushRefDerefInfo(a1, v13, (unsigned __int16)a3, v12, BackTrace, a4);
      else
        ObpDeferPushRefDerefInfo(a1, a2, a3, v12, (struct _SLIST_ENTRY *)BackTrace, a4);
    }
  }
}
