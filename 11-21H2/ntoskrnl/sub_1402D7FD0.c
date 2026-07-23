/*
 * XREFs of sub_1402D7FD0 @ 0x1402D7FD0
 * Callers:
 *     MmGetSystemRoutineAddress @ 0x140759130 (MmGetSystemRoutineAddress.c)
 *     sub_14097F800 @ 0x14097F800 (sub_14097F800.c)
 * Callees:
 *     sub_140931F54 @ 0x140931F54 (sub_140931F54.c)
 */

__int64 sub_1402D7FD0()
{
  if ( (dword_140D06880 & 0x40000) != 0 )
    sub_140931F54();
  return 0LL;
}
