/*
 * XREFs of CmpRemoveHiveFromNamespace @ 0x140207A94
 * Callers:
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 * Callees:
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x14067F518 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x140689290 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406892C8 (HvLockHiveFlusherShared.c)
 *     CmpLockKcbExclusive @ 0x1406D8498 (CmpLockKcbExclusive.c)
 *     CmpFreeKeyByCell @ 0x14070B424 (CmpFreeKeyByCell.c)
 *     CmpMarkKeyUnbacked @ 0x140710A0C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140710A8C (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14076A6C0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x14076A9A0 (CmpUnlockHashEntryByKcb.c)
 *     CmpDiscardKcb @ 0x14076AEF8 (CmpDiscardKcb.c)
 *     CmpLogHiveDestroyEvent @ 0x140A12A20 (CmpLogHiveDestroyEvent.c)
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
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
