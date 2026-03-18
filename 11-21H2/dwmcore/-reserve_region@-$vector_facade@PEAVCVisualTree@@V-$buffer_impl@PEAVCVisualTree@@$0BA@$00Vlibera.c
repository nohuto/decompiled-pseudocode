/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisualTree@@_K0@Z @ 0x1800C730C
 * Callers:
 *     ?Initialize@CVisualTree@@MEAAJXZ @ 0x1800C7230 (-Initialize@CVisualTree@@MEAAJXZ.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800C73D0 (-ensure_extra_capacity@-$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180191CC0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

__int64 __fastcall detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *v6; // r9
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // r10
  __int64 v13; // r11
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1LL);
  v5 = *a1;
  v6 = (_QWORD *)a1[1];
  *((_QWORD *)&v14 + 1) = 1LL;
  v7 = ((__int64)v6 - v5) >> 3;
  v8 = v7 - a2;
  *(_QWORD *)&v14 = v5 + 8 * v7;
  if ( !(_QWORD)v14 )
    goto LABEL_17;
  v15 = 1LL;
  v9 = v7 - a2;
  if ( v8 > 1 )
    v9 = 1LL;
  v16 = v14;
  v10 = 8 * v9;
  v11 = &v6[v10 / 0xFFFFFFFFFFFFFFF8uLL];
  v17 = 1LL;
  if ( v6 != &v6[v10 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v13 = v16;
    v4 = v17;
    do
    {
      --v6;
      if ( !v13 )
        goto LABEL_17;
      if ( !v4 )
        goto LABEL_17;
      if ( (unsigned __int64)--v4 >= *((_QWORD *)&v16 + 1) )
        goto LABEL_17;
      *(_QWORD *)(v13 + 8 * v4) = *v6;
    }
    while ( v6 != v11 );
  }
  if ( v8 > 1 )
  {
    *(_QWORD *)&v16 = v5;
    *((_QWORD *)&v16 + 1) = v7;
    if ( !v7 || v5 && v7 >= 0 )
    {
      v17 = v7;
      v14 = v16;
      v15 = v7;
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
        &v16,
        v5 + 8 * a2,
        v5 + 8 * (v7 - 1),
        &v14);
      goto LABEL_6;
    }
LABEL_17:
    _o__invalid_parameter_noinfo_noreturn(v4);
    __debugbreak();
    JUMPOUT(0x180166A22LL);
  }
LABEL_6:
  a1[1] += 8LL;
  return v5 + 8 * a2;
}
