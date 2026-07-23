/*
 * XREFs of sub_1406021F8 @ 0x1406021F8
 * Callers:
 *     sub_140602240 @ 0x140602240 (sub_140602240.c)
 *     sub_140A965D0 @ 0x140A965D0 (sub_140A965D0.c)
 *     sub_140A96660 @ 0x140A96660 (sub_140A96660.c)
 *     sub_140AA3E60 @ 0x140AA3E60 (sub_140AA3E60.c)
 *     sub_140AA3EB0 @ 0x140AA3EB0 (sub_140AA3EB0.c)
 *     sub_140AA3F40 @ 0x140AA3F40 (sub_140AA3F40.c)
 *     sub_140AA3FB0 @ 0x140AA3FB0 (sub_140AA3FB0.c)
 *     sub_140AA3FF0 @ 0x140AA3FF0 (sub_140AA3FF0.c)
 *     sub_140AA4030 @ 0x140AA4030 (sub_140AA4030.c)
 *     sub_140AA4090 @ 0x140AA4090 (sub_140AA4090.c)
 *     sub_140AA4160 @ 0x140AA4160 (sub_140AA4160.c)
 *     sub_140AA4250 @ 0x140AA4250 (sub_140AA4250.c)
 *     sub_140AA4290 @ 0x140AA4290 (sub_140AA4290.c)
 *     sub_140AA42B0 @ 0x140AA42B0 (sub_140AA42B0.c)
 *     sub_140AA4320 @ 0x140AA4320 (sub_140AA4320.c)
 *     sub_140AA4340 @ 0x140AA4340 (sub_140AA4340.c)
 *     sub_140AA4380 @ 0x140AA4380 (sub_140AA4380.c)
 *     sub_140AA46E0 @ 0x140AA46E0 (sub_140AA46E0.c)
 *     sub_140AA4790 @ 0x140AA4790 (sub_140AA4790.c)
 *     sub_140AA47B0 @ 0x140AA47B0 (sub_140AA47B0.c)
 *     sub_140AA4800 @ 0x140AA4800 (sub_140AA4800.c)
 *     sub_140AA59E0 @ 0x140AA59E0 (sub_140AA59E0.c)
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_1406021F8(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 result; // rax

  if ( BugCheckParameter2 < 0x7FFFFFFEFFFFLL )
    return sub_140A8C924(0xC4u, 0xE0uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  result = BugCheckParameter2 + BugCheckParameter3;
  if ( BugCheckParameter2 + BugCheckParameter3 < BugCheckParameter2 )
    return sub_140A8C924(0xC4u, 0xE0uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  return result;
}
