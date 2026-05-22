/*
 * XREFs of ??$insert@V?$span_iterator@$$CBE@details@gsl@@$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@$$CBE@details@gsl@@1@Z @ 0x1801B2BC8
 * Callers:
 *     ?Initialize@CPathData@@QEAAXV?$span@$$CBE$0?0@gsl@@@Z @ 0x1801B3198 (-Initialize@CPathData@@QEAAXV-$span@$$CBE$0-0@gsl@@@Z.c)
 * Callees:
 *     ??$_Insert_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1Uforward_iterator_tag@1@@Z @ 0x180077D28 (--$_Insert_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

_QWORD *__fastcall std::vector<unsigned char>::insert<gsl::details::span_iterator<unsigned char const>,0>(
        __int64 *a1,
        _QWORD *a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rbp

  v5 = *a1;
  if ( *(_OWORD *)a4 != *(_OWORD *)a5 || *(_QWORD *)(a4 + 16) > *(_QWORD *)(a5 + 16) )
  {
    gsl::details::terminate(*(gsl::details **)a4);
    JUMPOUT(0x1801B2C7ELL);
  }
  std::vector<unsigned char>::_Insert_range<unsigned char const *>(
    (__int64)a1,
    a3,
    *(_BYTE **)(a4 + 16),
    *(_BYTE **)(a5 + 16));
  *a2 = &a3[*a1 - v5];
  return a2;
}
