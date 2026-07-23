/*
 * XREFs of ObOpenObjectByPointer @ 0x1407376C0
 * Callers:
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x140691CD0 (CmConvertHandleToKernelHandle.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B7ED8 (PspOneDirectionSecurityDomainCombine.c)
 *     PsOpenProcess @ 0x1406F3D30 (PsOpenProcess.c)
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 *     NtOpenThreadTokenEx @ 0x14071E100 (NtOpenThreadTokenEx.c)
 *     PspCreateObjectHandle @ 0x14073F9A0 (PspCreateObjectHandle.c)
 *     ExGetNextProcess @ 0x140742B68 (ExGetNextProcess.c)
 *     VrpPreLoadKey @ 0x14077A634 (VrpPreLoadKey.c)
 *     VrpPostEnumerateKey @ 0x14077ABA8 (VrpPostEnumerateKey.c)
 *     NtCreateWorkerFactory @ 0x140785D80 (NtCreateWorkerFactory.c)
 *     ObpSetDeviceMap @ 0x1407AFCAC (ObpSetDeviceMap.c)
 *     PsOpenThread @ 0x1407BBAB0 (PsOpenThread.c)
 *     PiCMDuplicateRegistryHandle @ 0x1407BEFCC (PiCMDuplicateRegistryHandle.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x1407C6D4C (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     PspCombineSecurityDomains @ 0x1407C6FDC (PspCombineSecurityDomains.c)
 *     NtOpenPrivateNamespace @ 0x1407C89A0 (NtOpenPrivateNamespace.c)
 *     NtGetNextProcess @ 0x1407D4930 (NtGetNextProcess.c)
 *     WmipIoControl @ 0x1407D6440 (WmipIoControl.c)
 *     NtGetNextThread @ 0x1407DF2E0 (NtGetNextThread.c)
 *     MmManagePartitionGetMemoryEvents @ 0x1407EA420 (MmManagePartitionGetMemoryEvents.c)
 *     EtwpOpenConsumer @ 0x1407F5BF4 (EtwpOpenConsumer.c)
 *     SPCallServerHandleFileIntegrityUpdate @ 0x1407FEA04 (SPCallServerHandleFileIntegrityUpdate.c)
 *     CmpInitializeRegistryProcess @ 0x14080ADAC (CmpInitializeRegistryProcess.c)
 *     SmRegistrationInfoFill @ 0x14084173C (SmRegistrationInfoFill.c)
 *     ObInitServerSilo @ 0x140855C6C (ObInitServerSilo.c)
 *     IopInvalidateVolumesForDevice @ 0x1408820A8 (IopInvalidateVolumesForDevice.c)
 *     DbgkOpenProcessDebugPort @ 0x140936EE0 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x140937724 (DbgkpOpenHandles.c)
 *     DbgkUserReportWorkRoutine @ 0x140939E40 (DbgkUserReportWorkRoutine.c)
 *     ObOpenObjectByPointerWithTag @ 0x14097C2E0 (ObOpenObjectByPointerWithTag.c)
 *     TtmiOpenDefaultTerminal @ 0x1409AB29C (TtmiOpenDefaultTerminal.c)
 *     SmKmFileInfoDuplicate @ 0x1409D8C24 (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x1409F45B4 (EtwpCapturePreviousRegistryData.c)
 *     MiOpenSpecialPurposeMemory @ 0x140A4793C (MiOpenSpecialPurposeMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     SepDeleteAccessState @ 0x140232340 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140232C10 (SepCreateAccessStateFromSubjectContext.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1402B6AD0 (ObReferenceObjectByPointerWithTag.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObpCreateHandle @ 0x1406E4540 (ObpCreateHandle.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140737E90 (SeCaptureSubjectContextEx.c)
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
