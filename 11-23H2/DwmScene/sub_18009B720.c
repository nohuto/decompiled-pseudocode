/*
 * XREFs of sub_18009B720 @ 0x18009B720
 * Callers:
 *     sub_1800983E8 @ 0x1800983E8 (sub_1800983E8.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180024E60 @ 0x180024E60 (sub_180024E60.c)
 */

__int64 __fastcall sub_18009B720(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v4 = sub_180024E60(a2);
  result = sub_18001090C(v4);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + (a2 << 6);
  return result;
}
