/*
 * XREFs of ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x1800C8988
 * Callers:
 *     ??$_Find_hint@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800F8D44 (--$_Find_hint@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@winrt@@.c)
 *     ??$_Find_lower_bound@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@AEBUhstring@winrt@@@Z @ 0x1800F904C (--$_Find_lower_bound@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@.c)
 *     ??$_Lower_bound_duplicate@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800F9160 (--$_Lower_bound_duplicate@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhst.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Traits_compare<std::char_traits<unsigned short>>(
        char *a1,
        unsigned __int64 a2,
        char *a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // r10
  unsigned int v6; // edi
  unsigned __int16 v7; // cx
  signed __int64 v8; // r11
  __int64 result; // rax
  bool v10; // cc
  unsigned __int16 v11; // cx

  v4 = a4;
  if ( a4 >= a2 )
    v4 = a2;
  v6 = 0;
  if ( !v4 )
  {
LABEL_10:
    if ( a2 >= a4 )
    {
      LOBYTE(v6) = a2 > a4;
      return v6;
    }
    return 0xFFFFFFFFLL;
  }
  v7 = *(_WORD *)a1;
  if ( v7 < *(_WORD *)a3 )
    return 0xFFFFFFFFLL;
  v8 = a1 - a3;
  result = 1LL;
  v10 = v7 <= *(_WORD *)a3;
  while ( v10 )
  {
    if ( v4 == 1 )
      goto LABEL_10;
    a3 += 2;
    --v4;
    v11 = *(_WORD *)&a3[v8];
    v10 = v11 <= *(_WORD *)a3;
    if ( v11 < *(_WORD *)a3 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
