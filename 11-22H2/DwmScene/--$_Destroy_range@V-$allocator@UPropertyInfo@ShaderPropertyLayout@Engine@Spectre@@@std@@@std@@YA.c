/*
 * XREFs of ??$_Destroy_range@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YAXPEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@QEAU1234@AEAV?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@0@@Z @ 0x180081598
 * Callers:
 *     ??$_Uninitialized_move@PEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YAPEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@0@@Z @ 0x180081AF0 (--$_Uninitialized_move@PEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@UPrope.c)
 *     ?_Change_array@?$vector@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXQEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@_K1@Z @ 0x1800839A4 (-_Change_array@-$vector@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@UPropert.c)
 *     ?_Tidy@?$vector@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x180083AE0 (-_Tidy@-$vector@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@UPropertyInfo@Sh.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<Spectre::Engine::ShaderPropertyLayout::PropertyInfo>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      std::string::_Tidy_deallocate(v3);
      v3 += 56LL;
    }
    while ( v3 != a2 );
  }
}
