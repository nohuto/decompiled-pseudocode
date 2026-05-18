/*
 * XREFs of ??$_Destroy_range@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@YAXPEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@QEAU1234@AEAV?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@0@@Z @ 0x18007C980
 * Callers:
 *     ?_Tidy@?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18007E75C (-_Tidy@-$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$allocator@UVertexElementD.c)
 *     ??$_Uninitialized_copy@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@YAPEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@0@@Z @ 0x180086298 (--$_Uninitialized_copy@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$allocator@UVert.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800867F0 (--1-$_Uninitialized_backout_al@V-$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@.c)
 *     ??$_Assign_range@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@AEAAXPEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x18008BA48 (--$_Assign_range@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@-$vector@UVertexElement.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18008C420 (-_Clear_and_reserve_geometric@-$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$al.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<Spectre::Engine::VertexLayoutBase::VertexElementDesc>>(
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
      v3 += 48LL;
    }
    while ( v3 != a2 );
  }
}
