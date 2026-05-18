/*
 * XREFs of sub_18006B758 @ 0x18006B758
 * Callers:
 *     sub_18006E9E4 @ 0x18006E9E4 (sub_18006E9E4.c)
 * Callees:
 *     sub_1800A6B90 @ 0x1800A6B90 (sub_1800A6B90.c)
 */

__int64 __fastcall sub_18006B758(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v5[0] = v2;
  v3 = a2[1];
  a2[1] = 0LL;
  v5[1] = v3;
  return sub_1800A6B90(a1, v5);
}
