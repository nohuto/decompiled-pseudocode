/*
 * XREFs of sub_1800971A4 @ 0x1800971A4
 * Callers:
 *     sub_1800973B4 @ 0x1800973B4 (sub_1800973B4.c)
 * Callees:
 *     sub_18001203C @ 0x18001203C (sub_18001203C.c)
 *     sub_18003180C @ 0x18003180C (sub_18003180C.c)
 *     sub_18007E604 @ 0x18007E604 (sub_18007E604.c)
 */

__int64 __fastcall sub_1800971A4(__int64 *a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  sub_18007E604(a1, 0x10uLL);
  v3 = (_QWORD *)*a1;
  v4 = 16LL;
  do
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    v3 += 2;
    --v4;
  }
  while ( v4 );
  sub_18001203C((__int64)v3, (__int64)v3);
  v6 = 0LL;
  a1[1] = (__int64)v3;
  return sub_18003180C(&v6);
}
