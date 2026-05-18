/*
 * XREFs of sub_1800CB6E8 @ 0x1800CB6E8
 * Callers:
 *     sub_1800CB76C @ 0x1800CB76C (sub_1800CB76C.c)
 *     sub_1800CD128 @ 0x1800CD128 (sub_1800CD128.c)
 *     sub_1800CD298 @ 0x1800CD298 (sub_1800CD298.c)
 *     sub_1800CD8AC @ 0x1800CD8AC (sub_1800CD8AC.c)
 *     sub_1800CE0A0 @ 0x1800CE0A0 (sub_1800CE0A0.c)
 *     sub_1800D08F0 @ 0x1800D08F0 (sub_1800D08F0.c)
 *     sub_1800D1660 @ 0x1800D1660 (sub_1800D1660.c)
 *     sub_1800D3790 @ 0x1800D3790 (sub_1800D3790.c)
 *     sub_1800D8450 @ 0x1800D8450 (sub_1800D8450.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 */

__int64 *__fastcall sub_1800CB6E8(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v7 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v3 = v4;
  }
  v5 = *a1;
  *a1 = v3;
  v7 = v5;
  sub_18000E72C(&v7);
  return a1;
}
