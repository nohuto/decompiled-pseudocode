/*
 * XREFs of sub_180038610 @ 0x180038610
 * Callers:
 *     sub_180031C94 @ 0x180031C94 (sub_180031C94.c)
 *     sub_180031D44 @ 0x180031D44 (sub_180031D44.c)
 *     sub_180035B90 @ 0x180035B90 (sub_180035B90.c)
 *     sub_180057344 @ 0x180057344 (sub_180057344.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_1800109B0 @ 0x1800109B0 (sub_1800109B0.c)
 */

__int64 __fastcall sub_180038610(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_1800109B0((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_1800100E8(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
