/*
 * XREFs of MiZeroMemory @ 0x14038E02C
 * Callers:
 *     MiZeroEngineMemory @ 0x1402D1510 (MiZeroEngineMemory.c)
 *     MiZeroPageCalibrateDpc @ 0x14038DE90 (MiZeroPageCalibrateDpc.c)
 * Callees:
 *     KeZeroPages @ 0x1404249D0 (KeZeroPages.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall MiZeroMemory(__int64 a1, void *a2, size_t a3, int a4)
{
  if ( a4 == 1 )
    return (void *)KeZeroPages(a2, a3);
  else
    return memset(a2, 0, a3);
}
