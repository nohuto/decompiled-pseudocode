/*
 * XREFs of NtReadFile @ 0x14074C2A0
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x1405CB314 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 *     PfSnGetPrefetchInstructions @ 0x14074D26C (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     IopReadFile @ 0x14074C3B0 (IopReadFile.c)
 *     PsIsProcessAppContainer @ 0x14077F27C (PsIsProcessAppContainer.c)
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
  NTSTATUS result; // eax
  PVOID v11; // r10
  _DWORD *v12; // rax
  PVOID Object; // [rsp+70h] [rbp-18h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(
             FileHandle,
             1u,
             (POBJECT_TYPE)IoFileObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v11 = Object;
    v12 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v12 && (*v12 & 4) != 0 )
    {
      if ( (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
      {
        ObfDereferenceObject(Object);
        return -1073739504;
      }
      v11 = Object;
    }
    return IopReadFile(
             v11,
             Event,
             (__int64)IoStatusBlock,
             Buffer,
             Length,
             (__int64)ByteOffset,
             (__int64)Key,
             0LL,
             0LL,
             0,
             0LL,
             0LL);
  }
  return result;
}
