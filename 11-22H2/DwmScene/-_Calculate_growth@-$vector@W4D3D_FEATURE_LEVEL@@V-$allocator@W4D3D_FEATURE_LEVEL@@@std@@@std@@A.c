/*
 * XREFs of ?_Calculate_growth@?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@AEBA_K_K@Z @ 0x18001F4CC
 * Callers:
 *     ?_Clear_and_reserve_geometric@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x18001F628 (-_Clear_and_reserve_geometric@-$vector@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180081A04 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@TValueElement@ShaderPropertyLayout@Engine@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x180085BC0 (-_Clear_and_reserve_geometric@-$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V-$all.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18008F210 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x18009FE54 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Emplace_reallocate@AEBW4D3D_FEATURE_LEVEL@@@?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@QEAAPEAW4D3D_FEATURE_LEVEL@@QEAW42@AEBW42@@Z @ 0x1800DAC64 (--$_Emplace_reallocate@AEBW4D3D_FEATURE_LEVEL@@@-$vector@W4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D.c)
 *     ??$_Emplace_reallocate@W4D3D_FEATURE_LEVEL@@@?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@QEAAPEAW4D3D_FEATURE_LEVEL@@QEAW42@$$QEAW42@@Z @ 0x1800DAD54 (--$_Emplace_reallocate@W4D3D_FEATURE_LEVEL@@@-$vector@W4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D_FE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<enum D3D_FEATURE_LEVEL>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x3FFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 2;
  v4 = v3 >> 1;
  if ( v3 <= 0x3FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
