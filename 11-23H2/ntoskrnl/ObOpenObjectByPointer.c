/*
 * XREFs of ObOpenObjectByPointer @ 0x1407374D0
 * Callers:
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x140691CD0 (CmConvertHandleToKernelHandle.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B7EA8 (PspOneDirectionSecurityDomainCombine.c)
 *     PsOpenProcess @ 0x1406F3D00 (PsOpenProcess.c)
 *     NtQueryInformationProcess @ 0x1406FCA90 (NtQueryInformationProcess.c)
 *     NtOpenThreadTokenEx @ 0x14071DF00 (NtOpenThreadTokenEx.c)
 *     PspCreateObjectHandle @ 0x14073F7B0 (PspCreateObjectHandle.c)
 *     ExGetNextProcess @ 0x140742978 (ExGetNextProcess.c)
 *     VrpPreLoadKey @ 0x14077A444 (VrpPreLoadKey.c)
 *     VrpPostEnumerateKey @ 0x14077A9B8 (VrpPostEnumerateKey.c)
 *     NtCreateWorkerFactory @ 0x140785B90 (NtCreateWorkerFactory.c)
 *     ObpSetDeviceMap @ 0x1407AFABC (ObpSetDeviceMap.c)
 *     PsOpenThread @ 0x1407BB7E0 (PsOpenThread.c)
 *     PiCMDuplicateRegistryHandle @ 0x1407BECFC (PiCMDuplicateRegistryHandle.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x1407C6A7C (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     PspCombineSecurityDomains @ 0x1407C6D0C (PspCombineSecurityDomains.c)
 *     NtOpenPrivateNamespace @ 0x1407C86D0 (NtOpenPrivateNamespace.c)
 *     NtGetNextProcess @ 0x1407D4660 (NtGetNextProcess.c)
 *     WmipIoControl @ 0x1407D6170 (WmipIoControl.c)
 *     NtGetNextThread @ 0x1407DF010 (NtGetNextThread.c)
 *     MmManagePartitionGetMemoryEvents @ 0x1407EA150 (MmManagePartitionGetMemoryEvents.c)
 *     EtwpOpenConsumer @ 0x1407F5924 (EtwpOpenConsumer.c)
 *     SPCallServerHandleFileIntegrityUpdate @ 0x1407FE734 (SPCallServerHandleFileIntegrityUpdate.c)
 *     CmpInitializeRegistryProcess @ 0x14080AADC (CmpInitializeRegistryProcess.c)
 *     SmRegistrationInfoFill @ 0x14084143C (SmRegistrationInfoFill.c)
 *     ObInitServerSilo @ 0x14085596C (ObInitServerSilo.c)
 *     IopInvalidateVolumesForDevice @ 0x140881E68 (IopInvalidateVolumesForDevice.c)
 *     DbgkOpenProcessDebugPort @ 0x140936CE0 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x140937524 (DbgkpOpenHandles.c)
 *     DbgkUserReportWorkRoutine @ 0x140939C40 (DbgkUserReportWorkRoutine.c)
 *     ObOpenObjectByPointerWithTag @ 0x14097C0E0 (ObOpenObjectByPointerWithTag.c)
 *     TtmiOpenDefaultTerminal @ 0x1409AB09C (TtmiOpenDefaultTerminal.c)
 *     SmKmFileInfoDuplicate @ 0x1409D8A24 (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x1409F4324 (EtwpCapturePreviousRegistryData.c)
 *     MiOpenSpecialPurposeMemory @ 0x140A4768C (MiOpenSpecialPurposeMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     SepDeleteAccessState @ 0x140232270 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140232B40 (SepCreateAccessStateFromSubjectContext.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1402B6840 (ObReferenceObjectByPointerWithTag.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     ObpCreateHandle @ 0x1406E4510 (ObpCreateHandle.c)
 *     SeReleaseSubjectContext @ 0x140737BC0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140737CA0 (SeCaptureSubjectContextEx.c)
 */

NTSTATUS __stdcall ObOpenObjectByPointer(
        PVOID Object,
        ULONG HandleAttributes,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        PHANDLE Handle)
{
  POBJECT_TYPE v11; // rdi
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  NTSTATUS v14; // ebx
  NTSTATUS v15; // edi
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-1E8h] BYREF
  _QWORD v17[20]; // [rsp+80h] [rbp-1C8h] BYREF
  _QWORD v18[28]; // [rsp+120h] [rbp-128h] BYREF

  memset(v18, 0, sizeof(v18));
  memset(v17, 0, sizeof(v17));
  v11 = ObjectType;
  *Handle = 0LL;
  result = ObReferenceObjectByPointerWithTag(Object, 0, ObjectType, AccessMode, 0x6E48624Fu);
  if ( result >= 0 )
  {
    if ( !ObjectType )
      v11 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( (HandleAttributes & v11->TypeInfo.InvalidAttributes) != 0
      || (*((char *)Object - 21) & 1) != 0 && *((_QWORD *)Object - 2) )
    {
      ++ObpInvalidOpenByPointer;
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      return -1073741811;
    }
    else
    {
      if ( !PassedAccessState )
      {
        CurrentThread = KeGetCurrentThread();
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
        v14 = SepCreateAccessStateFromSubjectContext(
                &SubjectContext,
                v17,
                v18,
                DesiredAccess,
                &v11->TypeInfo.GenericMapping.GenericRead);
        if ( v14 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          return v14;
        }
        PassedAccessState = (PACCESS_STATE)v17;
      }
      v15 = ObpCreateHandle(
              1,
              (char *)Object,
              0,
              (__int64)PassedAccessState,
              0,
              HandleAttributes,
              AccessMode,
              0LL,
              0,
              0LL,
              Handle);
      if ( v15 < 0 )
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      if ( PassedAccessState == (PACCESS_STATE)v17 )
      {
        SepDeleteAccessState((__int64)PassedAccessState);
        SeReleaseSubjectContext(&PassedAccessState->SubjectSecurityContext);
      }
      return v15;
    }
  }
  return result;
}
