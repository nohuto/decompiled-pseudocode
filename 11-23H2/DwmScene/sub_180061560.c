/*
 * XREFs of sub_180061560 @ 0x180061560
 * Callers:
 *     sub_18005FC64 @ 0x18005FC64 (sub_18005FC64.c)
 *     sub_180098A10 @ 0x180098A10 (sub_180098A10.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18005EF18 @ 0x18005EF18 (sub_18005EF18.c)
 */

__int64 __fastcall sub_180061560(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18005EF18((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_1800100E8(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
