/*
 * XREFs of ??0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@W4MarkerType@123@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@1AEAVRenderDevice@23@@Z @ 0x1800A2708
 * Callers:
 *     ?BeginTimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@QEAAAEAVITimeSpanMarker@123@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VCommandList@Engine@Spectre@@@6@@Z @ 0x1800A2B30 (-BeginTimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@QEAAAEAVITimeSpanMarker@123@V-$basic_strin.c)
 *     ?Stamp@GpuProfilerFrame@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VCommandList@Engine@Spectre@@@5@@Z @ 0x1800A38C8 (-Stamp@GpuProfilerFrame@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetQuery@RenderDevice@Engine@Spectre@@QEAA?AVRenderDeviceQuery@23@W4QueryType@GpuQuery@23@@Z @ 0x1800267C4 (-GetQuery@RenderDevice@Engine@Spectre@@QEAA-AVRenderDeviceQuery@23@W4QueryType@GpuQuery@23@@Z.c)
 *     ??0RenderDeviceQuery@Engine@Spectre@@QEAA@XZ @ 0x1800A1B5C (--0RenderDeviceQuery@Engine@Spectre@@QEAA@XZ.c)
 *     ??BRenderDeviceQuery@Engine@Spectre@@QEBA_NXZ @ 0x1800A1D74 (--BRenderDeviceQuery@Engine@Spectre@@QEBA_NXZ.c)
 *     ?End@RenderDeviceQuery@Engine@Spectre@@QEAAXV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@0@Z @ 0x1800A1E04 (-End@RenderDeviceQuery@Engine@Spectre@@QEAAXV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@0@Z.c)
 *     ??0SharedMutex@Utils@Spectre@@QEAA@XZ @ 0x1800E0CE0 (--0SharedMutex@Utils@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Spectre::Engine::GpuProfilerFrame::MarkerQueryData::MarkerQueryData(
        __int64 a1,
        int a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5)
{
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilerFrame::MarkerQueryData::`vftable';
  Spectre::Utils::SharedMutex::SharedMutex((Spectre::Utils::SharedMutex *)(a1 + 8));
  *(_DWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a5;
  Spectre::Engine::RenderDevice::GetQuery(a5, a1 + 32, 1u);
  Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery((Spectre::Engine::RenderDeviceQuery *)(a1 + 216));
  if ( Spectre::Engine::RenderDeviceQuery::operator bool() )
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v14, a4);
    v9 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v15,
           a3);
    Spectre::Engine::RenderDeviceQuery::End(a1 + 32, v9, v10);
  }
  v11 = (std::_Ref_count_base *)a3[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  v12 = (std::_Ref_count_base *)a4[1];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  return a1;
}
