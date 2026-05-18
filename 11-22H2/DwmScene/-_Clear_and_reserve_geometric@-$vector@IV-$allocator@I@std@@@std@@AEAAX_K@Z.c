/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x18001F628
 * Callers:
 *     ??$_Assign_range@PEAI@?$vector@IV?$allocator@I@std@@@std@@AEAAXPEAI0Uforward_iterator_tag@1@@Z @ 0x18001E8A4 (--$_Assign_range@PEAI@-$vector@IV-$allocator@I@std@@@std@@AEAAXPEAI0Uforward_iterator_tag@1@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ?_Calculate_growth@?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@AEBA_K_K@Z @ 0x18001F4CC (-_Calculate_growth@-$vector@W4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@A.c)
 */

char *__fastcall std::vector<unsigned int>::_Clear_and_reserve_geometric(void **a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v3 = std::vector<enum D3D_FEATURE_LEVEL>::_Calculate_growth(a1, a2);
  if ( *a1 )
  {
    std::_Deallocate<16,0>(*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFFCuLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return std::vector<float>::_Buy_raw(a1, v3);
}
