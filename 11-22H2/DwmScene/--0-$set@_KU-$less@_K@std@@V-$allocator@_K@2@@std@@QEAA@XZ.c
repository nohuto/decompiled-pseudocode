/*
 * XREFs of ??0?$set@_KU?$less@_K@std@@V?$allocator@_K@2@@std@@QEAA@XZ @ 0x1800A09BC
 * Callers:
 *     ??0FramesData@GpuProfiler@Engine@Spectre@@QEAA@AEAVRenderDevice@23@@Z @ 0x1800A0A04 (--0FramesData@GpuProfiler@Engine@Spectre@@QEAA@AEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180028FD4 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

_QWORD *__fastcall std::set<unsigned __int64>::set<unsigned __int64>(_QWORD *a1)
{
  unsigned __int64 size_of; // rax
  _QWORD *v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *a1 = v3;
  return a1;
}
