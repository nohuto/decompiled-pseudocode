/*
 * XREFs of NtClose_0 @ 0x18004A484
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x1800477F0 (RtlpDiskSpeedInitialize.c)
 *     RtlpTestHookInitialize @ 0x1800480F0 (RtlpTestHookInitialize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180097A38 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x180097C58 (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtClose_0(HANDLE Handle)
{
  return NtClose(Handle);
}
