/*
 * XREFs of ExTryAcquireSpinLockSharedAtDpcLevel @ 0x14046B810
 * Callers:
 *     MiFreezeIoPfnNode @ 0x14062E658 (MiFreezeIoPfnNode.c)
 *     MmReadProcessPageTables @ 0x140645D60 (MmReadProcessPageTables.c)
 * Callees:
 *     ExpTryAcquireSpinLockShared @ 0x1402778C0 (ExpTryAcquireSpinLockShared.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14060B670 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockSharedAtDpcLevel(_DWORD *a1)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented();
  else
    return (unsigned __int8)ExpTryAcquireSpinLockShared(a1);
}
