/*
 * XREFs of sub_180014A10 @ 0x180014A10
 * Callers:
 *     sub_1800146D0 @ 0x1800146D0 (sub_1800146D0.c)
 * Callees:
 *     sub_1800511A0 @ 0x1800511A0 (sub_1800511A0.c)
 */

__int64 __fastcall sub_180014A10(__int64 a1, __int64 *a2)
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
  return sub_1800511A0(a1, v5);
}
