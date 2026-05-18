/*
 * XREFs of sub_18006E4EC @ 0x18006E4EC
 * Callers:
 *     sub_180063290 @ 0x180063290 (sub_180063290.c)
 *     sub_1800633B0 @ 0x1800633B0 (sub_1800633B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006E4EC(__int64 a1)
{
  __int64 result; // rax

  result = 0x555555555555555LL;
  if ( *(_QWORD *)(a1 + 16) == 0x555555555555555LL )
    std::_Xlength_error("unordered_map/set too long");
  return result;
}
