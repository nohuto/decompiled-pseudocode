/*
 * XREFs of IopReferenceFileObject @ 0x1403016DC
 * Callers:
 *     NtFlushBuffersFileEx @ 0x140685F70 (NtFlushBuffersFileEx.c)
 *     NtCopyFileChunk @ 0x140749890 (NtCopyFileChunk.c)
 *     NtLockFile @ 0x140765490 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1407658A0 (BuildQueryDirectoryIrp.c)
 *     NtCancelIoFile @ 0x1407C1730 (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x1407C18E0 (NtCancelIoFileEx.c)
 *     NtQueryEaFile @ 0x1407C9FC0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CBB90 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1407E7070 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E82F0 (NtWriteFileGather.c)
 *     NtSetVolumeInformationFile @ 0x1408818D0 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945AC0 (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x1409465E4 (IopValidateJunctionTarget.c)
 *     IopIoRingReferenceFileObject @ 0x140949F04 (IopIoRingReferenceFileObject.c)
 *     NtSetEaFile @ 0x14094AC60 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B270 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     IopFileObjectRevoked @ 0x140301740 (IopFileObjectRevoked.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopReferenceFileObject(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        PVOID *a4,
        POBJECT_HANDLE_INFORMATION a5)
{
  NTSTATUS v6; // ebx
  PVOID v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v6 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)IoFileObjectType, a3, &v8, a5);
  *a4 = v8;
  if ( v6 >= 0 && (unsigned __int8)IopFileObjectRevoked() )
  {
    ObfDereferenceObject(*a4);
    return (unsigned int)-1073739504;
  }
  return (unsigned int)v6;
}
