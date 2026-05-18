/*
 * XREFs of sub_180084018 @ 0x180084018
 * Callers:
 *     sub_180084650 @ 0x180084650 (sub_180084650.c)
 * Callees:
 *     sub_1800815E0 @ 0x1800815E0 (sub_1800815E0.c)
 *     sub_180085C40 @ 0x180085C40 (sub_180085C40.c)
 */

__int64 __fastcall sub_180084018(__int64 a1, void *a2, __int64 a3)
{
  __int64 result; // rax

  if ( (a3 - (__int64)a2) >> 2 > (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2) )
    sub_180085C40();
  result = sub_1800815E0(a2, a3, *(void **)a1);
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
