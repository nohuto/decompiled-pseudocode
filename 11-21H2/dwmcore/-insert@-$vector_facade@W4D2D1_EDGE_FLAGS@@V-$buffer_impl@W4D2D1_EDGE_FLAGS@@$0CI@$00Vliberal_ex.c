/*
 * XREFs of ?insert@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@W4D2D1_EDGE_FLAGS@@@2@V?$basic_iterator@$$CBW4D2D1_EDGE_FLAGS@@@2@_KAEBW4D2D1_EDGE_FLAGS@@@Z @ 0x1800D1ED4
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800A81A0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4D2D1_EDGE_FLAGS@@_K0@Z @ 0x1800D1FA8 (-reserve_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vli.c)
 */

_QWORD *__fastcall detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::insert(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int64 a4,
        int *a5)
{
  __int64 v6; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  int *v11; // r8
  int v12; // r11d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rdx
  int *v17; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v19; // rbx

  v6 = (__int64)(*a3 - *a1) >> 2;
  v9 = detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::reserve_region(
         a1,
         v6,
         a4);
  v10 = 0LL;
  v11 = (int *)v9;
  if ( a4 )
  {
    if ( a4 < 4 )
      goto LABEL_11;
    v13 = v9 + 4 * (a4 - 1);
    if ( v11 <= a5 && v13 >= (unsigned __int64)a5 )
      goto LABEL_11;
    v14 = a4 & 0xFFFFFFFFFFFFFFFCuLL;
    do
    {
      v10 += 4LL;
      v15 = v10;
    }
    while ( v10 < v14 );
    v16 = 4 * v14;
    v12 = *a5;
    v17 = v11;
    for ( i = v16 >> 2; i; --i )
      *v17++ = v12;
    v11 = (int *)((char *)v11 + v16);
    v10 = v15;
    if ( v15 < a4 )
    {
LABEL_11:
      v19 = a4 - v10;
      do
      {
        *v11++ = *a5;
        --v19;
      }
      while ( v19 );
    }
  }
  *a2 = *a1 + 4 * v6;
  return a2;
}
