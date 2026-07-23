/*
 * XREFs of sub_1403C0F20 @ 0x1403C0F20
 * Callers:
 *     sub_140B02560 @ 0x140B02560 (sub_140B02560.c)
 * Callees:
 *     sub_1403725A0 @ 0x1403725A0 (sub_1403725A0.c)
 *     sub_140829740 @ 0x140829740 (sub_140829740.c)
 */

__int64 __fastcall sub_1403C0F20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int16 a6, int a7)
{
  LOWORD(a7) = 8;
  HIWORD(a7) = a6;
  sub_1403725A0(a1, a2, 0LL, (unsigned __int8 *)&a7, 2);
  return sub_140829740(a1 + 136, a4, 0LL);
}
