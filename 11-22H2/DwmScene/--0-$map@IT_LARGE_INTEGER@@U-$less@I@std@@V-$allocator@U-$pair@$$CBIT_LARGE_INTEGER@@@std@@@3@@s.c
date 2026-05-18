/*
 * XREFs of ??0?$map@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@std@@QEAA@XZ @ 0x180030E6C
 * Callers:
 *     ??0GpuProfileData@TelemetryTraceLogger@Utils@Spectre@@QEAA@XZ @ 0x1800314DC (--0GpuProfileData@TelemetryTraceLogger@Utils@Spectre@@QEAA@XZ.c)
 *     ??0ResourceManager@Engine@Spectre@@QEAA@XZ @ 0x18006FFFC (--0ResourceManager@Engine@Spectre@@QEAA@XZ.c)
 *     ??0RenderOutputD3D11@D3D11@Engine@Spectre@@IEAA@UOutputDescription@23@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@Z @ 0x1800C8B40 (--0RenderOutputD3D11@D3D11@Engine@Spectre@@IEAA@UOutputDescription@23@V-$shared_ptr@VRenderDevic.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x18002F1D0 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 */

_QWORD *__fastcall std::map<unsigned int,_LARGE_INTEGER>::map<unsigned int,_LARGE_INTEGER>(_QWORD *a1)
{
  unsigned __int64 size_of; // rax
  _QWORD *v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *a1 = v3;
  return a1;
}
