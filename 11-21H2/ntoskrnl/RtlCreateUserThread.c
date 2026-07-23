/*
 * XREFs of RtlCreateUserThread @ 0x1409B5BB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14074F4F0 @ 0x14074F4F0 (sub_14074F4F0.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlCreateUserThread(
        HANDLE ProcessHandle,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        BOOLEAN CreateSuspended,
        ULONG ZeroBits,
        SIZE_T MaximumStackSize,
        SIZE_T CommittedStackSize,
        PUSER_THREAD_START_ROUTINE StartAddress,
        PVOID Parameter,
        PHANDLE ThreadHandle,
        PCLIENT_ID ClientId)
{
  __int64 v11; // [rsp+30h] [rbp-38h]

  return sub_14074F4F0(
           (__int64)ProcessHandle,
           (__int64)ThreadSecurityDescriptor,
           CreateSuspended == 1,
           *(__int64 *)&ZeroBits,
           MaximumStackSize,
           CommittedStackSize,
           v11,
           (__int64)StartAddress,
           (__int64)Parameter,
           ThreadHandle,
           ClientId);
}
