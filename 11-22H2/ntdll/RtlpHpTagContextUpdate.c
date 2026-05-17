/*
 * XREFs of RtlpHpTagContextUpdate @ 0x180045E1C
 * Callers:
 *     RtlpHpTagReAllocateHeap @ 0x180045DB4 (RtlpHpTagReAllocateHeap.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 */

signed __int64 __fastcall RtlpHpTagContextUpdate(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // rbx

  v6 = *(_QWORD *)(qword_180182DB8 + 8LL * (unsigned __int16)a2 - 8);
  RtlAcquireSRWLockShared(&RtlpHpTagContext, a2, a3, a4);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 32), a4 - a3);
  return RtlReleaseSRWLockShared(&RtlpHpTagContext);
}
