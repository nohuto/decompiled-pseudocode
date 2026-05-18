/*
 * XREFs of sub_180012688 @ 0x180012688
 * Callers:
 *     sub_1800122E4 @ 0x1800122E4 (sub_1800122E4.c)
 * Callees:
 *     sub_18004819C @ 0x18004819C (sub_18004819C.c)
 */

__int64 __fastcall sub_180012688(__int64 a1, __int64 *a2)
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
  return sub_18004819C(a1, v5);
}
