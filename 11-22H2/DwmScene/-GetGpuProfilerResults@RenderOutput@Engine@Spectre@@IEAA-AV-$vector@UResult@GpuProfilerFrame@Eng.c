/*
 * XREFs of ?GetGpuProfilerResults@RenderOutput@Engine@Spectre@@IEAA?AV?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@XZ @ 0x18002C040
 * Callers:
 *     ?UpdateGpuProfiler@RenderOutput@Engine@Spectre@@UEAAXH@Z @ 0x18002CDC0 (-UpdateGpuProfiler@RenderOutput@Engine@Spectre@@UEAAXH@Z.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ??$_Emplace_reallocate@AEBUResult@GpuProfilerFrame@Engine@Spectre@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@QEAAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x18002AB84 (--$_Emplace_reallocate@AEBUResult@GpuProfilerFrame@Engine@Spectre@@@-$vector@UResult@GpuProfiler.c)
 *     ??$_Emplace_reallocate@UResult@GpuProfilerFrame@Engine@Spectre@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@QEAAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU2345@$$QEAU2345@@Z @ 0x18002ACA8 (--$_Emplace_reallocate@UResult@GpuProfilerFrame@Engine@Spectre@@@-$vector@UResult@GpuProfilerFra.c)
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18002ADCC (--$_Erase_head@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ??$construct@UResult@GpuProfilerFrame@Engine@Spectre@@U1234@@?$_Default_allocator_traits@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@SAXAEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@1@QEAUResult@GpuProfilerFrame@Engine@Spectre@@$$QEAU3456@@Z @ 0x18002B044 (--$construct@UResult@GpuProfilerFrame@Engine@Spectre@@U1234@@-$_Default_allocator_traits@V-$allo.c)
 *     ??0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@AEBU0123@@Z @ 0x18002B6B0 (--0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@AEBU0123@@Z.c)
 *     ??0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ @ 0x18002B740 (--0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ.c)
 *     ?GetResultForFrame@GpuProfiler@Engine@Spectre@@QEAA?AW4FrameQueryResult@123@_KAEAUResult@GpuProfilerFrame@23@@Z @ 0x1800A13A4 (-GetResultForFrame@GpuProfiler@Engine@Spectre@@QEAA-AW4FrameQueryResult@123@_KAEAUResult@GpuProf.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Engine::RenderOutput::GetGpuProfilerResults(_QWORD *a1, __int64 a2)
{
  int ResultForFrame; // eax
  Spectre::Engine::GpuProfilerFrame::Result *v6; // rax
  __int64 v7; // rcx
  struct Spectre::Engine::GpuProfilerFrame::Result *v8; // rdx
  _BYTE v9[136]; // [rsp+38h] [rbp-D0h] BYREF
  void *v10[3]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v11[136]; // [rsp+D8h] [rbp-30h] BYREF
  void *v12[3]; // [rsp+160h] [rbp+58h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  while ( a1[51] < a1[60] )
  {
    Spectre::Engine::GpuProfilerFrame::Result::Result((Spectre::Engine::GpuProfilerFrame::Result *)v9);
    ResultForFrame = Spectre::Engine::GpuProfiler::GetResultForFrame(a1[55], a1[51], v9);
    if ( ResultForFrame )
    {
      if ( ((ResultForFrame - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( ((ResultForFrame - 1) & 0xFFFFFFFD) == 0 )
        {
          std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>(
            v10,
            (__int64)v10);
          return a2;
        }
      }
      else
      {
        memset_0(v11, 0, 0x98uLL);
        v6 = Spectre::Engine::GpuProfilerFrame::Result::Result((Spectre::Engine::GpuProfilerFrame::Result *)v11);
        v8 = *(struct Spectre::Engine::GpuProfilerFrame::Result **)(a2 + 8);
        if ( v8 == *(struct Spectre::Engine::GpuProfilerFrame::Result **)(a2 + 16) )
        {
          std::vector<Spectre::Engine::GpuProfilerFrame::Result>::_Emplace_reallocate<Spectre::Engine::GpuProfilerFrame::Result>(
            (struct Spectre::Engine::GpuProfilerFrame::Result **)a2,
            v8,
            (__int64)v6);
        }
        else
        {
          std::_Default_allocator_traits<std::allocator<Spectre::Engine::GpuProfilerFrame::Result>>::construct<Spectre::Engine::GpuProfilerFrame::Result,Spectre::Engine::GpuProfilerFrame::Result>(
            v7,
            (__int64)v8,
            (__int64)v6);
          *(_QWORD *)(a2 + 8) += 152LL;
        }
        std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>(
          v12,
          (__int64)v12);
      }
    }
    else if ( *(_QWORD *)(a2 + 8) == *(_QWORD *)(a2 + 16) )
    {
      std::vector<Spectre::Engine::GpuProfilerFrame::Result>::_Emplace_reallocate<Spectre::Engine::GpuProfilerFrame::Result const &>(
        (struct Spectre::Engine::GpuProfilerFrame::Result **)a2,
        *(struct Spectre::Engine::GpuProfilerFrame::Result **)(a2 + 8),
        (const struct Spectre::Engine::GpuProfilerFrame::Result *)v9);
    }
    else
    {
      Spectre::Engine::GpuProfilerFrame::Result::Result(
        *(Spectre::Engine::GpuProfilerFrame::Result **)(a2 + 8),
        (const struct Spectre::Engine::GpuProfilerFrame::Result *)v9);
      *(_QWORD *)(a2 + 8) += 152LL;
    }
    ++a1[51];
    std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>(
      v10,
      (__int64)v10);
  }
  return a2;
}
