/*
 * XREFs of sub_140761C34 @ 0x140761C34
 * Callers:
 *     sub_140761A2C @ 0x140761A2C (sub_140761A2C.c)
 *     sub_14098325C @ 0x14098325C (sub_14098325C.c)
 * Callees:
 *     sub_1403A147C @ 0x1403A147C (sub_1403A147C.c)
 */

__int64 sub_140761C34()
{
  if ( (dword_140D06880 & 0x4000) != 0 )
    return sub_1403A147C();
  else
    return 0LL;
}
