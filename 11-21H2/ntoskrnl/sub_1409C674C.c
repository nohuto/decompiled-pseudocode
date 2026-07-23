/*
 * XREFs of sub_1409C674C @ 0x1409C674C
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405F4C2C @ 0x1405F4C2C (sub_1405F4C2C.c)
 */

__int64 __fastcall sub_1409C674C(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  *a3 = 4;
  memset(a1, 0, a2);
  if ( sub_1405F4C2C() )
    *a1 |= 2u;
  return 0LL;
}
