/*
 * XREFs of ObpPushStackInfo @ 0x140582BD8
 * Callers:
 *     ObDereferenceObjectDeferDelete @ 0x14020B8D0 (ObDereferenceObjectDeferDelete.c)
 *     ObReferenceObjectByPointer @ 0x14022A980 (ObReferenceObjectByPointer.c)
 *     IopQueueIrpToFileObject @ 0x14022E420 (IopQueueIrpToFileObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402329C0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfReferenceObject @ 0x140233C40 (ObfReferenceObject.c)
 *     PsImpersonateContainerOfThread @ 0x140259EE0 (PsImpersonateContainerOfThread.c)
 *     IoGetAttachedDeviceReference @ 0x14025A100 (IoGetAttachedDeviceReference.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14025A26C (ObpTraceObjectReferenceIfActive.c)
 *     ExpFreeOwnerEntry @ 0x140260B60 (ExpFreeOwnerEntry.c)
 *     MiCompleteProtoPteFault @ 0x140268BE0 (MiCompleteProtoPteFault.c)
 *     MiFlushSectionInternal @ 0x140275750 (MiFlushSectionInternal.c)
 *     MiLogPageAccess @ 0x14027CBB0 (MiLogPageAccess.c)
 *     ObFastDereferenceObject @ 0x140297C80 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x1402A1650 (ObFastReferenceObject.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402A23F0 (MiReferenceControlAreaFileWithTag.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A2500 (ObFastDereferenceObjectDeferDelete.c)
 *     ObDereferenceObjectExWithTag @ 0x1402A2574 (ObDereferenceObjectExWithTag.c)
 *     ExpApplyPriorityBoost @ 0x1402A8540 (ExpApplyPriorityBoost.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8CE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A91B0 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCompleteRequest @ 0x1402AB480 (IopCompleteRequest.c)
 *     ExReturnPoolQuota @ 0x1402ACCE0 (ExReturnPoolQuota.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1402B6840 (ObReferenceObjectByPointerWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402B68C0 (ObfReferenceObjectWithTag.c)
 *     IopQueueWorkItemProlog @ 0x1402B9400 (IopQueueWorkItemProlog.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C3650 (ObReferenceObjectSafeWithTag.c)
 *     MiEmptyPageAccessLog @ 0x1402E1F40 (MiEmptyPageAccessLog.c)
 *     NtSetInformationWorkerFactory @ 0x140302E90 (NtSetInformationWorkerFactory.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14031A170 (ExpSetResourceOwnerPointerEx.c)
 *     ObReferenceObjectExWithTag @ 0x140337580 (ObReferenceObjectExWithTag.c)
 *     ObReferenceObjectSafe @ 0x140337710 (ObReferenceObjectSafe.c)
 *     ObRetagReferences @ 0x1406B69A0 (ObRetagReferences.c)
 *     NtWriteFile @ 0x1406B6A20 (NtWriteFile.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2300 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObWaitForMultipleObjects @ 0x1406E3890 (ObWaitForMultipleObjects.c)
 *     ObpCreateHandle @ 0x1406E4510 (ObpCreateHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6300 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByNameEx @ 0x1406ECFE0 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1406ED720 (ObpLookupObjectName.c)
 *     PspReferenceCidTableEntry @ 0x1406FB1B0 (PspReferenceCidTableEntry.c)
 *     ObDuplicateObject @ 0x1406FB8F0 (ObDuplicateObject.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14071D4E0 (EtwpGetSidExtendedHeaderItem.c)
 *     SepCreateClientSecurityEx @ 0x14071D8F0 (SepCreateClientSecurityEx.c)
 *     SepDuplicateToken @ 0x140729B80 (SepDuplicateToken.c)
 *     RtlpSetSecurityObject @ 0x14072BD70 (RtlpSetSecurityObject.c)
 *     IopAllocRealFileObject @ 0x14072F300 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x14072F810 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x1407308B0 (ObCreateObjectEx.c)
 *     PsImpersonateClient @ 0x140734A30 (PsImpersonateClient.c)
 *     NtDuplicateToken @ 0x1407353C0 (NtDuplicateToken.c)
 *     ObInsertObjectEx @ 0x1407359D0 (ObInsertObjectEx.c)
 *     NtOpenProcessTokenEx @ 0x1407376D0 (NtOpenProcessTokenEx.c)
 *     SeReleaseSubjectContext @ 0x140737BC0 (SeReleaseSubjectContext.c)
 *     ObReferenceFileObjectForWrite @ 0x140749DE4 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407BD364 (ObpReferenceProcessObjectByHandle.c)
 *     SepUpdateSiloInClientSecurity @ 0x1409CEF58 (SepUpdateSiloInClientSecurity.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 *     RtlCaptureStackBackTrace @ 0x1402276E0 (RtlCaptureStackBackTrace.c)
 *     MmCanThreadFault @ 0x14022784C (MmCanThreadFault.c)
 *     memset @ 0x140435A00 (memset.c)
 *     ObpDeferPushRefDerefInfo @ 0x140582AD8 (ObpDeferPushRefDerefInfo.c)
 *     EtwTraceObjectOperation @ 0x1405FD014 (EtwTraceObjectOperation.c)
 *     ObpPushRefDerefInfo @ 0x14097D13C (ObpPushRefDerefInfo.c)
 */

void __fastcall ObpPushStackInfo(__int64 a1, char a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rcx
  USHORT v9; // ax
  signed __int32 v10; // ebx
  int v11; // eax
  int v12; // r9d
  int v13; // edx
  PVOID BackTrace[16]; // [rsp+30h] [rbp-88h] BYREF

  memset(BackTrace, 0, sizeof(BackTrace));
  if ( (xmmword_140D1EAD0 & 0x80u) != 0LL )
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
      LOBYTE(v11) = MmCanThreadFault();
      v12 = v10 + 1;
      LOBYTE(v13) = a2;
      if ( v11 )
        ObpPushRefDerefInfo(a1, v13, (unsigned __int16)a3, v12, BackTrace, a4);
      else
        ObpDeferPushRefDerefInfo(a1, a2, a3, v12, (struct _SLIST_ENTRY *)BackTrace, a4);
    }
  }
}
