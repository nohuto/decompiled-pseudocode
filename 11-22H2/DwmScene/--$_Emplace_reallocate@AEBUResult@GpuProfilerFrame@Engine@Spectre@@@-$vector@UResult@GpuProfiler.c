/*
 * XREFs of ??$_Emplace_reallocate@AEBUResult@GpuProfilerFrame@Engine@Spectre@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@QEAAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x18002AB84
 * Callers:
 *     ?GetGpuProfilerResults@RenderOutput@Engine@Spectre@@IEAA?AV?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@XZ @ 0x18002C040 (-GetGpuProfilerResults@RenderOutput@Engine@Spectre@@IEAA-AV-$vector@UResult@GpuProfilerFrame@Eng.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Get_size_of_n@$0JI@@std@@YA_K_K@Z @ 0x18002AF30 (--$_Get_size_of_n@$0JI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_copy@PEAUResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x18002AF5C (--$_Uninitialized_copy@PEAUResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator@UResult@GpuProfi.c)
 *     ??$_Uninitialized_move@PEAUResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x18002AFD0 (--$_Uninitialized_move@PEAUResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator@UResult@GpuProfi.c)
 *     ??0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@AEBU0123@@Z @ 0x18002B6B0 (--0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@AEBU0123@@Z.c)
 *     ?_Calculate_growth@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEBA_K_K@Z @ 0x18002D3B8 (-_Calculate_growth@-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator@UResult@GpuPro.c)
 *     ?_Change_array@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAXQEAUResult@GpuProfilerFrame@Engine@Spectre@@_K1@Z @ 0x18002D400 (-_Change_array@-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator@UResult@GpuProfile.c)
 */

Spectre::Engine::GpuProfilerFrame::Result *__fastcall std::vector<Spectre::Engine::GpuProfilerFrame::Result>::_Emplace_reallocate<Spectre::Engine::GpuProfilerFrame::Result const &>(
        struct Spectre::Engine::GpuProfilerFrame::Result **a1,
        struct Spectre::Engine::GpuProfilerFrame::Result *a2,
        const struct Spectre::Engine::GpuProfilerFrame::Result *a3)
{
  struct Spectre::Engine::GpuProfilerFrame::Result *v3; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 size_of; // rax
  char *v11; // rdi
  Spectre::Engine::GpuProfilerFrame::Result *v12; // rbp
  struct Spectre::Engine::GpuProfilerFrame::Result *v13; // rcx

  v3 = *a1;
  v7 = 0x86BCA1AF286BCA1BuLL * ((a1[1] - *a1) >> 3);
  if ( v7 == 0x1AF286BCA1AF286LL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<Spectre::Engine::GpuProfilerFrame::Result>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<152>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = (Spectre::Engine::GpuProfilerFrame::Result *)&v11[152 * ((a2 - v3) / 152)];
  Spectre::Engine::GpuProfilerFrame::Result::Result(v12, a3);
  v13 = *a1;
  if ( a2 == a1[1] )
  {
    std::_Uninitialized_copy<Spectre::Engine::GpuProfilerFrame::Result *>(v13);
  }
  else
  {
    std::_Uninitialized_move<Spectre::Engine::GpuProfilerFrame::Result *>(v13, a2, v11, a1);
    std::_Uninitialized_move<Spectre::Engine::GpuProfilerFrame::Result *>(a2, a1[1], (char *)v12 + 152, a1);
  }
  std::vector<Spectre::Engine::GpuProfilerFrame::Result>::_Change_array(a1, v11, v8, v9);
  return v12;
}
