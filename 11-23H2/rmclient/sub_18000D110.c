/*
 * XREFs of sub_18000D110 @ 0x18000D110
 * Callers:
 *     sub_18000CFDC @ 0x18000CFDC (sub_18000CFDC.c)
 *     sub_18000F624 @ 0x18000F624 (sub_18000F624.c)
 *     sub_18000FC54 @ 0x18000FC54 (sub_18000FC54.c)
 * Callees:
 *     sub_18000DD90 @ 0x18000DD90 (sub_18000DD90.c)
 */

__int64 __fastcall sub_18000D110(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = a1[22];
  a1[22] = 0LL;
  if ( v2 )
    result = sub_18000DD90();
  v4 = a1[14];
  a1[14] = 0LL;
  if ( v4 )
    result = sub_18000DD90();
  v5 = a1[6];
  a1[6] = 0LL;
  if ( v5 )
    return sub_18000DD90();
  return result;
}
