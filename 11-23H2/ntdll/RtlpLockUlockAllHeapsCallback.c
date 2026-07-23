/*
 * XREFs of RtlpLockUlockAllHeapsCallback @ 0x18008BDD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnlockHeap @ 0x180029D40 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180029EC0 (RtlLockHeap.c)
 */

__int64 __fastcall RtlpLockUlockAllHeapsCallback(void *a1, __int64 a2)
{
  if ( a2 )
    RtlLockHeap(a1);
  else
    RtlUnlockHeap(a1);
  return 0LL;
}
