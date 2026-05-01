/*
 * XREFs of NtClose_0 @ 0x18004A3F4
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x180047760 (RtlpDiskSpeedInitialize.c)
 *     RtlpTestHookInitialize @ 0x180048060 (RtlpTestHookInitialize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x1800976D8 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x1800978F8 (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtClose_0(HANDLE Handle)
{
  return NtClose(Handle);
}
