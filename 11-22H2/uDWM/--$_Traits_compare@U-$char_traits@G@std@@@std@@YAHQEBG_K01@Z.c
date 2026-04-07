/*
 * XREFs of ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x1800CD0D8
 * Callers:
 *     ??$_Find_hint@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800FBDB8 (--$_Find_hint@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@winrt@@.c)
 *     ??$_Find_lower_bound@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@AEBUhstring@winrt@@@Z @ 0x1800FC0C0 (--$_Find_lower_bound@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@.c)
 *     ??$_Lower_bound_duplicate@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800FC1D4 (--$_Lower_bound_duplicate@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhst.c)
 * Callees:
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180051FC4 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

char __fastcall std::_Traits_compare<std::char_traits<unsigned short>>(
        char *a1,
        unsigned __int64 a2,
        char *a3,
        unsigned __int64 a4)
{
  __int64 v5; // r8
  int v7; // ecx
  unsigned __int64 v8; // r11

  v5 = a4;
  if ( a4 >= a2 )
    v5 = a2;
  v7 = std::_WChar_traits<unsigned short>::compare(a1, a3, v5);
  if ( v7 )
    return v7;
  if ( a2 >= v8 )
    return a2 > v8;
  return -1;
}
