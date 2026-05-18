/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@II@std@@@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@QEAAPEAU?$pair@II@1@QEAU21@$$QEAU21@@Z @ 0x180081864
 * Callers:
 *     ??$emplace_back@U?$pair@II@std@@@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@QEAA?A_T$$QEAU?$pair@II@1@@Z @ 0x180081CB4 (--$emplace_back@U-$pair@II@std@@@-$vector@U-$pair@II@std@@V-$allocator@U-$pair@II@std@@@2@@std@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180017058 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@UMessageEvent@Engine@Spectre@@V?$allocator@UMessageEvent@Engine@Spectre@@@std@@@std@@AEBA_K_K@Z @ 0x180074490 (-_Calculate_growth@-$vector@UMessageEvent@Engine@Spectre@@V-$allocator@UMessageEvent@Engine@Spec.c)
 *     ?_Change_array@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@AEAAXQEAU?$pair@II@2@_K1@Z @ 0x18008393C (-_Change_array@-$vector@U-$pair@II@std@@V-$allocator@U-$pair@II@std@@@2@@std@@AEAAXQEAU-$pair@II.c)
 */

char *__fastcall std::vector<std::pair<unsigned int,unsigned int>>::_Emplace_reallocate<std::pair<unsigned int,unsigned int>>(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  char *v3; // rsi
  __int64 v6; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r15
  unsigned __int64 size_of; // rax
  _QWORD *v11; // r10
  _QWORD *v12; // rdx
  char *v13; // rsi
  char *v14; // r8
  char *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  char *v18; // r9
  signed __int64 v19; // rdx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = std::vector<Spectre::Engine::MessageEvent>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v13 = (char *)&v11[(a2 - v3) >> 3];
  *(_QWORD *)v13 = *a3;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    while ( v15 != v14 )
    {
      v16 = *(_QWORD *)v15;
      v15 += 8;
      *v12++ = v16;
    }
  }
  else
  {
    while ( v15 != a2 )
    {
      v17 = *(_QWORD *)v15;
      v15 += 8;
      *v12++ = v17;
    }
    v18 = a1[1];
    if ( a2 != v18 )
    {
      v19 = v13 - a2;
      do
      {
        *(_QWORD *)&a2[v19 + 8] = *(_QWORD *)a2;
        a2 += 8;
      }
      while ( a2 != v18 );
    }
  }
  std::vector<std::pair<unsigned int,unsigned int>>::_Change_array(a1, v11, v8, v9);
  return v13;
}
