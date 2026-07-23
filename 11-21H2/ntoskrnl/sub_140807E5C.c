/*
 * XREFs of sub_140807E5C @ 0x140807E5C
 * Callers:
 *     sub_140807D78 @ 0x140807D78 (sub_140807D78.c)
 * Callees:
 *     sub_14025E844 @ 0x14025E844 (sub_14025E844.c)
 *     sub_14036C1F4 @ 0x14036C1F4 (sub_14036C1F4.c)
 */

__int64 sub_140807E5C()
{
  _QWORD *v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  sub_14036C1F4();
  sub_14025E844(&v5);
  result = v2 - v1;
  v4 = -v2;
  if ( v2 >= 0 )
    v4 = result;
  *v0 = v5 + v4;
  return result;
}
