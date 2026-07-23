/*
 * XREFs of PsResumeThread @ 0x1409B6280
 * Callers:
 *     <none>
 * Callees:
 *     PsMultiResumeThread @ 0x14030A018 (PsMultiResumeThread.c)
 */

__int64 __fastcall PsResumeThread(__int64 a1, unsigned int *a2)
{
  return PsMultiResumeThread(a1, a2, 1u);
}
