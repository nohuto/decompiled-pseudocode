/*
 * XREFs of NtCreatePagingFile @ 0x1408333A0
 * Callers:
 *     <none>
 * Callees:
 *     MiCreatePagingFile @ 0x1408333DC (MiCreatePagingFile.c)
 */

NTSTATUS __cdecl NtCreatePagingFile(
        PUNICODE_STRING PageFileName,
        PLARGE_INTEGER MinimumSize,
        PLARGE_INTEGER MaximumSize,
        ULONG Priority)
{
  ULONG v4; // r10d

  v4 = Priority;
  LOBYTE(Priority) = KeGetCurrentThread()->PreviousMode;
  return MiCreatePagingFile(PageFileName, MinimumSize, MaximumSize, Priority, v4, MiSystemPartition);
}
