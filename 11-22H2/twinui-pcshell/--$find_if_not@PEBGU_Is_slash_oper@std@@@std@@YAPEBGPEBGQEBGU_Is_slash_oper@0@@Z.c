/*
 * XREFs of ??$find_if_not@PEBGU_Is_slash_oper@std@@@std@@YAPEBGPEBGQEBGU_Is_slash_oper@0@@Z @ 0x180090B10
 * Callers:
 *     ?parent_path@path@filesystem@std@@QEBA?AV123@XZ @ 0x18008E210 (-parent_path@path@filesystem@std@@QEBA-AV123@XZ.c)
 *     ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x180090CE4 (-_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z.c)
 *     ?compare@path@filesystem@std@@QEBAHV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x18064566C (-compare@path@filesystem@std@@QEBAHV-$basic_string_view@GU-$char_traits@G@std@@@3@@Z.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall std::find_if_not<unsigned short const *,std::_Is_slash_oper>(_WORD *a1, _WORD *a2)
{
  while ( a1 != a2 && (*a1 == 92 || *a1 == 47) )
    ++a1;
  return a1;
}
