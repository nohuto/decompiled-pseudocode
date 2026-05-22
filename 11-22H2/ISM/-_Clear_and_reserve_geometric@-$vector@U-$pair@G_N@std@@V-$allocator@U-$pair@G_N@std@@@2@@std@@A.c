/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K@Z @ 0x1801A8CD0
 * Callers:
 *     ??$_Assign_range@PEAU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEAU?$pair@G_N@1@0Uforward_iterator_tag@1@@Z @ 0x1801A802C (--$_Assign_range@PEAU-$pair@G_N@std@@@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

char *__fastcall std::vector<std::pair<unsigned short,bool>>::_Clear_and_reserve_geometric(
        void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  _BYTE *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9

  v2 = 0x3FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v5 = *a1;
  v6 = ((_BYTE *)a1[2] - v5) >> 2;
  v7 = v6 >> 1;
  if ( v6 <= 0x3FFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v7 + v6;
    if ( v7 + v6 < a2 )
      v2 = a2;
  }
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, 4 * v6);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return std::vector<std::pair<unsigned short,bool>>::_Buy_raw(a1, v2);
}
