/*
 * XREFs of sub_18008CDD4 @ 0x18008CDD4
 * Callers:
 *     sub_18008C8C8 @ 0x18008C8C8 (sub_18008C8C8.c)
 * Callees:
 *     sub_180085D94 @ 0x180085D94 (sub_180085D94.c)
 */

__int64 __fastcall sub_18008CDD4(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180085D94(v1);
  return result;
}
