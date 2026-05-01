/*
 * XREFs of ?parent_path@path@filesystem@std@@QEBA?AV123@XZ @ 0x180576D84
 * Callers:
 *     ?Launch@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG1_N2@Z @ 0x180575FE8 (-Launch@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG1_N2@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x180576C2C (-_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::filesystem::path::parent_path(std::filesystem *a1, __int64 a2, const unsigned __int16 *a3)
{
  __int64 v4; // rax
  const unsigned __int16 *root_name_end; // rax
  const void *v6; // rcx
  const unsigned __int16 *v7; // r11
  const unsigned __int16 *v8; // rdx
  const unsigned __int16 *v9; // rdx

  v4 = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    a1 = *(std::filesystem **)a1;
  root_name_end = std::filesystem::_Find_root_name_end(a1, (char *)a1 + 2 * v4, a3);
  if ( root_name_end != v7 )
  {
    do
    {
      if ( *root_name_end != 92 && *root_name_end != 47 )
        break;
      ++root_name_end;
    }
    while ( root_name_end != v7 );
    if ( root_name_end != v7 )
    {
      do
      {
        v8 = v7 - 1;
        if ( *(v7 - 1) == 92 )
          break;
        if ( *v8 == 47 )
          break;
        --v7;
      }
      while ( root_name_end != v8 );
      if ( root_name_end != v7 )
      {
        do
        {
          v9 = v7 - 1;
          if ( *(v7 - 1) != 92 && *v9 != 47 )
            break;
          --v7;
        }
        while ( root_name_end != v9 );
      }
    }
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  std::wstring::assign((char *)a2, v6, ((char *)v7 - (_BYTE *)v6) >> 1);
  return a2;
}
