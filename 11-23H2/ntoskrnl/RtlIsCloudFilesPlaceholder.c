/*
 * XREFs of RtlIsCloudFilesPlaceholder @ 0x140464790
 * Callers:
 *     CmpAdjustFileCFSafety @ 0x140419B70 (CmpAdjustFileCFSafety.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsCloudFilesPlaceholder(ULONG FileAttributes, ULONG ReparseTag)
{
  return (FileAttributes & 0x400) != 0 && (ReparseTag & 0xFFFF0FFF) == 0x9000001A;
}
