/*
 * XREFs of NtReadFile @ 0x14073A320
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x1405FB258 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 *     PfSnGetPrefetchInstructions @ 0x1407D84EC (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     IopFileObjectRevoked @ 0x1402AC840 (IopFileObjectRevoked.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     FeatureServicing_40851744_EnableKey @ 0x14065863C (FeatureServicing_40851744_EnableKey.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 */

NTSTATUS __stdcall NtReadFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  PVOID v12; // rbx
  SIZE_T v13; // [rsp+30h] [rbp-58h]
  PVOID Object; // [rsp+70h] [rbp-18h] BYREF

  if ( (unsigned int)EnableFeatureServicing_40851744 >= 2 )
    FeatureServicing_40851744_EnableKey();
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(FileHandle, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v12 = Object;
    if ( IopFileObjectRevoked((__int64)Object) )
    {
      ObfDereferenceObject(v12);
      return -1073739504;
    }
    else
    {
      LODWORD(v13) = Length;
      return IopReadFile(v12, (__int64)IoStatusBlock, Buffer, v13, (__int64)ByteOffset, (__int64)Key, 0LL, 0LL, 0, 0LL);
    }
  }
  return result;
}
