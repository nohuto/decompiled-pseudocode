/*
 * XREFs of NtCancelIoFileEx @ 0x1407C1E70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x1403016DC (IopReferenceFileObject.c)
 *     IopCancelIoFile @ 0x1407C1F1C (IopCancelIoFile.c)
 */

NTSTATUS __cdecl NtCancelIoFileEx(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoRequestToCancel,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  KPROCESSOR_MODE PreviousMode; // r8
  __int64 v6; // rdx
  NTSTATUS result; // eax
  PVOID v8; // rdi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  NTSTATUS v10; // [rsp+68h] [rbp+20h]

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v6 = (__int64)IoStatusBlock;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = Object;
    v10 = IopCancelIoFile(Object, IoRequestToCancel);
    IoStatusBlock->Status = v10;
    IoStatusBlock->Information = 0LL;
    ObfDereferenceObject(v8);
    return v10;
  }
  return result;
}
