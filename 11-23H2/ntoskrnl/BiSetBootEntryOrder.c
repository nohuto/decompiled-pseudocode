/*
 * XREFs of BiSetBootEntryOrder @ 0x140A5EF9C
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140A5DBC4 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiExportEfiBootManager @ 0x140A5E87C (BiExportEfiBootManager.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x140A5EEE8 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 * Callees:
 *     ZwSetBootEntryOrder @ 0x14041E370 (ZwSetBootEntryOrder.c)
 *     BiLogMessage @ 0x1408058F0 (BiLogMessage.c)
 *     BiAcquirePrivilege @ 0x140806378 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x140806404 (BiReleasePrivilege.c)
 */

__int64 __fastcall BiSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  NTSTATUS v4; // ebx
  NTSTATUS v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v7);
  if ( v4 >= 0 )
  {
    v5 = ZwSetBootEntryOrder(Ids, Count);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to set boot entry order. Status: %x", (unsigned int)v5);
    BiReleasePrivilege((unsigned int *)&v7);
  }
  return (unsigned int)v4;
}
