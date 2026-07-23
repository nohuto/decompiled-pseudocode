/*
 * XREFs of BiAddBootEntry @ 0x140A5D9FC
 * Callers:
 *     BiCreateEfiEntry @ 0x140A5E090 (BiCreateEfiEntry.c)
 * Callees:
 *     ZwAddBootEntry @ 0x14041BE30 (ZwAddBootEntry.c)
 *     BiLogMessage @ 0x1408058F0 (BiLogMessage.c)
 *     BiAcquirePrivilege @ 0x140806378 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x140806404 (BiReleasePrivilege.c)
 */

__int64 __fastcall BiAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  NTSTATUS v4; // ebx
  NTSTATUS v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v7);
  if ( v4 >= 0 )
  {
    v5 = ZwAddBootEntry(BootEntry, Id);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to add boot entry. Status: %x", (unsigned int)v5);
    BiReleasePrivilege((unsigned int *)&v7);
  }
  return (unsigned int)v4;
}
