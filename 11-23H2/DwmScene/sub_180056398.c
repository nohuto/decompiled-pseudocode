/*
 * XREFs of sub_180056398 @ 0x180056398
 * Callers:
 *     sub_180055D7C @ 0x180055D7C (sub_180055D7C.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 * Callees:
 *     sub_180055560 @ 0x180055560 (sub_180055560.c)
 *     sub_1800562B0 @ 0x1800562B0 (sub_1800562B0.c)
 */

__int64 __fastcall sub_180056398(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 *v7; // rax
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF

  v7 = sub_1800562B0(v9, a2, a4);
  sub_180055560(a1, v7, a3, a4);
  return a1;
}
