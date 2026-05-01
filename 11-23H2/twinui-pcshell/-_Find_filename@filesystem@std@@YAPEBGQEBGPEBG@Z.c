/*
 * XREFs of ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x180090CE4
 * Callers:
 *     ?filename@path@filesystem@std@@QEBA?AV123@XZ @ 0x18008E2C4 (-filename@path@filesystem@std@@QEBA-AV123@XZ.c)
 *     ?_Parse_extension@filesystem@std@@YA?AV?$basic_string_view@GU?$char_traits@G@std@@@2@V32@@Z @ 0x1802E8AB6 (-_Parse_extension@filesystem@std@@YA-AV-$basic_string_view@GU-$char_traits@G@std@@@2@V32@@Z.c)
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x180645480 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 * Callees:
 *     ??$find_if_not@PEBGU_Is_slash_oper@std@@@std@@YAPEBGPEBGQEBGU_Is_slash_oper@0@@Z @ 0x180090B10 (--$find_if_not@PEBGU_Is_slash_oper@std@@@std@@YAPEBGPEBGQEBGU_Is_slash_oper@0@@Z.c)
 *     ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x180090C68 (-_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z.c)
 */

const unsigned __int16 *__fastcall std::filesystem::_Find_filename(
        std::filesystem *this,
        char *a2,
        const unsigned __int16 *a3)
{
  unsigned __int16 *root_name_end; // rax
  _WORD *v4; // r11
  _WORD *v5; // rax
  _WORD *v6; // r11
  _WORD *v7; // rcx

  root_name_end = (unsigned __int16 *)std::filesystem::_Find_root_name_end(this, a2, a3);
  v5 = std::find_if_not<unsigned short const *,std::_Is_slash_oper>(root_name_end, v4);
  if ( v5 != v6 )
  {
    do
    {
      v7 = v6 - 1;
      if ( *(v6 - 1) == 92 )
        break;
      if ( *v7 == 47 )
        break;
      --v6;
    }
    while ( v5 != v7 );
  }
  return v6;
}
