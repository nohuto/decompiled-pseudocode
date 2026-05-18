/*
 * XREFs of sub_18001F62C @ 0x18001F62C
 * Callers:
 *     sub_180058B2C @ 0x180058B2C (sub_180058B2C.c)
 *     sub_1800DD780 @ 0x1800DD780 (sub_1800DD780.c)
 *     sub_1800DFC64 @ 0x1800DFC64 (sub_1800DFC64.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001E9BC @ 0x18001E9BC (sub_18001E9BC.c)
 */

__int64 __fastcall sub_18001F62C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_18001E9BC((__int64)v6, *(_QWORD *)(a1 + 8));
    result = sub_1800100E8(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
  return result;
}
