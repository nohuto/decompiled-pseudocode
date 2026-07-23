/*
 * XREFs of NtAllocateUserPhysicalPages @ 0x140A42590
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateUserPhysicalPages @ 0x140A40608 (MiAllocateUserPhysicalPages.c)
 */

NTSTATUS __cdecl NtAllocateUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  ULONGLONG v4; // [rsp+20h] [rbp-18h]

  LODWORD(v4) = 0;
  return MiAllocateUserPhysicalPages(ProcessHandle, NumberOfPages, UserPfnArray, 0LL, v4);
}
