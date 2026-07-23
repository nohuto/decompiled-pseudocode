/*
 * XREFs of sub_14040CFD4 @ 0x14040CFD4
 * Callers:
 *     sub_140400AB4 @ 0x140400AB4 (sub_140400AB4.c)
 * Callees:
 *     sub_14056AF38 @ 0x14056AF38 (sub_14056AF38.c)
 */

__int64 __fastcall sub_14040CFD4(unsigned int a1)
{
  if ( !a1 )
    return 1LL;
  if ( a1 > 0x100000 )
    sub_14056AF38(1717856116LL);
  return (a1 >> 9) + (((a1 & 0x1FF) + 511) >> 9);
}
