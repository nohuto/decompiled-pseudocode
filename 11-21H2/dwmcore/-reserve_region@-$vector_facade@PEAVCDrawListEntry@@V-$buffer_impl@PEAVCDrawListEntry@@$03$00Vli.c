/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x1801E3E4C
 * Callers:
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801E30C4 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180191CC0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801BFFE4 (-ensure_extra_capacity@-$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@PEAVCDrawListEntry@@@detail@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@detail@@YAXV?$basic_iterator@PEAVCDrawListEntry@@@0@0V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@Z @ 0x1801E2D40 (--$move_backward_uninitialized@V-$basic_iterator@PEAVCDrawListEntry@@@detail@@V-$checked_array_i.c)
 */

char *__fastcall detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::reserve_region(
        const void **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  char *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  char *v10; // r13
  __int64 v11; // rcx
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+50h] BYREF

  v18 = a3;
  detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1uLL);
  v6 = (char *)*a1;
  v7 = (__int64)a1[1];
  *((_QWORD *)&v13 + 1) = 1LL;
  v8 = (v7 - (__int64)v6) >> 3;
  v9 = v8 - a2;
  v10 = &v6[8 * v8];
  *(_QWORD *)&v13 = v10;
  if ( !v10 )
    goto LABEL_10;
  v18 = v7;
  v14 = 1LL;
  v11 = v8 - a2;
  v15 = v13;
  if ( v9 > 1 )
    v11 = 1LL;
  v16 = 1LL;
  v17 = v7 - 8 * v11;
  detail::move_backward_uninitialized<detail::basic_iterator<CDrawListEntry *>,stdext::checked_array_iterator<CDrawListEntry * *>>(
    (unsigned __int64)&v17,
    &v18,
    (__int64 *)&v15);
  if ( v9 > 1 )
  {
    *(_QWORD *)&v13 = v6;
    *((_QWORD *)&v13 + 1) = v8;
    if ( !v8 || v6 && v8 >= 0 )
    {
      v14 = v8;
      v15 = v13;
      v16 = v8;
      std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
        (__int64)&v13,
        &v6[8 * a2],
        (__int64)(v10 - 8),
        (__int64 *)&v15);
      goto LABEL_9;
    }
LABEL_10:
    _o__invalid_parameter_noinfo_noreturn(v5);
    __debugbreak();
    JUMPOUT(0x1801E3F66LL);
  }
LABEL_9:
  a1[1] = (char *)a1[1] + 8;
  return &v6[8 * a2];
}
