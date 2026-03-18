/*
 * XREFs of MiIsPfnCommitNotCharged @ 0x1402DC180
 * Callers:
 *     MiUnlockImageSection @ 0x14025A460 (MiUnlockImageSection.c)
 *     MiMigratePfn @ 0x1402630E0 (MiMigratePfn.c)
 *     MiCanBatchHardFaultPages @ 0x1402CDC60 (MiCanBatchHardFaultPages.c)
 *     MiCheckProtoPtePageState @ 0x1402DBE30 (MiCheckProtoPtePageState.c)
 *     MiChargeForLockedPage @ 0x1402DC320 (MiChargeForLockedPage.c)
 *     MiWriteCompletePfn @ 0x1402F4750 (MiWriteCompletePfn.c)
 *     MiHardFaultPageRelease @ 0x140334DA8 (MiHardFaultPageRelease.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnCommitNotCharged(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( v1 > 0xFFFFF6BFFFFFFF78uLL || v1 < 0xFFFFF68000000000uLL )
    return 0LL;
  else
    return (*(unsigned __int8 *)(a1 + 35) >> 5) & 1;
}
