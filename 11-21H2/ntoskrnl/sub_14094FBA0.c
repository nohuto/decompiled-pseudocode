/*
 * XREFs of sub_14094FBA0 @ 0x14094FBA0
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_140768EA8 @ 0x140768EA8 (sub_140768EA8.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     sub_140944C08 @ 0x140944C08 (sub_140944C08.c)
 */

LONG sub_14094FBA0()
{
  __int64 *i; // rax

  ExAcquireFastMutex(&stru_140C44960);
  for ( i = (__int64 *)qword_140C449A0; i != &qword_140C449A0; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i - 2) != 1 )
    {
      _InterlockedDecrement(&dword_140C449B0);
      *((_DWORD *)i - 2) = 1;
    }
  }
  KeReleaseGuardedMutex(&stru_140C44960);
  if ( byte_140C449B4 )
    sub_140944C08(&xmmword_140014AB0, 2, 0LL, 0LL);
  return KeReleaseSemaphore(&stru_140C449C0, 0, 1, 0);
}
