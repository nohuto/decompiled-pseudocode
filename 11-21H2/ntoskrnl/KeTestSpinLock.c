/*
 * XREFs of KeTestSpinLock @ 0x1402E2BE0
 * Callers:
 *     KiDecodeMcaFault @ 0x1403EB020 (KiDecodeMcaFault.c)
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
