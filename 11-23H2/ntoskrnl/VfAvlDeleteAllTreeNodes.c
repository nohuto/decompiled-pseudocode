/*
 * XREFs of VfAvlDeleteAllTreeNodes @ 0x140ADC250
 * Callers:
 *     VfDeleteLookasideTree @ 0x140AE2234 (VfDeleteLookasideTree.c)
 *     VfDeleteResourceTree @ 0x140AE45D8 (VfDeleteResourceTree.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14020A34C (VfAvlCleanupLockContext.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14020A45C (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlRaiseIrqlSafe @ 0x14020A490 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14020A4C8 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14031EC60 (RtlDeleteElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableAvl @ 0x1403718C0 (RtlEnumerateGenericTableAvl.c)
 *     VfAvlInitializeLockContext @ 0x1404668A8 (VfAvlInitializeLockContext.c)
 */

void __fastcall VfAvlDeleteAllTreeNodes(PRTL_AVL_TABLE Table)
{
  PVOID v2; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  VfAvlInitializeLockContext((__int64)&v3, 0);
  ViAvlRaiseIrqlSafe((__int64)&v3);
  ViAvlAcquireTableLockAtDpcLevelSafe((__int64)Table, (__int64)&v3);
  while ( 1 )
  {
    v2 = RtlEnumerateGenericTableAvl(Table, 1u);
    if ( !v2 )
      break;
    RtlDeleteElementGenericTableAvl(Table, v2);
  }
  ViAvlReleaseTableLockFromDpcLevel((__int64)Table, (__int64)&v3);
  VfAvlCleanupLockContext((__int64)&v3);
}
