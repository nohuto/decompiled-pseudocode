/*
 * XREFs of RtlpHpVsContextFreeList @ 0x14036E0E4
 * Callers:
 *     RtlpHpHeapCompact @ 0x14036DC90 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14034F7F0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsContextFreeInternal @ 0x14036E174 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14036E550 (RtlpHpAcquireQueuedLockExclusive.c)
 */

char __fastcall RtlpHpVsContextFreeList(__int64 a1, int a2, _QWORD *a3)
{
  char result; // al
  int v7; // esi
  int v8; // r8d
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  result = 0;
  v9 = 0LL;
  v10 = 0LL;
  v7 = a2 & 1;
  if ( (a2 & 1) == 0 )
    result = RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), &v9);
  while ( a3 )
  {
    v8 = (_DWORD)a3 - 16;
    a3 = (_QWORD *)*a3;
    result = RtlpHpVsContextFreeInternal(a1, a2, v8, a2, (__int64)&v9);
  }
  if ( !v7 )
    return RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), (__int64)&v9);
  return result;
}
