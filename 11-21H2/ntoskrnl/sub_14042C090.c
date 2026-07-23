/*
 * XREFs of sub_14042C090 @ 0x14042C090
 * Callers:
 *     sub_1403A13C0 @ 0x1403A13C0 (sub_1403A13C0.c)
 * Callees:
 *     sub_14042C070 @ 0x14042C070 (sub_14042C070.c)
 */

__int64 __fastcall sub_14042C090(unsigned int *a1)
{
  return sub_14042C070(((unsigned __int8)a1 & 3u) + 1, a1);
}
