/*
 * XREFs of ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x1805874F8
 * Callers:
 *     ?_Parse_extension@filesystem@std@@YA?AV?$basic_string_view@GU?$char_traits@G@std@@@2@V32@@Z @ 0x1805876B4 (-_Parse_extension@filesystem@std@@YA-AV-$basic_string_view@GU-$char_traits@G@std@@@2@V32@@Z.c)
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x180587748 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 *     ?filename@path@filesystem@std@@QEBA?AV123@XZ @ 0x180587BD0 (-filename@path@filesystem@std@@QEBA-AV123@XZ.c)
 * Callees:
 *     ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x180576C2C (-_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z.c)
 */

const unsigned __int16 *__fastcall std::filesystem::_Find_filename(
        std::filesystem *this,
        char *a2,
        const unsigned __int16 *a3)
{
  const unsigned __int16 *root_name_end; // rax
  const unsigned __int16 *v4; // r11
  const unsigned __int16 *v5; // rcx

  root_name_end = std::filesystem::_Find_root_name_end(this, a2, a3);
  if ( root_name_end != v4 )
  {
    do
    {
      if ( *root_name_end != 92 && *root_name_end != 47 )
        break;
      ++root_name_end;
    }
    while ( root_name_end != v4 );
    if ( root_name_end != v4 )
    {
      do
      {
        v5 = v4 - 1;
        if ( *(v4 - 1) == 92 )
          break;
        if ( *v5 == 47 )
          break;
        --v4;
      }
      while ( root_name_end != v5 );
    }
  }
  return v4;
}
