/*
 * XREFs of sub_180083AB0 @ 0x180083AB0
 * Callers:
 *     sub_1800817C4 @ 0x1800817C4 (sub_1800817C4.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180081650 @ 0x180081650 (sub_180081650.c)
 */

__int64 __fastcall sub_180083AB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_180081650((__int64)v6, *(_QWORD *)(a1 + 8));
    sub_1800100E8(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 40 * a3;
  result = 5 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 40 * a4;
  return result;
}
