/*
 * XREFs of ?parent_path@path@filesystem@std@@QEBA?AV123@XZ @ 0x18008E210
 * Callers:
 *     ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x1800B08F4 (-Create@JsonGameMruManager@@SA-AV-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMr.c)
 *     ?Launch@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG1_N2@Z @ 0x180633DFC (-Launch@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG1_N2@Z.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ??$find_if_not@PEBGU_Is_slash_oper@std@@@std@@YAPEBGPEBGQEBGU_Is_slash_oper@0@@Z @ 0x180090B10 (--$find_if_not@PEBGU_Is_slash_oper@std@@@std@@YAPEBGPEBGQEBGU_Is_slash_oper@0@@Z.c)
 *     ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x180090C68 (-_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z.c)
 */

__int64 __fastcall std::filesystem::path::parent_path(std::filesystem *a1, __int64 a2, const unsigned __int16 *a3)
{
  std::filesystem *v4; // rbx
  const unsigned __int16 *root_name_end; // rax
  __int64 v6; // r11
  __int64 Is_slash; // rax
  __int64 v8; // r11
  _WORD *v9; // rcx
  _WORD *v10; // rcx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v4 = *(std::filesystem **)a1;
  root_name_end = std::filesystem::_Find_root_name_end(v4, (const unsigned __int16 *const)v4 + *((_QWORD *)a1 + 2), a3);
  Is_slash = std::find_if_not<unsigned short const *,std::_Is_slash_oper>(root_name_end, v6);
  if ( Is_slash != v8 )
  {
    do
    {
      v9 = (_WORD *)(v8 - 2);
      if ( *(_WORD *)(v8 - 2) == 92 )
        break;
      if ( *v9 == 47 )
        break;
      v8 -= 2LL;
    }
    while ( (_WORD *)Is_slash != v9 );
    if ( Is_slash != v8 )
    {
      do
      {
        v10 = (_WORD *)(v8 - 2);
        if ( *(_WORD *)(v8 - 2) != 92 && *v10 != 47 )
          break;
        v8 -= 2LL;
      }
      while ( (_WORD *)Is_slash != v10 );
    }
  }
  v12[0] = v4;
  v12[1] = (v8 - (__int64)v4) >> 1;
  std::wstring::wstring(a2, v12);
  return a2;
}
