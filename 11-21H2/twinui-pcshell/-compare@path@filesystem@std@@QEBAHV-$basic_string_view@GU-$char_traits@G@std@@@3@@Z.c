/*
 * XREFs of ?compare@path@filesystem@std@@QEBAHV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1805879AC
 * Callers:
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x1805863A4 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 * Callees:
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x180126B8C (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x180576C2C (-_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z.c)
 */

char __fastcall std::filesystem::path::compare(std::filesystem *this, __int64 a2, const unsigned __int16 *a3)
{
  std::filesystem *v4; // rdi
  char *v5; // rbx
  const unsigned __int16 *root_name_end; // rax
  std::filesystem *v7; // r11
  const unsigned __int16 *v8; // rbp
  char *v9; // rsi
  const unsigned __int16 *v10; // r8
  const unsigned __int16 *v11; // r14
  __int64 v12; // r11
  int v13; // eax
  char *v14; // rdx
  const unsigned __int16 *i; // r8
  int v16; // ecx
  bool v17; // r9
  BOOL v18; // ecx

  v4 = this;
  if ( *((_QWORD *)this + 3) >= 8uLL )
    v4 = *(std::filesystem **)this;
  v5 = (char *)v4 + 2 * *((_QWORD *)this + 2);
  root_name_end = std::filesystem::_Find_root_name_end(v4, v5, a3);
  v7 = *(std::filesystem **)a2;
  v8 = root_name_end;
  v9 = (char *)(*(_QWORD *)a2 + 2LL * *(_QWORD *)(a2 + 8));
  v11 = std::filesystem::_Find_root_name_end(v7, v9, v10);
  LOBYTE(v13) = std::_Traits_compare<std::char_traits<unsigned short>>(
                  (__int64)v4,
                  ((char *)v8 - (char *)v4) >> 1,
                  v12,
                  ((__int64)v11 - v12) >> 1);
  if ( !v13 )
  {
    v14 = (char *)v8;
    if ( v8 != (const unsigned __int16 *)v5 )
    {
      do
      {
        if ( *(_WORD *)v14 != 92 && *(_WORD *)v14 != 47 )
          break;
        v14 += 2;
      }
      while ( v14 != v5 );
    }
    for ( i = v11; i != (const unsigned __int16 *)v9; ++i )
    {
      if ( *i != 92 && *i != 47 )
        break;
    }
    v13 = (v8 != (const unsigned __int16 *)v14) - (v11 != i);
    if ( !v13 )
    {
      while ( 1 )
      {
        v16 = (i == (const unsigned __int16 *)v9) - (v14 == v5);
        if ( v14 == v5 || v16 )
          break;
        v17 = *(_WORD *)v14 == 92 || *(_WORD *)v14 == 47;
        v18 = *i == 92 || *i == 47;
        v16 = v18 - v17;
        if ( v16 )
          break;
        if ( v17 )
        {
          do
            v14 += 2;
          while ( v14 != v5 && (*(_WORD *)v14 == 92 || *(_WORD *)v14 == 47) );
          do
            ++i;
          while ( i != (const unsigned __int16 *)v9 && (*i == 92 || *i == 47) );
        }
        else
        {
          v16 = *(unsigned __int16 *)v14 - *i;
          if ( v16 )
            break;
          v14 += 2;
          ++i;
        }
      }
      LOBYTE(v13) = v16;
    }
  }
  return v13;
}
