/*
 * XREFs of ?Stamp@GpuProfilerFrame@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VCommandList@Engine@Spectre@@@5@@Z @ 0x1800A38C8
 * Callers:
 *     ?StampMarker@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@6@@Z @ 0x1800A1500 (-StampMarker@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_KAEBV-$basic_string@DU-$char_traits@D.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ @ 0x1800A0D94 (--1MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ.c)
 *     ??$_Emplace@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@@2@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@_N@1@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAVMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@Z @ 0x1800A2374 (--$_Emplace@AEAV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@VMarkerQueryData@Gp.c)
 *     ??0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@W4MarkerType@123@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@1AEAVRenderDevice@23@@Z @ 0x1800A2708 (--0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@W4MarkerType@123@V-$shared_ptr@VCommand.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::GpuProfilerFrame::Stamp(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // r9
  __int64 Data; // rax
  std::_Ref_count_base *v10; // rcx
  _BYTE v11[16]; // [rsp+30h] [rbp-1F8h] BYREF
  _QWORD *v12; // [rsp+40h] [rbp-1E8h]
  __int64 v13; // [rsp+48h] [rbp-1E0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-1D0h] BYREF
  _BYTE v15[400]; // [rsp+68h] [rbp-1C0h] BYREF
  __int64 v16; // [rsp+1F8h] [rbp-30h]

  v16 = a2;
  v12 = a3;
  v5 = (_QWORD *)(a1 + 880);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v13,
    (_QWORD *)(a1 + 896));
  v6 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v14,
         a3);
  Data = Spectre::Engine::GpuProfilerFrame::MarkerQueryData::MarkerQueryData((__int64)v15, 0, v6, v8, v7);
  std::_Tree<std::_Tmap_traits<std::string,Spectre::Engine::GpuProfilerFrame::MarkerQueryData,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerQueryData>>,1>>::_Emplace<std::string &,Spectre::Engine::GpuProfilerFrame::MarkerQueryData>(
    v5,
    (__int64)v11,
    a2,
    Data);
  Spectre::Engine::GpuProfilerFrame::MarkerQueryData::~MarkerQueryData((Spectre::Engine::GpuProfilerFrame::MarkerQueryData *)v15);
  std::string::_Tidy_deallocate(a2);
  v10 = (std::_Ref_count_base *)a3[1];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
}
