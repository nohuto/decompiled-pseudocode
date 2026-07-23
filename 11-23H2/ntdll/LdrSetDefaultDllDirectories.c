/*
 * XREFs of LdrSetDefaultDllDirectories @ 0x180079060
 * Callers:
 *     LdrpInitializePolicy @ 0x180078D80 (LdrpInitializePolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl LdrSetDefaultDllDirectories(ULONG DirectoryFlags)
{
  if ( !DirectoryFlags || ((~((LdrpPolicyBits & 4 | 0x7A) << 8) | 0x100) & DirectoryFlags) != 0 )
    return -1073741811;
  LdrpDefaultDllDirectories = DirectoryFlags;
  return 0;
}
