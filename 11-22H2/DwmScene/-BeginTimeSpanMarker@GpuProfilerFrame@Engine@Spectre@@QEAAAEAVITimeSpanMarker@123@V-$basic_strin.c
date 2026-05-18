/*
 * XREFs of ?BeginTimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@QEAAAEAVITimeSpanMarker@123@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VCommandList@Engine@Spectre@@@6@@Z @ 0x1800A2B30
 * Callers:
 *     ?BeginTimeSpanMarker@FramesData@GpuProfiler@Engine@Spectre@@QEAA?AV?$weak_ptr@VITimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@@std@@_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@6@@Z @ 0x1800A0F9C (-BeginTimeSpanMarker@FramesData@GpuProfiler@Engine@Spectre@@QEAA-AV-$weak_ptr@VITimeSpanMarker@G.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ?StringToWString@Utils@Spectre@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x18001F208 (-StringToWString@Utils@Spectre@@YA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@.c)
 *     ??1MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ @ 0x1800A0D94 (--1MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ.c)
 *     ??$_Emplace@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@@2@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@_N@1@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAVMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@Z @ 0x1800A2374 (--$_Emplace@AEAV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@VMarkerQueryData@Gp.c)
 *     ??0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@W4MarkerType@123@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@1AEAVRenderDevice@23@@Z @ 0x1800A2708 (--0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@W4MarkerType@123@V-$shared_ptr@VCommand.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Spectre::Engine::GpuProfilerFrame::BeginTimeSpanMarker(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // r9
  __int64 Data; // rax
  __int64 v10; // rbx
  std::_Ref_count_base *v11; // rcx
  _QWORD v13[3]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v16[400]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v17; // [rsp+1F8h] [rbp+F8h]
  _BYTE v18[32]; // [rsp+200h] [rbp+100h] BYREF

  v17 = a2;
  v13[2] = a3;
  Spectre::Utils::StringToWString((__int64)v18, a2);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a3 + 64LL))(*a3, v18);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v14,
    (_QWORD *)(a1 + 896));
  v6 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v15,
         a3);
  Data = Spectre::Engine::GpuProfilerFrame::MarkerQueryData::MarkerQueryData((__int64)v16, 1, v6, v8, v7);
  std::_Tree<std::_Tmap_traits<std::string,Spectre::Engine::GpuProfilerFrame::MarkerQueryData,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerQueryData>>,1>>::_Emplace<std::string &,Spectre::Engine::GpuProfilerFrame::MarkerQueryData>(
    (_QWORD *)(a1 + 880),
    (__int64)v13,
    (__int64)a2,
    Data);
  Spectre::Engine::GpuProfilerFrame::MarkerQueryData::~MarkerQueryData((Spectre::Engine::GpuProfilerFrame::MarkerQueryData *)v16);
  v10 = v13[0];
  std::wstring::_Tidy_deallocate((__int64)v18);
  std::string::_Tidy_deallocate((__int64)a2);
  v11 = (std::_Ref_count_base *)a3[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return v10 + 64;
}
