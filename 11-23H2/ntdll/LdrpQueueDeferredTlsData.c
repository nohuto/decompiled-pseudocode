/*
 * XREFs of LdrpQueueDeferredTlsData @ 0x180005120
 * Callers:
 *     LdrpHandleTlsData @ 0x180004568 (LdrpHandleTlsData.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall LdrpQueueDeferredTlsData(__int64 a1, unsigned __int64 a2)
{
  _RTL_SRWLOCK *v2; // rdi
  _RTL_SRWLOCK *v3; // rsi

  v2 = (_RTL_SRWLOCK *)(a1 - 16);
  *(_QWORD *)(a1 - 16) = a2;
  v3 = (_RTL_SRWLOCK *)((char *)&LdrpDelayedTlsReclaimTable + 16 * ((a2 >> 2) & 0xF));
  RtlAcquireSRWLockExclusive(v3 + 1);
  v2[1].0 = v3->0;
  v3->Value = (unsigned __int64)v2;
  RtlReleaseSRWLockExclusive(v3 + 1);
}
