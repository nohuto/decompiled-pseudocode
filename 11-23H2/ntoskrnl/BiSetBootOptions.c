/*
 * XREFs of BiSetBootOptions @ 0x140A5ED64
 * Callers:
 *     BiExportEfiBootManager @ 0x140A5E5CC (BiExportEfiBootManager.c)
 * Callees:
 *     ZwSetBootOptions @ 0x14041E000 (ZwSetBootOptions.c)
 *     BiLogMessage @ 0x140805620 (BiLogMessage.c)
 *     BiAcquirePrivilege @ 0x1408060A8 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x140806134 (BiReleasePrivilege.c)
 */

__int64 __fastcall BiSetBootOptions(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v7);
  if ( v4 >= 0 )
  {
    v5 = ZwSetBootOptions(a1, a2);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to set boot options. Status: %x", (unsigned int)v5);
    BiReleasePrivilege((unsigned int *)&v7);
  }
  return (unsigned int)v4;
}
