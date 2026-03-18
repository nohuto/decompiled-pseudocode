/*
 * XREFs of CmpRemoveHiveFromNamespace @ 0x1402089E0
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14067BE48 (CmpCompleteUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x14067C9E8 (CmpLinkHiveToMaster.c)
 * Callees:
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x140657990 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     HvLockHiveFlusherShared @ 0x14067C50C (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x14067C528 (HvUnlockHiveFlusherShared.c)
 *     CmpDiscardKcb @ 0x14067EB68 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14067EDC0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14067EE40 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x1407164DC (CmpFreeKeyByCell.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14071BB4C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x14071C050 (CmpUnlockHashEntryByKcb.c)
 *     CmpLockKcbExclusive @ 0x1407C0854 (CmpLockKcbExclusive.c)
 *     CmpLogHiveDestroyEvent @ 0x140910824 (CmpLogHiveDestroyEvent.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
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
