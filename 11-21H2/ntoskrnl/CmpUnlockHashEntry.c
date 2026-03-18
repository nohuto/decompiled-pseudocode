/*
 * XREFs of CmpUnlockHashEntry @ 0x14071B8C0
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14071B730 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpDereferenceKeyControlBlock @ 0x14071BF40 (CmpDereferenceKeyControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407350A0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x1407C8AE0 (CmpWalkOneLevel.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x1406BBAD8 (CmpDeleteHive.c)
 */

void __fastcall CmpUnlockHashEntry(_QWORD *P, unsigned int a2)
{
  ULONG_PTR v3; // rcx

  v3 = P[206]
     + 24
     * ((unsigned int)(*((_DWORD *)P + 414) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)));
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockEx(v3, 0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1058, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
}
