/*
 * XREFs of sub_180027804 @ 0x180027804
 * Callers:
 *     sub_180025B0C @ 0x180025B0C (sub_180025B0C.c)
 *     sub_180025C20 @ 0x180025C20 (sub_180025C20.c)
 *     sub_18002B9A8 @ 0x18002B9A8 (sub_18002B9A8.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180024BE4 @ 0x180024BE4 (sub_180024BE4.c)
 */

__int64 __fastcall sub_180027804(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_180024BE4((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_1800100E8(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
