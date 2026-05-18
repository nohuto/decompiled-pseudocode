/*
 * XREFs of ??$_Destroy_range@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAXPEAURenderPassInfo@Camera@Engine@Spectre@@QEAU1234@AEAV?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@0@@Z @ 0x180058948
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180058C18 (--$_Resize@U_Value_init_tag@std@@@-$vector@URenderPassInfo@Camera@Engine@Spectre@@V-$allocator@U.c)
 *     ??$_Uninitialized_move@PEAURenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAPEAURenderPassInfo@Camera@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@0@@Z @ 0x180058EC4 (--$_Uninitialized_move@PEAURenderPassInfo@Camera@Engine@Spectre@@V-$allocator@URenderPassInfo@Ca.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAPEAURenderPassInfo@Camera@Engine@Spectre@@PEAU1234@_KAEAV?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@0@@Z @ 0x180058F4C (--$_Uninitialized_value_construct_n@V-$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@s.c)
 *     ?_Change_array@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEAAXQEAURenderPassInfo@Camera@Engine@Spectre@@_K1@Z @ 0x18005E638 (-_Change_array@-$vector@URenderPassInfo@Camera@Engine@Spectre@@V-$allocator@URenderPassInfo@Came.c)
 *     ?_Tidy@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18005E800 (-_Tidy@-$vector@URenderPassInfo@Camera@Engine@Spectre@@V-$allocator@URenderPassInfo@Camera@Engin.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<Spectre::Engine::Camera::RenderPassInfo>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  std::_Ref_count_base *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(std::_Ref_count_base **)(v3 + 40);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      v3 += 48LL;
    }
    while ( v3 != a2 );
  }
}
