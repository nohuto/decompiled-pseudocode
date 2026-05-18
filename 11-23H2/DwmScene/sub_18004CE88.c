/*
 * XREFs of sub_18004CE88 @ 0x18004CE88
 * Callers:
 *     sub_18004AEB4 @ 0x18004AEB4 (sub_18004AEB4.c)
 *     sub_18004AF30 @ 0x18004AF30 (sub_18004AF30.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18004A788 @ 0x18004A788 (sub_18004A788.c)
 */

__int64 __fastcall sub_18004CE88(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18004A788((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_1800100E8(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
