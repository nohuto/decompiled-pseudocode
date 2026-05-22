/*
 * XREFs of ??$_Emplace_reallocate@AEBUPathDataConsumer@CompositionPath@Composition@UI@Windows@@@?$vector@UPathDataConsumer@CompositionPath@Composition@UI@Windows@@V?$allocator@UPathDataConsumer@CompositionPath@Composition@UI@Windows@@@std@@@std@@QEAAPEAUPathDataConsumer@CompositionPath@Composition@UI@Windows@@QEAU23456@AEBU23456@@Z @ 0x180041194
 * Callers:
 *     ?AttachConsumer@CompositionPath@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAPEAVCSharedAllocation@DirectComposition@@PEAI@Z @ 0x1800404C4 (-AttachConsumer@CompositionPath@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAPEAVCSharedAl.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180042A28 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::vector<Windows::UI::Composition::CompositionPath::PathDataConsumer>::_Emplace_reallocate<Windows::UI::Composition::CompositionPath::PathDataConsumer const &>(
        char *a1,
        char *a2,
        _OWORD *a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v6; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rax
  char *v14; // rbp
  char *v15; // r14
  void *v16; // rcx
  char *v17; // r8
  _BYTE *v18; // rdx
  size_t v19; // r8
  char *result; // rax

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = (unsigned __int64)&a2[-*(_QWORD *)a1];
  v6 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v9 = v6 + 1;
  v10 = (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v9;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = &v13[v4 & 0xFFFFFFFFFFFFFFF0uLL];
  v16 = v13;
  *(_OWORD *)v15 = *a3;
  v17 = (char *)*((_QWORD *)a1 + 1);
  v18 = *(_BYTE **)a1;
  if ( a2 == v17 )
  {
    v19 = v17 - v18;
  }
  else
  {
    memmove_0(v13, v18, (size_t)&a2[-*(_QWORD *)a1]);
    v16 = v15 + 16;
    v19 = *((_QWORD *)a1 + 1) - (_QWORD)a2;
    v18 = a2;
  }
  memmove_0(v16, v18, v19);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(_QWORD *)a1, (*((_QWORD *)a1 + 2) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = v14;
  result = v15;
  *((_QWORD *)a1 + 1) = &v14[16 * v9];
  *((_QWORD *)a1 + 2) = &v14[16 * v3];
  return result;
}
