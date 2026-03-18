/*
 * XREFs of MiZeroMemory @ 0x14038DE4C
 * Callers:
 *     MiZeroEngineMemory @ 0x1402D1280 (MiZeroEngineMemory.c)
 *     MiZeroPageCalibrateDpc @ 0x14038DCB0 (MiZeroPageCalibrateDpc.c)
 * Callees:
 *     KeZeroPages @ 0x140424640 (KeZeroPages.c)
 *     memset @ 0x140435A00 (memset.c)
 */

void *__fastcall MiZeroMemory(__int64 a1, void *a2, size_t a3, int a4)
{
  if ( a4 == 1 )
    return (void *)KeZeroPages(a2, a3);
  else
    return memset(a2, 0, a3);
}
