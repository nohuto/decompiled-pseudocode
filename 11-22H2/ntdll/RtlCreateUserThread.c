/*
 * XREFs of RtlCreateUserThread @ 0x18005F280
 * Callers:
 *     EtwpCreateEtwThread @ 0x18005EEC0 (EtwpCreateEtwThread.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x18005F2F0 (RtlpCreateUserThreadEx.c)
 */

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
  int v11; // [rsp+30h] [rbp-38h]

  return RtlpCreateUserThreadEx(
           ProcessHandle,
           MaximumStackSize,
           CommittedStackSize,
           v11,
           StartAddress,
           Parameter,
           (__int64)ThreadHandle,
           (__int64)ClientId);
}
