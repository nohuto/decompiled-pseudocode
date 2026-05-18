/*
 * XREFs of sub_1800385C8 @ 0x1800385C8
 * Callers:
 *     sub_180031BCC @ 0x180031BCC (sub_180031BCC.c)
 *     sub_180031C88 @ 0x180031C88 (sub_180031C88.c)
 *     sub_18003B3E4 @ 0x18003B3E4 (sub_18003B3E4.c)
 *     sub_180057290 @ 0x180057290 (sub_180057290.c)
 *     sub_180057344 @ 0x180057344 (sub_180057344.c)
 *     sub_180067B80 @ 0x180067B80 (sub_180067B80.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_180098A70 @ 0x180098A70 (sub_180098A70.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18002E2EC @ 0x18002E2EC (sub_18002E2EC.c)
 */

__int64 __fastcall sub_1800385C8(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18002E2EC((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_1800100E8(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
