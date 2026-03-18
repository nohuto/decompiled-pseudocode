/*
 * XREFs of ?reserve_region@?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUConstantBufferRow@CCustomKernelEffect@@_K0@Z @ 0x1800C6EA0
 * Callers:
 *     ??$insert@V?$span_iterator@$$CBUKernelTap@@@details@gsl@@X@?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UConstantBufferRow@CCustomKernelEffect@@@1@V?$basic_iterator@$$CBUConstantBufferRow@CCustomKernelEffect@@@1@V?$span_iterator@$$CBUKernelTap@@@details@gsl@@1@Z @ 0x1800C6D54 (--$insert@V-$span_iterator@$$CBUKernelTap@@@details@gsl@@X@-$vector_facade@UConstantBufferRow@CC.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800C6F7C (-ensure_extra_capacity@-$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expa.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x180190250 (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 */

__int64 __fastcall detail::vector_facade<CCustomKernelEffect::ConstantBufferRow,detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  char *v6; // rcx
  __int64 v7; // rsi
  char *v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // rcx
  char *v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // r9
  __int128 v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+30h] [rbp-30h]
  __int128 v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v7 = *a1;
  v8 = (char *)a1[1];
  *((_QWORD *)&v18 + 1) = a3;
  v9 = (__int64)&v8[-v7] >> 4;
  v10 = v9 - a2;
  v11 = v7 + 16 * v9;
  *(_QWORD *)&v18 = v11;
  if ( a3 && (!v11 || a3 < 0) )
  {
LABEL_20:
    _o__invalid_parameter_noinfo_noreturn(v6);
    __debugbreak();
LABEL_21:
    v21 = v9;
    v14 = 16 * a2;
    v18 = v20;
    v19 = v9;
    std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
      &v20,
      v14 + v7,
      v7 + 16 * (v9 - a3),
      &v18);
    goto LABEL_9;
  }
  v19 = a3;
  v12 = a3;
  if ( a3 >= v10 )
    v12 = v9 - a2;
  v20 = v18;
  v6 = (char *)(16 * v12);
  v13 = (char *)(v8 - v6);
  v21 = a3;
  if ( v8 != (char *)(v8 - v6) )
  {
    v16 = v21;
    v6 = (char *)(v11 + 16 * a3);
    v17 = a3;
    do
    {
      v8 -= 16;
      if ( !(_QWORD)v20 )
        goto LABEL_20;
      if ( !v17 )
        goto LABEL_20;
      v17 = v16 - 1;
      v6 -= 16;
      v16 = v17;
      if ( v17 >= *((_QWORD *)&v20 + 1) )
        goto LABEL_20;
      *(_OWORD *)v6 = *(_OWORD *)v8;
    }
    while ( v8 != v13 );
  }
  if ( v10 > a3 )
  {
    *(_QWORD *)&v20 = v7;
    *((_QWORD *)&v20 + 1) = v9;
    if ( !v9 || v7 && v9 >= 0 )
      goto LABEL_21;
    goto LABEL_20;
  }
  v14 = 16 * a2;
LABEL_9:
  a1[1] += 16 * a3;
  return v14 + v7;
}
