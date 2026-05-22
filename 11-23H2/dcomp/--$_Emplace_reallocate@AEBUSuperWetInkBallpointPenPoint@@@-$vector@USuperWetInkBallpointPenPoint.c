/*
 * XREFs of ??$_Emplace_reallocate@AEBUSuperWetInkBallpointPenPoint@@@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@QEAAPEAUSuperWetInkBallpointPenPoint@@QEAU2@AEBU2@@Z @ 0x1800E62B0
 * Callers:
 *     DirectComposition::ConvertToSuperWetInkPoints_DCompositionInkTrailPoint_ @ 0x1800E5FBC (DirectComposition--ConvertToSuperWetInkPoints_DCompositionInkTrailPoint_.c)
 *     DirectComposition::ConvertToSuperWetInkPoints_Windows::UI::Composition::InkTrailPoint_ @ 0x1800E60C4 (DirectComposition--ConvertToSuperWetInkPoints_Windows--UI--Composition--InkTrailPoint_.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180068C78 (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Change_array@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@AEAAXQEAUSuperWetInkBallpointPenPoint@@_K1@Z @ 0x1800E713C (-_Change_array@-$vector@USuperWetInkBallpointPenPoint@@V-$allocator@USuperWetInkBallpointPenPoin.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::vector<SuperWetInkBallpointPenPoint>::_Emplace_reallocate<SuperWetInkBallpointPenPoint const &>(
        __int64 a1,
        _BYTE *a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // rsi
  __int64 v8; // r14
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rbp
  void *v14; // rcx
  char *v15; // rsi
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  size_t v18; // r8

  v4 = 0x492492492492492LL;
  v7 = (__int64)&a2[-*(_QWORD *)a1] / 56;
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  if ( v8 == 0x492492492492492LL )
    std::_Dwm_Xlength_error((const char *)a1);
  v9 = v8 + 1;
  v10 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x492492492492492LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<56>(v4);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = &v13[56 * v7];
  *(_OWORD *)v15 = *(_OWORD *)a3;
  *((_OWORD *)v15 + 1) = *(_OWORD *)(a3 + 16);
  *((_OWORD *)v15 + 2) = *(_OWORD *)(a3 + 32);
  *((_QWORD *)v15 + 6) = *(_QWORD *)(a3 + 48);
  v16 = *(_BYTE **)(a1 + 8);
  v17 = *(_BYTE **)a1;
  if ( a2 == v16 )
  {
    v18 = v16 - v17;
  }
  else
  {
    memmove_0(v13, v17, (size_t)&a2[-*(_QWORD *)a1]);
    v14 = v15 + 56;
    v18 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v17 = a2;
  }
  memmove_0(v14, v17, v18);
  std::vector<SuperWetInkBallpointPenPoint>::_Change_array(a1, v13, v9, v4);
  return v15;
}
