/*
 * XREFs of ?compare@path@filesystem@std@@QEBAHV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x18064566C
 * Callers:
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180644120 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 * Callees:
 *     ??$find_if_not@PEBGU_Is_slash_oper@std@@@std@@YAPEBGPEBGQEBGU_Is_slash_oper@0@@Z @ 0x180090B10 (--$find_if_not@PEBGU_Is_slash_oper@std@@@std@@YAPEBGPEBGQEBGU_Is_slash_oper@0@@Z.c)
 *     ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x180090C68 (-_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x1802D21B6 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 */

char __fastcall std::filesystem::path::compare(std::filesystem *this, __int64 a2, const unsigned __int16 *a3)
{
  std::filesystem *v4; // rbx
  char *v5; // rdi
  const unsigned __int16 *root_name_end; // rax
  std::filesystem *v7; // r11
  char *v8; // rsi
  char *v9; // r14
  const unsigned __int16 *v10; // r8
  unsigned __int16 *v11; // rbp
  char *v12; // r11
  int v13; // eax
  char *v14; // r8
  unsigned __int16 *v15; // r9
  int v16; // ecx
  bool v17; // dl
  BOOL v18; // ecx
  __int64 v19; // r9

  v4 = this;
  if ( *((_QWORD *)this + 3) >= 8uLL )
    v4 = *(std::filesystem **)this;
  v5 = (char *)v4 + 2 * *((_QWORD *)this + 2);
  root_name_end = std::filesystem::_Find_root_name_end(v4, v5, a3);
  v7 = *(std::filesystem **)a2;
  v8 = (char *)root_name_end;
  v9 = (char *)(*(_QWORD *)a2 + 2LL * *(_QWORD *)(a2 + 8));
  v11 = (unsigned __int16 *)std::filesystem::_Find_root_name_end(v7, v9, v10);
  LOBYTE(v13) = std::_Traits_compare<std::char_traits<unsigned short>>(
                  (char *)v4,
                  (v8 - (char *)v4) >> 1,
                  v12,
                  ((char *)v11 - v12) >> 1);
  if ( !v13 )
  {
    std::find_if_not<unsigned short const *,std::_Is_slash_oper>(v8, v5);
    v15 = std::find_if_not<unsigned short const *,std::_Is_slash_oper>(v11, v9);
    v13 = (v8 != v14) - (v11 != v15);
    if ( !v13 )
    {
      while ( 1 )
      {
        v16 = (v15 == (unsigned __int16 *)v9) - (v14 == v5);
        if ( v14 == v5 || v16 )
          break;
        v17 = *(_WORD *)v14 == 92 || *(_WORD *)v14 == 47;
        v18 = *v15 == 92 || *v15 == 47;
        v16 = v18 - v17;
        if ( v16 )
          break;
        if ( v17 )
        {
          std::find_if_not<unsigned short const *,std::_Is_slash_oper>((_WORD *)v14 + 1, v5);
          v15 = std::find_if_not<unsigned short const *,std::_Is_slash_oper>((_WORD *)(v19 + 2), v9);
        }
        else
        {
          v16 = *(unsigned __int16 *)v14 - *v15;
          if ( v16 )
            break;
          v14 += 2;
          ++v15;
        }
      }
      LOBYTE(v13) = v16;
    }
  }
  return v13;
}
