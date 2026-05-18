/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180073EEC
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180073E58 (--$_Resize@U_Value_init_tag@std@@@-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0JI@@std@@YA_K_K@Z @ 0x18002AF30 (--$_Get_size_of_n@$0JI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_copy@PEAUResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x18002AF5C (--$_Uninitialized_copy@PEAUResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator@UResult@GpuProfi.c)
 *     ?_Calculate_growth@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEBA_K_K@Z @ 0x18002D3B8 (-_Calculate_growth@-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator@UResult@GpuPro.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAPEAUResult@GpuProfilerFrame@Engine@Spectre@@PEAU1234@_KAEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x180073FA0 (--$_Uninitialized_value_construct_n@V-$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@.c)
 */

__int64 __fastcall std::vector<Spectre::Engine::GpuProfilerFrame::Result>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 size_of; // rax
  Spectre::Engine::GpuProfilerFrame::Result *v5; // rbx

  v1 = 0x86BCA1AF286BCA1BuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v3 = std::vector<Spectre::Engine::GpuProfilerFrame::Result>::_Calculate_growth((_QWORD *)a1, 0xF0uLL);
  size_of = std::_Get_size_of_n<152>(v3);
  v5 = (Spectre::Engine::GpuProfilerFrame::Result *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_value_construct_n<std::allocator<Spectre::Engine::GpuProfilerFrame::Result>>((Spectre::Engine::GpuProfilerFrame::Result *)((char *)v5 + 152 * v1));
  std::_Uninitialized_copy<Spectre::Engine::GpuProfilerFrame::Result *>(
    *(struct Spectre::Engine::GpuProfilerFrame::Result **)a1,
    *(const struct Spectre::Engine::GpuProfilerFrame::Result **)(a1 + 8),
    v5);
  return std::vector<Spectre::Engine::GpuProfilerFrame::Result>::_Change_array(a1, (__int64)v5, 240LL, v3);
}
