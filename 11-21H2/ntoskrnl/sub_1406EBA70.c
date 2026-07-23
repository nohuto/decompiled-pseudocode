/*
 * XREFs of sub_1406EBA70 @ 0x1406EBA70
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_140761A2C @ 0x140761A2C (sub_140761A2C.c)
 *     sub_14098325C @ 0x14098325C (sub_14098325C.c)
 *     sub_1409835EC @ 0x1409835EC (sub_1409835EC.c)
 *     sub_140B52AA8 @ 0x140B52AA8 (sub_140B52AA8.c)
 * Callees:
 *     sub_1403A147C @ 0x1403A147C (sub_1403A147C.c)
 */

__int64 sub_1406EBA70()
{
  __int64 result; // rax

  if ( (dword_140D06880 & 0x4000) != 0 )
    return sub_1403A147C();
  return result;
}
