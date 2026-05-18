/*
 * XREFs of sub_180098A10 @ 0x180098A10
 * Callers:
 *     sub_1800983E8 @ 0x1800983E8 (sub_1800983E8.c)
 *     sub_1800EAD79 @ 0x1800EAD79 (sub_1800EAD79.c)
 * Callees:
 *     sub_180061560 @ 0x180061560 (sub_180061560.c)
 */

__int64 __fastcall sub_180098A10(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180061560(v1);
  return result;
}
