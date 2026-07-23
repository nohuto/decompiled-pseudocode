/*
 * XREFs of KeTestSpinLock @ 0x1402E2BE0
 * Callers:
 *     sub_1403EB020 @ 0x1403EB020 (sub_1403EB020.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeTestSpinLock(PKSPIN_LOCK SpinLock)
{
  if ( !*SpinLock )
    return 1;
  _mm_pause();
  return 0;
}
