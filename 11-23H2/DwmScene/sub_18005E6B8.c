/*
 * XREFs of sub_18005E6B8 @ 0x18005E6B8
 * Callers:
 *     sub_180058A08 @ 0x180058A08 (sub_180058A08.c)
 *     sub_180058D20 @ 0x180058D20 (sub_180058D20.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_1800589C8 @ 0x1800589C8 (sub_1800589C8.c)
 */

__int64 __fastcall sub_18005E6B8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_1800589C8((__int64)v6, *(_QWORD *)(a1 + 8));
    sub_1800100E8(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 48 * a3;
  result = a2 + 48 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
