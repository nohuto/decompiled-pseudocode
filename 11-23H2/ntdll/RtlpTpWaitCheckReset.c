/*
 * XREFs of RtlpTpWaitCheckReset @ 0x18004E534
 * Callers:
 *     RtlpTpWaitCallback @ 0x18004E410 (RtlpTpWaitCallback.c)
 * Callees:
 *     TpSetWaitEx @ 0x180030740 (TpSetWaitEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpTpWaitCheckReset(__int64 a1, int a2)
{
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
  if ( (*(_BYTE *)(a1 + 8) & 8) == 0 && (!a2 || a2 == 258) )
    TpSetWaitEx(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 56), *(__int64 **)(a1 + 72), 0LL);
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
}
