/*
 * XREFs of PfpPrefetchSharedConflictNotifyEnd @ 0x140661FA0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     PfpPrefetchSharedDeref @ 0x1406AE46C (PfpPrefetchSharedDeref.c)
 */

__int64 __fastcall PfpPrefetchSharedConflictNotifyEnd(ULONG_PTR *a1, unsigned __int64 a2)
{
  ULONG_PTR *v4; // rbx
  __int64 result; // rax

  if ( a2 )
  {
    v4 = a1;
    if ( !a1 )
      v4 = &PfGlobals;
    KeAbPreAcquire((__int64)v4, a2);
    result = KeAbPostReleaseEx((ULONG_PTR)v4, a2);
  }
  if ( a1 )
    return PfpPrefetchSharedDeref(a1);
  return result;
}
