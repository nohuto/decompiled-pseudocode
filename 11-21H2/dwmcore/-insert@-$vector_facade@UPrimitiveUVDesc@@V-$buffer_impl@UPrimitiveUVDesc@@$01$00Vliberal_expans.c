/*
 * XREFs of ?insert@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UPrimitiveUVDesc@@@2@V?$basic_iterator@$$CBUPrimitiveUVDesc@@@2@_KAEBUPrimitiveUVDesc@@@Z @ 0x1801E3D8C
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC3C0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUPrimitiveUVDesc@@_K0@Z @ 0x1801E40E8 (-reserve_region@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$01$00Vlibera.c)
 */

_QWORD *__fastcall detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,2,1,detail::liberal_expansion_policy>>::insert(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v9; // rax
  _DWORD *v10; // rcx

  v6 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(*a3 - *a1) >> 2);
  v7 = a4;
  v9 = detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,2,1,detail::liberal_expansion_policy>>::reserve_region(
         a1,
         v6,
         a4);
  if ( v7 )
  {
    v10 = (_DWORD *)(v9 + 8);
    do
    {
      *(v10 - 2) = *(_DWORD *)a5;
      *(v10 - 1) = *(_DWORD *)(a5 + 4);
      *v10 = *(_DWORD *)(a5 + 8);
      v10 += 13;
      *(v10 - 12) = *(_DWORD *)(a5 + 12);
      *(v10 - 11) = *(_DWORD *)(a5 + 16);
      *(v10 - 10) = *(_DWORD *)(a5 + 20);
      *(v10 - 9) = *(_DWORD *)(a5 + 24);
      *(v10 - 8) = *(_DWORD *)(a5 + 28);
      *(v10 - 7) = *(_DWORD *)(a5 + 32);
      *(_OWORD *)(v10 - 6) = *(_OWORD *)(a5 + 36);
      --v7;
    }
    while ( v7 );
  }
  *a2 = *a1 + 52 * v6;
  return a2;
}
