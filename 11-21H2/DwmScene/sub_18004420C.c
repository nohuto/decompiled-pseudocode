/*
 * XREFs of sub_18004420C @ 0x18004420C
 * Callers:
 *     sub_1800457FC @ 0x1800457FC (sub_1800457FC.c)
 * Callees:
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_180044A54 @ 0x180044A54 (sub_180044A54.c)
 */

__int64 __fastcall sub_18004420C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rax
  __int64 v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = sub_1800129F4(v7, a2);
  return sub_180044A54(a1, v5, a3);
}
