/*
 * XREFs of sub_18008C900 @ 0x18008C900
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180088E2C @ 0x180088E2C (sub_180088E2C.c)
 *     sub_1800A956C @ 0x1800A956C (sub_1800A956C.c)
 *     sub_1800AAA68 @ 0x1800AAA68 (sub_1800AAA68.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008C900(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  char *v6[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF
  char v8; // [rsp+78h] [rbp+20h] BYREF

  sub_1800AAA68(a1, a2, 0LL);
  v7 = 0LL;
  v5[0] = &v7;
  v5[1] = &v8;
  sub_180088E2C(v6, (__int64)v5);
  result = sub_1800A956C(a1, a2, v6);
  if ( v6[0] )
    return sub_180010884(v6[0], (v6[2] - v6[0]) & 0xFFFFFFFFFFFFFFF8uLL);
  return result;
}
