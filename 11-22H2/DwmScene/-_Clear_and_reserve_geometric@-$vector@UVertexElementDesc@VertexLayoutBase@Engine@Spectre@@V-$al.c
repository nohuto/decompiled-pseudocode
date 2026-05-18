/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18008C420
 * Callers:
 *     ??$_Assign_range@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@AEAAXPEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x18008BA48 (--$_Assign_range@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@-$vector@UVertexElement.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Destroy_range@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@YAXPEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@QEAU1234@AEAV?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@0@@Z @ 0x18007C980 (--$_Destroy_range@V-$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@Y.c)
 */

char *__fastcall std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::_Clear_and_reserve_geometric(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8

  v2 = 0x555555555555555LL;
  if ( a2 > 0x555555555555555LL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 4);
  v5 = v4 >> 1;
  if ( v4 <= 0x555555555555555LL - (v4 >> 1) )
  {
    v2 = v5 + v4;
    if ( v5 + v4 < a2 )
      v2 = a2;
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<Spectre::Engine::VertexLayoutBase::VertexElementDesc>>(*a1, a1[1]);
    std::_Deallocate<16,0>((void *)*a1, 16 * ((a1[2] - *a1) >> 4));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::_Buy_raw(a1, v2);
}
