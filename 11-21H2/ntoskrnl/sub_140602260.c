/*
 * XREFs of sub_140602260 @ 0x140602260
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A9F094 @ 0x140A9F094 (sub_140A9F094.c)
 *     sub_140AA1678 @ 0x140AA1678 (sub_140AA1678.c)
 */

__int64 sub_140602260()
{
  if ( (qword_140D01450 & 0x400000) == 0 )
    _InterlockedAnd(&dword_140D069E8, 0xFFFFFDF9);
  sub_140AA1678();
  return sub_140A9F094();
}
