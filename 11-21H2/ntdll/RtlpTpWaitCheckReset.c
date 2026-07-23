/*
 * XREFs of RtlpTpWaitCheckReset @ 0x18007F164
 * Callers:
 *     RtlpTpWaitCallback @ 0x18007F040 (RtlpTpWaitCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TpSetWaitEx @ 0x18001EB80 (TpSetWaitEx.c)
 */

void __fastcall RtlpTpWaitCheckReset(__int64 a1, int a2)
{
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
  if ( (*(_BYTE *)(a1 + 8) & 8) == 0 && (!a2 || a2 == 258) )
    TpSetWaitEx(*(PTP_WAIT *)(a1 + 48), *(HANDLE *)(a1 + 56), *(PLARGE_INTEGER *)(a1 + 72), 0LL);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
}
