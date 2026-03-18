/*
 * XREFs of ExTryAcquireSpinLockSharedAtDpcLevel @ 0x14046B410
 * Callers:
 *     MiFreezeIoPfnNode @ 0x14062E108 (MiFreezeIoPfnNode.c)
 *     MmReadProcessPageTables @ 0x140645810 (MmReadProcessPageTables.c)
 * Callees:
 *     ExpTryAcquireSpinLockShared @ 0x140277630 (ExpTryAcquireSpinLockShared.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14060B120 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockSharedAtDpcLevel(_DWORD *a1)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented();
  else
    return (unsigned __int8)ExpTryAcquireSpinLockShared(a1);
}
