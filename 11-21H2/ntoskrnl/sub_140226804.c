/*
 * XREFs of sub_140226804 @ 0x140226804
 * Callers:
 *     sub_140264720 @ 0x140264720 (sub_140264720.c)
 *     sub_1402C8740 @ 0x1402C8740 (sub_1402C8740.c)
 *     sub_1402CB2D0 @ 0x1402CB2D0 (sub_1402CB2D0.c)
 *     sub_1405891A4 @ 0x1405891A4 (sub_1405891A4.c)
 *     sub_1405AF6F0 @ 0x1405AF6F0 (sub_1405AF6F0.c)
 * Callees:
 *     sub_140226844 @ 0x140226844 (sub_140226844.c)
 *     sub_14022689C @ 0x14022689C (sub_14022689C.c)
 */

__int64 __fastcall sub_140226804(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  _BYTE *v5; // rdx

  result = sub_140226844(a1, a3);
  v5 = *(_BYTE **)(result + 32);
  if ( v5 )
  {
    if ( (*v5 & 1) != 0 )
      return sub_14022689C(*(unsigned int *)(result + 64), v5, a2 == 0 ? 2 : 0);
  }
  return result;
}
