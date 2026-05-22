/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@PEAVVisual@Composition@UI@Windows@@I@std@@@?$vector@U?$pair@PEAVVisual@Composition@UI@Windows@@I@std@@V?$allocator@U?$pair@PEAVVisual@Composition@UI@Windows@@I@std@@@2@@std@@QEAAPEAU?$pair@PEAVVisual@Composition@UI@Windows@@I@1@QEAU21@$$QEAU21@@Z @ 0x180100964
 * Callers:
 *     Windows::UI::Composition::EnumerateVisualTreePreOrderImpl @ 0x180101040 (Windows--UI--Composition--EnumerateVisualTreePreOrderImpl.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180042A28 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@U?$pair@PEAVVisual@Composition@UI@Windows@@I@std@@V?$allocator@U?$pair@PEAVVisual@Composition@UI@Windows@@I@std@@@2@@std@@AEAAXQEAU?$pair@PEAVVisual@Composition@UI@Windows@@I@2@_K1@Z @ 0x18010166C (-_Change_array@-$vector@U-$pair@PEAVVisual@Composition@UI@Windows@@I@std@@V-$allocator@U-$pair@P.c)
 */

char *__fastcall std::vector<std::pair<Windows::UI::Composition::Visual *,unsigned int>>::_Emplace_reallocate<std::pair<Windows::UI::Composition::Visual *,unsigned int>>(
        __int64 a1,
        char *a2,
        _OWORD *a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r14
  __int64 v6; // rax
  char *v7; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  _OWORD *v13; // rax
  _OWORD *v14; // r10
  char *v15; // r14
  char *v16; // r8
  char *v17; // rcx
  _OWORD *v18; // rdx
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  char *v21; // rdx
  signed __int64 v22; // rcx

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = (unsigned __int64)&a2[-*(_QWORD *)a1];
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v7 = a2;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)a1);
  v9 = v6 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = (char *)v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  *(_OWORD *)v15 = *a3;
  v16 = *(char **)(a1 + 8);
  v17 = *(char **)a1;
  if ( v7 == v16 )
  {
    v18 = v13;
    while ( v17 != v16 )
    {
      v19 = *(_OWORD *)v17;
      v17 += 16;
      *v18++ = v19;
    }
  }
  else
  {
    while ( v17 != v7 )
    {
      v20 = *(_OWORD *)v17;
      v17 += 16;
      *v13++ = v20;
    }
    v21 = *(char **)(a1 + 8);
    if ( v7 != v21 )
    {
      v22 = v15 - v7;
      do
      {
        *(_OWORD *)&v7[v22 + 16] = *(_OWORD *)v7;
        v7 += 16;
      }
      while ( v7 != v21 );
    }
  }
  std::vector<std::pair<Windows::UI::Composition::Visual *,unsigned int>>::_Change_array(a1, v14, v9, v3);
  return v15;
}
