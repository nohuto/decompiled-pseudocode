/*
 * XREFs of ??$_Emplace_reallocate@UPathSharedSectionData@@@?$vector@UPathSharedSectionData@@V?$allocator@UPathSharedSectionData@@@std@@@std@@QEAAPEAUPathSharedSectionData@@QEAU2@$$QEAU2@@Z @ 0x180177FD4
 * Callers:
 *     ?MarshalTypeSpecificData@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJIPEAPEAVKeyFrameAnimationResources@234@@Z @ 0x180178740 (-MarshalTypeSpecificData@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJIPEAPEAVKeyFrameAnim.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x18017821C (--$_Get_size_of_n@$0M@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UPathSharedSectionData@@V?$allocator@UPathSharedSectionData@@@std@@@std@@AEAAXQEAUPathSharedSectionData@@_K1@Z @ 0x180178A20 (-_Change_array@-$vector@UPathSharedSectionData@@V-$allocator@UPathSharedSectionData@@@std@@@std@.c)
 */

char *__fastcall std::vector<PathSharedSectionData>::_Emplace_reallocate<PathSharedSectionData>(
        __int64 a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rsi
  char *v14; // r14
  void *v15; // rcx
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  size_t v18; // r8

  v4 = 0x1555555555555555LL;
  v7 = (__int64)&a2[-*(_QWORD *)a1] / 12;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2);
  if ( v8 == 0x1555555555555555LL )
    std::_Dwm_Xlength_error((const char *)a1);
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2);
  v11 = v10 >> 1;
  if ( v10 <= 0x1555555555555555LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<12>(v4);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[12 * v7];
  *(_QWORD *)v14 = *(_QWORD *)a3;
  *((_DWORD *)v14 + 2) = *(_DWORD *)(a3 + 8);
  v15 = v13;
  v16 = *(_BYTE **)(a1 + 8);
  v17 = *(_BYTE **)a1;
  if ( a2 == v16 )
  {
    v18 = v16 - v17;
  }
  else
  {
    memmove_0(v13, v17, (size_t)&a2[-*(_QWORD *)a1]);
    v15 = v14 + 12;
    v18 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v17 = a2;
  }
  memmove_0(v15, v17, v18);
  std::vector<PathSharedSectionData>::_Change_array(a1, v13, v9, v4);
  return v14;
}
