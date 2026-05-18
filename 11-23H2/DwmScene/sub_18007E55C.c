/*
 * XREFs of sub_18007E55C @ 0x18007E55C
 * Callers:
 *     sub_18007C94C @ 0x18007C94C (sub_18007C94C.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180017058 @ 0x180017058 (sub_180017058.c)
 */

unsigned __int64 __fastcall sub_18007E55C(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v4 = sub_180017058(a2);
  v5 = sub_18001090C(v4);
  *a1 = v5;
  a1[1] = v5;
  result = v5 + 8 * a2;
  a1[2] = result;
  return result;
}
