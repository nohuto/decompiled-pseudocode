/*
 * XREFs of ??$_Destroy_range@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAXPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU1234@AEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x18002AA18
 * Callers:
 *     ??$_Uninitialized_copy@PEAUResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x18002AF5C (--$_Uninitialized_copy@PEAUResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator@UResult@GpuProfi.c)
 *     ??$_Uninitialized_move@PEAUResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x18002AFD0 (--$_Uninitialized_move@PEAUResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator@UResult@GpuProfi.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18002B840 (--1-$_Uninitialized_backout_al@V-$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@.c)
 *     ?_Change_array@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAXQEAUResult@GpuProfilerFrame@Engine@Spectre@@_K1@Z @ 0x18002D400 (-_Change_array@-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator@UResult@GpuProfile.c)
 *     ?_Tidy@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18002D504 (-_Tidy@-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator@UResult@GpuProfilerFrame@E.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180073E58 (--$_Resize@U_Value_init_tag@std@@@-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAPEAUResult@GpuProfilerFrame@Engine@Spectre@@PEAU1234@_KAEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x180073FA0 (--$_Uninitialized_value_construct_n@V-$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18002ADCC (--$_Erase_head@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Spectre::Engine::GpuProfilerFrame::Result>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 136;
    do
    {
      std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>(
        v3,
        v3);
      v3 += 152LL;
      result = v3 - 136;
    }
    while ( v3 - 136 != a2 );
  }
  return result;
}
