/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExitTsx @ 0x1404358C0
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 * Callees:
 *     <none>
 */

void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_1404358CD
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
