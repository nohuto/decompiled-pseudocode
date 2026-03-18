/*
 * XREFs of ?insert@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UD2D_POINT_2F@@@2@V?$basic_iterator@$$CBUD2D_POINT_2F@@@2@_KAEBUD2D_POINT_2F@@@Z @ 0x1801E75B8
 * Callers:
 *     ?Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801E7254 (-Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_POINT_2F@@_K0@Z @ 0x1800BA1A0 (-reserve_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_ex.c)
 */

_QWORD *__fastcall detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::insert(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int64 a4,
        _QWORD *a5)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  char *i; // rax

  v6 = (__int64)(*a3 - *a1) >> 3;
  v7 = a4;
  for ( i = detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
              (__int64)a1,
              v6,
              a4); v7; --v7 )
  {
    *(_QWORD *)i = *a5;
    i += 8;
  }
  *a2 = *a1 + 8 * v6;
  return a2;
}
