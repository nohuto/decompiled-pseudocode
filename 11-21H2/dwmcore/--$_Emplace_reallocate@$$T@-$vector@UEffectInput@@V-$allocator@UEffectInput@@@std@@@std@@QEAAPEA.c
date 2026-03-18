/*
 * XREFs of ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x180252078
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ??$_Get_size_of_n@$0GI@@std@@YA_K_K@Z @ 0x180055338 (--$_Get_size_of_n@$0GI@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInput@@_K1@Z @ 0x180055364 (-_Change_array@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInpu.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180057FC0 (--0EffectInput@@QEAA@AEBU0@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UEffectInput@@@std@@@std@@YAXPEAUEffectInput@@QEAU1@AEAV?$allocator@UEffectInput@@@0@@Z @ 0x1800D73F8 (--$_Destroy_range@V-$allocator@UEffectInput@@@std@@@std@@YAXPEAUEffectInput@@QEAU1@AEAV-$allocat.c)
 */

__int64 __fastcall std::vector<EffectInput>::_Emplace_reallocate<std::nullptr_t>(
        const struct EffectInput **a1,
        const struct EffectInput *a2)
{
  const struct EffectInput *v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  SIZE_T size_of; // rax
  __int64 v11; // r14
  __int64 v12; // r12
  const struct EffectInput *v13; // rbp
  const struct EffectInput *v14; // rbx
  EffectInput *i; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  EffectInput *v18; // rbp
  const struct EffectInput *v19; // rbp
  EffectInput *j; // rbx

  v2 = a2;
  v3 = 0x276276276276276LL;
  v5 = (a2 - *a1) / 104;
  v6 = 0x4EC4EC4EC4EC4EC5LL * ((a1[1] - *a1) >> 3);
  if ( v6 == 0x276276276276276LL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = 0x4EC4EC4EC4EC4EC5LL * ((a1[2] - *a1) >> 3);
  v9 = v8 >> 1;
  if ( v8 <= 0x276276276276276LL - (v8 >> 1) )
  {
    v3 = v9 + v8;
    if ( v9 + v8 < v7 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<104>(v3);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11 + 104 * v5;
  *(_QWORD *)v12 = 0LL;
  *(_QWORD *)(v12 + 8) = 0LL;
  *(_BYTE *)(v12 + 16) = 0;
  *(_OWORD *)(v12 + 48) = 0LL;
  v13 = a1[1];
  v14 = *a1;
  if ( v2 == v13 )
  {
    for ( i = (EffectInput *)v11; ; i = (EffectInput *)((char *)i + 104) )
    {
      v16 = (__int64)i;
      if ( v14 == v13 )
        break;
      EffectInput::EffectInput(i, v14);
      v14 = (const struct EffectInput *)((char *)v14 + 104);
    }
    v17 = (__int64)i;
  }
  else
  {
    v18 = (EffectInput *)v11;
    while ( v14 != v2 )
    {
      EffectInput::EffectInput(v18, v14);
      v18 = (EffectInput *)((char *)v18 + 104);
      v14 = (const struct EffectInput *)((char *)v14 + 104);
    }
    std::_Destroy_range<std::allocator<EffectInput>>((__int64)v18, (__int64)v18);
    v19 = a1[1];
    for ( j = (EffectInput *)(v12 + 104); ; j = (EffectInput *)((char *)j + 104) )
    {
      v16 = (__int64)j;
      if ( v2 == v19 )
        break;
      EffectInput::EffectInput(j, v2);
      v2 = (const struct EffectInput *)((char *)v2 + 104);
    }
    v17 = (__int64)j;
  }
  std::_Destroy_range<std::allocator<EffectInput>>(v16, v17);
  std::vector<EffectInput>::_Change_array(a1, v11, v7, v3);
  return v12;
}
