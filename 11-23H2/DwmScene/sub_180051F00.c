/*
 * XREFs of sub_180051F00 @ 0x180051F00
 * Callers:
 *     sub_180051330 @ 0x180051330 (sub_180051330.c)
 *     sub_1800513A4 @ 0x1800513A4 (sub_1800513A4.c)
 *     sub_180055484 @ 0x180055484 (sub_180055484.c)
 *     sub_180055560 @ 0x180055560 (sub_180055560.c)
 *     sub_180055714 @ 0x180055714 (sub_180055714.c)
 *     sub_180055848 @ 0x180055848 (sub_180055848.c)
 *     sub_180055980 @ 0x180055980 (sub_180055980.c)
 *     sub_180055D7C @ 0x180055D7C (sub_180055D7C.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 *     sub_1800D3A70 @ 0x1800D3A70 (sub_1800D3A70.c)
 *     sub_1800D41F0 @ 0x1800D41F0 (sub_1800D41F0.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_180051F00(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_1800100E8(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
