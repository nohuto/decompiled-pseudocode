/*
 * XREFs of CmpRemoveHiveFromNamespace @ 0x140207A94
 * Callers:
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 * Callees:
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x14067F518 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x140689290 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406892C8 (HvLockHiveFlusherShared.c)
 *     CmpLockKcbExclusive @ 0x1406D8518 (CmpLockKcbExclusive.c)
 *     CmpFreeKeyByCell @ 0x14070B2C4 (CmpFreeKeyByCell.c)
 *     CmpMarkKeyUnbacked @ 0x1407108AC (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14071092C (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14076A9E0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x14076ACC0 (CmpUnlockHashEntryByKcb.c)
 *     CmpDiscardKcb @ 0x14076B218 (CmpDiscardKcb.c)
 *     CmpLogHiveDestroyEvent @ 0x140A12820 (CmpLogHiveDestroyEvent.c)
 *     CmpUnlockKcb @ 0x140AF65A0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpRemoveHiveFromNamespace(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  __int64 v6; // rsi

  v3 = *(_QWORD *)(a2 + 72);
  v6 = *(_QWORD *)(v3 + 72);
  CmpLockHashEntryExclusiveByKcb(v3);
  CmpLockKcbExclusive(v6);
  CmpLockKcbExclusive(v3);
  HvLockHiveFlusherShared(*(_QWORD *)(v3 + 32));
  CmpFreeKeyByCell(*(_QWORD *)(v3 + 32), *(unsigned int *)(v3 + 40));
  CmpFlushNotifiesOnKeyBodyList(v3, 1LL, a3);
  CmpMarkKeyUnbacked(v3, a3);
  CmpDiscardKcb(v3);
  CmpRemoveLayerLinkForDiscardedKcb(v3, a3);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveDestroyEvent(a1);
  HvUnlockHiveFlusherShared(*(_QWORD *)(v3 + 32));
  CmpUnlockKcb(v3);
  CmpUnlockKcb(v6);
  return CmpUnlockHashEntryByKcb(v3);
}
