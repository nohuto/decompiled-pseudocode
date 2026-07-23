/*
 * XREFs of sub_140232E74 @ 0x140232E74
 * Callers:
 *     sub_140232BE4 @ 0x140232BE4 (sub_140232BE4.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_14027428C @ 0x14027428C (sub_14027428C.c)
 *     sub_140316E90 @ 0x140316E90 (sub_140316E90.c)
 *     sub_140339240 @ 0x140339240 (sub_140339240.c)
 *     sub_14033A920 @ 0x14033A920 (sub_14033A920.c)
 *     sub_14038E608 @ 0x14038E608 (sub_14038E608.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_14057FA8C @ 0x14057FA8C (sub_14057FA8C.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_1405BC608 @ 0x1405BC608 (sub_1405BC608.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140232E74(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( (a2 & 4) == 0 || a2 >> 12 != *(_DWORD *)(a1 + 1172) )
    return 0LL;
  return result;
}
