/*
 * XREFs of ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180017028
 * Callers:
 *     ?_Buy_raw@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K@Z @ 0x18001B54C (-_Buy_raw@-$vector@MV-$allocator@M@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180081A04 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@TValueElement@ShaderPropertyLayout@Engine@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x180085BC0 (-_Clear_and_reserve_geometric@-$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V-$all.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18008F210 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x18009FE54 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Emplace_reallocate@AEBW4D3D_FEATURE_LEVEL@@@?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@QEAAPEAW4D3D_FEATURE_LEVEL@@QEAW42@AEBW42@@Z @ 0x1800DAC64 (--$_Emplace_reallocate@AEBW4D3D_FEATURE_LEVEL@@@-$vector@W4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D.c)
 *     ??$_Emplace_reallocate@W4D3D_FEATURE_LEVEL@@@?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@QEAAPEAW4D3D_FEATURE_LEVEL@@QEAW42@$$QEAW42@@Z @ 0x1800DAD54 (--$_Emplace_reallocate@W4D3D_FEATURE_LEVEL@@@-$vector@W4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D_FE.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180011AC4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<4>(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return 4 * a1;
}
