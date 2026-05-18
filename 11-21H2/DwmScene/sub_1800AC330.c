/*
 * XREFs of sub_1800AC330 @ 0x1800AC330
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18004E560 @ 0x18004E560 (sub_18004E560.c)
 *     sub_18005221C @ 0x18005221C (sub_18005221C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800AC330(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = sub_18005221C(a2, v5);
  sub_18004E560(*v2, 0LL, v3);
  return sub_180010910((__int64)v5);
}
