/*
 * XREFs of ?Initialize@CPathData@@QEAAXV?$span@$$CBE$0?0@gsl@@@Z @ 0x1801B3198
 * Callers:
 *     ?RuntimeClassInitialize@CompositionPath@Composition@UI@Windows@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x18012FD20 (-RuntimeClassInitialize@CompositionPath@Composition@UI@Windows@@QEAAJV-$span@$$CBE$0-0@gsl@@@Z.c)
 * Callees:
 *     ?Reset@CPathData@@AEAAXXZ @ 0x180040B8C (-Reset@CPathData@@AEAAXXZ.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$insert@V?$span_iterator@$$CBE@details@gsl@@$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@$$CBE@details@gsl@@1@Z @ 0x1801B2BC8 (--$insert@V-$span_iterator@$$CBE@details@gsl@@$0A@@-$vector@EV-$allocator@E@std@@@std@@QEAA-AV-$.c)
 *     ?_Reallocate_exactly@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x1801B3474 (-_Reallocate_exactly@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 */

_QWORD *__fastcall CPathData::Initialize(__int64 *a1, unsigned __int64 *a2)
{
  const char *v4; // rcx
  unsigned __int64 v5; // rbx
  _BYTE *v6; // r8
  _QWORD v8[4]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[4]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10; // [rsp+80h] [rbp+8h] BYREF

  CPathData::Reset((CPathData *)a1);
  v5 = *a2;
  if ( *a2 > a1[4] - a1[2] )
  {
    if ( v5 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Dwm_Xlength_error(v4);
    std::vector<unsigned char>::_Reallocate_exactly(a1 + 2, *a2);
  }
  v6 = (_BYTE *)a1[3];
  v8[0] = a2[1];
  v9[0] = v8[0];
  v9[2] = v8[0];
  v8[1] = v5 + v8[0];
  v8[2] = v5 + v8[0];
  v9[1] = v5 + v8[0];
  return std::vector<unsigned char>::insert<gsl::details::span_iterator<unsigned char const>,0>(
           a1 + 2,
           &v10,
           v6,
           (__int64)v9,
           (__int64)v8);
}
