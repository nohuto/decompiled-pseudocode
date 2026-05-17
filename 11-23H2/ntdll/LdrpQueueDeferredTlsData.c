/*
 * XREFs of LdrpQueueDeferredTlsData @ 0x180005120
 * Callers:
 *     LdrpHandleTlsData @ 0x180004568 (LdrpHandleTlsData.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpQueueDeferredTlsData(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rsi

  v2 = a1 - 16;
  *(_QWORD *)(a1 - 16) = a2;
  v3 = (_QWORD *)((char *)&LdrpDelayedTlsReclaimTable + 16 * ((a2 >> 2) & 0xF));
  RtlAcquireSRWLockExclusive(v3 + 1);
  *(_QWORD *)(v2 + 8) = *v3;
  *v3 = v2;
  return RtlReleaseSRWLockExclusive(v3 + 1);
}
