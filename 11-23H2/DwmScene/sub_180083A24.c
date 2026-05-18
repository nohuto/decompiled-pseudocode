/*
 * XREFs of sub_180083A24 @ 0x180083A24
 * Callers:
 *     sub_180081688 @ 0x180081688 (sub_180081688.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180081618 @ 0x180081618 (sub_180081618.c)
 */

__int64 __fastcall sub_180083A24(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_180081618((__int64)v6, *(_QWORD *)(a1 + 8));
    sub_1800100E8(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 56 * a3;
  result = a2 + 56 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
