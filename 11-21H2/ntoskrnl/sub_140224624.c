/*
 * XREFs of sub_140224624 @ 0x140224624
 * Callers:
 *     PoLatencySensitivityHint @ 0x1402244A0 (PoLatencySensitivityHint.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

char sub_140224624()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v1 = 0;
  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject(&word_140C22FE8, Executive, 0, 0, &Timeout) )
  {
    KeLeaveCriticalRegion();
  }
  else
  {
    v1 = 1;
    qword_140C22FE0 = (__int64)KeGetCurrentThread();
  }
  return v1;
}
