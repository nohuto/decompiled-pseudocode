/*
 * XREFs of NtClose_0 @ 0x18004F224
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x18004C530 (RtlpDiskSpeedInitialize.c)
 *     RtlpTestHookInitialize @ 0x18004D140 (RtlpTestHookInitialize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18009D038 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18009D258 (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtClose_0(HANDLE Handle)
{
  return NtClose(Handle);
}
