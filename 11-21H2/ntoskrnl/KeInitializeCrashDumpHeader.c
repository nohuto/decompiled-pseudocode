/*
 * XREFs of KeInitializeCrashDumpHeader @ 0x140555F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140551F78 @ 0x140551F78 (sub_140551F78.c)
 */

NTSTATUS __stdcall KeInitializeCrashDumpHeader(
        ULONG DumpType,
        ULONG Flags,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG BufferNeeded)
{
  if ( BufferNeeded )
    *BufferNeeded = 0x2000;
  if ( DumpType != 1 )
    return -1073741585;
  if ( Flags )
    return -1073741584;
  if ( BufferSize < 0x2000 )
    return -1073741582;
  sub_140551F78((_NT_PRODUCT_TYPE *)Buffer, 1, 0, 0LL, 0LL, 0LL, 0LL, (__int64)KeGetCurrentThread());
  return 0;
}
