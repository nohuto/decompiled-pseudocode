/*
 * XREFs of sub_18008D5F4 @ 0x18008D5F4
 * Callers:
 *     sub_18008CDF4 @ 0x18008CDF4 (sub_18008CDF4.c)
 *     sub_18008D07C @ 0x18008D07C (sub_18008D07C.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_18008D5F4(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_1800100E8(v2, 2 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 1));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
