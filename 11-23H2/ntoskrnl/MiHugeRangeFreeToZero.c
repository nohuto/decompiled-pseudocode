/*
 * XREFs of MiHugeRangeFreeToZero @ 0x1406211D4
 * Callers:
 *     MiZeroPage @ 0x1402D0C80 (MiZeroPage.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertHugeRangeInList @ 0x14062151C (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x14062300C (MiUnlinkHugeRange.c)
 */

void __fastcall MiHugeRangeFreeToZero(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rsi
  __int64 v6; // rdi

  v4 = a2 & 0x3FFFFF;
  v5 = (_QWORD *)(qword_140C67DF0 + 8 * v4);
  v6 = *(_QWORD *)(a1 + 16) + 25408LL * *((unsigned int *)MiSearchNumaNodeTable(v4 << 18) + 2);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + 23104));
  *v5 &= ~0x800000000000000uLL;
  MiUnlinkHugeRange(a1, a2);
  MiInsertHugeRangeInList(0LL, a2, 3LL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 23104));
}
