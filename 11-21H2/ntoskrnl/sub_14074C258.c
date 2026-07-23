/*
 * XREFs of sub_14074C258 @ 0x14074C258
 * Callers:
 *     sub_14074C2EC @ 0x14074C2EC (sub_14074C2EC.c)
 *     sub_1409B4E80 @ 0x1409B4E80 (sub_1409B4E80.c)
 * Callees:
 *     ExTryToAcquireFastMutex @ 0x140233370 (ExTryToAcquireFastMutex.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1403770A8 @ 0x1403770A8 (sub_1403770A8.c)
 */

void sub_14074C258()
{
  __int64 *v0; // rbx
  __int64 *v1; // rsi

  if ( (__int64 *)qword_140C1BCB0 != &qword_140C1BCB0 )
  {
    ExAcquireFastMutex(&stru_140C1BCC0);
    v0 = (__int64 *)qword_140C1BCB0;
    while ( v0 != &qword_140C1BCB0 )
    {
      v1 = v0 - 21;
      v0 = (__int64 *)*v0;
      if ( ExTryToAcquireFastMutex((PFAST_MUTEX)(v1 + 29)) )
      {
        if ( !sub_1403770A8((PFSRTL_ADVANCED_FCB_HEADER)v1) )
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 29));
      }
    }
    KeReleaseGuardedMutex(&stru_140C1BCC0);
  }
}
