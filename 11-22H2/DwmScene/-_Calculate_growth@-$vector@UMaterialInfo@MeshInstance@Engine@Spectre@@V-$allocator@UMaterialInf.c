/*
 * XREFs of ?_Calculate_growth@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEBA_K_K@Z @ 0x18004CC90
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18004A7C8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18004CD64 (-_Clear_and_reserve_geometric@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@U.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::_Calculate_growth(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax
  unsigned __int64 v4; // r9

  v2 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[2] - *a1) >> 3);
  result = 0x2E8BA2E8BA2E8BALL;
  v4 = v2 >> 1;
  if ( v2 <= 0x2E8BA2E8BA2E8BALL - (v2 >> 1) )
  {
    result = v4 + v2;
    if ( v4 + v2 < a2 )
      return a2;
  }
  return result;
}
