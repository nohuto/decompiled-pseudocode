/*
 * XREFs of ??$_Get_size_of_n@$0FI@@std@@YA_K_K@Z @ 0x18002AF04
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18004A7C8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18004CD64 (-_Clear_and_reserve_geometric@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@U.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180011AC4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<88>(unsigned __int64 a1)
{
  if ( a1 > 0x2E8BA2E8BA2E8BALL )
    std::_Throw_bad_array_new_length();
  return 88 * a1;
}
