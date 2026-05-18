/*
 * XREFs of ??$_Emplace_reallocate@AEBUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@?$vector@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@QEAAPEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x180081608
 * Callers:
 *     ?AddArrayProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@23@I@Z @ 0x1800820CC (-AddArrayProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBV-$basic_str.c)
 *     ?AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180082518 (-AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDe.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180027BD4 (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YAPEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@0@@Z @ 0x180081AF0 (--$_Uninitialized_move@PEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@UPrope.c)
 *     ??$construct@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBU1234@@?$_Default_allocator_traits@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@SAXAEAV?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@1@QEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBU3456@@Z @ 0x180081C64 (--$construct@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBU1234@@-$_Default_allocator_t.c)
 *     ?_Change_array@?$vector@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXQEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@_K1@Z @ 0x1800839A4 (-_Change_array@-$vector@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@UPropert.c)
 */

char *__fastcall std::vector<Spectre::Engine::ShaderPropertyLayout::PropertyInfo>::_Emplace_reallocate<Spectre::Engine::ShaderPropertyLayout::PropertyInfo const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r14
  __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rdi
  char *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdx
  char *v17; // r8
  __int64 v18; // rcx

  v4 = 0x492492492492492LL;
  v7 = (a2 - *a1) / 56;
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 3);
  if ( v8 == 0x492492492492492LL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x492492492492492LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<56>(v4);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[56 * v7];
  std::_Default_allocator_traits<std::allocator<Spectre::Engine::ShaderPropertyLayout::PropertyInfo>>::construct<Spectre::Engine::ShaderPropertyLayout::PropertyInfo,Spectre::Engine::ShaderPropertyLayout::PropertyInfo const &>(
    v15,
    v14,
    a3);
  v16 = a1[1];
  v17 = v13;
  v18 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<Spectre::Engine::ShaderPropertyLayout::PropertyInfo *>(v18, a2, v13);
    v16 = a1[1];
    v17 = v14 + 56;
    v18 = a2;
  }
  std::_Uninitialized_move<Spectre::Engine::ShaderPropertyLayout::PropertyInfo *>(v18, v16, v17);
  std::vector<Spectre::Engine::ShaderPropertyLayout::PropertyInfo>::_Change_array(a1, v13, v9, v4);
  return v14;
}
