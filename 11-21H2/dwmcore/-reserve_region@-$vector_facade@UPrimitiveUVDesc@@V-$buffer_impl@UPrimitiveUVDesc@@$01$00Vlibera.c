/*
 * XREFs of ?reserve_region@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUPrimitiveUVDesc@@_K0@Z @ 0x1801E40E8
 * Callers:
 *     ?insert@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UPrimitiveUVDesc@@@2@V?$basic_iterator@$$CBUPrimitiveUVDesc@@@2@_KAEBUPrimitiveUVDesc@@@Z @ 0x1801E3D8C (-insert@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expans.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x1801E2B2C (--$move_backward@V-$move_iterator@PEAUPrimitiveUVDesc@@@std@@V-$checked_array_iterator@PEAUPrimi.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@UPrimitiveUVDesc@@@detail@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@detail@@YAXV?$basic_iterator@UPrimitiveUVDesc@@@0@0V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@Z @ 0x1801E2D9C (--$move_backward_uninitialized@V-$basic_iterator@UPrimitiveUVDesc@@@detail@@V-$checked_array_ite.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801E3B78 (-ensure_extra_capacity@-$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@.c)
 */

__int64 __fastcall detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,2,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rcx
  __int64 v12; // xmm1_8
  __int64 v13; // r8
  __int64 v14; // rbx
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+30h] [rbp-30h]
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-10h]
  __int64 v20; // [rsp+90h] [rbp+30h] BYREF
  __int64 v21; // [rsp+98h] [rbp+38h] BYREF

  detail::buffer_impl<PrimitiveUVDesc,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, a3);
  v6 = *a1;
  v7 = 0x4EC4EC4EC4EC4EC5LL;
  v8 = a1[1];
  *((_QWORD *)&v16 + 1) = a3;
  v9 = 0x4EC4EC4EC4EC4EC5LL * ((v8 - v6) >> 2);
  v10 = v9 - a2;
  *(_QWORD *)&v16 = v6 + 4 * ((v8 - v6) >> 2);
  if ( a3 )
  {
    if ( !(v6 + 4 * ((v8 - v6) >> 2)) )
    {
LABEL_11:
      _o__invalid_parameter_noinfo_noreturn(v7);
      __debugbreak();
      goto LABEL_12;
    }
    if ( (a3 & 0x8000000000000000uLL) != 0LL )
    {
      v7 = -(__int64)a3;
      goto LABEL_11;
    }
  }
  v20 = v8;
  v17 = a3;
  v11 = a3;
  v18 = v16;
  if ( a3 >= v10 )
    v11 = v9 - a2;
  v19 = a3;
  v21 = v8 - 52 * v11;
  detail::move_backward_uninitialized<detail::basic_iterator<PrimitiveUVDesc>,stdext::checked_array_iterator<PrimitiveUVDesc *>>(
    (__int64)&v21,
    &v20,
    (__int64 *)&v18);
  if ( v10 <= a3 )
  {
    v14 = 52 * a2;
    goto LABEL_14;
  }
  *(_QWORD *)&v16 = v6;
  *((_QWORD *)&v16 + 1) = v9;
  if ( v9 && (!v6 || v9 < 0) )
    goto LABEL_11;
LABEL_12:
  v17 = v9;
  v12 = v9;
  v18 = v16;
  v13 = 52 * (v9 - a3);
  v14 = 52 * a2;
  v19 = v12;
  std::move_backward<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>(
    (__int64)&v16,
    52 * a2 + v6,
    v6 + v13,
    &v18);
LABEL_14:
  a1[1] += 52 * a3;
  return v14 + v6;
}
