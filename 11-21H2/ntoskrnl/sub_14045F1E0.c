/*
 * XREFs of sub_14045F1E0 @ 0x14045F1E0
 * Callers:
 *     sub_140235150 @ 0x140235150 (sub_140235150.c)
 *     sub_1405EF618 @ 0x1405EF618 (sub_1405EF618.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14045F1E0(unsigned __int16 *a1)
{
  int v1; // eax

  v1 = *a1;
  if ( (v1 & 0x4000) != 0 )
    return (v1 | 0xC000u) >> 13;
  else
    return 5LL;
}
