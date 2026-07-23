/*
 * XREFs of sub_14094FEE4 @ 0x14094FEE4
 * Callers:
 *     sub_140947450 @ 0x140947450 (sub_140947450.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 */

void sub_14094FEE4()
{
  __int64 *i; // rax

  ExAcquireFastMutex(&stru_140C44960);
  for ( i = (__int64 *)qword_140C449A0; i != &qword_140C449A0; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i - 2) != 1 )
      *((_DWORD *)i - 2) = 4;
  }
  KeReleaseGuardedMutex(&stru_140C44960);
}
