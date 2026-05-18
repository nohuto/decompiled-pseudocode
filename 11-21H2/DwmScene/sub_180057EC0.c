/*
 * XREFs of sub_180057EC0 @ 0x180057EC0
 * Callers:
 *     sub_1800375A0 @ 0x1800375A0 (sub_1800375A0.c)
 * Callees:
 *     sub_18001CB90 @ 0x18001CB90 (sub_18001CB90.c)
 */

__int64 __fastcall sub_180057EC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1 + 18664;
  if ( v2 != a2 )
    return sub_18001CB90(v2, a2);
  return result;
}
