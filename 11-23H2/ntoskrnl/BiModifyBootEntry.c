/*
 * XREFs of BiModifyBootEntry @ 0x140A5EBCC
 * Callers:
 *     BiUpdateBcdObject @ 0x140804304 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x140A5EEEC (BiUpdateEfiEntry.c)
 * Callees:
 *     ZwModifyBootEntry @ 0x14041D100 (ZwModifyBootEntry.c)
 *     BiLogMessage @ 0x140805620 (BiLogMessage.c)
 *     BiAcquirePrivilege @ 0x1408060A8 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x140806134 (BiReleasePrivilege.c)
 */

__int64 __fastcall BiModifyBootEntry(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  int v4; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v3 = BiAcquirePrivilege(0x16u, (__int64)&v6);
  if ( v3 >= 0 )
  {
    v4 = ZwModifyBootEntry(a1, v2);
    v3 = v4;
    if ( v4 < 0 )
      BiLogMessage(4LL, L"Failed to modify boot entry 0x%x. Status: %x", *(unsigned int *)(a1 + 8), (unsigned int)v4);
    BiReleasePrivilege((unsigned int *)&v6);
  }
  return (unsigned int)v3;
}
