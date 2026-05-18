/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18001B5F8
 * Callers:
 *     ??$_Assign_range@PEAW4EShaderModel@Engine@Spectre@@@?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@AEAAXPEAW4EShaderModel@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x180016C68 (--$_Assign_range@PEAW4EShaderModel@Engine@Spectre@@@-$vector@W4EShaderModel@Engine@Spectre@@V-$a.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 */

char *__fastcall std::vector<enum Spectre::Engine::EShaderModel>::_Clear_and_reserve_geometric(
        void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  _BYTE *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9

  v2 = 0x3FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v5 = *a1;
  v6 = ((_BYTE *)a1[2] - v5) >> 2;
  v7 = v6 >> 1;
  if ( v6 <= 0x3FFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v7 + v6;
    if ( v7 + v6 < a2 )
      v2 = a2;
  }
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, 4 * v6);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return std::vector<float>::_Buy_raw(a1, v2);
}
