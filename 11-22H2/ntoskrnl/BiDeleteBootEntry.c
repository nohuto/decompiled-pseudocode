/*
 * XREFs of BiDeleteBootEntry @ 0x140A5E380
 * Callers:
 *     BiBindEfiEntries @ 0x140805D6C (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x140A5E514 (BiExportBcdObjects.c)
 * Callees:
 *     ZwDeleteBootEntry @ 0x14041C180 (ZwDeleteBootEntry.c)
 *     BiLogMessage @ 0x140807BA0 (BiLogMessage.c)
 *     BiAcquirePrivilege @ 0x140808628 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1408086B4 (BiReleasePrivilege.c)
 */

__int64 __fastcall BiDeleteBootEntry(ULONG Id)
{
  NTSTATUS v2; // ebx
  NTSTATUS v3; // eax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  BiLogMessage(2LL, L"Deleting boot entry 0x%x", Id);
  v2 = BiAcquirePrivilege(0x16u, (__int64)&v5);
  if ( v2 >= 0 )
  {
    v3 = ZwDeleteBootEntry(Id);
    v2 = v3;
    if ( v3 < 0 )
      BiLogMessage(4LL, L"Failed to delete boot entry 0x%x. Status: %x", Id, (unsigned int)v3);
    BiReleasePrivilege((unsigned int *)&v5);
  }
  return (unsigned int)v2;
}
