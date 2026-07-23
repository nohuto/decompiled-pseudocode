/*
 * XREFs of RtlpTpWaitCheckReset @ 0x18004E694
 * Callers:
 *     RtlpTpWaitCallback @ 0x18004E570 (RtlpTpWaitCallback.c)
 * Callees:
 *     TpSetWaitEx @ 0x180030910 (TpSetWaitEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpTpWaitCheckReset(__int64 a1, int a2)
{
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
  if ( (*(_BYTE *)(a1 + 8) & 8) == 0 && (!a2 || a2 == 258) )
    TpSetWaitEx(*(PTP_WAIT *)(a1 + 48), *(HANDLE *)(a1 + 56), *(PLARGE_INTEGER *)(a1 + 72), 0LL);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
}
