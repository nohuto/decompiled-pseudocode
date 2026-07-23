/*
 * XREFs of BiModifyBootEntry @ 0x140A5EE7C
 * Callers:
 *     BiUpdateBcdObject @ 0x1408045D4 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x140A5F19C (BiUpdateEfiEntry.c)
 * Callees:
 *     ZwModifyBootEntry @ 0x14041D490 (ZwModifyBootEntry.c)
 *     BiLogMessage @ 0x1408058F0 (BiLogMessage.c)
 *     BiAcquirePrivilege @ 0x140806378 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x140806404 (BiReleasePrivilege.c)
 */

__int64 __fastcall BiModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  NTSTATUS v2; // ebx
  NTSTATUS v3; // eax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = BiAcquirePrivilege(0x16u, (__int64)&v5);
  if ( v2 >= 0 )
  {
    v3 = ZwModifyBootEntry(BootEntry);
    v2 = v3;
    if ( v3 < 0 )
      BiLogMessage(4LL, L"Failed to modify boot entry 0x%x. Status: %x", BootEntry->Id, (unsigned int)v3);
    BiReleasePrivilege((unsigned int *)&v5);
  }
  return (unsigned int)v2;
}
