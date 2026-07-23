/*
 * XREFs of RtlpHpTagContextUpdate @ 0x180045CBC
 * Callers:
 *     RtlpHpTagReAllocateHeap @ 0x180045C54 (RtlpHpTagReAllocateHeap.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 */

void __fastcall RtlpHpTagContextUpdate(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx

  v6 = *(_QWORD *)(qword_180185DF8 + 8LL * a2 - 8);
  RtlAcquireSRWLockShared(&RtlpHpTagContext);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 32), a4 - a3);
  RtlReleaseSRWLockShared(&RtlpHpTagContext);
}
