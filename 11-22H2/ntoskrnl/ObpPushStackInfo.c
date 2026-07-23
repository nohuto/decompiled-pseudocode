/*
 * XREFs of ObpPushStackInfo @ 0x140582C68
 * Callers:
 *     ObDereferenceObjectDeferDelete @ 0x14020B8F0 (ObDereferenceObjectDeferDelete.c)
 *     ObReferenceObjectByPointer @ 0x14022A9A0 (ObReferenceObjectByPointer.c)
 *     IopQueueIrpToFileObject @ 0x14022E440 (IopQueueIrpToFileObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402329A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     PsImpersonateContainerOfThread @ 0x140259DC0 (PsImpersonateContainerOfThread.c)
 *     IoGetAttachedDeviceReference @ 0x140259FE0 (IoGetAttachedDeviceReference.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14025A14C (ObpTraceObjectReferenceIfActive.c)
 *     ExpFreeOwnerEntry @ 0x140260A40 (ExpFreeOwnerEntry.c)
 *     MiCompleteProtoPteFault @ 0x140268AC0 (MiCompleteProtoPteFault.c)
 *     MiFlushSectionInternal @ 0x140275630 (MiFlushSectionInternal.c)
 *     MiLogPageAccess @ 0x14027CA90 (MiLogPageAccess.c)
 *     ObFastDereferenceObject @ 0x140297B60 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x1402A1530 (ObFastReferenceObject.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402A22D0 (MiReferenceControlAreaFileWithTag.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A23E0 (ObFastDereferenceObjectDeferDelete.c)
 *     ObDereferenceObjectExWithTag @ 0x1402A2454 (ObDereferenceObjectExWithTag.c)
 *     ExpApplyPriorityBoost @ 0x1402A8420 (ExpApplyPriorityBoost.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9090 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 *     ExReturnPoolQuota @ 0x1402ACCB0 (ExReturnPoolQuota.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1402B6810 (ObReferenceObjectByPointerWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     IopQueueWorkItemProlog @ 0x1402B93D0 (IopQueueWorkItemProlog.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C3620 (ObReferenceObjectSafeWithTag.c)
 *     MiEmptyPageAccessLog @ 0x1402E1F40 (MiEmptyPageAccessLog.c)
 *     NtSetInformationWorkerFactory @ 0x140302E90 (NtSetInformationWorkerFactory.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140319F90 (ExpSetResourceOwnerPointerEx.c)
 *     ObReferenceObjectExWithTag @ 0x1403373E0 (ObReferenceObjectExWithTag.c)
 *     ObReferenceObjectSafe @ 0x140337570 (ObReferenceObjectSafe.c)
 *     ObRetagReferences @ 0x1406B69A0 (ObRetagReferences.c)
 *     NtWriteFile @ 0x1406B6A20 (NtWriteFile.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E23B0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObWaitForMultipleObjects @ 0x1406E3940 (ObWaitForMultipleObjects.c)
 *     ObpCreateHandle @ 0x1406E45C0 (ObpCreateHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByNameEx @ 0x1406ED090 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1406ED7D0 (ObpLookupObjectName.c)
 *     PspReferenceCidTableEntry @ 0x1406FB260 (PspReferenceCidTableEntry.c)
 *     ObDuplicateObject @ 0x1406FB9A0 (ObDuplicateObject.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14071D550 (EtwpGetSidExtendedHeaderItem.c)
 *     SepCreateClientSecurityEx @ 0x14071D960 (SepCreateClientSecurityEx.c)
 *     SepDuplicateToken @ 0x140729BF0 (SepDuplicateToken.c)
 *     RtlpSetSecurityObject @ 0x14072BDE0 (RtlpSetSecurityObject.c)
 *     IopAllocRealFileObject @ 0x14072F370 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x14072F7D0 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x140730870 (ObCreateObjectEx.c)
 *     PsImpersonateClient @ 0x140734F30 (PsImpersonateClient.c)
 *     NtDuplicateToken @ 0x1407358C0 (NtDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 *     NtOpenProcessTokenEx @ 0x140737BD0 (NtOpenProcessTokenEx.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     ObReferenceFileObjectForWrite @ 0x14074A2F4 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407BD8F4 (ObpReferenceProcessObjectByHandle.c)
 *     SepUpdateSiloInClientSecurity @ 0x1409CF008 (SepUpdateSiloInClientSecurity.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9C0 (ObGetCurrentIrql.c)
 *     RtlCaptureStackBackTrace @ 0x140227700 (RtlCaptureStackBackTrace.c)
 *     MmCanThreadFault @ 0x14022786C (MmCanThreadFault.c)
 *     memset @ 0x140435400 (memset.c)
 *     ObpDeferPushRefDerefInfo @ 0x140582B68 (ObpDeferPushRefDerefInfo.c)
 *     EtwTraceObjectOperation @ 0x1405FD0A4 (EtwTraceObjectOperation.c)
 *     ObpPushRefDerefInfo @ 0x14097D1EC (ObpPushRefDerefInfo.c)
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
        ObpDeferPushRefDerefInfo(a1, a2, a3, v12, (_SLIST_ENTRY *)BackTrace, a4);
    }
  }
}
