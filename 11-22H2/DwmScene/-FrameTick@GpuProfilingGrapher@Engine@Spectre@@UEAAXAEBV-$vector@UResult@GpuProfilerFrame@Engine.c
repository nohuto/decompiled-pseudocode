/*
 * XREFs of ?FrameTick@GpuProfilingGrapher@Engine@Spectre@@UEAAXAEBV?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@@Z @ 0x1800741A0
 * Callers:
 *     ?UpdateGpuProfiler@RenderOutput@Engine@Spectre@@UEAAXH@Z @ 0x18002CDC0 (-UpdateGpuProfiler@RenderOutput@Engine@Spectre@@UEAAXH@Z.c)
 * Callees:
 *     ??4Result@GpuProfilerFrame@Engine@Spectre@@QEAAAEAU0123@AEBU0123@@Z @ 0x18007409C (--4Result@GpuProfilerFrame@Engine@Spectre@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@2@$00@std@@@std@@QEAAXXZ @ 0x180074298 (-clear@-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UMa.c)
 */

__int64 __fastcall Spectre::Engine::GpuProfilingGrapher::FrameTick(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 i; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 result; // rax

  v2 = a2[1];
  for ( i = *a2; i != v2; i += 152LL )
  {
    v5 = a1[1];
    v6 = a1[4];
    v7 = (v6 + 1) % (0x86BCA1AF286BCA1BuLL * ((a1[2] - v5) >> 3));
    a1[4] = v7;
    v8 = v5 + 152 * v7;
    if ( *(_BYTE *)(i + 120) )
    {
      result = Spectre::Engine::GpuProfilerFrame::Result::operator=(v8, i);
    }
    else
    {
      Spectre::Engine::GpuProfilerFrame::Result::operator=(v8, v5 + 152 * v6);
      *(_BYTE *)(v8 + 120) = 0;
      *(_QWORD *)(v8 + 128) = *(_QWORD *)(i + 128);
      result = std::_Tree<std::_Tmap_traits<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>,1>>::clear(v8 + 136);
    }
  }
  return result;
}
