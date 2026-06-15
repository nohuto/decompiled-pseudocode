/*
 * XREFs of ?_Buy_raw@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z @ 0x1800DD908
 * Callers:
 *     ?_Clear_and_reserve_geometric@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z @ 0x1800DD94C (-_Clear_and_reserve_geometric@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z.c)
 *     ?CompareEffectTogglesProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180105A60 (-CompareEffectTogglesProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeP.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180027A18 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<_GUID>::_Buy_raw(_QWORD *a1, unsigned __int64 a2)
{
  SIZE_T size_of; // rax
  char *result; // rax

  size_of = std::_Get_size_of_n<16>(a2);
  result = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = result;
  a1[1] = result;
  a1[2] = &result[16 * a2];
  return result;
}
