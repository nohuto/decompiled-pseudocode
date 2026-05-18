/*
 * XREFs of sub_1800149DC @ 0x1800149DC
 * Callers:
 *     sub_180014564 @ 0x180014564 (sub_180014564.c)
 * Callees:
 *     sub_180050214 @ 0x180050214 (sub_180050214.c)
 */

__int64 __fastcall sub_1800149DC(__int64 a1, __int64 *a2)
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
  return sub_180050214(a1, v5);
}
