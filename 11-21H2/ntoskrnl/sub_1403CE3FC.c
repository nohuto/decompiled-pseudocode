/*
 * XREFs of sub_1403CE3FC @ 0x1403CE3FC
 * Callers:
 *     sub_1403A99B0 @ 0x1403A99B0 (sub_1403A99B0.c)
 *     sub_140B5616C @ 0x140B5616C (sub_140B5616C.c)
 *     sub_140B56268 @ 0x140B56268 (sub_140B56268.c)
 * Callees:
 *     sub_1403A9E4C @ 0x1403A9E4C (sub_1403A9E4C.c)
 */

__int64 __fastcall sub_1403CE3FC(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax

  result = sub_1403A9E4C(a1, a2, 4u, a3);
  if ( (int)result >= 0 )
  {
    *a3 = _byteswap_ulong(*a3);
    return 0LL;
  }
  return result;
}
